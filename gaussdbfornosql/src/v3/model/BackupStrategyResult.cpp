

#include "huaweicloud/gaussdbfornosql/v3/model/BackupStrategyResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




BackupStrategyResult::BackupStrategyResult()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    keepDays_ = "";
    keepDaysIsSet_ = false;
}

BackupStrategyResult::~BackupStrategyResult() = default;

void BackupStrategyResult::validate()
{
}

web::json::value BackupStrategyResult::toJson() const
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

bool BackupStrategyResult::fromJson(const web::json::value& val)
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

std::string BackupStrategyResult::getStartTime() const
{
    return startTime_;
}

void BackupStrategyResult::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool BackupStrategyResult::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void BackupStrategyResult::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string BackupStrategyResult::getKeepDays() const
{
    return keepDays_;
}

void BackupStrategyResult::setKeepDays(const std::string& value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool BackupStrategyResult::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void BackupStrategyResult::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

}
}
}
}
}


