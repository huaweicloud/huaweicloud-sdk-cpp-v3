

#include "huaweicloud/cbr/v1/model/AddAgentPathRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




AddAgentPathRequest::AddAgentPathRequest()
{
    agentId_ = "";
    agentIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddAgentPathRequest::~AddAgentPathRequest() = default;

void AddAgentPathRequest::validate()
{
}

web::json::value AddAgentPathRequest::toJson() const
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

bool AddAgentPathRequest::fromJson(const web::json::value& val)
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
            AgentAddPathReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddAgentPathRequest::getAgentId() const
{
    return agentId_;
}

void AddAgentPathRequest::setAgentId(const std::string& value)
{
    agentId_ = value;
    agentIdIsSet_ = true;
}

bool AddAgentPathRequest::agentIdIsSet() const
{
    return agentIdIsSet_;
}

void AddAgentPathRequest::unsetagentId()
{
    agentIdIsSet_ = false;
}

AgentAddPathReq AddAgentPathRequest::getBody() const
{
    return body_;
}

void AddAgentPathRequest::setBody(const AgentAddPathReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddAgentPathRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddAgentPathRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


