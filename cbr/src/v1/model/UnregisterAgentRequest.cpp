

#include "huaweicloud/cbr/v1/model/UnregisterAgentRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




UnregisterAgentRequest::UnregisterAgentRequest()
{
    agentId_ = "";
    agentIdIsSet_ = false;
}

UnregisterAgentRequest::~UnregisterAgentRequest() = default;

void UnregisterAgentRequest::validate()
{
}

web::json::value UnregisterAgentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentIdIsSet_) {
        val[utility::conversions::to_string_t("agent_id")] = ModelBase::toJson(agentId_);
    }

    return val;
}

bool UnregisterAgentRequest::fromJson(const web::json::value& val)
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
    return ok;
}

std::string UnregisterAgentRequest::getAgentId() const
{
    return agentId_;
}

void UnregisterAgentRequest::setAgentId(const std::string& value)
{
    agentId_ = value;
    agentIdIsSet_ = true;
}

bool UnregisterAgentRequest::agentIdIsSet() const
{
    return agentIdIsSet_;
}

void UnregisterAgentRequest::unsetagentId()
{
    agentIdIsSet_ = false;
}

}
}
}
}
}


