

#include "huaweicloud/drs/v5/model/BackupRestoreOptionInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BackupRestoreOptionInfo::BackupRestoreOptionInfo()
{
    isCover_ = false;
    isCoverIsSet_ = false;
    isDefaultRestore_ = false;
    isDefaultRestoreIsSet_ = false;
    isLastBackup_ = false;
    isLastBackupIsSet_ = false;
    isPrecheck_ = false;
    isPrecheckIsSet_ = false;
    recoveryMode_ = "";
    recoveryModeIsSet_ = false;
    dbNamesIsSet_ = false;
    resetDbNameMapIsSet_ = false;
    isDeleteBackupFile_ = false;
    isDeleteBackupFileIsSet_ = false;
}

BackupRestoreOptionInfo::~BackupRestoreOptionInfo() = default;

void BackupRestoreOptionInfo::validate()
{
}

web::json::value BackupRestoreOptionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isCoverIsSet_) {
        val[utility::conversions::to_string_t("is_cover")] = ModelBase::toJson(isCover_);
    }
    if(isDefaultRestoreIsSet_) {
        val[utility::conversions::to_string_t("is_default_restore")] = ModelBase::toJson(isDefaultRestore_);
    }
    if(isLastBackupIsSet_) {
        val[utility::conversions::to_string_t("is_last_backup")] = ModelBase::toJson(isLastBackup_);
    }
    if(isPrecheckIsSet_) {
        val[utility::conversions::to_string_t("is_precheck")] = ModelBase::toJson(isPrecheck_);
    }
    if(recoveryModeIsSet_) {
        val[utility::conversions::to_string_t("recovery_mode")] = ModelBase::toJson(recoveryMode_);
    }
    if(dbNamesIsSet_) {
        val[utility::conversions::to_string_t("db_names")] = ModelBase::toJson(dbNames_);
    }
    if(resetDbNameMapIsSet_) {
        val[utility::conversions::to_string_t("reset_db_name_map")] = ModelBase::toJson(resetDbNameMap_);
    }
    if(isDeleteBackupFileIsSet_) {
        val[utility::conversions::to_string_t("is_delete_backup_file")] = ModelBase::toJson(isDeleteBackupFile_);
    }

    return val;
}
bool BackupRestoreOptionInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_cover"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_cover"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCover(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_default_restore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_default_restore"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDefaultRestore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_last_backup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_last_backup"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsLastBackup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_precheck"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_precheck"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPrecheck(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recovery_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recovery_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecoveryMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reset_db_name_map"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reset_db_name_map"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResetDbNameMap(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_delete_backup_file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_delete_backup_file"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDeleteBackupFile(refVal);
        }
    }
    return ok;
}


bool BackupRestoreOptionInfo::isIsCover() const
{
    return isCover_;
}

void BackupRestoreOptionInfo::setIsCover(bool value)
{
    isCover_ = value;
    isCoverIsSet_ = true;
}

bool BackupRestoreOptionInfo::isCoverIsSet() const
{
    return isCoverIsSet_;
}

void BackupRestoreOptionInfo::unsetisCover()
{
    isCoverIsSet_ = false;
}

bool BackupRestoreOptionInfo::isIsDefaultRestore() const
{
    return isDefaultRestore_;
}

void BackupRestoreOptionInfo::setIsDefaultRestore(bool value)
{
    isDefaultRestore_ = value;
    isDefaultRestoreIsSet_ = true;
}

bool BackupRestoreOptionInfo::isDefaultRestoreIsSet() const
{
    return isDefaultRestoreIsSet_;
}

void BackupRestoreOptionInfo::unsetisDefaultRestore()
{
    isDefaultRestoreIsSet_ = false;
}

bool BackupRestoreOptionInfo::isIsLastBackup() const
{
    return isLastBackup_;
}

void BackupRestoreOptionInfo::setIsLastBackup(bool value)
{
    isLastBackup_ = value;
    isLastBackupIsSet_ = true;
}

bool BackupRestoreOptionInfo::isLastBackupIsSet() const
{
    return isLastBackupIsSet_;
}

void BackupRestoreOptionInfo::unsetisLastBackup()
{
    isLastBackupIsSet_ = false;
}

bool BackupRestoreOptionInfo::isIsPrecheck() const
{
    return isPrecheck_;
}

void BackupRestoreOptionInfo::setIsPrecheck(bool value)
{
    isPrecheck_ = value;
    isPrecheckIsSet_ = true;
}

bool BackupRestoreOptionInfo::isPrecheckIsSet() const
{
    return isPrecheckIsSet_;
}

void BackupRestoreOptionInfo::unsetisPrecheck()
{
    isPrecheckIsSet_ = false;
}

std::string BackupRestoreOptionInfo::getRecoveryMode() const
{
    return recoveryMode_;
}

void BackupRestoreOptionInfo::setRecoveryMode(const std::string& value)
{
    recoveryMode_ = value;
    recoveryModeIsSet_ = true;
}

bool BackupRestoreOptionInfo::recoveryModeIsSet() const
{
    return recoveryModeIsSet_;
}

void BackupRestoreOptionInfo::unsetrecoveryMode()
{
    recoveryModeIsSet_ = false;
}

std::vector<std::string>& BackupRestoreOptionInfo::getDbNames()
{
    return dbNames_;
}

void BackupRestoreOptionInfo::setDbNames(const std::vector<std::string>& value)
{
    dbNames_ = value;
    dbNamesIsSet_ = true;
}

bool BackupRestoreOptionInfo::dbNamesIsSet() const
{
    return dbNamesIsSet_;
}

void BackupRestoreOptionInfo::unsetdbNames()
{
    dbNamesIsSet_ = false;
}

std::map<std::string, std::string>& BackupRestoreOptionInfo::getResetDbNameMap()
{
    return resetDbNameMap_;
}

void BackupRestoreOptionInfo::setResetDbNameMap(const std::map<std::string, std::string>& value)
{
    resetDbNameMap_ = value;
    resetDbNameMapIsSet_ = true;
}

bool BackupRestoreOptionInfo::resetDbNameMapIsSet() const
{
    return resetDbNameMapIsSet_;
}

void BackupRestoreOptionInfo::unsetresetDbNameMap()
{
    resetDbNameMapIsSet_ = false;
}

bool BackupRestoreOptionInfo::isIsDeleteBackupFile() const
{
    return isDeleteBackupFile_;
}

void BackupRestoreOptionInfo::setIsDeleteBackupFile(bool value)
{
    isDeleteBackupFile_ = value;
    isDeleteBackupFileIsSet_ = true;
}

bool BackupRestoreOptionInfo::isDeleteBackupFileIsSet() const
{
    return isDeleteBackupFileIsSet_;
}

void BackupRestoreOptionInfo::unsetisDeleteBackupFile()
{
    isDeleteBackupFileIsSet_ = false;
}

}
}
}
}
}


