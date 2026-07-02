

#include "huaweicloud/gaussdb/v3/model/LockRootCause.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




LockRootCause::LockRootCause()
{
    lockedPid_ = 0L;
    lockedPidIsSet_ = false;
    lockedSql_ = "";
    lockedSqlIsSet_ = false;
    waitSeconds_ = 0L;
    waitSecondsIsSet_ = false;
    lockDb_ = "";
    lockDbIsSet_ = false;
    lockTable_ = "";
    lockTableIsSet_ = false;
    lockIndex_ = "";
    lockIndexIsSet_ = false;
    lockMode_ = "";
    lockModeIsSet_ = false;
    lockData_ = "";
    lockDataIsSet_ = false;
    blockerPid_ = 0L;
    blockerPidIsSet_ = false;
    blockerState_ = "";
    blockerStateIsSet_ = false;
    blockerAge_ = 0;
    blockerAgeIsSet_ = false;
    blockerRowsLocked_ = 0L;
    blockerRowsLockedIsSet_ = false;
    blockerRowsModified_ = 0L;
    blockerRowsModifiedIsSet_ = false;
    blockerCurrentSqlIsSet_ = false;
    blockerHost_ = "";
    blockerHostIsSet_ = false;
    blockerCommand_ = "";
    blockerCommandIsSet_ = false;
    blockerThreadId_ = 0L;
    blockerThreadIdIsSet_ = false;
}

LockRootCause::~LockRootCause() = default;

void LockRootCause::validate()
{
}

web::json::value LockRootCause::toJson() const
{
    web::json::value val = web::json::value::object();

    if(lockedPidIsSet_) {
        val[utility::conversions::to_string_t("locked_pid")] = ModelBase::toJson(lockedPid_);
    }
    if(lockedSqlIsSet_) {
        val[utility::conversions::to_string_t("locked_sql")] = ModelBase::toJson(lockedSql_);
    }
    if(waitSecondsIsSet_) {
        val[utility::conversions::to_string_t("wait_seconds")] = ModelBase::toJson(waitSeconds_);
    }
    if(lockDbIsSet_) {
        val[utility::conversions::to_string_t("lock_db")] = ModelBase::toJson(lockDb_);
    }
    if(lockTableIsSet_) {
        val[utility::conversions::to_string_t("lock_table")] = ModelBase::toJson(lockTable_);
    }
    if(lockIndexIsSet_) {
        val[utility::conversions::to_string_t("lock_index")] = ModelBase::toJson(lockIndex_);
    }
    if(lockModeIsSet_) {
        val[utility::conversions::to_string_t("lock_mode")] = ModelBase::toJson(lockMode_);
    }
    if(lockDataIsSet_) {
        val[utility::conversions::to_string_t("lock_data")] = ModelBase::toJson(lockData_);
    }
    if(blockerPidIsSet_) {
        val[utility::conversions::to_string_t("blocker_pid")] = ModelBase::toJson(blockerPid_);
    }
    if(blockerStateIsSet_) {
        val[utility::conversions::to_string_t("blocker_state")] = ModelBase::toJson(blockerState_);
    }
    if(blockerAgeIsSet_) {
        val[utility::conversions::to_string_t("blocker_age")] = ModelBase::toJson(blockerAge_);
    }
    if(blockerRowsLockedIsSet_) {
        val[utility::conversions::to_string_t("blocker_rows_locked")] = ModelBase::toJson(blockerRowsLocked_);
    }
    if(blockerRowsModifiedIsSet_) {
        val[utility::conversions::to_string_t("blocker_rows_modified")] = ModelBase::toJson(blockerRowsModified_);
    }
    if(blockerCurrentSqlIsSet_) {
        val[utility::conversions::to_string_t("blocker_current_sql")] = ModelBase::toJson(blockerCurrentSql_);
    }
    if(blockerHostIsSet_) {
        val[utility::conversions::to_string_t("blocker_host")] = ModelBase::toJson(blockerHost_);
    }
    if(blockerCommandIsSet_) {
        val[utility::conversions::to_string_t("blocker_command")] = ModelBase::toJson(blockerCommand_);
    }
    if(blockerThreadIdIsSet_) {
        val[utility::conversions::to_string_t("blocker_thread_id")] = ModelBase::toJson(blockerThreadId_);
    }

    return val;
}
bool LockRootCause::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("locked_pid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locked_pid"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockedPid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("locked_sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locked_sql"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockedSql(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wait_seconds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wait_seconds"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaitSeconds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_db"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_db"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockDb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_table"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_table"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockTable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_index"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blocker_pid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blocker_pid"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockerPid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blocker_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blocker_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockerState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blocker_age"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blocker_age"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockerAge(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blocker_rows_locked"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blocker_rows_locked"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockerRowsLocked(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blocker_rows_modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blocker_rows_modified"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockerRowsModified(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blocker_current_sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blocker_current_sql"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockerCurrentSql(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blocker_host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blocker_host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockerHost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blocker_command"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blocker_command"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockerCommand(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blocker_thread_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blocker_thread_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockerThreadId(refVal);
        }
    }
    return ok;
}


int64_t LockRootCause::getLockedPid() const
{
    return lockedPid_;
}

void LockRootCause::setLockedPid(int64_t value)
{
    lockedPid_ = value;
    lockedPidIsSet_ = true;
}

bool LockRootCause::lockedPidIsSet() const
{
    return lockedPidIsSet_;
}

void LockRootCause::unsetlockedPid()
{
    lockedPidIsSet_ = false;
}

std::string LockRootCause::getLockedSql() const
{
    return lockedSql_;
}

void LockRootCause::setLockedSql(const std::string& value)
{
    lockedSql_ = value;
    lockedSqlIsSet_ = true;
}

bool LockRootCause::lockedSqlIsSet() const
{
    return lockedSqlIsSet_;
}

void LockRootCause::unsetlockedSql()
{
    lockedSqlIsSet_ = false;
}

int64_t LockRootCause::getWaitSeconds() const
{
    return waitSeconds_;
}

void LockRootCause::setWaitSeconds(int64_t value)
{
    waitSeconds_ = value;
    waitSecondsIsSet_ = true;
}

bool LockRootCause::waitSecondsIsSet() const
{
    return waitSecondsIsSet_;
}

void LockRootCause::unsetwaitSeconds()
{
    waitSecondsIsSet_ = false;
}

std::string LockRootCause::getLockDb() const
{
    return lockDb_;
}

void LockRootCause::setLockDb(const std::string& value)
{
    lockDb_ = value;
    lockDbIsSet_ = true;
}

bool LockRootCause::lockDbIsSet() const
{
    return lockDbIsSet_;
}

void LockRootCause::unsetlockDb()
{
    lockDbIsSet_ = false;
}

std::string LockRootCause::getLockTable() const
{
    return lockTable_;
}

void LockRootCause::setLockTable(const std::string& value)
{
    lockTable_ = value;
    lockTableIsSet_ = true;
}

bool LockRootCause::lockTableIsSet() const
{
    return lockTableIsSet_;
}

void LockRootCause::unsetlockTable()
{
    lockTableIsSet_ = false;
}

std::string LockRootCause::getLockIndex() const
{
    return lockIndex_;
}

void LockRootCause::setLockIndex(const std::string& value)
{
    lockIndex_ = value;
    lockIndexIsSet_ = true;
}

bool LockRootCause::lockIndexIsSet() const
{
    return lockIndexIsSet_;
}

void LockRootCause::unsetlockIndex()
{
    lockIndexIsSet_ = false;
}

std::string LockRootCause::getLockMode() const
{
    return lockMode_;
}

void LockRootCause::setLockMode(const std::string& value)
{
    lockMode_ = value;
    lockModeIsSet_ = true;
}

bool LockRootCause::lockModeIsSet() const
{
    return lockModeIsSet_;
}

void LockRootCause::unsetlockMode()
{
    lockModeIsSet_ = false;
}

std::string LockRootCause::getLockData() const
{
    return lockData_;
}

void LockRootCause::setLockData(const std::string& value)
{
    lockData_ = value;
    lockDataIsSet_ = true;
}

bool LockRootCause::lockDataIsSet() const
{
    return lockDataIsSet_;
}

void LockRootCause::unsetlockData()
{
    lockDataIsSet_ = false;
}

int64_t LockRootCause::getBlockerPid() const
{
    return blockerPid_;
}

void LockRootCause::setBlockerPid(int64_t value)
{
    blockerPid_ = value;
    blockerPidIsSet_ = true;
}

bool LockRootCause::blockerPidIsSet() const
{
    return blockerPidIsSet_;
}

void LockRootCause::unsetblockerPid()
{
    blockerPidIsSet_ = false;
}

std::string LockRootCause::getBlockerState() const
{
    return blockerState_;
}

void LockRootCause::setBlockerState(const std::string& value)
{
    blockerState_ = value;
    blockerStateIsSet_ = true;
}

bool LockRootCause::blockerStateIsSet() const
{
    return blockerStateIsSet_;
}

void LockRootCause::unsetblockerState()
{
    blockerStateIsSet_ = false;
}

int32_t LockRootCause::getBlockerAge() const
{
    return blockerAge_;
}

void LockRootCause::setBlockerAge(int32_t value)
{
    blockerAge_ = value;
    blockerAgeIsSet_ = true;
}

bool LockRootCause::blockerAgeIsSet() const
{
    return blockerAgeIsSet_;
}

void LockRootCause::unsetblockerAge()
{
    blockerAgeIsSet_ = false;
}

int64_t LockRootCause::getBlockerRowsLocked() const
{
    return blockerRowsLocked_;
}

void LockRootCause::setBlockerRowsLocked(int64_t value)
{
    blockerRowsLocked_ = value;
    blockerRowsLockedIsSet_ = true;
}

bool LockRootCause::blockerRowsLockedIsSet() const
{
    return blockerRowsLockedIsSet_;
}

void LockRootCause::unsetblockerRowsLocked()
{
    blockerRowsLockedIsSet_ = false;
}

int64_t LockRootCause::getBlockerRowsModified() const
{
    return blockerRowsModified_;
}

void LockRootCause::setBlockerRowsModified(int64_t value)
{
    blockerRowsModified_ = value;
    blockerRowsModifiedIsSet_ = true;
}

bool LockRootCause::blockerRowsModifiedIsSet() const
{
    return blockerRowsModifiedIsSet_;
}

void LockRootCause::unsetblockerRowsModified()
{
    blockerRowsModifiedIsSet_ = false;
}

std::vector<std::string>& LockRootCause::getBlockerCurrentSql()
{
    return blockerCurrentSql_;
}

void LockRootCause::setBlockerCurrentSql(const std::vector<std::string>& value)
{
    blockerCurrentSql_ = value;
    blockerCurrentSqlIsSet_ = true;
}

bool LockRootCause::blockerCurrentSqlIsSet() const
{
    return blockerCurrentSqlIsSet_;
}

void LockRootCause::unsetblockerCurrentSql()
{
    blockerCurrentSqlIsSet_ = false;
}

std::string LockRootCause::getBlockerHost() const
{
    return blockerHost_;
}

void LockRootCause::setBlockerHost(const std::string& value)
{
    blockerHost_ = value;
    blockerHostIsSet_ = true;
}

bool LockRootCause::blockerHostIsSet() const
{
    return blockerHostIsSet_;
}

void LockRootCause::unsetblockerHost()
{
    blockerHostIsSet_ = false;
}

std::string LockRootCause::getBlockerCommand() const
{
    return blockerCommand_;
}

void LockRootCause::setBlockerCommand(const std::string& value)
{
    blockerCommand_ = value;
    blockerCommandIsSet_ = true;
}

bool LockRootCause::blockerCommandIsSet() const
{
    return blockerCommandIsSet_;
}

void LockRootCause::unsetblockerCommand()
{
    blockerCommandIsSet_ = false;
}

int64_t LockRootCause::getBlockerThreadId() const
{
    return blockerThreadId_;
}

void LockRootCause::setBlockerThreadId(int64_t value)
{
    blockerThreadId_ = value;
    blockerThreadIdIsSet_ = true;
}

bool LockRootCause::blockerThreadIdIsSet() const
{
    return blockerThreadIdIsSet_;
}

void LockRootCause::unsetblockerThreadId()
{
    blockerThreadIdIsSet_ = false;
}

}
}
}
}
}


