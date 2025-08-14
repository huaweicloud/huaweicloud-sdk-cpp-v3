

#include "huaweicloud/identitycenter/v1/model/GetSsoConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




GetSsoConfigurationResponse::GetSsoConfigurationResponse()
{
    ssoConfigurationIsSet_ = false;
}

GetSsoConfigurationResponse::~GetSsoConfigurationResponse() = default;

void GetSsoConfigurationResponse::validate()
{
}

web::json::value GetSsoConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ssoConfigurationIsSet_) {
        val[utility::conversions::to_string_t("sso_configuration")] = ModelBase::toJson(ssoConfiguration_);
    }

    return val;
}
bool GetSsoConfigurationResponse::fromJson(const web::json::value& val)
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
    return ok;
}


SSOConfigurationDto GetSsoConfigurationResponse::getSsoConfiguration() const
{
    return ssoConfiguration_;
}

void GetSsoConfigurationResponse::setSsoConfiguration(const SSOConfigurationDto& value)
{
    ssoConfiguration_ = value;
    ssoConfigurationIsSet_ = true;
}

bool GetSsoConfigurationResponse::ssoConfigurationIsSet() const
{
    return ssoConfigurationIsSet_;
}

void GetSsoConfigurationResponse::unsetssoConfiguration()
{
    ssoConfigurationIsSet_ = false;
}

}
}
}
}
}


