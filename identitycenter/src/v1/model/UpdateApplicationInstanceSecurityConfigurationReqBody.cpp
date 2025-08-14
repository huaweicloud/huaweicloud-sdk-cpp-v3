

#include "huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceSecurityConfigurationReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




UpdateApplicationInstanceSecurityConfigurationReqBody::UpdateApplicationInstanceSecurityConfigurationReqBody()
{
    securityConfigIsSet_ = false;
}

UpdateApplicationInstanceSecurityConfigurationReqBody::~UpdateApplicationInstanceSecurityConfigurationReqBody() = default;

void UpdateApplicationInstanceSecurityConfigurationReqBody::validate()
{
}

web::json::value UpdateApplicationInstanceSecurityConfigurationReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityConfigIsSet_) {
        val[utility::conversions::to_string_t("security_config")] = ModelBase::toJson(securityConfig_);
    }

    return val;
}
bool UpdateApplicationInstanceSecurityConfigurationReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_config"));
        if(!fieldValue.is_null())
        {
            SecurityConfigDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityConfig(refVal);
        }
    }
    return ok;
}


SecurityConfigDto UpdateApplicationInstanceSecurityConfigurationReqBody::getSecurityConfig() const
{
    return securityConfig_;
}

void UpdateApplicationInstanceSecurityConfigurationReqBody::setSecurityConfig(const SecurityConfigDto& value)
{
    securityConfig_ = value;
    securityConfigIsSet_ = true;
}

bool UpdateApplicationInstanceSecurityConfigurationReqBody::securityConfigIsSet() const
{
    return securityConfigIsSet_;
}

void UpdateApplicationInstanceSecurityConfigurationReqBody::unsetsecurityConfig()
{
    securityConfigIsSet_ = false;
}

}
}
}
}
}


