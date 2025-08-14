

#include "huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceServiceProviderConfigurationReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




UpdateApplicationInstanceServiceProviderConfigurationReqBody::UpdateApplicationInstanceServiceProviderConfigurationReqBody()
{
    serviceProviderConfigIsSet_ = false;
}

UpdateApplicationInstanceServiceProviderConfigurationReqBody::~UpdateApplicationInstanceServiceProviderConfigurationReqBody() = default;

void UpdateApplicationInstanceServiceProviderConfigurationReqBody::validate()
{
}

web::json::value UpdateApplicationInstanceServiceProviderConfigurationReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceProviderConfigIsSet_) {
        val[utility::conversions::to_string_t("service_provider_config")] = ModelBase::toJson(serviceProviderConfig_);
    }

    return val;
}
bool UpdateApplicationInstanceServiceProviderConfigurationReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_provider_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_provider_config"));
        if(!fieldValue.is_null())
        {
            ServiceProviderConfigDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceProviderConfig(refVal);
        }
    }
    return ok;
}


ServiceProviderConfigDto UpdateApplicationInstanceServiceProviderConfigurationReqBody::getServiceProviderConfig() const
{
    return serviceProviderConfig_;
}

void UpdateApplicationInstanceServiceProviderConfigurationReqBody::setServiceProviderConfig(const ServiceProviderConfigDto& value)
{
    serviceProviderConfig_ = value;
    serviceProviderConfigIsSet_ = true;
}

bool UpdateApplicationInstanceServiceProviderConfigurationReqBody::serviceProviderConfigIsSet() const
{
    return serviceProviderConfigIsSet_;
}

void UpdateApplicationInstanceServiceProviderConfigurationReqBody::unsetserviceProviderConfig()
{
    serviceProviderConfigIsSet_ = false;
}

}
}
}
}
}


