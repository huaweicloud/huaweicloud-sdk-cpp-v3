

#include "huaweicloud/identitycenter/v1/model/UpdateSsoConfigurationReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




UpdateSsoConfigurationReqBody::UpdateSsoConfigurationReqBody()
{
    ssoConfigurationIsSet_ = false;
    configurationType_ = "";
    configurationTypeIsSet_ = false;
}

UpdateSsoConfigurationReqBody::~UpdateSsoConfigurationReqBody() = default;

void UpdateSsoConfigurationReqBody::validate()
{
}

web::json::value UpdateSsoConfigurationReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ssoConfigurationIsSet_) {
        val[utility::conversions::to_string_t("sso_configuration")] = ModelBase::toJson(ssoConfiguration_);
    }
    if(configurationTypeIsSet_) {
        val[utility::conversions::to_string_t("configuration_type")] = ModelBase::toJson(configurationType_);
    }

    return val;
}
bool UpdateSsoConfigurationReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sso_configuration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sso_configuration"));
        if(!fieldValue.is_null())
        {
            SSOConfigurationDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSsoConfiguration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configuration_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationType(refVal);
        }
    }
    return ok;
}


SSOConfigurationDto UpdateSsoConfigurationReqBody::getSsoConfiguration() const
{
    return ssoConfiguration_;
}

void UpdateSsoConfigurationReqBody::setSsoConfiguration(const SSOConfigurationDto& value)
{
    ssoConfiguration_ = value;
    ssoConfigurationIsSet_ = true;
}

bool UpdateSsoConfigurationReqBody::ssoConfigurationIsSet() const
{
    return ssoConfigurationIsSet_;
}

void UpdateSsoConfigurationReqBody::unsetssoConfiguration()
{
    ssoConfigurationIsSet_ = false;
}

std::string UpdateSsoConfigurationReqBody::getConfigurationType() const
{
    return configurationType_;
}

void UpdateSsoConfigurationReqBody::setConfigurationType(const std::string& value)
{
    configurationType_ = value;
    configurationTypeIsSet_ = true;
}

bool UpdateSsoConfigurationReqBody::configurationTypeIsSet() const
{
    return configurationTypeIsSet_;
}

void UpdateSsoConfigurationReqBody::unsetconfigurationType()
{
    configurationTypeIsSet_ = false;
}

}
}
}
}
}


