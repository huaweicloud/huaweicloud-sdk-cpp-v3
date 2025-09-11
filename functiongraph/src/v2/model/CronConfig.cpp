

#include "huaweicloud/functiongraph/v2/model/CronConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CronConfig::CronConfig()
{
    name_ = "";
    nameIsSet_ = false;
    cron_ = "";
    cronIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    expiredTime_ = 0L;
    expiredTimeIsSet_ = false;
}

CronConfig::~CronConfig() = default;

void CronConfig::validate()
{
}

web::json::value CronConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(cronIsSet_) {
        val[utility::conversions::to_string_t("cron")] = ModelBase::toJson(cron_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(expiredTimeIsSet_) {
        val[utility::conversions::to_string_t("expired_time")] = ModelBase::toJson(expiredTime_);
    }

    return val;
}
bool CronConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cron"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cron"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCron(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expired_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expired_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiredTime(refVal);
        }
    }
    return ok;
}


std::string CronConfig::getName() const
{
    return name_;
}

void CronConfig::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CronConfig::nameIsSet() const
{
    return nameIsSet_;
}

void CronConfig::unsetname()
{
    nameIsSet_ = false;
}

std::string CronConfig::getCron() const
{
    return cron_;
}

void CronConfig::setCron(const std::string& value)
{
    cron_ = value;
    cronIsSet_ = true;
}

bool CronConfig::cronIsSet() const
{
    return cronIsSet_;
}

void CronConfig::unsetcron()
{
    cronIsSet_ = false;
}

int32_t CronConfig::getCount() const
{
    return count_;
}

void CronConfig::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool CronConfig::countIsSet() const
{
    return countIsSet_;
}

void CronConfig::unsetcount()
{
    countIsSet_ = false;
}

int64_t CronConfig::getStartTime() const
{
    return startTime_;
}

void CronConfig::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CronConfig::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CronConfig::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t CronConfig::getExpiredTime() const
{
    return expiredTime_;
}

void CronConfig::setExpiredTime(int64_t value)
{
    expiredTime_ = value;
    expiredTimeIsSet_ = true;
}

bool CronConfig::expiredTimeIsSet() const
{
    return expiredTimeIsSet_;
}

void CronConfig::unsetexpiredTime()
{
    expiredTimeIsSet_ = false;
}

}
}
}
}
}


