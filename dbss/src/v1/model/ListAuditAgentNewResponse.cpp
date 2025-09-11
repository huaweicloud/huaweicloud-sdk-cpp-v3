

#include "huaweicloud/dbss/v1/model/ListAuditAgentNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditAgentNewResponse::ListAuditAgentNewResponse()
{
    agentsIsSet_ = false;
}

ListAuditAgentNewResponse::~ListAuditAgentNewResponse() = default;

void ListAuditAgentNewResponse::validate()
{
}

web::json::value ListAuditAgentNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentsIsSet_) {
        val[utility::conversions::to_string_t("agents")] = ModelBase::toJson(agents_);
    }

    return val;
}
bool ListAuditAgentNewResponse::fromJson(const web::json::value& val)
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


std::vector<AuditAgentRespoonse_agents>& ListAuditAgentNewResponse::getAgents()
{
    return agents_;
}

void ListAuditAgentNewResponse::setAgents(const std::vector<AuditAgentRespoonse_agents>& value)
{
    agents_ = value;
    agentsIsSet_ = true;
}

bool ListAuditAgentNewResponse::agentsIsSet() const
{
    return agentsIsSet_;
}

void ListAuditAgentNewResponse::unsetagents()
{
    agentsIsSet_ = false;
}

}
}
}
}
}


