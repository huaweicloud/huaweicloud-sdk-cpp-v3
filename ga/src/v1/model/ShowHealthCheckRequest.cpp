

#include "huaweicloud/ga/v1/model/ShowHealthCheckRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ShowHealthCheckRequest::ShowHealthCheckRequest()
{
    healthCheckId_ = "";
    healthCheckIdIsSet_ = false;
}

ShowHealthCheckRequest::~ShowHealthCheckRequest() = default;

void ShowHealthCheckRequest::validate()
{
}

web::json::value ShowHealthCheckRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(healthCheckIdIsSet_) {
        val[utility::conversions::to_string_t("health_check_id")] = ModelBase::toJson(healthCheckId_);
    }

    return val;
}
bool ShowHealthCheckRequest::fromJson(const web::json::value& val)
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


std::string ShowHealthCheckRequest::getHealthCheckId() const
{
    return healthCheckId_;
}

void ShowHealthCheckRequest::setHealthCheckId(const std::string& value)
{
    healthCheckId_ = value;
    healthCheckIdIsSet_ = true;
}

bool ShowHealthCheckRequest::healthCheckIdIsSet() const
{
    return healthCheckIdIsSet_;
}

void ShowHealthCheckRequest::unsethealthCheckId()
{
    healthCheckIdIsSet_ = false;
}

}
}
}
}
}


