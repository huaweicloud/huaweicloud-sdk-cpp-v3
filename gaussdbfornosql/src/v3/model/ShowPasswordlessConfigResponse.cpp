

#include "huaweicloud/gaussdbfornosql/v3/model/ShowPasswordlessConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowPasswordlessConfigResponse::ShowPasswordlessConfigResponse()
{
    configIpsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ShowPasswordlessConfigResponse::~ShowPasswordlessConfigResponse() = default;

void ShowPasswordlessConfigResponse::validate()
{
}

web::json::value ShowPasswordlessConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configIpsIsSet_) {
        val[utility::conversions::to_string_t("config_ips")] = ModelBase::toJson(configIps_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ShowPasswordlessConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("config_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ShowPasswordlessConfigResponse::getConfigIps()
{
    return configIps_;
}

void ShowPasswordlessConfigResponse::setConfigIps(const std::vector<std::string>& value)
{
    configIps_ = value;
    configIpsIsSet_ = true;
}

bool ShowPasswordlessConfigResponse::configIpsIsSet() const
{
    return configIpsIsSet_;
}

void ShowPasswordlessConfigResponse::unsetconfigIps()
{
    configIpsIsSet_ = false;
}

int32_t ShowPasswordlessConfigResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowPasswordlessConfigResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowPasswordlessConfigResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowPasswordlessConfigResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


