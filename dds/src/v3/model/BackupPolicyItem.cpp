

#include "huaweicloud/dds/v3/model/BackupPolicyItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




BackupPolicyItem::BackupPolicyItem()
{
    keepDays_ = 0;
    keepDaysIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
}

BackupPolicyItem::~BackupPolicyItem() = default;

void BackupPolicyItem::validate()
{
}

web::json::value BackupPolicyItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keepDaysIsSet_) {
        val[utility::conversions::to_string_t("keep_days")] = ModelBase::toJson(keepDays_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }

    return val;
}
bool BackupPolicyItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    return ok;
}


int32_t BackupPolicyItem::getKeepDays() const
{
    return keepDays_;
}

void BackupPolicyItem::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool BackupPolicyItem::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void BackupPolicyItem::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

std::string BackupPolicyItem::getStartTime() const
{
    return startTime_;
}

void BackupPolicyItem::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool BackupPolicyItem::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void BackupPolicyItem::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string BackupPolicyItem::getPeriod() const
{
    return period_;
}

void BackupPolicyItem::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool BackupPolicyItem::periodIsSet() const
{
    return periodIsSet_;
}

void BackupPolicyItem::unsetperiod()
{
    periodIsSet_ = false;
}

}
}
}
}
}


