

#include "huaweicloud/gaussdb/v3/model/UpdateAutoScalingPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateAutoScalingPolicyRequest::UpdateAutoScalingPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAutoScalingPolicyRequest::~UpdateAutoScalingPolicyRequest() = default;

void UpdateAutoScalingPolicyRequest::validate()
{
}

web::json::value UpdateAutoScalingPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAutoScalingPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
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
            UpdateAutoScalingPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAutoScalingPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateAutoScalingPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateAutoScalingPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateAutoScalingPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateAutoScalingPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateAutoScalingPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateAutoScalingPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateAutoScalingPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateAutoScalingPolicyRequestBody UpdateAutoScalingPolicyRequest::getBody() const
{
    return body_;
}

void UpdateAutoScalingPolicyRequest::setBody(const UpdateAutoScalingPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAutoScalingPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAutoScalingPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


