

#include "huaweicloud/dds/v3/model/BackupStrategy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




BackupStrategy::BackupStrategy()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    keepDays_ = "";
    keepDaysIsSet_ = false;
}

BackupStrategy::~BackupStrategy() = default;

void BackupStrategy::validate()
{
}

web::json::value BackupStrategy::toJson() const
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
bool BackupStrategy::fromJson(const web::json::value& val)
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


std::string BackupStrategy::getStartTime() const
{
    return startTime_;
}

void BackupStrategy::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool BackupStrategy::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void BackupStrategy::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string BackupStrategy::getKeepDays() const
{
    return keepDays_;
}

void BackupStrategy::setKeepDays(const std::string& value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool BackupStrategy::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void BackupStrategy::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

}
}
}
}
}


