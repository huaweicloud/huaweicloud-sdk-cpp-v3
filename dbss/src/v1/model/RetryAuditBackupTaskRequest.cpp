

#include "huaweicloud/dbss/v1/model/RetryAuditBackupTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RetryAuditBackupTaskRequest::RetryAuditBackupTaskRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

RetryAuditBackupTaskRequest::~RetryAuditBackupTaskRequest() = default;

void RetryAuditBackupTaskRequest::validate()
{
}

web::json::value RetryAuditBackupTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool RetryAuditBackupTaskRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string RetryAuditBackupTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void RetryAuditBackupTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RetryAuditBackupTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RetryAuditBackupTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string RetryAuditBackupTaskRequest::getId() const
{
    return id_;
}

void RetryAuditBackupTaskRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RetryAuditBackupTaskRequest::idIsSet() const
{
    return idIsSet_;
}

void RetryAuditBackupTaskRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


