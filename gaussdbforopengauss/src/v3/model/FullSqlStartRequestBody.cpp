

#include "huaweicloud/gaussdbforopengauss/v3/model/FullSqlStartRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




FullSqlStartRequestBody::FullSqlStartRequestBody()
{
    saveDays_ = 0;
    saveDaysIsSet_ = false;
    storageMode_ = "";
    storageModeIsSet_ = false;
    isExcludeSysUser_ = false;
    isExcludeSysUserIsSet_ = false;
    ltsConfigIsSet_ = false;
    sqlTypeRangeIsSet_ = false;
}

FullSqlStartRequestBody::~FullSqlStartRequestBody() = default;

void FullSqlStartRequestBody::validate()
{
}

web::json::value FullSqlStartRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(saveDaysIsSet_) {
        val[utility::conversions::to_string_t("save_days")] = ModelBase::toJson(saveDays_);
    }
    if(storageModeIsSet_) {
        val[utility::conversions::to_string_t("storage_mode")] = ModelBase::toJson(storageMode_);
    }
    if(isExcludeSysUserIsSet_) {
        val[utility::conversions::to_string_t("is_exclude_sys_user")] = ModelBase::toJson(isExcludeSysUser_);
    }
    if(ltsConfigIsSet_) {
        val[utility::conversions::to_string_t("lts_config")] = ModelBase::toJson(ltsConfig_);
    }
    if(sqlTypeRangeIsSet_) {
        val[utility::conversions::to_string_t("sql_type_range")] = ModelBase::toJson(sqlTypeRange_);
    }

    return val;
}
bool FullSqlStartRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("is_exclude_sys_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_exclude_sys_user"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsExcludeSysUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_config"));
        if(!fieldValue.is_null())
        {
            LtsInfoOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_type_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_type_range"));
        if(!fieldValue.is_null())
        {
            std::vector<SqlTypeConfigOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlTypeRange(refVal);
        }
    }
    return ok;
}


int32_t FullSqlStartRequestBody::getSaveDays() const
{
    return saveDays_;
}

void FullSqlStartRequestBody::setSaveDays(int32_t value)
{
    saveDays_ = value;
    saveDaysIsSet_ = true;
}

bool FullSqlStartRequestBody::saveDaysIsSet() const
{
    return saveDaysIsSet_;
}

void FullSqlStartRequestBody::unsetsaveDays()
{
    saveDaysIsSet_ = false;
}

std::string FullSqlStartRequestBody::getStorageMode() const
{
    return storageMode_;
}

void FullSqlStartRequestBody::setStorageMode(const std::string& value)
{
    storageMode_ = value;
    storageModeIsSet_ = true;
}

bool FullSqlStartRequestBody::storageModeIsSet() const
{
    return storageModeIsSet_;
}

void FullSqlStartRequestBody::unsetstorageMode()
{
    storageModeIsSet_ = false;
}

bool FullSqlStartRequestBody::isIsExcludeSysUser() const
{
    return isExcludeSysUser_;
}

void FullSqlStartRequestBody::setIsExcludeSysUser(bool value)
{
    isExcludeSysUser_ = value;
    isExcludeSysUserIsSet_ = true;
}

bool FullSqlStartRequestBody::isExcludeSysUserIsSet() const
{
    return isExcludeSysUserIsSet_;
}

void FullSqlStartRequestBody::unsetisExcludeSysUser()
{
    isExcludeSysUserIsSet_ = false;
}

LtsInfoOption FullSqlStartRequestBody::getLtsConfig() const
{
    return ltsConfig_;
}

void FullSqlStartRequestBody::setLtsConfig(const LtsInfoOption& value)
{
    ltsConfig_ = value;
    ltsConfigIsSet_ = true;
}

bool FullSqlStartRequestBody::ltsConfigIsSet() const
{
    return ltsConfigIsSet_;
}

void FullSqlStartRequestBody::unsetltsConfig()
{
    ltsConfigIsSet_ = false;
}

std::vector<SqlTypeConfigOption>& FullSqlStartRequestBody::getSqlTypeRange()
{
    return sqlTypeRange_;
}

void FullSqlStartRequestBody::setSqlTypeRange(const std::vector<SqlTypeConfigOption>& value)
{
    sqlTypeRange_ = value;
    sqlTypeRangeIsSet_ = true;
}

bool FullSqlStartRequestBody::sqlTypeRangeIsSet() const
{
    return sqlTypeRangeIsSet_;
}

void FullSqlStartRequestBody::unsetsqlTypeRange()
{
    sqlTypeRangeIsSet_ = false;
}

}
}
}
}
}


