

#include "huaweicloud/cbr/v1/model/UpdateAgentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




UpdateAgentResponse::UpdateAgentResponse()
{
    agentIsSet_ = false;
}

UpdateAgentResponse::~UpdateAgentResponse() = default;

void UpdateAgentResponse::validate()
{
}

web::json::value UpdateAgentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentIsSet_) {
        val[utility::conversions::to_string_t("agent")] = ModelBase::toJson(agent_);
    }

    return val;
}
bool UpdateAgentResponse::fromJson(const web::json::value& val)
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


Agent UpdateAgentResponse::getAgent() const
{
    return agent_;
}

void UpdateAgentResponse::setAgent(const Agent& value)
{
    agent_ = value;
    agentIsSet_ = true;
}

bool UpdateAgentResponse::agentIsSet() const
{
    return agentIsSet_;
}

void UpdateAgentResponse::unsetagent()
{
    agentIsSet_ = false;
}

}
}
}
}
}


