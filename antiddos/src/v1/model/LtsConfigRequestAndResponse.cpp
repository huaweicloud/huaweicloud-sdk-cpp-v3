

#include "huaweicloud/antiddos/v1/model/LtsConfigRequestAndResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




LtsConfigRequestAndResponse::LtsConfigRequestAndResponse()
{
    enabled_ = false;
    enabledIsSet_ = false;
    ltsIdInfoIsSet_ = false;
}

LtsConfigRequestAndResponse::~LtsConfigRequestAndResponse() = default;

void LtsConfigRequestAndResponse::validate()
{
}

web::json::value LtsConfigRequestAndResponse::toJson() const
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
bool LtsConfigRequestAndResponse::fromJson(const web::json::value& val)
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
            LtsConfigRequestAndResponse_lts_id_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsIdInfo(refVal);
        }
    }
    return ok;
}


bool LtsConfigRequestAndResponse::isEnabled() const
{
    return enabled_;
}

void LtsConfigRequestAndResponse::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool LtsConfigRequestAndResponse::enabledIsSet() const
{
    return enabledIsSet_;
}

void LtsConfigRequestAndResponse::unsetenabled()
{
    enabledIsSet_ = false;
}

LtsConfigRequestAndResponse_lts_id_info LtsConfigRequestAndResponse::getLtsIdInfo() const
{
    return ltsIdInfo_;
}

void LtsConfigRequestAndResponse::setLtsIdInfo(const LtsConfigRequestAndResponse_lts_id_info& value)
{
    ltsIdInfo_ = value;
    ltsIdInfoIsSet_ = true;
}

bool LtsConfigRequestAndResponse::ltsIdInfoIsSet() const
{
    return ltsIdInfoIsSet_;
}

void LtsConfigRequestAndResponse::unsetltsIdInfo()
{
    ltsIdInfoIsSet_ = false;
}

}
}
}
}
}


