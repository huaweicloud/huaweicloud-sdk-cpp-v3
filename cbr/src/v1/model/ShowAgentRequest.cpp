

#include "huaweicloud/cbr/v1/model/ShowAgentRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowAgentRequest::ShowAgentRequest()
{
    agentId_ = "";
    agentIdIsSet_ = false;
}

ShowAgentRequest::~ShowAgentRequest() = default;

void ShowAgentRequest::validate()
{
}

web::json::value ShowAgentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentIdIsSet_) {
        val[utility::conversions::to_string_t("agent_id")] = ModelBase::toJson(agentId_);
    }

    return val;
}

bool ShowAgentRequest::fromJson(const web::json::value& val)
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

std::string ShowAgentRequest::getAgentId() const
{
    return agentId_;
}

void ShowAgentRequest::setAgentId(const std::string& value)
{
    agentId_ = value;
    agentIdIsSet_ = true;
}

bool ShowAgentRequest::agentIdIsSet() const
{
    return agentIdIsSet_;
}

void ShowAgentRequest::unsetagentId()
{
    agentIdIsSet_ = false;
}

}
}
}
}
}


