

#include "huaweicloud/rds/v3/model/SetAutoScalingPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetAutoScalingPolicyRequest::SetAutoScalingPolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

SetAutoScalingPolicyRequest::~SetAutoScalingPolicyRequest() = default;

void SetAutoScalingPolicyRequest::validate()
{
}

web::json::value SetAutoScalingPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetAutoScalingPolicyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SetAutoScalingPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetAutoScalingPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void SetAutoScalingPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetAutoScalingPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetAutoScalingPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SetAutoScalingPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetAutoScalingPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetAutoScalingPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetAutoScalingPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

SetAutoScalingPolicyRequestBody SetAutoScalingPolicyRequest::getBody() const
{
    return body_;
}

void SetAutoScalingPolicyRequest::setBody(const SetAutoScalingPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetAutoScalingPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetAutoScalingPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


