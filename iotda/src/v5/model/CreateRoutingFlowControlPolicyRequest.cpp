

#include "huaweicloud/iotda/v5/model/CreateRoutingFlowControlPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateRoutingFlowControlPolicyRequest::CreateRoutingFlowControlPolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateRoutingFlowControlPolicyRequest::~CreateRoutingFlowControlPolicyRequest() = default;

void CreateRoutingFlowControlPolicyRequest::validate()
{
}

web::json::value CreateRoutingFlowControlPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateRoutingFlowControlPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
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
            AddFlowControlPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateRoutingFlowControlPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateRoutingFlowControlPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateRoutingFlowControlPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateRoutingFlowControlPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AddFlowControlPolicy CreateRoutingFlowControlPolicyRequest::getBody() const
{
    return body_;
}

void CreateRoutingFlowControlPolicyRequest::setBody(const AddFlowControlPolicy& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRoutingFlowControlPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRoutingFlowControlPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


