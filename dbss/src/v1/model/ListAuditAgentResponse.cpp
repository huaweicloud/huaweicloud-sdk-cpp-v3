

#include "huaweicloud/dbss/v1/model/ListAuditAgentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditAgentResponse::ListAuditAgentResponse()
{
    agentsIsSet_ = false;
}

ListAuditAgentResponse::~ListAuditAgentResponse() = default;

void ListAuditAgentResponse::validate()
{
}

web::json::value ListAuditAgentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentsIsSet_) {
        val[utility::conversions::to_string_t("agents")] = ModelBase::toJson(agents_);
    }

    return val;
}
bool ListAuditAgentResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agents"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agents"));
        if(!fieldValue.is_null())
        {
            std::vector<AuditAgentRespoonse_agents> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgents(refVal);
        }
    }
    return ok;
}


std::vector<AuditAgentRespoonse_agents>& ListAuditAgentResponse::getAgents()
{
    return agents_;
}

void ListAuditAgentResponse::setAgents(const std::vector<AuditAgentRespoonse_agents>& value)
{
    agents_ = value;
    agentsIsSet_ = true;
}

bool ListAuditAgentResponse::agentsIsSet() const
{
    return agentsIsSet_;
}

void ListAuditAgentResponse::unsetagents()
{
    agentsIsSet_ = false;
}

}
}
}
}
}


