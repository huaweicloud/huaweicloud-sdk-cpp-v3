

#include "huaweicloud/cfw/v1/model/UpdateDnsServersRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateDnsServersRequestBody::UpdateDnsServersRequestBody()
{
    dnsServerIsSet_ = false;
    healthCheckDomainName_ = "";
    healthCheckDomainNameIsSet_ = false;
}

UpdateDnsServersRequestBody::~UpdateDnsServersRequestBody() = default;

void UpdateDnsServersRequestBody::validate()
{
}

web::json::value UpdateDnsServersRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dnsServerIsSet_) {
        val[utility::conversions::to_string_t("dns_server")] = ModelBase::toJson(dnsServer_);
    }
    if(healthCheckDomainNameIsSet_) {
        val[utility::conversions::to_string_t("health_check_domain_name")] = ModelBase::toJson(healthCheckDomainName_);
    }

    return val;
}
bool UpdateDnsServersRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dns_server"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dns_server"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdateDnsServersRequestBody_dns_server> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDnsServer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("health_check_domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("health_check_domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHealthCheckDomainName(refVal);
        }
    }
    return ok;
}


std::vector<UpdateDnsServersRequestBody_dns_server>& UpdateDnsServersRequestBody::getDnsServer()
{
    return dnsServer_;
}

void UpdateDnsServersRequestBody::setDnsServer(const std::vector<UpdateDnsServersRequestBody_dns_server>& value)
{
    dnsServer_ = value;
    dnsServerIsSet_ = true;
}

bool UpdateDnsServersRequestBody::dnsServerIsSet() const
{
    return dnsServerIsSet_;
}

void UpdateDnsServersRequestBody::unsetdnsServer()
{
    dnsServerIsSet_ = false;
}

std::string UpdateDnsServersRequestBody::getHealthCheckDomainName() const
{
    return healthCheckDomainName_;
}

void UpdateDnsServersRequestBody::setHealthCheckDomainName(const std::string& value)
{
    healthCheckDomainName_ = value;
    healthCheckDomainNameIsSet_ = true;
}

bool UpdateDnsServersRequestBody::healthCheckDomainNameIsSet() const
{
    return healthCheckDomainNameIsSet_;
}

void UpdateDnsServersRequestBody::unsethealthCheckDomainName()
{
    healthCheckDomainNameIsSet_ = false;
}

}
}
}
}
}


