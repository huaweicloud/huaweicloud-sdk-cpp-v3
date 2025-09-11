

#include "huaweicloud/dbss/v1/model/CreateAuditDbAgentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateAuditDbAgentRequest::CreateAuditDbAgentRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    agentId_ = "";
    agentIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAuditDbAgentRequest::~CreateAuditDbAgentRequest() = default;

void CreateAuditDbAgentRequest::validate()
{
}

web::json::value CreateAuditDbAgentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(agentIdIsSet_) {
        val[utility::conversions::to_string_t("agent_id")] = ModelBase::toJson(agentId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAuditDbAgentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AgentEditRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAuditDbAgentRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateAuditDbAgentRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateAuditDbAgentRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateAuditDbAgentRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateAuditDbAgentRequest::getAgentId() const
{
    return agentId_;
}

void CreateAuditDbAgentRequest::setAgentId(const std::string& value)
{
    agentId_ = value;
    agentIdIsSet_ = true;
}

bool CreateAuditDbAgentRequest::agentIdIsSet() const
{
    return agentIdIsSet_;
}

void CreateAuditDbAgentRequest::unsetagentId()
{
    agentIdIsSet_ = false;
}

AgentEditRequest CreateAuditDbAgentRequest::getBody() const
{
    return body_;
}

void CreateAuditDbAgentRequest::setBody(const AgentEditRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAuditDbAgentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAuditDbAgentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


