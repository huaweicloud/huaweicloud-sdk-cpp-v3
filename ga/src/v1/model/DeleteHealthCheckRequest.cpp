

#include "huaweicloud/ga/v1/model/DeleteHealthCheckRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




DeleteHealthCheckRequest::DeleteHealthCheckRequest()
{
    healthCheckId_ = "";
    healthCheckIdIsSet_ = false;
}

DeleteHealthCheckRequest::~DeleteHealthCheckRequest() = default;

void DeleteHealthCheckRequest::validate()
{
}

web::json::value DeleteHealthCheckRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(healthCheckIdIsSet_) {
        val[utility::conversions::to_string_t("health_check_id")] = ModelBase::toJson(healthCheckId_);
    }

    return val;
}
bool DeleteHealthCheckRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("health_check_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("health_check_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHealthCheckId(refVal);
        }
    }
    return ok;
}


std::string DeleteHealthCheckRequest::getHealthCheckId() const
{
    return healthCheckId_;
}

void DeleteHealthCheckRequest::setHealthCheckId(const std::string& value)
{
    healthCheckId_ = value;
    healthCheckIdIsSet_ = true;
}

bool DeleteHealthCheckRequest::healthCheckIdIsSet() const
{
    return healthCheckIdIsSet_;
}

void DeleteHealthCheckRequest::unsethealthCheckId()
{
    healthCheckIdIsSet_ = false;
}

}
}
}
}
}


