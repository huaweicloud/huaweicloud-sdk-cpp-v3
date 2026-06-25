

#include "huaweicloud/rds/v3/model/SparseBackupPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SparseBackupPolicy::SparseBackupPolicy()
{
    id_ = "";
    idIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
    keepDays_ = 0;
    keepDaysIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
}

SparseBackupPolicy::~SparseBackupPolicy() = default;

void SparseBackupPolicy::validate()
{
}

web::json::value SparseBackupPolicy::toJson() const
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
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }

    return val;
}
bool SparseBackupPolicy::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    return ok;
}


std::string SparseBackupPolicy::getId() const
{
    return id_;
}

void SparseBackupPolicy::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SparseBackupPolicy::idIsSet() const
{
    return idIsSet_;
}

void SparseBackupPolicy::unsetid()
{
    idIsSet_ = false;
}

std::string SparseBackupPolicy::getPeriod() const
{
    return period_;
}

void SparseBackupPolicy::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool SparseBackupPolicy::periodIsSet() const
{
    return periodIsSet_;
}

void SparseBackupPolicy::unsetperiod()
{
    periodIsSet_ = false;
}

int32_t SparseBackupPolicy::getKeepDays() const
{
    return keepDays_;
}

void SparseBackupPolicy::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool SparseBackupPolicy::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void SparseBackupPolicy::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

std::string SparseBackupPolicy::getStartTime() const
{
    return startTime_;
}

void SparseBackupPolicy::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool SparseBackupPolicy::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void SparseBackupPolicy::unsetstartTime()
{
    startTimeIsSet_ = false;
}

}
}
}
}
}


