

#include "huaweicloud/aad/v1/model/ShowLtsConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ShowLtsConfigResponse::ShowLtsConfigResponse()
{
    enabled_ = false;
    enabledIsSet_ = false;
    ltsIdInfoIsSet_ = false;
}

ShowLtsConfigResponse::~ShowLtsConfigResponse() = default;

void ShowLtsConfigResponse::validate()
{
}

web::json::value ShowLtsConfigResponse::toJson() const
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
bool ShowLtsConfigResponse::fromJson(const web::json::value& val)
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


bool ShowLtsConfigResponse::isEnabled() const
{
    return enabled_;
}

void ShowLtsConfigResponse::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool ShowLtsConfigResponse::enabledIsSet() const
{
    return enabledIsSet_;
}

void ShowLtsConfigResponse::unsetenabled()
{
    enabledIsSet_ = false;
}

UpdateLtsConfigRequestBody_lts_id_info ShowLtsConfigResponse::getLtsIdInfo() const
{
    return ltsIdInfo_;
}

void ShowLtsConfigResponse::setLtsIdInfo(const UpdateLtsConfigRequestBody_lts_id_info& value)
{
    ltsIdInfo_ = value;
    ltsIdInfoIsSet_ = true;
}

bool ShowLtsConfigResponse::ltsIdInfoIsSet() const
{
    return ltsIdInfoIsSet_;
}

void ShowLtsConfigResponse::unsetltsIdInfo()
{
    ltsIdInfoIsSet_ = false;
}

}
}
}
}
}


