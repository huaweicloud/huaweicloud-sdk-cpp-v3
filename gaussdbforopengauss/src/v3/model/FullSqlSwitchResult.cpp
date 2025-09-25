

#include "huaweicloud/gaussdbforopengauss/v3/model/FullSqlSwitchResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




FullSqlSwitchResult::FullSqlSwitchResult()
{
    isOpen_ = false;
    isOpenIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    saveDays_ = 0;
    saveDaysIsSet_ = false;
    storageMode_ = "";
    storageModeIsSet_ = false;
    ltsConfigIsSet_ = false;
    sqlTypeRangeIsSet_ = false;
    isExcludeSysUser_ = false;
    isExcludeSysUserIsSet_ = false;
}

FullSqlSwitchResult::~FullSqlSwitchResult() = default;

void FullSqlSwitchResult::validate()
{
}

web::json::value FullSqlSwitchResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isOpenIsSet_) {
        val[utility::conversions::to_string_t("is_open")] = ModelBase::toJson(isOpen_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(saveDaysIsSet_) {
        val[utility::conversions::to_string_t("save_days")] = ModelBase::toJson(saveDays_);
    }
    if(storageModeIsSet_) {
        val[utility::conversions::to_string_t("storage_mode")] = ModelBase::toJson(storageMode_);
    }
    if(ltsConfigIsSet_) {
        val[utility::conversions::to_string_t("lts_config")] = ModelBase::toJson(ltsConfig_);
    }
    if(sqlTypeRangeIsSet_) {
        val[utility::conversions::to_string_t("sql_type_range")] = ModelBase::toJson(sqlTypeRange_);
    }
    if(isExcludeSysUserIsSet_) {
        val[utility::conversions::to_string_t("is_exclude_sys_user")] = ModelBase::toJson(isExcludeSysUser_);
    }

    return val;
}
bool FullSqlSwitchResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_open"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_open"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOpen(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("save_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("save_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSaveDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_config"));
        if(!fieldValue.is_null())
        {
            LtsConfigInfoResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_type_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_type_range"));
        if(!fieldValue.is_null())
        {
            std::vector<SqlTypeInfoResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlTypeRange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_exclude_sys_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_exclude_sys_user"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsExcludeSysUser(refVal);
        }
    }
    return ok;
}


bool FullSqlSwitchResult::isIsOpen() const
{
    return isOpen_;
}

void FullSqlSwitchResult::setIsOpen(bool value)
{
    isOpen_ = value;
    isOpenIsSet_ = true;
}

bool FullSqlSwitchResult::isOpenIsSet() const
{
    return isOpenIsSet_;
}

void FullSqlSwitchResult::unsetisOpen()
{
    isOpenIsSet_ = false;
}

std::string FullSqlSwitchResult::getBeginTime() const
{
    return beginTime_;
}

void FullSqlSwitchResult::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool FullSqlSwitchResult::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void FullSqlSwitchResult::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string FullSqlSwitchResult::getEndTime() const
{
    return endTime_;
}

void FullSqlSwitchResult::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool FullSqlSwitchResult::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void FullSqlSwitchResult::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t FullSqlSwitchResult::getSaveDays() const
{
    return saveDays_;
}

void FullSqlSwitchResult::setSaveDays(int32_t value)
{
    saveDays_ = value;
    saveDaysIsSet_ = true;
}

bool FullSqlSwitchResult::saveDaysIsSet() const
{
    return saveDaysIsSet_;
}

void FullSqlSwitchResult::unsetsaveDays()
{
    saveDaysIsSet_ = false;
}

std::string FullSqlSwitchResult::getStorageMode() const
{
    return storageMode_;
}

void FullSqlSwitchResult::setStorageMode(const std::string& value)
{
    storageMode_ = value;
    storageModeIsSet_ = true;
}

bool FullSqlSwitchResult::storageModeIsSet() const
{
    return storageModeIsSet_;
}

void FullSqlSwitchResult::unsetstorageMode()
{
    storageModeIsSet_ = false;
}

LtsConfigInfoResult FullSqlSwitchResult::getLtsConfig() const
{
    return ltsConfig_;
}

void FullSqlSwitchResult::setLtsConfig(const LtsConfigInfoResult& value)
{
    ltsConfig_ = value;
    ltsConfigIsSet_ = true;
}

bool FullSqlSwitchResult::ltsConfigIsSet() const
{
    return ltsConfigIsSet_;
}

void FullSqlSwitchResult::unsetltsConfig()
{
    ltsConfigIsSet_ = false;
}

std::vector<SqlTypeInfoResult>& FullSqlSwitchResult::getSqlTypeRange()
{
    return sqlTypeRange_;
}

void FullSqlSwitchResult::setSqlTypeRange(const std::vector<SqlTypeInfoResult>& value)
{
    sqlTypeRange_ = value;
    sqlTypeRangeIsSet_ = true;
}

bool FullSqlSwitchResult::sqlTypeRangeIsSet() const
{
    return sqlTypeRangeIsSet_;
}

void FullSqlSwitchResult::unsetsqlTypeRange()
{
    sqlTypeRangeIsSet_ = false;
}

bool FullSqlSwitchResult::isIsExcludeSysUser() const
{
    return isExcludeSysUser_;
}

void FullSqlSwitchResult::setIsExcludeSysUser(bool value)
{
    isExcludeSysUser_ = value;
    isExcludeSysUserIsSet_ = true;
}

bool FullSqlSwitchResult::isExcludeSysUserIsSet() const
{
    return isExcludeSysUserIsSet_;
}

void FullSqlSwitchResult::unsetisExcludeSysUser()
{
    isExcludeSysUserIsSet_ = false;
}

}
}
}
}
}


