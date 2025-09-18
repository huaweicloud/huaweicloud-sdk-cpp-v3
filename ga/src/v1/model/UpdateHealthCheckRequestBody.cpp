

#include "huaweicloud/ga/v1/model/UpdateHealthCheckRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateHealthCheckRequestBody::UpdateHealthCheckRequestBody()
{
    healthCheckIsSet_ = false;
}

UpdateHealthCheckRequestBody::~UpdateHealthCheckRequestBody() = default;

void UpdateHealthCheckRequestBody::validate()
{
}

web::json::value UpdateHealthCheckRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(healthCheckIsSet_) {
        val[utility::conversions::to_string_t("health_check")] = ModelBase::toJson(healthCheck_);
    }

    return val;
}
bool UpdateHealthCheckRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("health_check"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("health_check"));
        if(!fieldValue.is_null())
        {
            UpdateHealthCheckOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHealthCheck(refVal);
        }
    }
    return ok;
}


UpdateHealthCheckOption UpdateHealthCheckRequestBody::getHealthCheck() const
{
    return healthCheck_;
}

void UpdateHealthCheckRequestBody::setHealthCheck(const UpdateHealthCheckOption& value)
{
    healthCheck_ = value;
    healthCheckIsSet_ = true;
}

bool UpdateHealthCheckRequestBody::healthCheckIsSet() const
{
    return healthCheckIsSet_;
}

void UpdateHealthCheckRequestBody::unsethealthCheck()
{
    healthCheckIsSet_ = false;
}

}
}
}
}
}


