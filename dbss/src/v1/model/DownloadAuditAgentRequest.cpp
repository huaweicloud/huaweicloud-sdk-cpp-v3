

#include "huaweicloud/dbss/v1/model/DownloadAuditAgentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DownloadAuditAgentRequest::DownloadAuditAgentRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    agentId_ = "";
    agentIdIsSet_ = false;
}

DownloadAuditAgentRequest::~DownloadAuditAgentRequest() = default;

void DownloadAuditAgentRequest::validate()
{
}

web::json::value DownloadAuditAgentRequest::toJson() const
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
bool DownloadAuditAgentRequest::fromJson(const web::json::value& val)
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


std::string DownloadAuditAgentRequest::getInstanceId() const
{
    return instanceId_;
}

void DownloadAuditAgentRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DownloadAuditAgentRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DownloadAuditAgentRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DownloadAuditAgentRequest::getAgentId() const
{
    return agentId_;
}

void DownloadAuditAgentRequest::setAgentId(const std::string& value)
{
    agentId_ = value;
    agentIdIsSet_ = true;
}

bool DownloadAuditAgentRequest::agentIdIsSet() const
{
    return agentIdIsSet_;
}

void DownloadAuditAgentRequest::unsetagentId()
{
    agentIdIsSet_ = false;
}

}
}
}
}
}


