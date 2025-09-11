

#include "huaweicloud/dbss/v1/model/DownloadAuditAgentNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DownloadAuditAgentNewRequest::DownloadAuditAgentNewRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    agentId_ = "";
    agentIdIsSet_ = false;
}

DownloadAuditAgentNewRequest::~DownloadAuditAgentNewRequest() = default;

void DownloadAuditAgentNewRequest::validate()
{
}

web::json::value DownloadAuditAgentNewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(agentIdIsSet_) {
        val[utility::conversions::to_string_t("agent_id")] = ModelBase::toJson(agentId_);
    }

    return val;
}
bool DownloadAuditAgentNewRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
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


std::string DownloadAuditAgentNewRequest::getInstanceId() const
{
    return instanceId_;
}

void DownloadAuditAgentNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DownloadAuditAgentNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DownloadAuditAgentNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DownloadAuditAgentNewRequest::getAgentId() const
{
    return agentId_;
}

void DownloadAuditAgentNewRequest::setAgentId(const std::string& value)
{
    agentId_ = value;
    agentIdIsSet_ = true;
}

bool DownloadAuditAgentNewRequest::agentIdIsSet() const
{
    return agentIdIsSet_;
}

void DownloadAuditAgentNewRequest::unsetagentId()
{
    agentIdIsSet_ = false;
}

}
}
}
}
}


