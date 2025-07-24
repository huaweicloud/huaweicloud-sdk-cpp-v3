

#include "huaweicloud/cloudtest/v1/model/ExecuteInfoVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ExecuteInfoVo::ExecuteInfoVo()
{
    time_ = "";
    timeIsSet_ = false;
    timestamp_ = 0L;
    timestampIsSet_ = false;
    duration_ = "";
    durationIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    executeTimes_ = 0;
    executeTimesIsSet_ = false;
}

ExecuteInfoVo::~ExecuteInfoVo() = default;

void ExecuteInfoVo::validate()
{
}

web::json::value ExecuteInfoVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(timestampIsSet_) {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(timestamp_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(executeTimesIsSet_) {
        val[utility::conversions::to_string_t("execute_times")] = ModelBase::toJson(executeTimes_);
    }

    return val;
}
bool ExecuteInfoVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_times"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteTimes(refVal);
        }
    }
    return ok;
}


std::string ExecuteInfoVo::getTime() const
{
    return time_;
}

void ExecuteInfoVo::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool ExecuteInfoVo::timeIsSet() const
{
    return timeIsSet_;
}

void ExecuteInfoVo::unsettime()
{
    timeIsSet_ = false;
}

int64_t ExecuteInfoVo::getTimestamp() const
{
    return timestamp_;
}

void ExecuteInfoVo::setTimestamp(int64_t value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool ExecuteInfoVo::timestampIsSet() const
{
    return timestampIsSet_;
}

void ExecuteInfoVo::unsettimestamp()
{
    timestampIsSet_ = false;
}

std::string ExecuteInfoVo::getDuration() const
{
    return duration_;
}

void ExecuteInfoVo::setDuration(const std::string& value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool ExecuteInfoVo::durationIsSet() const
{
    return durationIsSet_;
}

void ExecuteInfoVo::unsetduration()
{
    durationIsSet_ = false;
}

std::string ExecuteInfoVo::getUserId() const
{
    return userId_;
}

void ExecuteInfoVo::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ExecuteInfoVo::userIdIsSet() const
{
    return userIdIsSet_;
}

void ExecuteInfoVo::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string ExecuteInfoVo::getUserName() const
{
    return userName_;
}

void ExecuteInfoVo::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ExecuteInfoVo::userNameIsSet() const
{
    return userNameIsSet_;
}

void ExecuteInfoVo::unsetuserName()
{
    userNameIsSet_ = false;
}

int32_t ExecuteInfoVo::getExecuteTimes() const
{
    return executeTimes_;
}

void ExecuteInfoVo::setExecuteTimes(int32_t value)
{
    executeTimes_ = value;
    executeTimesIsSet_ = true;
}

bool ExecuteInfoVo::executeTimesIsSet() const
{
    return executeTimesIsSet_;
}

void ExecuteInfoVo::unsetexecuteTimes()
{
    executeTimesIsSet_ = false;
}

}
}
}
}
}


