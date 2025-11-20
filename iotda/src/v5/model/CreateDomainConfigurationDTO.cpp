

#include "huaweicloud/iotda/v5/model/CreateDomainConfigurationDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateDomainConfigurationDTO::CreateDomainConfigurationDTO()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    accessProtocol_ = "";
    accessProtocolIsSet_ = false;
    serverCertificateId_ = "";
    serverCertificateIdIsSet_ = false;
    serverCertificateConfigIsSet_ = false;
}

CreateDomainConfigurationDTO::~CreateDomainConfigurationDTO() = default;

void CreateDomainConfigurationDTO::validate()
{
}

web::json::value CreateDomainConfigurationDTO::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool CreateDomainConfigurationDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string CreateDomainConfigurationDTO::getDomainName() const
{
    return domainName_;
}

void CreateDomainConfigurationDTO::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool CreateDomainConfigurationDTO::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void CreateDomainConfigurationDTO::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string CreateDomainConfigurationDTO::getAccessProtocol() const
{
    return accessProtocol_;
}

void CreateDomainConfigurationDTO::setAccessProtocol(const std::string& value)
{
    accessProtocol_ = value;
    accessProtocolIsSet_ = true;
}

bool CreateDomainConfigurationDTO::accessProtocolIsSet() const
{
    return accessProtocolIsSet_;
}

void CreateDomainConfigurationDTO::unsetaccessProtocol()
{
    accessProtocolIsSet_ = false;
}

std::string CreateDomainConfigurationDTO::getServerCertificateId() const
{
    return serverCertificateId_;
}

void CreateDomainConfigurationDTO::setServerCertificateId(const std::string& value)
{
    serverCertificateId_ = value;
    serverCertificateIdIsSet_ = true;
}

bool CreateDomainConfigurationDTO::serverCertificateIdIsSet() const
{
    return serverCertificateIdIsSet_;
}

void CreateDomainConfigurationDTO::unsetserverCertificateId()
{
    serverCertificateIdIsSet_ = false;
}

ServerCertificateConfig CreateDomainConfigurationDTO::getServerCertificateConfig() const
{
    return serverCertificateConfig_;
}

void CreateDomainConfigurationDTO::setServerCertificateConfig(const ServerCertificateConfig& value)
{
    serverCertificateConfig_ = value;
    serverCertificateConfigIsSet_ = true;
}

bool CreateDomainConfigurationDTO::serverCertificateConfigIsSet() const
{
    return serverCertificateConfigIsSet_;
}

void CreateDomainConfigurationDTO::unsetserverCertificateConfig()
{
    serverCertificateConfigIsSet_ = false;
}

}
}
}
}
}


