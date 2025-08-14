

#include "huaweicloud/identitycenter/v1/model/ApplicationTemplateDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ApplicationTemplateDto::ApplicationTemplateDto()
{
    applicationIsSet_ = false;
    responseConfigIsSet_ = false;
    responseSchemaConfigIsSet_ = false;
    ssoProtocol_ = "";
    ssoProtocolIsSet_ = false;
    securityConfigIsSet_ = false;
    serviceProviderConfigIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    templateVersion_ = "";
    templateVersionIsSet_ = false;
}

ApplicationTemplateDto::~ApplicationTemplateDto() = default;

void ApplicationTemplateDto::validate()
{
}

web::json::value ApplicationTemplateDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationIsSet_) {
        val[utility::conversions::to_string_t("application")] = ModelBase::toJson(application_);
    }
    if(responseConfigIsSet_) {
        val[utility::conversions::to_string_t("response_config")] = ModelBase::toJson(responseConfig_);
    }
    if(responseSchemaConfigIsSet_) {
        val[utility::conversions::to_string_t("response_schema_config")] = ModelBase::toJson(responseSchemaConfig_);
    }
    if(ssoProtocolIsSet_) {
        val[utility::conversions::to_string_t("sso_protocol")] = ModelBase::toJson(ssoProtocol_);
    }
    if(securityConfigIsSet_) {
        val[utility::conversions::to_string_t("security_config")] = ModelBase::toJson(securityConfig_);
    }
    if(serviceProviderConfigIsSet_) {
        val[utility::conversions::to_string_t("service_provider_config")] = ModelBase::toJson(serviceProviderConfig_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(templateVersionIsSet_) {
        val[utility::conversions::to_string_t("template_version")] = ModelBase::toJson(templateVersion_);
    }

    return val;
}
bool ApplicationTemplateDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application"));
        if(!fieldValue.is_null())
        {
            ApplicationTemplateDisplayDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplication(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("response_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response_config"));
        if(!fieldValue.is_null())
        {
            ResponseConfigDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponseConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("response_schema_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response_schema_config"));
        if(!fieldValue.is_null())
        {
            ResponseSchemaConfigDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponseSchemaConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sso_protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sso_protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSsoProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_config"));
        if(!fieldValue.is_null())
        {
            SecurityConfigDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_provider_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_provider_config"));
        if(!fieldValue.is_null())
        {
            ServiceProviderConfigDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceProviderConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateVersion(refVal);
        }
    }
    return ok;
}


ApplicationTemplateDisplayDto ApplicationTemplateDto::getApplication() const
{
    return application_;
}

void ApplicationTemplateDto::setApplication(const ApplicationTemplateDisplayDto& value)
{
    application_ = value;
    applicationIsSet_ = true;
}

bool ApplicationTemplateDto::applicationIsSet() const
{
    return applicationIsSet_;
}

void ApplicationTemplateDto::unsetapplication()
{
    applicationIsSet_ = false;
}

ResponseConfigDto ApplicationTemplateDto::getResponseConfig() const
{
    return responseConfig_;
}

void ApplicationTemplateDto::setResponseConfig(const ResponseConfigDto& value)
{
    responseConfig_ = value;
    responseConfigIsSet_ = true;
}

bool ApplicationTemplateDto::responseConfigIsSet() const
{
    return responseConfigIsSet_;
}

void ApplicationTemplateDto::unsetresponseConfig()
{
    responseConfigIsSet_ = false;
}

ResponseSchemaConfigDto ApplicationTemplateDto::getResponseSchemaConfig() const
{
    return responseSchemaConfig_;
}

void ApplicationTemplateDto::setResponseSchemaConfig(const ResponseSchemaConfigDto& value)
{
    responseSchemaConfig_ = value;
    responseSchemaConfigIsSet_ = true;
}

bool ApplicationTemplateDto::responseSchemaConfigIsSet() const
{
    return responseSchemaConfigIsSet_;
}

void ApplicationTemplateDto::unsetresponseSchemaConfig()
{
    responseSchemaConfigIsSet_ = false;
}

std::string ApplicationTemplateDto::getSsoProtocol() const
{
    return ssoProtocol_;
}

void ApplicationTemplateDto::setSsoProtocol(const std::string& value)
{
    ssoProtocol_ = value;
    ssoProtocolIsSet_ = true;
}

bool ApplicationTemplateDto::ssoProtocolIsSet() const
{
    return ssoProtocolIsSet_;
}

void ApplicationTemplateDto::unsetssoProtocol()
{
    ssoProtocolIsSet_ = false;
}

SecurityConfigDto ApplicationTemplateDto::getSecurityConfig() const
{
    return securityConfig_;
}

void ApplicationTemplateDto::setSecurityConfig(const SecurityConfigDto& value)
{
    securityConfig_ = value;
    securityConfigIsSet_ = true;
}

bool ApplicationTemplateDto::securityConfigIsSet() const
{
    return securityConfigIsSet_;
}

void ApplicationTemplateDto::unsetsecurityConfig()
{
    securityConfigIsSet_ = false;
}

ServiceProviderConfigDto ApplicationTemplateDto::getServiceProviderConfig() const
{
    return serviceProviderConfig_;
}

void ApplicationTemplateDto::setServiceProviderConfig(const ServiceProviderConfigDto& value)
{
    serviceProviderConfig_ = value;
    serviceProviderConfigIsSet_ = true;
}

bool ApplicationTemplateDto::serviceProviderConfigIsSet() const
{
    return serviceProviderConfigIsSet_;
}

void ApplicationTemplateDto::unsetserviceProviderConfig()
{
    serviceProviderConfigIsSet_ = false;
}

std::string ApplicationTemplateDto::getTemplateId() const
{
    return templateId_;
}

void ApplicationTemplateDto::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool ApplicationTemplateDto::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void ApplicationTemplateDto::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string ApplicationTemplateDto::getTemplateVersion() const
{
    return templateVersion_;
}

void ApplicationTemplateDto::setTemplateVersion(const std::string& value)
{
    templateVersion_ = value;
    templateVersionIsSet_ = true;
}

bool ApplicationTemplateDto::templateVersionIsSet() const
{
    return templateVersionIsSet_;
}

void ApplicationTemplateDto::unsettemplateVersion()
{
    templateVersionIsSet_ = false;
}

}
}
}
}
}


