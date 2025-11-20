

#include "huaweicloud/iotda/v5/model/UpdateDomainConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDomainConfigurationResponse::UpdateDomainConfigurationResponse()
{
    configurationId_ = "";
    configurationIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    accessProtocol_ = "";
    accessProtocolIsSet_ = false;
    serverCertificateId_ = "";
    serverCertificateIdIsSet_ = false;
    serverCertificateConfigIsSet_ = false;
}

UpdateDomainConfigurationResponse::~UpdateDomainConfigurationResponse() = default;

void UpdateDomainConfigurationResponse::validate()
{
}

web::json::value UpdateDomainConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configurationIdIsSet_) {
        val[utility::conversions::to_string_t("configuration_id")] = ModelBase::toJson(configurationId_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(accessProtocolIsSet_) {
        val[utility::conversions::to_string_t("access_protocol")] = ModelBase::toJson(accessProtocol_);
    }
    if(serverCertificateIdIsSet_) {
        val[utility::conversions::to_string_t("server_certificate_id")] = ModelBase::toJson(serverCertificateId_);
    }
    if(serverCertificateConfigIsSet_) {
        val[utility::conversions::to_string_t("server_certificate_config")] = ModelBase::toJson(serverCertificateConfig_);
    }

    return val;
}
bool UpdateDomainConfigurationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configuration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_certificate_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_certificate_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerCertificateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_certificate_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_certificate_config"));
        if(!fieldValue.is_null())
        {
            ServerCertificateConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerCertificateConfig(refVal);
        }
    }
    return ok;
}


std::string UpdateDomainConfigurationResponse::getConfigurationId() const
{
    return configurationId_;
}

void UpdateDomainConfigurationResponse::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool UpdateDomainConfigurationResponse::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void UpdateDomainConfigurationResponse::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

std::string UpdateDomainConfigurationResponse::getDomainName() const
{
    return domainName_;
}

void UpdateDomainConfigurationResponse::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool UpdateDomainConfigurationResponse::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void UpdateDomainConfigurationResponse::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string UpdateDomainConfigurationResponse::getAccessProtocol() const
{
    return accessProtocol_;
}

void UpdateDomainConfigurationResponse::setAccessProtocol(const std::string& value)
{
    accessProtocol_ = value;
    accessProtocolIsSet_ = true;
}

bool UpdateDomainConfigurationResponse::accessProtocolIsSet() const
{
    return accessProtocolIsSet_;
}

void UpdateDomainConfigurationResponse::unsetaccessProtocol()
{
    accessProtocolIsSet_ = false;
}

std::string UpdateDomainConfigurationResponse::getServerCertificateId() const
{
    return serverCertificateId_;
}

void UpdateDomainConfigurationResponse::setServerCertificateId(const std::string& value)
{
    serverCertificateId_ = value;
    serverCertificateIdIsSet_ = true;
}

bool UpdateDomainConfigurationResponse::serverCertificateIdIsSet() const
{
    return serverCertificateIdIsSet_;
}

void UpdateDomainConfigurationResponse::unsetserverCertificateId()
{
    serverCertificateIdIsSet_ = false;
}

ServerCertificateConfig UpdateDomainConfigurationResponse::getServerCertificateConfig() const
{
    return serverCertificateConfig_;
}

void UpdateDomainConfigurationResponse::setServerCertificateConfig(const ServerCertificateConfig& value)
{
    serverCertificateConfig_ = value;
    serverCertificateConfigIsSet_ = true;
}

bool UpdateDomainConfigurationResponse::serverCertificateConfigIsSet() const
{
    return serverCertificateConfigIsSet_;
}

void UpdateDomainConfigurationResponse::unsetserverCertificateConfig()
{
    serverCertificateConfigIsSet_ = false;
}

}
}
}
}
}


