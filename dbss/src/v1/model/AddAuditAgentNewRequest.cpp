

#include "huaweicloud/dbss/v1/model/AddAuditAgentNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AddAuditAgentNewRequest::AddAuditAgentNewRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddAuditAgentNewRequest::~AddAuditAgentNewRequest() = default;

void AddAuditAgentNewRequest::validate()
{
}

web::json::value AddAuditAgentNewRequest::toJson() const
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
bool AddAuditAgentNewRequest::fromJson(const web::json::value& val)
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


std::string AddAuditAgentNewRequest::getInstanceId() const
{
    return instanceId_;
}

void AddAuditAgentNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddAuditAgentNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddAuditAgentNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AuditAgentRequest AddAuditAgentNewRequest::getBody() const
{
    return body_;
}

void AddAuditAgentNewRequest::setBody(const AuditAgentRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddAuditAgentNewRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddAuditAgentNewRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


