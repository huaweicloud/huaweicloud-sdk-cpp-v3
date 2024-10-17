

#include "huaweicloud/dbss/v1/model/AddAuditDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AddAuditDatabaseRequest::AddAuditDatabaseRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddAuditDatabaseRequest::~AddAuditDatabaseRequest() = default;

void AddAuditDatabaseRequest::validate()
{
}

web::json::value AddAuditDatabaseRequest::toJson() const
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
bool AddAuditDatabaseRequest::fromJson(const web::json::value& val)
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
            CreateDatabaseRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddAuditDatabaseRequest::getInstanceId() const
{
    return instanceId_;
}

void AddAuditDatabaseRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddAuditDatabaseRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddAuditDatabaseRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateDatabaseRequest AddAuditDatabaseRequest::getBody() const
{
    return body_;
}

void AddAuditDatabaseRequest::setBody(const CreateDatabaseRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddAuditDatabaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddAuditDatabaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


