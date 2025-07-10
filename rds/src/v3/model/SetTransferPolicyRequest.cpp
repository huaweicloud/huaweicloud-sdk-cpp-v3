

#include "huaweicloud/rds/v3/model/SetTransferPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetTransferPolicyRequest::SetTransferPolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetTransferPolicyRequest::~SetTransferPolicyRequest() = default;

void SetTransferPolicyRequest::validate()
{
}

web::json::value SetTransferPolicyRequest::toJson() const
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
bool SetTransferPolicyRequest::fromJson(const web::json::value& val)
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
            SetTransferPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetTransferPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void SetTransferPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetTransferPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetTransferPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SetTransferPolicyRequestBody SetTransferPolicyRequest::getBody() const
{
    return body_;
}

void SetTransferPolicyRequest::setBody(const SetTransferPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetTransferPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetTransferPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


