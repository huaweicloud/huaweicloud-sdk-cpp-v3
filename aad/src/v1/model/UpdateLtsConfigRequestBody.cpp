

#include "huaweicloud/aad/v1/model/UpdateLtsConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




UpdateLtsConfigRequestBody::UpdateLtsConfigRequestBody()
{
    enabled_ = false;
    enabledIsSet_ = false;
    ltsIdInfoIsSet_ = false;
}

UpdateLtsConfigRequestBody::~UpdateLtsConfigRequestBody() = default;

void UpdateLtsConfigRequestBody::validate()
{
}

web::json::value UpdateLtsConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(ltsIdInfoIsSet_) {
        val[utility::conversions::to_string_t("lts_id_info")] = ModelBase::toJson(ltsIdInfo_);
    }

    return val;
}
bool UpdateLtsConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_id_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_id_info"));
        if(!fieldValue.is_null())
        {
            UpdateLtsConfigRequestBody_lts_id_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsIdInfo(refVal);
        }
    }
    return ok;
}


bool UpdateLtsConfigRequestBody::isEnabled() const
{
    return enabled_;
}

void UpdateLtsConfigRequestBody::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool UpdateLtsConfigRequestBody::enabledIsSet() const
{
    return enabledIsSet_;
}

void UpdateLtsConfigRequestBody::unsetenabled()
{
    enabledIsSet_ = false;
}

UpdateLtsConfigRequestBody_lts_id_info UpdateLtsConfigRequestBody::getLtsIdInfo() const
{
    return ltsIdInfo_;
}

void UpdateLtsConfigRequestBody::setLtsIdInfo(const UpdateLtsConfigRequestBody_lts_id_info& value)
{
    ltsIdInfo_ = value;
    ltsIdInfoIsSet_ = true;
}

bool UpdateLtsConfigRequestBody::ltsIdInfoIsSet() const
{
    return ltsIdInfoIsSet_;
}

void UpdateLtsConfigRequestBody::unsetltsIdInfo()
{
    ltsIdInfoIsSet_ = false;
}

}
}
}
}
}


