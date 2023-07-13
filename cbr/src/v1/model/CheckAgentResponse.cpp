

#include "huaweicloud/cbr/v1/model/CheckAgentResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CheckAgentResponse::CheckAgentResponse()
{
    agentStatusIsSet_ = false;
}

CheckAgentResponse::~CheckAgentResponse() = default;

void CheckAgentResponse::validate()
{
}

web::json::value CheckAgentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentStatusIsSet_) {
        val[utility::conversions::to_string_t("agent_status")] = ModelBase::toJson(agentStatus_);
    }

    return val;
}

bool CheckAgentResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agent_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_status"));
        if(!fieldValue.is_null())
        {
            std::vector<ProtectableAgentStatus> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentStatus(refVal);
        }
    }
    return ok;
}

std::vector<ProtectableAgentStatus>& CheckAgentResponse::getAgentStatus()
{
    return agentStatus_;
}

void CheckAgentResponse::setAgentStatus(const std::vector<ProtectableAgentStatus>& value)
{
    agentStatus_ = value;
    agentStatusIsSet_ = true;
}

bool CheckAgentResponse::agentStatusIsSet() const
{
    return agentStatusIsSet_;
}

void CheckAgentResponse::unsetagentStatus()
{
    agentStatusIsSet_ = false;
}

}
}
}
}
}


