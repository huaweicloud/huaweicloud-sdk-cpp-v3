

#include "huaweicloud/cbr/v1/model/ShowAgentResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowAgentResponse::ShowAgentResponse()
{
    agentIsSet_ = false;
}

ShowAgentResponse::~ShowAgentResponse() = default;

void ShowAgentResponse::validate()
{
}

web::json::value ShowAgentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentIsSet_) {
        val[utility::conversions::to_string_t("agent")] = ModelBase::toJson(agent_);
    }

    return val;
}

bool ShowAgentResponse::fromJson(const web::json::value& val)
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

Agent ShowAgentResponse::getAgent() const
{
    return agent_;
}

void ShowAgentResponse::setAgent(const Agent& value)
{
    agent_ = value;
    agentIsSet_ = true;
}

bool ShowAgentResponse::agentIsSet() const
{
    return agentIsSet_;
}

void ShowAgentResponse::unsetagent()
{
    agentIsSet_ = false;
}

}
}
}
}
}


