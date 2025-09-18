

#include "huaweicloud/ga/v1/model/ShowHealthCheckResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ShowHealthCheckResponse::ShowHealthCheckResponse()
{
    healthCheckIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ShowHealthCheckResponse::~ShowHealthCheckResponse() = default;

void ShowHealthCheckResponse::validate()
{
}

web::json::value ShowHealthCheckResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(healthCheckIsSet_) {
        val[utility::conversions::to_string_t("health_check")] = ModelBase::toJson(healthCheck_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool ShowHealthCheckResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("health_check"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("health_check"));
        if(!fieldValue.is_null())
        {
            HealthCheckDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHealthCheck(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


HealthCheckDetail ShowHealthCheckResponse::getHealthCheck() const
{
    return healthCheck_;
}

void ShowHealthCheckResponse::setHealthCheck(const HealthCheckDetail& value)
{
    healthCheck_ = value;
    healthCheckIsSet_ = true;
}

bool ShowHealthCheckResponse::healthCheckIsSet() const
{
    return healthCheckIsSet_;
}

void ShowHealthCheckResponse::unsethealthCheck()
{
    healthCheckIsSet_ = false;
}

std::string ShowHealthCheckResponse::getRequestId() const
{
    return requestId_;
}

void ShowHealthCheckResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowHealthCheckResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowHealthCheckResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


