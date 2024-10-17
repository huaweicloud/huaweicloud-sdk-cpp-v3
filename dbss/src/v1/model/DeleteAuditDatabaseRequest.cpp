

#include "huaweicloud/dbss/v1/model/DeleteAuditDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteAuditDatabaseRequest::DeleteAuditDatabaseRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    dbId_ = "";
    dbIdIsSet_ = false;
}

DeleteAuditDatabaseRequest::~DeleteAuditDatabaseRequest() = default;

void DeleteAuditDatabaseRequest::validate()
{
}

web::json::value DeleteAuditDatabaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(dbIdIsSet_) {
        val[utility::conversions::to_string_t("db_id")] = ModelBase::toJson(dbId_);
    }

    return val;
}
bool DeleteAuditDatabaseRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("db_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbId(refVal);
        }
    }
    return ok;
}


std::string DeleteAuditDatabaseRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteAuditDatabaseRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteAuditDatabaseRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteAuditDatabaseRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteAuditDatabaseRequest::getDbId() const
{
    return dbId_;
}

void DeleteAuditDatabaseRequest::setDbId(const std::string& value)
{
    dbId_ = value;
    dbIdIsSet_ = true;
}

bool DeleteAuditDatabaseRequest::dbIdIsSet() const
{
    return dbIdIsSet_;
}

void DeleteAuditDatabaseRequest::unsetdbId()
{
    dbIdIsSet_ = false;
}

}
}
}
}
}


