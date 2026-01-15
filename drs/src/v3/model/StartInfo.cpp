

#include "huaweicloud/drs/v3/model/StartInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




StartInfo::StartInfo()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    isOnlyInitTask_ = false;
    isOnlyInitTaskIsSet_ = false;
    isAutoCreateCompare_ = false;
    isAutoCreateCompareIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
}

StartInfo::~StartInfo() = default;

void StartInfo::validate()
{
}

web::json::value StartInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(isOnlyInitTaskIsSet_) {
        val[utility::conversions::to_string_t("is_only_init_task")] = ModelBase::toJson(isOnlyInitTask_);
    }
    if(isAutoCreateCompareIsSet_) {
        val[utility::conversions::to_string_t("is_auto_create_compare")] = ModelBase::toJson(isAutoCreateCompare_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }

    return val;
}
bool StartInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_only_init_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_only_init_task"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOnlyInitTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_create_compare"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_create_compare"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoCreateCompare(refVal);
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
    return ok;
}


std::string StartInfo::getJobId() const
{
    return jobId_;
}

void StartInfo::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StartInfo::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StartInfo::unsetjobId()
{
    jobIdIsSet_ = false;
}

bool StartInfo::isIsOnlyInitTask() const
{
    return isOnlyInitTask_;
}

void StartInfo::setIsOnlyInitTask(bool value)
{
    isOnlyInitTask_ = value;
    isOnlyInitTaskIsSet_ = true;
}

bool StartInfo::isOnlyInitTaskIsSet() const
{
    return isOnlyInitTaskIsSet_;
}

void StartInfo::unsetisOnlyInitTask()
{
    isOnlyInitTaskIsSet_ = false;
}

bool StartInfo::isIsAutoCreateCompare() const
{
    return isAutoCreateCompare_;
}

void StartInfo::setIsAutoCreateCompare(bool value)
{
    isAutoCreateCompare_ = value;
    isAutoCreateCompareIsSet_ = true;
}

bool StartInfo::isAutoCreateCompareIsSet() const
{
    return isAutoCreateCompareIsSet_;
}

void StartInfo::unsetisAutoCreateCompare()
{
    isAutoCreateCompareIsSet_ = false;
}

std::string StartInfo::getStartTime() const
{
    return startTime_;
}

void StartInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool StartInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void StartInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

}
}
}
}
}


