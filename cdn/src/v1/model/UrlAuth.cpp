

#include "huaweicloud/cdn/v1/model/UrlAuth.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UrlAuth::UrlAuth()
{
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    timeFormat_ = "";
    timeFormatIsSet_ = false;
    expireTime_ = 0;
    expireTimeIsSet_ = false;
}

UrlAuth::~UrlAuth() = default;

void UrlAuth::validate()
{
}

web::json::value UrlAuth::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(timeFormatIsSet_) {
        val[utility::conversions::to_string_t("time_format")] = ModelBase::toJson(timeFormat_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }

    return val;
}
bool UrlAuth::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    return ok;
}


std::string UrlAuth::getStatus() const
{
    return status_;
}

void UrlAuth::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UrlAuth::statusIsSet() const
{
    return statusIsSet_;
}

void UrlAuth::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UrlAuth::getType() const
{
    return type_;
}

void UrlAuth::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UrlAuth::typeIsSet() const
{
    return typeIsSet_;
}

void UrlAuth::unsettype()
{
    typeIsSet_ = false;
}

std::string UrlAuth::getKey() const
{
    return key_;
}

void UrlAuth::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool UrlAuth::keyIsSet() const
{
    return keyIsSet_;
}

void UrlAuth::unsetkey()
{
    keyIsSet_ = false;
}

std::string UrlAuth::getTimeFormat() const
{
    return timeFormat_;
}

void UrlAuth::setTimeFormat(const std::string& value)
{
    timeFormat_ = value;
    timeFormatIsSet_ = true;
}

bool UrlAuth::timeFormatIsSet() const
{
    return timeFormatIsSet_;
}

void UrlAuth::unsettimeFormat()
{
    timeFormatIsSet_ = false;
}

int32_t UrlAuth::getExpireTime() const
{
    return expireTime_;
}

void UrlAuth::setExpireTime(int32_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool UrlAuth::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void UrlAuth::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

}
}
}
}
}


