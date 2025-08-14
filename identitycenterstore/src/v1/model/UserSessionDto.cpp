

#include "huaweicloud/identitycenterstore/v1/model/UserSessionDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




UserSessionDto::UserSessionDto()
{
    creationTime_ = 0L;
    creationTimeIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    sessionId_ = "";
    sessionIdIsSet_ = false;
    sessionNotValidAfter_ = 0L;
    sessionNotValidAfterIsSet_ = false;
    userAgent_ = "";
    userAgentIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
}

UserSessionDto::~UserSessionDto() = default;

void UserSessionDto::validate()
{
}

web::json::value UserSessionDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(creationTimeIsSet_) {
        val[utility::conversions::to_string_t("creation_time")] = ModelBase::toJson(creationTime_);
    }
    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }
    if(sessionIdIsSet_) {
        val[utility::conversions::to_string_t("session_id")] = ModelBase::toJson(sessionId_);
    }
    if(sessionNotValidAfterIsSet_) {
        val[utility::conversions::to_string_t("session_not_valid_after")] = ModelBase::toJson(sessionNotValidAfter_);
    }
    if(userAgentIsSet_) {
        val[utility::conversions::to_string_t("user_agent")] = ModelBase::toJson(userAgent_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}
bool UserSessionDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("creation_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_not_valid_after"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_not_valid_after"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionNotValidAfter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_agent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_agent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserAgent(refVal);
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
    return ok;
}


int64_t UserSessionDto::getCreationTime() const
{
    return creationTime_;
}

void UserSessionDto::setCreationTime(int64_t value)
{
    creationTime_ = value;
    creationTimeIsSet_ = true;
}

bool UserSessionDto::creationTimeIsSet() const
{
    return creationTimeIsSet_;
}

void UserSessionDto::unsetcreationTime()
{
    creationTimeIsSet_ = false;
}

std::string UserSessionDto::getIpAddress() const
{
    return ipAddress_;
}

void UserSessionDto::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool UserSessionDto::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void UserSessionDto::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

std::string UserSessionDto::getSessionId() const
{
    return sessionId_;
}

void UserSessionDto::setSessionId(const std::string& value)
{
    sessionId_ = value;
    sessionIdIsSet_ = true;
}

bool UserSessionDto::sessionIdIsSet() const
{
    return sessionIdIsSet_;
}

void UserSessionDto::unsetsessionId()
{
    sessionIdIsSet_ = false;
}

int64_t UserSessionDto::getSessionNotValidAfter() const
{
    return sessionNotValidAfter_;
}

void UserSessionDto::setSessionNotValidAfter(int64_t value)
{
    sessionNotValidAfter_ = value;
    sessionNotValidAfterIsSet_ = true;
}

bool UserSessionDto::sessionNotValidAfterIsSet() const
{
    return sessionNotValidAfterIsSet_;
}

void UserSessionDto::unsetsessionNotValidAfter()
{
    sessionNotValidAfterIsSet_ = false;
}

std::string UserSessionDto::getUserAgent() const
{
    return userAgent_;
}

void UserSessionDto::setUserAgent(const std::string& value)
{
    userAgent_ = value;
    userAgentIsSet_ = true;
}

bool UserSessionDto::userAgentIsSet() const
{
    return userAgentIsSet_;
}

void UserSessionDto::unsetuserAgent()
{
    userAgentIsSet_ = false;
}

std::string UserSessionDto::getUserId() const
{
    return userId_;
}

void UserSessionDto::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool UserSessionDto::userIdIsSet() const
{
    return userIdIsSet_;
}

void UserSessionDto::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


