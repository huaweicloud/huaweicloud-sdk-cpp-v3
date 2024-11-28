

#include "huaweicloud/gaussdbfornosql/v3/model/SetRedisPitrPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SetRedisPitrPolicyRequest::SetRedisPitrPolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetRedisPitrPolicyRequest::~SetRedisPitrPolicyRequest() = default;

void SetRedisPitrPolicyRequest::validate()
{
}

web::json::value SetRedisPitrPolicyRequest::toJson() const
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
bool SetRedisPitrPolicyRequest::fromJson(const web::json::value& val)
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
            SetRedisPitrPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetRedisPitrPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void SetRedisPitrPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetRedisPitrPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetRedisPitrPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SetRedisPitrPolicyRequestBody SetRedisPitrPolicyRequest::getBody() const
{
    return body_;
}

void SetRedisPitrPolicyRequest::setBody(const SetRedisPitrPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetRedisPitrPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetRedisPitrPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


