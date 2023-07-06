

#include "huaweicloud/cbr/v1/model/ProtectableAgentReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ProtectableAgentReq::ProtectableAgentReq()
{
    agentStatusIsSet_ = false;
}

ProtectableAgentReq::~ProtectableAgentReq() = default;

void ProtectableAgentReq::validate()
{
}

web::json::value ProtectableAgentReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentStatusIsSet_) {
        val[utility::conversions::to_string_t("agent_status")] = ModelBase::toJson(agentStatus_);
    }

    return val;
}

bool ProtectableAgentReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agent_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_status"));
        if(!fieldValue.is_null())
        {
            std::vector<ProtectableAgentStatusResource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentStatus(refVal);
        }
    }
    return ok;
}

std::vector<ProtectableAgentStatusResource>& ProtectableAgentReq::getAgentStatus()
{
    return agentStatus_;
}

void ProtectableAgentReq::setAgentStatus(const std::vector<ProtectableAgentStatusResource>& value)
{
    agentStatus_ = value;
    agentStatusIsSet_ = true;
}

bool ProtectableAgentReq::agentStatusIsSet() const
{
    return agentStatusIsSet_;
}

void ProtectableAgentReq::unsetagentStatus()
{
    agentStatusIsSet_ = false;
}

}
}
}
}
}


