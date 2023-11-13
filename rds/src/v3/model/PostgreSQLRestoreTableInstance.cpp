

#include "huaweicloud/rds/v3/model/PostgreSQLRestoreTableInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgreSQLRestoreTableInstance::PostgreSQLRestoreTableInstance()
{
    restoreTime_ = 0L;
    restoreTimeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    databasesIsSet_ = false;
}

PostgreSQLRestoreTableInstance::~PostgreSQLRestoreTableInstance() = default;

void PostgreSQLRestoreTableInstance::validate()
{
}

web::json::value PostgreSQLRestoreTableInstance::toJson() const
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
bool PostgreSQLRestoreTableInstance::fromJson(const web::json::value& val)
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
            std::vector<PostgreSQLRestoreDatabase> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    return ok;
}


int64_t PostgreSQLRestoreTableInstance::getRestoreTime() const
{
    return restoreTime_;
}

void PostgreSQLRestoreTableInstance::setRestoreTime(int64_t value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool PostgreSQLRestoreTableInstance::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void PostgreSQLRestoreTableInstance::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

std::string PostgreSQLRestoreTableInstance::getInstanceId() const
{
    return instanceId_;
}

void PostgreSQLRestoreTableInstance::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool PostgreSQLRestoreTableInstance::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void PostgreSQLRestoreTableInstance::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::vector<PostgreSQLRestoreDatabase>& PostgreSQLRestoreTableInstance::getDatabases()
{
    return databases_;
}

void PostgreSQLRestoreTableInstance::setDatabases(const std::vector<PostgreSQLRestoreDatabase>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool PostgreSQLRestoreTableInstance::databasesIsSet() const
{
    return databasesIsSet_;
}

void PostgreSQLRestoreTableInstance::unsetdatabases()
{
    databasesIsSet_ = false;
}

}
}
}
}
}


