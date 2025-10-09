

#include "huaweicloud/gaussdb/v3/model/UpdateServerlessScalingPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateServerlessScalingPolicyRequest::UpdateServerlessScalingPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateServerlessScalingPolicyRequest::~UpdateServerlessScalingPolicyRequest() = default;

void UpdateServerlessScalingPolicyRequest::validate()
{
}

web::json::value UpdateServerlessScalingPolicyRequest::toJson() const
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
bool UpdateServerlessScalingPolicyRequest::fromJson(const web::json::value& val)
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
            ServerlessScalingPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateServerlessScalingPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateServerlessScalingPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateServerlessScalingPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateServerlessScalingPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateServerlessScalingPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateServerlessScalingPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateServerlessScalingPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateServerlessScalingPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ServerlessScalingPolicy UpdateServerlessScalingPolicyRequest::getBody() const
{
    return body_;
}

void UpdateServerlessScalingPolicyRequest::setBody(const ServerlessScalingPolicy& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateServerlessScalingPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateServerlessScalingPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


