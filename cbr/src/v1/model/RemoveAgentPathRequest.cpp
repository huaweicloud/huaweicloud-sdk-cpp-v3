

#include "huaweicloud/cbr/v1/model/RemoveAgentPathRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




RemoveAgentPathRequest::RemoveAgentPathRequest()
{
    agentId_ = "";
    agentIdIsSet_ = false;
    bodyIsSet_ = false;
}

RemoveAgentPathRequest::~RemoveAgentPathRequest() = default;

void RemoveAgentPathRequest::validate()
{
}

web::json::value RemoveAgentPathRequest::toJson() const
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
bool RemoveAgentPathRequest::fromJson(const web::json::value& val)
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
            AgentRemovePathReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RemoveAgentPathRequest::getAgentId() const
{
    return agentId_;
}

void RemoveAgentPathRequest::setAgentId(const std::string& value)
{
    agentId_ = value;
    agentIdIsSet_ = true;
}

bool RemoveAgentPathRequest::agentIdIsSet() const
{
    return agentIdIsSet_;
}

void RemoveAgentPathRequest::unsetagentId()
{
    agentIdIsSet_ = false;
}

AgentRemovePathReq RemoveAgentPathRequest::getBody() const
{
    return body_;
}

void RemoveAgentPathRequest::setBody(const AgentRemovePathReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RemoveAgentPathRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RemoveAgentPathRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


