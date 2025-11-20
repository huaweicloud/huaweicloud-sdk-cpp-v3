

#include "huaweicloud/iotda/v5/model/ShowDomainConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowDomainConfigurationResponse::ShowDomainConfigurationResponse()
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

ShowDomainConfigurationResponse::~ShowDomainConfigurationResponse() = default;

void ShowDomainConfigurationResponse::validate()
{
}

web::json::value ShowDomainConfigurationResponse::toJson() const
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
bool ShowDomainConfigurationResponse::fromJson(const web::json::value& val)
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


std::string ShowDomainConfigurationResponse::getConfigurationId() const
{
    return configurationId_;
}

void ShowDomainConfigurationResponse::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool ShowDomainConfigurationResponse::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void ShowDomainConfigurationResponse::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

std::string ShowDomainConfigurationResponse::getDomainName() const
{
    return domainName_;
}

void ShowDomainConfigurationResponse::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ShowDomainConfigurationResponse::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ShowDomainConfigurationResponse::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ShowDomainConfigurationResponse::getAccessProtocol() const
{
    return accessProtocol_;
}

void ShowDomainConfigurationResponse::setAccessProtocol(const std::string& value)
{
    accessProtocol_ = value;
    accessProtocolIsSet_ = true;
}

bool ShowDomainConfigurationResponse::accessProtocolIsSet() const
{
    return accessProtocolIsSet_;
}

void ShowDomainConfigurationResponse::unsetaccessProtocol()
{
    accessProtocolIsSet_ = false;
}

std::string ShowDomainConfigurationResponse::getServerCertificateId() const
{
    return serverCertificateId_;
}

void ShowDomainConfigurationResponse::setServerCertificateId(const std::string& value)
{
    serverCertificateId_ = value;
    serverCertificateIdIsSet_ = true;
}

bool ShowDomainConfigurationResponse::serverCertificateIdIsSet() const
{
    return serverCertificateIdIsSet_;
}

void ShowDomainConfigurationResponse::unsetserverCertificateId()
{
    serverCertificateIdIsSet_ = false;
}

ServerCertificateConfig ShowDomainConfigurationResponse::getServerCertificateConfig() const
{
    return serverCertificateConfig_;
}

void ShowDomainConfigurationResponse::setServerCertificateConfig(const ServerCertificateConfig& value)
{
    serverCertificateConfig_ = value;
    serverCertificateConfigIsSet_ = true;
}

bool ShowDomainConfigurationResponse::serverCertificateConfigIsSet() const
{
    return serverCertificateConfigIsSet_;
}

void ShowDomainConfigurationResponse::unsetserverCertificateConfig()
{
    serverCertificateConfigIsSet_ = false;
}

}
}
}
}
}


