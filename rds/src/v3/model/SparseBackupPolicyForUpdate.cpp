

#include "huaweicloud/rds/v3/model/SparseBackupPolicyForUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SparseBackupPolicyForUpdate::SparseBackupPolicyForUpdate()
{
    id_ = "";
    idIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
    keepDays_ = 0;
    keepDaysIsSet_ = false;
    reserveBackups_ = false;
    reserveBackupsIsSet_ = false;
}

SparseBackupPolicyForUpdate::~SparseBackupPolicyForUpdate() = default;

void SparseBackupPolicyForUpdate::validate()
{
}

web::json::value SparseBackupPolicyForUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(keepDaysIsSet_) {
        val[utility::conversions::to_string_t("keep_days")] = ModelBase::toJson(keepDays_);
    }
    if(reserveBackupsIsSet_) {
        val[utility::conversions::to_string_t("reserve_backups")] = ModelBase::toJson(reserveBackups_);
    }

    return val;
}
bool SparseBackupPolicyForUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keep_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keep_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reserve_backups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reserve_backups"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReserveBackups(refVal);
        }
    }
    return ok;
}


std::string SparseBackupPolicyForUpdate::getId() const
{
    return id_;
}

void SparseBackupPolicyForUpdate::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SparseBackupPolicyForUpdate::idIsSet() const
{
    return idIsSet_;
}

void SparseBackupPolicyForUpdate::unsetid()
{
    idIsSet_ = false;
}

std::string SparseBackupPolicyForUpdate::getPeriod() const
{
    return period_;
}

void SparseBackupPolicyForUpdate::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool SparseBackupPolicyForUpdate::periodIsSet() const
{
    return periodIsSet_;
}

void SparseBackupPolicyForUpdate::unsetperiod()
{
    periodIsSet_ = false;
}

int32_t SparseBackupPolicyForUpdate::getKeepDays() const
{
    return keepDays_;
}

void SparseBackupPolicyForUpdate::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool SparseBackupPolicyForUpdate::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void SparseBackupPolicyForUpdate::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

bool SparseBackupPolicyForUpdate::isReserveBackups() const
{
    return reserveBackups_;
}

void SparseBackupPolicyForUpdate::setReserveBackups(bool value)
{
    reserveBackups_ = value;
    reserveBackupsIsSet_ = true;
}

bool SparseBackupPolicyForUpdate::reserveBackupsIsSet() const
{
    return reserveBackupsIsSet_;
}

void SparseBackupPolicyForUpdate::unsetreserveBackups()
{
    reserveBackupsIsSet_ = false;
}

}
}
}
}
}


