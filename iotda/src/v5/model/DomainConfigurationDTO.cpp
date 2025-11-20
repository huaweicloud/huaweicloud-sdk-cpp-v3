

#include "huaweicloud/iotda/v5/model/DomainConfigurationDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DomainConfigurationDTO::DomainConfigurationDTO()
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

DomainConfigurationDTO::~DomainConfigurationDTO() = default;

void DomainConfigurationDTO::validate()
{
}

web::json::value DomainConfigurationDTO::toJson() const
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
bool DomainConfigurationDTO::fromJson(const web::json::value& val)
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


std::string DomainConfigurationDTO::getConfigurationId() const
{
    return configurationId_;
}

void DomainConfigurationDTO::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool DomainConfigurationDTO::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void DomainConfigurationDTO::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

std::string DomainConfigurationDTO::getDomainName() const
{
    return domainName_;
}

void DomainConfigurationDTO::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool DomainConfigurationDTO::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void DomainConfigurationDTO::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string DomainConfigurationDTO::getAccessProtocol() const
{
    return accessProtocol_;
}

void DomainConfigurationDTO::setAccessProtocol(const std::string& value)
{
    accessProtocol_ = value;
    accessProtocolIsSet_ = true;
}

bool DomainConfigurationDTO::accessProtocolIsSet() const
{
    return accessProtocolIsSet_;
}

void DomainConfigurationDTO::unsetaccessProtocol()
{
    accessProtocolIsSet_ = false;
}

std::string DomainConfigurationDTO::getServerCertificateId() const
{
    return serverCertificateId_;
}

void DomainConfigurationDTO::setServerCertificateId(const std::string& value)
{
    serverCertificateId_ = value;
    serverCertificateIdIsSet_ = true;
}

bool DomainConfigurationDTO::serverCertificateIdIsSet() const
{
    return serverCertificateIdIsSet_;
}

void DomainConfigurationDTO::unsetserverCertificateId()
{
    serverCertificateIdIsSet_ = false;
}

ServerCertificateConfig DomainConfigurationDTO::getServerCertificateConfig() const
{
    return serverCertificateConfig_;
}

void DomainConfigurationDTO::setServerCertificateConfig(const ServerCertificateConfig& value)
{
    serverCertificateConfig_ = value;
    serverCertificateConfigIsSet_ = true;
}

bool DomainConfigurationDTO::serverCertificateConfigIsSet() const
{
    return serverCertificateConfigIsSet_;
}

void DomainConfigurationDTO::unsetserverCertificateConfig()
{
    serverCertificateConfigIsSet_ = false;
}

}
}
}
}
}


