

#include "huaweicloud/dds/v3/model/BackupStrategyForItemResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




BackupStrategyForItemResponse::BackupStrategyForItemResponse()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    keepDays_ = 0;
    keepDaysIsSet_ = false;
}

BackupStrategyForItemResponse::~BackupStrategyForItemResponse() = default;

void BackupStrategyForItemResponse::validate()
{
}

web::json::value BackupStrategyForItemResponse::toJson() const
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

bool BackupStrategyForItemResponse::fromJson(const web::json::value& val)
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

std::string BackupStrategyForItemResponse::getStartTime() const
{
    return startTime_;
}

void BackupStrategyForItemResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool BackupStrategyForItemResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void BackupStrategyForItemResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t BackupStrategyForItemResponse::getKeepDays() const
{
    return keepDays_;
}

void BackupStrategyForItemResponse::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool BackupStrategyForItemResponse::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void BackupStrategyForItemResponse::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

}
}
}
}
}


