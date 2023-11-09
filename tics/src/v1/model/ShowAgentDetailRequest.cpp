

#include "huaweicloud/tics/v1/model/ShowAgentDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ShowAgentDetailRequest::ShowAgentDetailRequest()
{
    agentId_ = "";
    agentIdIsSet_ = false;
}

ShowAgentDetailRequest::~ShowAgentDetailRequest() = default;

void ShowAgentDetailRequest::validate()
{
}

web::json::value ShowAgentDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentIdIsSet_) {
        val[utility::conversions::to_string_t("agent_id")] = ModelBase::toJson(agentId_);
    }

    return val;
}
bool ShowAgentDetailRequest::fromJson(const web::json::value& val)
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


std::string ShowAgentDetailRequest::getAgentId() const
{
    return agentId_;
}

void ShowAgentDetailRequest::setAgentId(const std::string& value)
{
    agentId_ = value;
    agentIdIsSet_ = true;
}

bool ShowAgentDetailRequest::agentIdIsSet() const
{
    return agentIdIsSet_;
}

void ShowAgentDetailRequest::unsetagentId()
{
    agentIdIsSet_ = false;
}

}
}
}
}
}


