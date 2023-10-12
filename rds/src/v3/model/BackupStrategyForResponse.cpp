

#include "huaweicloud/rds/v3/model/BackupStrategyForResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BackupStrategyForResponse::BackupStrategyForResponse()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    keepDays_ = 0;
    keepDaysIsSet_ = false;
}

BackupStrategyForResponse::~BackupStrategyForResponse() = default;

void BackupStrategyForResponse::validate()
{
}

web::json::value BackupStrategyForResponse::toJson() const
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
bool BackupStrategyForResponse::fromJson(const web::json::value& val)
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


std::string BackupStrategyForResponse::getStartTime() const
{
    return startTime_;
}

void BackupStrategyForResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool BackupStrategyForResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void BackupStrategyForResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t BackupStrategyForResponse::getKeepDays() const
{
    return keepDays_;
}

void BackupStrategyForResponse::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool BackupStrategyForResponse::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void BackupStrategyForResponse::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

}
}
}
}
}


