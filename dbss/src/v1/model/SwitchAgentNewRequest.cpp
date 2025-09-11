

#include "huaweicloud/dbss/v1/model/SwitchAgentNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SwitchAgentNewRequest::SwitchAgentNewRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchAgentNewRequest::~SwitchAgentNewRequest() = default;

void SwitchAgentNewRequest::validate()
{
}

web::json::value SwitchAgentNewRequest::toJson() const
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
bool SwitchAgentNewRequest::fromJson(const web::json::value& val)
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


std::string SwitchAgentNewRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchAgentNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchAgentNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchAgentNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AgentSwitchRequest SwitchAgentNewRequest::getBody() const
{
    return body_;
}

void SwitchAgentNewRequest::setBody(const AgentSwitchRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchAgentNewRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchAgentNewRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


