

#include "huaweicloud/ga/v1/model/UpdateHealthCheckRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateHealthCheckRequest::UpdateHealthCheckRequest()
{
    healthCheckId_ = "";
    healthCheckIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateHealthCheckRequest::~UpdateHealthCheckRequest() = default;

void UpdateHealthCheckRequest::validate()
{
}

web::json::value UpdateHealthCheckRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(healthCheckIdIsSet_) {
        val[utility::conversions::to_string_t("health_check_id")] = ModelBase::toJson(healthCheckId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateHealthCheckRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateHealthCheckRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateHealthCheckRequest::getHealthCheckId() const
{
    return healthCheckId_;
}

void UpdateHealthCheckRequest::setHealthCheckId(const std::string& value)
{
    healthCheckId_ = value;
    healthCheckIdIsSet_ = true;
}

bool UpdateHealthCheckRequest::healthCheckIdIsSet() const
{
    return healthCheckIdIsSet_;
}

void UpdateHealthCheckRequest::unsethealthCheckId()
{
    healthCheckIdIsSet_ = false;
}

UpdateHealthCheckRequestBody UpdateHealthCheckRequest::getBody() const
{
    return body_;
}

void UpdateHealthCheckRequest::setBody(const UpdateHealthCheckRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateHealthCheckRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateHealthCheckRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


