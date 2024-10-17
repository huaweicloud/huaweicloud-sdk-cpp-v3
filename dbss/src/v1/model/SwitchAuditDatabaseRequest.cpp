

#include "huaweicloud/dbss/v1/model/SwitchAuditDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SwitchAuditDatabaseRequest::SwitchAuditDatabaseRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchAuditDatabaseRequest::~SwitchAuditDatabaseRequest() = default;

void SwitchAuditDatabaseRequest::validate()
{
}

web::json::value SwitchAuditDatabaseRequest::toJson() const
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
bool SwitchAuditDatabaseRequest::fromJson(const web::json::value& val)
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
            SwitchAuditDbRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchAuditDatabaseRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchAuditDatabaseRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchAuditDatabaseRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchAuditDatabaseRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SwitchAuditDbRequest SwitchAuditDatabaseRequest::getBody() const
{
    return body_;
}

void SwitchAuditDatabaseRequest::setBody(const SwitchAuditDbRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchAuditDatabaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchAuditDatabaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


