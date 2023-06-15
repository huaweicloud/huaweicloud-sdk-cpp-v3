

#include "huaweicloud/cbr/v1/model/UpdateAgentRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




UpdateAgentRequest::UpdateAgentRequest()
{
    agentId_ = "";
    agentIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAgentRequest::~UpdateAgentRequest() = default;

void UpdateAgentRequest::validate()
{
}

web::json::value UpdateAgentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentIdIsSet_) {
        val[utility::conversions::to_string_t("agent_id")] = ModelBase::toJson(agentId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateAgentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AgentUpdateReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAgentRequest::getAgentId() const
{
    return agentId_;
}

void UpdateAgentRequest::setAgentId(const std::string& value)
{
    agentId_ = value;
    agentIdIsSet_ = true;
}

bool UpdateAgentRequest::agentIdIsSet() const
{
    return agentIdIsSet_;
}

void UpdateAgentRequest::unsetagentId()
{
    agentIdIsSet_ = false;
}

AgentUpdateReq UpdateAgentRequest::getBody() const
{
    return body_;
}

void UpdateAgentRequest::setBody(const AgentUpdateReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAgentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAgentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


