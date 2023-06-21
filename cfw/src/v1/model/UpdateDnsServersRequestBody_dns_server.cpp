

#include "huaweicloud/cfw/v1/model/UpdateDnsServersRequestBody_dns_server.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateDnsServersRequestBody_dns_server::UpdateDnsServersRequestBody_dns_server()
{
    serverIp_ = "";
    serverIpIsSet_ = false;
    isCustomized_ = 0;
    isCustomizedIsSet_ = false;
    isApplied_ = 0;
    isAppliedIsSet_ = false;
}

UpdateDnsServersRequestBody_dns_server::~UpdateDnsServersRequestBody_dns_server() = default;

void UpdateDnsServersRequestBody_dns_server::validate()
{
}

web::json::value UpdateDnsServersRequestBody_dns_server::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIpIsSet_) {
        val[utility::conversions::to_string_t("server_ip")] = ModelBase::toJson(serverIp_);
    }
    if(isCustomizedIsSet_) {
        val[utility::conversions::to_string_t("is_customized")] = ModelBase::toJson(isCustomized_);
    }
    if(isAppliedIsSet_) {
        val[utility::conversions::to_string_t("is_applied")] = ModelBase::toJson(isApplied_);
    }

    return val;
}

bool UpdateDnsServersRequestBody_dns_server::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_customized"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_customized"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCustomized(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_applied"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_applied"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsApplied(refVal);
        }
    }
    return ok;
}


std::string UpdateDnsServersRequestBody_dns_server::getServerIp() const
{
    return serverIp_;
}

void UpdateDnsServersRequestBody_dns_server::setServerIp(const std::string& value)
{
    serverIp_ = value;
    serverIpIsSet_ = true;
}

bool UpdateDnsServersRequestBody_dns_server::serverIpIsSet() const
{
    return serverIpIsSet_;
}

void UpdateDnsServersRequestBody_dns_server::unsetserverIp()
{
    serverIpIsSet_ = false;
}

int32_t UpdateDnsServersRequestBody_dns_server::getIsCustomized() const
{
    return isCustomized_;
}

void UpdateDnsServersRequestBody_dns_server::setIsCustomized(int32_t value)
{
    isCustomized_ = value;
    isCustomizedIsSet_ = true;
}

bool UpdateDnsServersRequestBody_dns_server::isCustomizedIsSet() const
{
    return isCustomizedIsSet_;
}

void UpdateDnsServersRequestBody_dns_server::unsetisCustomized()
{
    isCustomizedIsSet_ = false;
}

int32_t UpdateDnsServersRequestBody_dns_server::getIsApplied() const
{
    return isApplied_;
}

void UpdateDnsServersRequestBody_dns_server::setIsApplied(int32_t value)
{
    isApplied_ = value;
    isAppliedIsSet_ = true;
}

bool UpdateDnsServersRequestBody_dns_server::isAppliedIsSet() const
{
    return isAppliedIsSet_;
}

void UpdateDnsServersRequestBody_dns_server::unsetisApplied()
{
    isAppliedIsSet_ = false;
}

}
}
}
}
}


