

#include "huaweicloud/gaussdb/v3/model/MysqlBackupPolicy.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlBackupPolicy::MysqlBackupPolicy()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    keepDays_ = 0;
    keepDaysIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
    retentionNumBackupLevel1_ = 0;
    retentionNumBackupLevel1IsSet_ = false;
}

MysqlBackupPolicy::~MysqlBackupPolicy() = default;

void MysqlBackupPolicy::validate()
{
}

web::json::value MysqlBackupPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(keepDaysIsSet_) {
        val[utility::conversions::to_string_t("keep_days")] = ModelBase::toJson(keepDays_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(retentionNumBackupLevel1IsSet_) {
        val[utility::conversions::to_string_t("retention_num_backup_level1")] = ModelBase::toJson(retentionNumBackupLevel1_);
    }

    return val;
}

bool MysqlBackupPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retention_num_backup_level1"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_num_backup_level1"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionNumBackupLevel1(refVal);
        }
    }
    return ok;
}

std::string MysqlBackupPolicy::getStartTime() const
{
    return startTime_;
}

void MysqlBackupPolicy::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool MysqlBackupPolicy::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void MysqlBackupPolicy::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t MysqlBackupPolicy::getKeepDays() const
{
    return keepDays_;
}

void MysqlBackupPolicy::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool MysqlBackupPolicy::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void MysqlBackupPolicy::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

std::string MysqlBackupPolicy::getPeriod() const
{
    return period_;
}

void MysqlBackupPolicy::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool MysqlBackupPolicy::periodIsSet() const
{
    return periodIsSet_;
}

void MysqlBackupPolicy::unsetperiod()
{
    periodIsSet_ = false;
}

int32_t MysqlBackupPolicy::getRetentionNumBackupLevel1() const
{
    return retentionNumBackupLevel1_;
}

void MysqlBackupPolicy::setRetentionNumBackupLevel1(int32_t value)
{
    retentionNumBackupLevel1_ = value;
    retentionNumBackupLevel1IsSet_ = true;
}

bool MysqlBackupPolicy::retentionNumBackupLevel1IsSet() const
{
    return retentionNumBackupLevel1IsSet_;
}

void MysqlBackupPolicy::unsetretentionNumBackupLevel1()
{
    retentionNumBackupLevel1IsSet_ = false;
}

}
}
}
}
}


