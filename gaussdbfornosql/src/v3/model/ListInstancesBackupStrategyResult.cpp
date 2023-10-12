

#include "huaweicloud/gaussdbfornosql/v3/model/ListInstancesBackupStrategyResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListInstancesBackupStrategyResult::ListInstancesBackupStrategyResult()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    keepDays_ = 0;
    keepDaysIsSet_ = false;
}

ListInstancesBackupStrategyResult::~ListInstancesBackupStrategyResult() = default;

void ListInstancesBackupStrategyResult::validate()
{
}

web::json::value ListInstancesBackupStrategyResult::toJson() const
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
bool ListInstancesBackupStrategyResult::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListInstancesBackupStrategyResult::getStartTime() const
{
    return startTime_;
}

void ListInstancesBackupStrategyResult::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListInstancesBackupStrategyResult::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListInstancesBackupStrategyResult::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t ListInstancesBackupStrategyResult::getKeepDays() const
{
    return keepDays_;
}

void ListInstancesBackupStrategyResult::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool ListInstancesBackupStrategyResult::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void ListInstancesBackupStrategyResult::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

}
}
}
}
}


