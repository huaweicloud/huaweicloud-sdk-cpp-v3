

#include "huaweicloud/cloudtest/v1/model/CreateInfoVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateInfoVo::CreateInfoVo()
{
    time_ = "";
    timeIsSet_ = false;
    timestamp_ = 0L;
    timestampIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

CreateInfoVo::~CreateInfoVo() = default;

void CreateInfoVo::validate()
{
}

web::json::value CreateInfoVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(timestampIsSet_) {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(timestamp_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }

    return val;
}
bool CreateInfoVo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateInfoVo::getTime() const
{
    return time_;
}

void CreateInfoVo::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool CreateInfoVo::timeIsSet() const
{
    return timeIsSet_;
}

void CreateInfoVo::unsettime()
{
    timeIsSet_ = false;
}

int64_t CreateInfoVo::getTimestamp() const
{
    return timestamp_;
}

void CreateInfoVo::setTimestamp(int64_t value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool CreateInfoVo::timestampIsSet() const
{
    return timestampIsSet_;
}

void CreateInfoVo::unsettimestamp()
{
    timestampIsSet_ = false;
}

std::string CreateInfoVo::getUserId() const
{
    return userId_;
}

void CreateInfoVo::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool CreateInfoVo::userIdIsSet() const
{
    return userIdIsSet_;
}

void CreateInfoVo::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string CreateInfoVo::getUserName() const
{
    return userName_;
}

void CreateInfoVo::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool CreateInfoVo::userNameIsSet() const
{
    return userNameIsSet_;
}

void CreateInfoVo::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


