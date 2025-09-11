

#include "huaweicloud/dbss/v1/model/AddAuditDatabaseNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AddAuditDatabaseNewRequest::AddAuditDatabaseNewRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddAuditDatabaseNewRequest::~AddAuditDatabaseNewRequest() = default;

void AddAuditDatabaseNewRequest::validate()
{
}

web::json::value AddAuditDatabaseNewRequest::toJson() const
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
bool AddAuditDatabaseNewRequest::fromJson(const web::json::value& val)
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


std::string AddAuditDatabaseNewRequest::getInstanceId() const
{
    return instanceId_;
}

void AddAuditDatabaseNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddAuditDatabaseNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddAuditDatabaseNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateDatabaseRequest AddAuditDatabaseNewRequest::getBody() const
{
    return body_;
}

void AddAuditDatabaseNewRequest::setBody(const CreateDatabaseRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddAuditDatabaseNewRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddAuditDatabaseNewRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


