

#include "huaweicloud/cbr/v1/model/AgentRegisterReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




AgentRegisterReq::AgentRegisterReq()
{
    agentIsSet_ = false;
}

AgentRegisterReq::~AgentRegisterReq() = default;

void AgentRegisterReq::validate()
{
}

web::json::value AgentRegisterReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentIsSet_) {
        val[utility::conversions::to_string_t("agent")] = ModelBase::toJson(agent_);
    }

    return val;
}
bool AgentRegisterReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent"));
        if(!fieldValue.is_null())
        {
            AgentRegister refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgent(refVal);
        }
    }
    return ok;
}


AgentRegister AgentRegisterReq::getAgent() const
{
    return agent_;
}

void AgentRegisterReq::setAgent(const AgentRegister& value)
{
    agent_ = value;
    agentIsSet_ = true;
}

bool AgentRegisterReq::agentIsSet() const
{
    return agentIsSet_;
}

void AgentRegisterReq::unsetagent()
{
    agentIsSet_ = false;
}

}
}
}
}
}


