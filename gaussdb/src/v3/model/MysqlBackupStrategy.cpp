

#include "huaweicloud/gaussdb/v3/model/MysqlBackupStrategy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlBackupStrategy::MysqlBackupStrategy()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    keepDays_ = "";
    keepDaysIsSet_ = false;
}

MysqlBackupStrategy::~MysqlBackupStrategy() = default;

void MysqlBackupStrategy::validate()
{
}

web::json::value MysqlBackupStrategy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(keepDaysIsSet_) {
        val[utility::conversions::to_string_t("keep_days")] = ModelBase::toJson(keepDays_);
    }

    return val;
}
bool MysqlBackupStrategy::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepDays(refVal);
        }
    }
    return ok;
}


std::string MysqlBackupStrategy::getStartTime() const
{
    return startTime_;
}

void MysqlBackupStrategy::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool MysqlBackupStrategy::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void MysqlBackupStrategy::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string MysqlBackupStrategy::getKeepDays() const
{
    return keepDays_;
}

void MysqlBackupStrategy::setKeepDays(const std::string& value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool MysqlBackupStrategy::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void MysqlBackupStrategy::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

}
}
}
}
}


