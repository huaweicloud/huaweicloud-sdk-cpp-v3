

#include "huaweicloud/iotda/v5/model/CreateRoutingBacklogPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateRoutingBacklogPolicyRequest::CreateRoutingBacklogPolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateRoutingBacklogPolicyRequest::~CreateRoutingBacklogPolicyRequest() = default;

void CreateRoutingBacklogPolicyRequest::validate()
{
}

web::json::value CreateRoutingBacklogPolicyRequest::toJson() const
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
bool CreateRoutingBacklogPolicyRequest::fromJson(const web::json::value& val)
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
            AddBacklogPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateRoutingBacklogPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateRoutingBacklogPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateRoutingBacklogPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateRoutingBacklogPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AddBacklogPolicy CreateRoutingBacklogPolicyRequest::getBody() const
{
    return body_;
}

void CreateRoutingBacklogPolicyRequest::setBody(const AddBacklogPolicy& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRoutingBacklogPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRoutingBacklogPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


