

#include "huaweicloud/dbss/v1/model/DeleteAuditBackupTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteAuditBackupTaskRequest::DeleteAuditBackupTaskRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DeleteAuditBackupTaskRequest::~DeleteAuditBackupTaskRequest() = default;

void DeleteAuditBackupTaskRequest::validate()
{
}

web::json::value DeleteAuditBackupTaskRequest::toJson() const
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
bool DeleteAuditBackupTaskRequest::fromJson(const web::json::value& val)
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


std::string DeleteAuditBackupTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteAuditBackupTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteAuditBackupTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteAuditBackupTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteAuditBackupTaskRequest::getId() const
{
    return id_;
}

void DeleteAuditBackupTaskRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteAuditBackupTaskRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteAuditBackupTaskRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


