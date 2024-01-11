

#include "huaweicloud/rds/v3/model/RestoreDatabaseInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestoreDatabaseInstance::RestoreDatabaseInstance()
{
    restoreTime_ = 0L;
    restoreTimeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    isFastRestore_ = false;
    isFastRestoreIsSet_ = false;
    databasesIsSet_ = false;
}

RestoreDatabaseInstance::~RestoreDatabaseInstance() = default;

void RestoreDatabaseInstance::validate()
{
}

web::json::value RestoreDatabaseInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(restoreTimeIsSet_) {
        val[utility::conversions::to_string_t("restore_time")] = ModelBase::toJson(restoreTime_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(isFastRestoreIsSet_) {
        val[utility::conversions::to_string_t("is_fast_restore")] = ModelBase::toJson(isFastRestore_);
    }
    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }

    return val;
}
bool RestoreDatabaseInstance::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_fast_restore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_fast_restore"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFastRestore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<RestoreDatabaseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    return ok;
}


int64_t RestoreDatabaseInstance::getRestoreTime() const
{
    return restoreTime_;
}

void RestoreDatabaseInstance::setRestoreTime(int64_t value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool RestoreDatabaseInstance::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void RestoreDatabaseInstance::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

std::string RestoreDatabaseInstance::getInstanceId() const
{
    return instanceId_;
}

void RestoreDatabaseInstance::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RestoreDatabaseInstance::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RestoreDatabaseInstance::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

bool RestoreDatabaseInstance::isIsFastRestore() const
{
    return isFastRestore_;
}

void RestoreDatabaseInstance::setIsFastRestore(bool value)
{
    isFastRestore_ = value;
    isFastRestoreIsSet_ = true;
}

bool RestoreDatabaseInstance::isFastRestoreIsSet() const
{
    return isFastRestoreIsSet_;
}

void RestoreDatabaseInstance::unsetisFastRestore()
{
    isFastRestoreIsSet_ = false;
}

std::vector<RestoreDatabaseInfo>& RestoreDatabaseInstance::getDatabases()
{
    return databases_;
}

void RestoreDatabaseInstance::setDatabases(const std::vector<RestoreDatabaseInfo>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool RestoreDatabaseInstance::databasesIsSet() const
{
    return databasesIsSet_;
}

void RestoreDatabaseInstance::unsetdatabases()
{
    databasesIsSet_ = false;
}

}
}
}
}
}


