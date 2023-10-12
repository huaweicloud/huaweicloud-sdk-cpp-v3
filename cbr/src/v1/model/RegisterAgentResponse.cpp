

#include "huaweicloud/cbr/v1/model/RegisterAgentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




RegisterAgentResponse::RegisterAgentResponse()
{
    agentIsSet_ = false;
}

RegisterAgentResponse::~RegisterAgentResponse() = default;

void RegisterAgentResponse::validate()
{
}

web::json::value RegisterAgentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentIsSet_) {
        val[utility::conversions::to_string_t("agent")] = ModelBase::toJson(agent_);
    }

    return val;
}
bool RegisterAgentResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent"));
        if(!fieldValue.is_null())
        {
            Agent refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgent(refVal);
        }
    }
    return ok;
}


Agent RegisterAgentResponse::getAgent() const
{
    return agent_;
}

void RegisterAgentResponse::setAgent(const Agent& value)
{
    agent_ = value;
    agentIsSet_ = true;
}

bool RegisterAgentResponse::agentIsSet() const
{
    return agentIsSet_;
}

void RegisterAgentResponse::unsetagent()
{
    agentIsSet_ = false;
}

}
}
}
}
}


