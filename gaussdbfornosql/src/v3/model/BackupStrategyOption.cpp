

#include "huaweicloud/gaussdbfornosql/v3/model/BackupStrategyOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




BackupStrategyOption::BackupStrategyOption()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    keepDays_ = "";
    keepDaysIsSet_ = false;
}

BackupStrategyOption::~BackupStrategyOption() = default;

void BackupStrategyOption::validate()
{
}

web::json::value BackupStrategyOption::toJson() const
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

bool BackupStrategyOption::fromJson(const web::json::value& val)
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

std::string BackupStrategyOption::getStartTime() const
{
    return startTime_;
}

void BackupStrategyOption::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool BackupStrategyOption::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void BackupStrategyOption::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string BackupStrategyOption::getKeepDays() const
{
    return keepDays_;
}

void BackupStrategyOption::setKeepDays(const std::string& value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool BackupStrategyOption::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void BackupStrategyOption::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

}
}
}
}
}


