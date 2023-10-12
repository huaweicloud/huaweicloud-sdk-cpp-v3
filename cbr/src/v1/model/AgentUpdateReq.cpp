

#include "huaweicloud/cbr/v1/model/AgentUpdateReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




AgentUpdateReq::AgentUpdateReq()
{
    agentIsSet_ = false;
}

AgentUpdateReq::~AgentUpdateReq() = default;

void AgentUpdateReq::validate()
{
}

web::json::value AgentUpdateReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentIsSet_) {
        val[utility::conversions::to_string_t("agent")] = ModelBase::toJson(agent_);
    }

    return val;
}
bool AgentUpdateReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent"));
        if(!fieldValue.is_null())
        {
            AgentUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgent(refVal);
        }
    }
    return ok;
}


AgentUpdate AgentUpdateReq::getAgent() const
{
    return agent_;
}

void AgentUpdateReq::setAgent(const AgentUpdate& value)
{
    agent_ = value;
    agentIsSet_ = true;
}

bool AgentUpdateReq::agentIsSet() const
{
    return agentIsSet_;
}

void AgentUpdateReq::unsetagent()
{
    agentIsSet_ = false;
}

}
}
}
}
}


