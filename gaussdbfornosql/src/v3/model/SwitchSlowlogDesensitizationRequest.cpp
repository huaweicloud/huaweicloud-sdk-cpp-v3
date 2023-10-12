

#include "huaweicloud/gaussdbfornosql/v3/model/SwitchSlowlogDesensitizationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SwitchSlowlogDesensitizationRequest::SwitchSlowlogDesensitizationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchSlowlogDesensitizationRequest::~SwitchSlowlogDesensitizationRequest() = default;

void SwitchSlowlogDesensitizationRequest::validate()
{
}

web::json::value SwitchSlowlogDesensitizationRequest::toJson() const
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
bool SwitchSlowlogDesensitizationRequest::fromJson(const web::json::value& val)
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
            SwitchSlowlogDesensitizationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchSlowlogDesensitizationRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchSlowlogDesensitizationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchSlowlogDesensitizationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchSlowlogDesensitizationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SwitchSlowlogDesensitizationRequestBody SwitchSlowlogDesensitizationRequest::getBody() const
{
    return body_;
}

void SwitchSlowlogDesensitizationRequest::setBody(const SwitchSlowlogDesensitizationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchSlowlogDesensitizationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchSlowlogDesensitizationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


