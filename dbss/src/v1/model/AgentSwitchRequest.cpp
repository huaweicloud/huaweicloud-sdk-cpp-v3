

#include "huaweicloud/dbss/v1/model/AgentSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AgentSwitchRequest::AgentSwitchRequest()
{
    agentId_ = "";
    agentIdIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

AgentSwitchRequest::~AgentSwitchRequest() = default;

void AgentSwitchRequest::validate()
{
}

web::json::value AgentSwitchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentIdIsSet_) {
        val[utility::conversions::to_string_t("agent_id")] = ModelBase::toJson(agentId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool AgentSwitchRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string AgentSwitchRequest::getAgentId() const
{
    return agentId_;
}

void AgentSwitchRequest::setAgentId(const std::string& value)
{
    agentId_ = value;
    agentIdIsSet_ = true;
}

bool AgentSwitchRequest::agentIdIsSet() const
{
    return agentIdIsSet_;
}

void AgentSwitchRequest::unsetagentId()
{
    agentIdIsSet_ = false;
}

int32_t AgentSwitchRequest::getStatus() const
{
    return status_;
}

void AgentSwitchRequest::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AgentSwitchRequest::statusIsSet() const
{
    return statusIsSet_;
}

void AgentSwitchRequest::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


