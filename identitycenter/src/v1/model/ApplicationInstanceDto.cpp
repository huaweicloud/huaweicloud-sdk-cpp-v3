

#include "huaweicloud/identitycenter/v1/model/ApplicationInstanceDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ApplicationInstanceDto::ApplicationInstanceDto()
{
    activeCertificateIsSet_ = false;
    displayIsSet_ = false;
    identityProviderConfigIsSet_ = false;
    applicationInstanceId_ = "";
    applicationInstanceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    visible_ = false;
    visibleIsSet_ = false;
    responseConfigIsSet_ = false;
    responseSchemaConfigIsSet_ = false;
    securityConfigIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    templateIsSet_ = false;
    serviceProviderConfigIsSet_ = false;
    clientId_ = "";
    clientIdIsSet_ = false;
    endUserVisible_ = false;
    endUserVisibleIsSet_ = false;
    managedAccount_ = "";
    managedAccountIsSet_ = false;
}

ApplicationInstanceDto::~ApplicationInstanceDto() = default;

void ApplicationInstanceDto::validate()
{
}

web::json::value ApplicationInstanceDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(activeCertificateIsSet_) {
        val[utility::conversions::to_string_t("active_certificate")] = ModelBase::toJson(activeCertificate_);
    }
    if(displayIsSet_) {
        val[utility::conversions::to_string_t("display")] = ModelBase::toJson(display_);
    }
    if(identityProviderConfigIsSet_) {
        val[utility::conversions::to_string_t("identity_provider_config")] = ModelBase::toJson(identityProviderConfig_);
    }
    if(applicationInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("application_instance_id")] = ModelBase::toJson(applicationInstanceId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(visibleIsSet_) {
        val[utility::conversions::to_string_t("visible")] = ModelBase::toJson(visible_);
    }
    if(responseConfigIsSet_) {
        val[utility::conversions::to_string_t("response_config")] = ModelBase::toJson(responseConfig_);
    }
    if(responseSchemaConfigIsSet_) {
        val[utility::conversions::to_string_t("response_schema_config")] = ModelBase::toJson(responseSchemaConfig_);
    }
    if(securityConfigIsSet_) {
        val[utility::conversions::to_string_t("security_config")] = ModelBase::toJson(securityConfig_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(templateIsSet_) {
        val[utility::conversions::to_string_t("template")] = ModelBase::toJson(template_);
    }
    if(serviceProviderConfigIsSet_) {
        val[utility::conversions::to_string_t("service_provider_config")] = ModelBase::toJson(serviceProviderConfig_);
    }
    if(clientIdIsSet_) {
        val[utility::conversions::to_string_t("client_id")] = ModelBase::toJson(clientId_);
    }
    if(endUserVisibleIsSet_) {
        val[utility::conversions::to_string_t("end_user_visible")] = ModelBase::toJson(endUserVisible_);
    }
    if(managedAccountIsSet_) {
        val[utility::conversions::to_string_t("managed_account")] = ModelBase::toJson(managedAccount_);
    }

    return val;
}
bool ApplicationInstanceDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("active_certificate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_certificate"));
        if(!fieldValue.is_null())
        {
            CertificateDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveCertificate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display"));
        if(!fieldValue.is_null())
        {
            DisplayDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identity_provider_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_provider_config"));
        if(!fieldValue.is_null())
        {
            IdentityProviderConfigDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityProviderConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("visible"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visible"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisible(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("security_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_config"));
        if(!fieldValue.is_null())
        {
            SecurityConfigDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template"));
        if(!fieldValue.is_null())
        {
            ApplicationTemplateDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("client_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_user_visible"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_user_visible"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndUserVisible(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("managed_account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("managed_account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagedAccount(refVal);
        }
    }
    return ok;
}


CertificateDto ApplicationInstanceDto::getActiveCertificate() const
{
    return activeCertificate_;
}

void ApplicationInstanceDto::setActiveCertificate(const CertificateDto& value)
{
    activeCertificate_ = value;
    activeCertificateIsSet_ = true;
}

bool ApplicationInstanceDto::activeCertificateIsSet() const
{
    return activeCertificateIsSet_;
}

void ApplicationInstanceDto::unsetactiveCertificate()
{
    activeCertificateIsSet_ = false;
}

DisplayDto ApplicationInstanceDto::getDisplay() const
{
    return display_;
}

void ApplicationInstanceDto::setDisplay(const DisplayDto& value)
{
    display_ = value;
    displayIsSet_ = true;
}

bool ApplicationInstanceDto::displayIsSet() const
{
    return displayIsSet_;
}

void ApplicationInstanceDto::unsetdisplay()
{
    displayIsSet_ = false;
}

IdentityProviderConfigDto ApplicationInstanceDto::getIdentityProviderConfig() const
{
    return identityProviderConfig_;
}

void ApplicationInstanceDto::setIdentityProviderConfig(const IdentityProviderConfigDto& value)
{
    identityProviderConfig_ = value;
    identityProviderConfigIsSet_ = true;
}

bool ApplicationInstanceDto::identityProviderConfigIsSet() const
{
    return identityProviderConfigIsSet_;
}

void ApplicationInstanceDto::unsetidentityProviderConfig()
{
    identityProviderConfigIsSet_ = false;
}

std::string ApplicationInstanceDto::getApplicationInstanceId() const
{
    return applicationInstanceId_;
}

void ApplicationInstanceDto::setApplicationInstanceId(const std::string& value)
{
    applicationInstanceId_ = value;
    applicationInstanceIdIsSet_ = true;
}

bool ApplicationInstanceDto::applicationInstanceIdIsSet() const
{
    return applicationInstanceIdIsSet_;
}

void ApplicationInstanceDto::unsetapplicationInstanceId()
{
    applicationInstanceIdIsSet_ = false;
}

std::string ApplicationInstanceDto::getName() const
{
    return name_;
}

void ApplicationInstanceDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ApplicationInstanceDto::nameIsSet() const
{
    return nameIsSet_;
}

void ApplicationInstanceDto::unsetname()
{
    nameIsSet_ = false;
}

bool ApplicationInstanceDto::isVisible() const
{
    return visible_;
}

void ApplicationInstanceDto::setVisible(bool value)
{
    visible_ = value;
    visibleIsSet_ = true;
}

bool ApplicationInstanceDto::visibleIsSet() const
{
    return visibleIsSet_;
}

void ApplicationInstanceDto::unsetvisible()
{
    visibleIsSet_ = false;
}

ResponseConfigDto ApplicationInstanceDto::getResponseConfig() const
{
    return responseConfig_;
}

void ApplicationInstanceDto::setResponseConfig(const ResponseConfigDto& value)
{
    responseConfig_ = value;
    responseConfigIsSet_ = true;
}

bool ApplicationInstanceDto::responseConfigIsSet() const
{
    return responseConfigIsSet_;
}

void ApplicationInstanceDto::unsetresponseConfig()
{
    responseConfigIsSet_ = false;
}

ResponseSchemaConfigDto ApplicationInstanceDto::getResponseSchemaConfig() const
{
    return responseSchemaConfig_;
}

void ApplicationInstanceDto::setResponseSchemaConfig(const ResponseSchemaConfigDto& value)
{
    responseSchemaConfig_ = value;
    responseSchemaConfigIsSet_ = true;
}

bool ApplicationInstanceDto::responseSchemaConfigIsSet() const
{
    return responseSchemaConfigIsSet_;
}

void ApplicationInstanceDto::unsetresponseSchemaConfig()
{
    responseSchemaConfigIsSet_ = false;
}

SecurityConfigDto ApplicationInstanceDto::getSecurityConfig() const
{
    return securityConfig_;
}

void ApplicationInstanceDto::setSecurityConfig(const SecurityConfigDto& value)
{
    securityConfig_ = value;
    securityConfigIsSet_ = true;
}

bool ApplicationInstanceDto::securityConfigIsSet() const
{
    return securityConfigIsSet_;
}

void ApplicationInstanceDto::unsetsecurityConfig()
{
    securityConfigIsSet_ = false;
}

std::string ApplicationInstanceDto::getStatus() const
{
    return status_;
}

void ApplicationInstanceDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ApplicationInstanceDto::statusIsSet() const
{
    return statusIsSet_;
}

void ApplicationInstanceDto::unsetstatus()
{
    statusIsSet_ = false;
}

ApplicationTemplateDto ApplicationInstanceDto::getTemplate() const
{
    return template_;
}

void ApplicationInstanceDto::setTemplate(const ApplicationTemplateDto& value)
{
    template_ = value;
    templateIsSet_ = true;
}

bool ApplicationInstanceDto::templateIsSet() const
{
    return templateIsSet_;
}

void ApplicationInstanceDto::unsettemplate()
{
    templateIsSet_ = false;
}

ServiceProviderConfigDto ApplicationInstanceDto::getServiceProviderConfig() const
{
    return serviceProviderConfig_;
}

void ApplicationInstanceDto::setServiceProviderConfig(const ServiceProviderConfigDto& value)
{
    serviceProviderConfig_ = value;
    serviceProviderConfigIsSet_ = true;
}

bool ApplicationInstanceDto::serviceProviderConfigIsSet() const
{
    return serviceProviderConfigIsSet_;
}

void ApplicationInstanceDto::unsetserviceProviderConfig()
{
    serviceProviderConfigIsSet_ = false;
}

std::string ApplicationInstanceDto::getClientId() const
{
    return clientId_;
}

void ApplicationInstanceDto::setClientId(const std::string& value)
{
    clientId_ = value;
    clientIdIsSet_ = true;
}

bool ApplicationInstanceDto::clientIdIsSet() const
{
    return clientIdIsSet_;
}

void ApplicationInstanceDto::unsetclientId()
{
    clientIdIsSet_ = false;
}

bool ApplicationInstanceDto::isEndUserVisible() const
{
    return endUserVisible_;
}

void ApplicationInstanceDto::setEndUserVisible(bool value)
{
    endUserVisible_ = value;
    endUserVisibleIsSet_ = true;
}

bool ApplicationInstanceDto::endUserVisibleIsSet() const
{
    return endUserVisibleIsSet_;
}

void ApplicationInstanceDto::unsetendUserVisible()
{
    endUserVisibleIsSet_ = false;
}

std::string ApplicationInstanceDto::getManagedAccount() const
{
    return managedAccount_;
}

void ApplicationInstanceDto::setManagedAccount(const std::string& value)
{
    managedAccount_ = value;
    managedAccountIsSet_ = true;
}

bool ApplicationInstanceDto::managedAccountIsSet() const
{
    return managedAccountIsSet_;
}

void ApplicationInstanceDto::unsetmanagedAccount()
{
    managedAccountIsSet_ = false;
}

}
}
}
}
}


