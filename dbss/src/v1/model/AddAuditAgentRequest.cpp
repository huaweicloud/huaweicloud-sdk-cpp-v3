

#include "huaweicloud/dbss/v1/model/AddAuditAgentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AddAuditAgentRequest::AddAuditAgentRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddAuditAgentRequest::~AddAuditAgentRequest() = default;

void AddAuditAgentRequest::validate()
{
}

web::json::value AddAuditAgentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddAuditAgentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AuditAgentRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddAuditAgentRequest::getInstanceId() const
{
    return instanceId_;
}

void AddAuditAgentRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddAuditAgentRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddAuditAgentRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AuditAgentRequest AddAuditAgentRequest::getBody() const
{
    return body_;
}

void AddAuditAgentRequest::setBody(const AuditAgentRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddAuditAgentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddAuditAgentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


