

#include "huaweicloud/ga/v1/model/CreateHealthCheckRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateHealthCheckRequestBody::CreateHealthCheckRequestBody()
{
    healthCheckIsSet_ = false;
}

CreateHealthCheckRequestBody::~CreateHealthCheckRequestBody() = default;

void CreateHealthCheckRequestBody::validate()
{
}

web::json::value CreateHealthCheckRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(healthCheckIsSet_) {
        val[utility::conversions::to_string_t("health_check")] = ModelBase::toJson(healthCheck_);
    }

    return val;
}
bool CreateHealthCheckRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("health_check"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("health_check"));
        if(!fieldValue.is_null())
        {
            CreateHealthCheckOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHealthCheck(refVal);
        }
    }
    return ok;
}


CreateHealthCheckOption CreateHealthCheckRequestBody::getHealthCheck() const
{
    return healthCheck_;
}

void CreateHealthCheckRequestBody::setHealthCheck(const CreateHealthCheckOption& value)
{
    healthCheck_ = value;
    healthCheckIsSet_ = true;
}

bool CreateHealthCheckRequestBody::healthCheckIsSet() const
{
    return healthCheckIsSet_;
}

void CreateHealthCheckRequestBody::unsethealthCheck()
{
    healthCheckIsSet_ = false;
}

}
}
}
}
}


