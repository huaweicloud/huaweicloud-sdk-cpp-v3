

#include "huaweicloud/dbss/v1/model/RestoreAuditBackupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RestoreAuditBackupRequest::RestoreAuditBackupRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

RestoreAuditBackupRequest::~RestoreAuditBackupRequest() = default;

void RestoreAuditBackupRequest::validate()
{
}

web::json::value RestoreAuditBackupRequest::toJson() const
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
bool RestoreAuditBackupRequest::fromJson(const web::json::value& val)
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


std::string RestoreAuditBackupRequest::getInstanceId() const
{
    return instanceId_;
}

void RestoreAuditBackupRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RestoreAuditBackupRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RestoreAuditBackupRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string RestoreAuditBackupRequest::getId() const
{
    return id_;
}

void RestoreAuditBackupRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RestoreAuditBackupRequest::idIsSet() const
{
    return idIsSet_;
}

void RestoreAuditBackupRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


