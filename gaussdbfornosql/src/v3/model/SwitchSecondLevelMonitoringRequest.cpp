

#include "huaweicloud/gaussdbfornosql/v3/model/SwitchSecondLevelMonitoringRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SwitchSecondLevelMonitoringRequest::SwitchSecondLevelMonitoringRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchSecondLevelMonitoringRequest::~SwitchSecondLevelMonitoringRequest() = default;

void SwitchSecondLevelMonitoringRequest::validate()
{
}

web::json::value SwitchSecondLevelMonitoringRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SwitchSecondLevelMonitoringRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SwitchSecondLevelMonitoringRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchSecondLevelMonitoringRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchSecondLevelMonitoringRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchSecondLevelMonitoringRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchSecondLevelMonitoringRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SwitchSecondLevelMonitoringRequestBody SwitchSecondLevelMonitoringRequest::getBody() const
{
    return body_;
}

void SwitchSecondLevelMonitoringRequest::setBody(const SwitchSecondLevelMonitoringRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchSecondLevelMonitoringRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchSecondLevelMonitoringRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


