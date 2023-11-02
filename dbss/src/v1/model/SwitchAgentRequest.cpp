

#include "huaweicloud/dbss/v1/model/SwitchAgentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SwitchAgentRequest::SwitchAgentRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchAgentRequest::~SwitchAgentRequest() = default;

void SwitchAgentRequest::validate()
{
}

web::json::value SwitchAgentRequest::toJson() const
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
bool SwitchAgentRequest::fromJson(const web::json::value& val)
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
            AgentSwitchRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchAgentRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchAgentRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchAgentRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchAgentRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AgentSwitchRequest SwitchAgentRequest::getBody() const
{
    return body_;
}

void SwitchAgentRequest::setBody(const AgentSwitchRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchAgentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchAgentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


