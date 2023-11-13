

#include "huaweicloud/rds/v3/model/PostgreSQLRestoreDatabaseInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgreSQLRestoreDatabaseInstance::PostgreSQLRestoreDatabaseInstance()
{
    restoreTime_ = 0L;
    restoreTimeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    databasesIsSet_ = false;
}

PostgreSQLRestoreDatabaseInstance::~PostgreSQLRestoreDatabaseInstance() = default;

void PostgreSQLRestoreDatabaseInstance::validate()
{
}

web::json::value PostgreSQLRestoreDatabaseInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(restoreTimeIsSet_) {
        val[utility::conversions::to_string_t("restore_time")] = ModelBase::toJson(restoreTime_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }

    return val;
}
bool PostgreSQLRestoreDatabaseInstance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("restore_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<PostgreSQLRestoreDatabaseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    return ok;
}


int64_t PostgreSQLRestoreDatabaseInstance::getRestoreTime() const
{
    return restoreTime_;
}

void PostgreSQLRestoreDatabaseInstance::setRestoreTime(int64_t value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool PostgreSQLRestoreDatabaseInstance::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void PostgreSQLRestoreDatabaseInstance::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

std::string PostgreSQLRestoreDatabaseInstance::getInstanceId() const
{
    return instanceId_;
}

void PostgreSQLRestoreDatabaseInstance::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool PostgreSQLRestoreDatabaseInstance::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void PostgreSQLRestoreDatabaseInstance::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::vector<PostgreSQLRestoreDatabaseInfo>& PostgreSQLRestoreDatabaseInstance::getDatabases()
{
    return databases_;
}

void PostgreSQLRestoreDatabaseInstance::setDatabases(const std::vector<PostgreSQLRestoreDatabaseInfo>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool PostgreSQLRestoreDatabaseInstance::databasesIsSet() const
{
    return databasesIsSet_;
}

void PostgreSQLRestoreDatabaseInstance::unsetdatabases()
{
    databasesIsSet_ = false;
}

}
}
}
}
}


