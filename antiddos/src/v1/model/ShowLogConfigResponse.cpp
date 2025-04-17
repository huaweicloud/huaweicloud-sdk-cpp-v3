

#include "huaweicloud/antiddos/v1/model/ShowLogConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




ShowLogConfigResponse::ShowLogConfigResponse()
{
    enabled_ = false;
    enabledIsSet_ = false;
    ltsIdInfoIsSet_ = false;
}

ShowLogConfigResponse::~ShowLogConfigResponse() = default;

void ShowLogConfigResponse::validate()
{
}

web::json::value ShowLogConfigResponse::toJson() const
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
bool ShowLogConfigResponse::fromJson(const web::json::value& val)
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


bool ShowLogConfigResponse::isEnabled() const
{
    return enabled_;
}

void ShowLogConfigResponse::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool ShowLogConfigResponse::enabledIsSet() const
{
    return enabledIsSet_;
}

void ShowLogConfigResponse::unsetenabled()
{
    enabledIsSet_ = false;
}

LtsConfigRequestAndResponse_lts_id_info ShowLogConfigResponse::getLtsIdInfo() const
{
    return ltsIdInfo_;
}

void ShowLogConfigResponse::setLtsIdInfo(const LtsConfigRequestAndResponse_lts_id_info& value)
{
    ltsIdInfo_ = value;
    ltsIdInfoIsSet_ = true;
}

bool ShowLogConfigResponse::ltsIdInfoIsSet() const
{
    return ltsIdInfoIsSet_;
}

void ShowLogConfigResponse::unsetltsIdInfo()
{
    ltsIdInfoIsSet_ = false;
}

}
}
}
}
}


