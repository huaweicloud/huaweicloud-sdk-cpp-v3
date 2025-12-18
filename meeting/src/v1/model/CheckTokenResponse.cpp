

#include "huaweicloud/meeting/v1/model/CheckTokenResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CheckTokenResponse::CheckTokenResponse()
{
    accessToken_ = "";
    accessTokenIsSet_ = false;
    tokenIp_ = "";
    tokenIpIsSet_ = false;
    validPeriod_ = 0L;
    validPeriodIsSet_ = false;
    expireTime_ = 0L;
    expireTimeIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    userIsSet_ = false;
    clientType_ = 0;
    clientTypeIsSet_ = false;
    forceLoginInd_ = 0;
    forceLoginIndIsSet_ = false;
    firstLogin_ = false;
    firstLoginIsSet_ = false;
    pwdExpired_ = false;
    pwdExpiredIsSet_ = false;
    daysPwdAvailable_ = 0;
    daysPwdAvailableIsSet_ = false;
    proxyTokenIsSet_ = false;
    delayDelete_ = false;
    delayDeleteIsSet_ = false;
    tokenType_ = 0;
    tokenTypeIsSet_ = false;
    refreshToken_ = "";
    refreshTokenIsSet_ = false;
    refreshValidPeriod_ = 0L;
    refreshValidPeriodIsSet_ = false;
    refreshExpireTime_ = 0L;
    refreshExpireTimeIsSet_ = false;
    refreshCreateTime_ = 0L;
    refreshCreateTimeIsSet_ = false;
}

CheckTokenResponse::~CheckTokenResponse() = default;

void CheckTokenResponse::validate()
{
}

web::json::value CheckTokenResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessTokenIsSet_) {
        val[utility::conversions::to_string_t("accessToken")] = ModelBase::toJson(accessToken_);
    }
    if(tokenIpIsSet_) {
        val[utility::conversions::to_string_t("tokenIp")] = ModelBase::toJson(tokenIp_);
    }
    if(validPeriodIsSet_) {
        val[utility::conversions::to_string_t("validPeriod")] = ModelBase::toJson(validPeriod_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expireTime")] = ModelBase::toJson(expireTime_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("createTime")] = ModelBase::toJson(createTime_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(clientTypeIsSet_) {
        val[utility::conversions::to_string_t("clientType")] = ModelBase::toJson(clientType_);
    }
    if(forceLoginIndIsSet_) {
        val[utility::conversions::to_string_t("forceLoginInd")] = ModelBase::toJson(forceLoginInd_);
    }
    if(firstLoginIsSet_) {
        val[utility::conversions::to_string_t("firstLogin")] = ModelBase::toJson(firstLogin_);
    }
    if(pwdExpiredIsSet_) {
        val[utility::conversions::to_string_t("pwdExpired")] = ModelBase::toJson(pwdExpired_);
    }
    if(daysPwdAvailableIsSet_) {
        val[utility::conversions::to_string_t("daysPwdAvailable")] = ModelBase::toJson(daysPwdAvailable_);
    }
    if(proxyTokenIsSet_) {
        val[utility::conversions::to_string_t("proxyToken")] = ModelBase::toJson(proxyToken_);
    }
    if(delayDeleteIsSet_) {
        val[utility::conversions::to_string_t("delayDelete")] = ModelBase::toJson(delayDelete_);
    }
    if(tokenTypeIsSet_) {
        val[utility::conversions::to_string_t("tokenType")] = ModelBase::toJson(tokenType_);
    }
    if(refreshTokenIsSet_) {
        val[utility::conversions::to_string_t("refreshToken")] = ModelBase::toJson(refreshToken_);
    }
    if(refreshValidPeriodIsSet_) {
        val[utility::conversions::to_string_t("refreshValidPeriod")] = ModelBase::toJson(refreshValidPeriod_);
    }
    if(refreshExpireTimeIsSet_) {
        val[utility::conversions::to_string_t("refreshExpireTime")] = ModelBase::toJson(refreshExpireTime_);
    }
    if(refreshCreateTimeIsSet_) {
        val[utility::conversions::to_string_t("refreshCreateTime")] = ModelBase::toJson(refreshCreateTime_);
    }

    return val;
}
bool CheckTokenResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("accessToken"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accessToken"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tokenIp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tokenIp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTokenIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("validPeriod"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("validPeriod"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expireTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expireTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            UserInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clientType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clientType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forceLoginInd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forceLoginInd"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForceLoginInd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("firstLogin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firstLogin"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirstLogin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pwdExpired"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pwdExpired"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPwdExpired(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("daysPwdAvailable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("daysPwdAvailable"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDaysPwdAvailable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxyToken"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxyToken"));
        if(!fieldValue.is_null())
        {
            ProxyTokenDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delayDelete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delayDelete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelayDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tokenType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tokenType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTokenType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("refreshToken"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("refreshToken"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefreshToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("refreshValidPeriod"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("refreshValidPeriod"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefreshValidPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("refreshExpireTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("refreshExpireTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefreshExpireTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("refreshCreateTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("refreshCreateTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefreshCreateTime(refVal);
        }
    }
    return ok;
}


std::string CheckTokenResponse::getAccessToken() const
{
    return accessToken_;
}

void CheckTokenResponse::setAccessToken(const std::string& value)
{
    accessToken_ = value;
    accessTokenIsSet_ = true;
}

bool CheckTokenResponse::accessTokenIsSet() const
{
    return accessTokenIsSet_;
}

void CheckTokenResponse::unsetaccessToken()
{
    accessTokenIsSet_ = false;
}

std::string CheckTokenResponse::getTokenIp() const
{
    return tokenIp_;
}

void CheckTokenResponse::setTokenIp(const std::string& value)
{
    tokenIp_ = value;
    tokenIpIsSet_ = true;
}

bool CheckTokenResponse::tokenIpIsSet() const
{
    return tokenIpIsSet_;
}

void CheckTokenResponse::unsettokenIp()
{
    tokenIpIsSet_ = false;
}

int64_t CheckTokenResponse::getValidPeriod() const
{
    return validPeriod_;
}

void CheckTokenResponse::setValidPeriod(int64_t value)
{
    validPeriod_ = value;
    validPeriodIsSet_ = true;
}

bool CheckTokenResponse::validPeriodIsSet() const
{
    return validPeriodIsSet_;
}

void CheckTokenResponse::unsetvalidPeriod()
{
    validPeriodIsSet_ = false;
}

int64_t CheckTokenResponse::getExpireTime() const
{
    return expireTime_;
}

void CheckTokenResponse::setExpireTime(int64_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool CheckTokenResponse::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void CheckTokenResponse::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

int64_t CheckTokenResponse::getCreateTime() const
{
    return createTime_;
}

void CheckTokenResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CheckTokenResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CheckTokenResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

UserInfo CheckTokenResponse::getUser() const
{
    return user_;
}

void CheckTokenResponse::setUser(const UserInfo& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool CheckTokenResponse::userIsSet() const
{
    return userIsSet_;
}

void CheckTokenResponse::unsetuser()
{
    userIsSet_ = false;
}

int32_t CheckTokenResponse::getClientType() const
{
    return clientType_;
}

void CheckTokenResponse::setClientType(int32_t value)
{
    clientType_ = value;
    clientTypeIsSet_ = true;
}

bool CheckTokenResponse::clientTypeIsSet() const
{
    return clientTypeIsSet_;
}

void CheckTokenResponse::unsetclientType()
{
    clientTypeIsSet_ = false;
}

int32_t CheckTokenResponse::getForceLoginInd() const
{
    return forceLoginInd_;
}

void CheckTokenResponse::setForceLoginInd(int32_t value)
{
    forceLoginInd_ = value;
    forceLoginIndIsSet_ = true;
}

bool CheckTokenResponse::forceLoginIndIsSet() const
{
    return forceLoginIndIsSet_;
}

void CheckTokenResponse::unsetforceLoginInd()
{
    forceLoginIndIsSet_ = false;
}

bool CheckTokenResponse::isFirstLogin() const
{
    return firstLogin_;
}

void CheckTokenResponse::setFirstLogin(bool value)
{
    firstLogin_ = value;
    firstLoginIsSet_ = true;
}

bool CheckTokenResponse::firstLoginIsSet() const
{
    return firstLoginIsSet_;
}

void CheckTokenResponse::unsetfirstLogin()
{
    firstLoginIsSet_ = false;
}

bool CheckTokenResponse::isPwdExpired() const
{
    return pwdExpired_;
}

void CheckTokenResponse::setPwdExpired(bool value)
{
    pwdExpired_ = value;
    pwdExpiredIsSet_ = true;
}

bool CheckTokenResponse::pwdExpiredIsSet() const
{
    return pwdExpiredIsSet_;
}

void CheckTokenResponse::unsetpwdExpired()
{
    pwdExpiredIsSet_ = false;
}

int32_t CheckTokenResponse::getDaysPwdAvailable() const
{
    return daysPwdAvailable_;
}

void CheckTokenResponse::setDaysPwdAvailable(int32_t value)
{
    daysPwdAvailable_ = value;
    daysPwdAvailableIsSet_ = true;
}

bool CheckTokenResponse::daysPwdAvailableIsSet() const
{
    return daysPwdAvailableIsSet_;
}

void CheckTokenResponse::unsetdaysPwdAvailable()
{
    daysPwdAvailableIsSet_ = false;
}

ProxyTokenDTO CheckTokenResponse::getProxyToken() const
{
    return proxyToken_;
}

void CheckTokenResponse::setProxyToken(const ProxyTokenDTO& value)
{
    proxyToken_ = value;
    proxyTokenIsSet_ = true;
}

bool CheckTokenResponse::proxyTokenIsSet() const
{
    return proxyTokenIsSet_;
}

void CheckTokenResponse::unsetproxyToken()
{
    proxyTokenIsSet_ = false;
}

bool CheckTokenResponse::isDelayDelete() const
{
    return delayDelete_;
}

void CheckTokenResponse::setDelayDelete(bool value)
{
    delayDelete_ = value;
    delayDeleteIsSet_ = true;
}

bool CheckTokenResponse::delayDeleteIsSet() const
{
    return delayDeleteIsSet_;
}

void CheckTokenResponse::unsetdelayDelete()
{
    delayDeleteIsSet_ = false;
}

int32_t CheckTokenResponse::getTokenType() const
{
    return tokenType_;
}

void CheckTokenResponse::setTokenType(int32_t value)
{
    tokenType_ = value;
    tokenTypeIsSet_ = true;
}

bool CheckTokenResponse::tokenTypeIsSet() const
{
    return tokenTypeIsSet_;
}

void CheckTokenResponse::unsettokenType()
{
    tokenTypeIsSet_ = false;
}

std::string CheckTokenResponse::getRefreshToken() const
{
    return refreshToken_;
}

void CheckTokenResponse::setRefreshToken(const std::string& value)
{
    refreshToken_ = value;
    refreshTokenIsSet_ = true;
}

bool CheckTokenResponse::refreshTokenIsSet() const
{
    return refreshTokenIsSet_;
}

void CheckTokenResponse::unsetrefreshToken()
{
    refreshTokenIsSet_ = false;
}

int64_t CheckTokenResponse::getRefreshValidPeriod() const
{
    return refreshValidPeriod_;
}

void CheckTokenResponse::setRefreshValidPeriod(int64_t value)
{
    refreshValidPeriod_ = value;
    refreshValidPeriodIsSet_ = true;
}

bool CheckTokenResponse::refreshValidPeriodIsSet() const
{
    return refreshValidPeriodIsSet_;
}

void CheckTokenResponse::unsetrefreshValidPeriod()
{
    refreshValidPeriodIsSet_ = false;
}

int64_t CheckTokenResponse::getRefreshExpireTime() const
{
    return refreshExpireTime_;
}

void CheckTokenResponse::setRefreshExpireTime(int64_t value)
{
    refreshExpireTime_ = value;
    refreshExpireTimeIsSet_ = true;
}

bool CheckTokenResponse::refreshExpireTimeIsSet() const
{
    return refreshExpireTimeIsSet_;
}

void CheckTokenResponse::unsetrefreshExpireTime()
{
    refreshExpireTimeIsSet_ = false;
}

int64_t CheckTokenResponse::getRefreshCreateTime() const
{
    return refreshCreateTime_;
}

void CheckTokenResponse::setRefreshCreateTime(int64_t value)
{
    refreshCreateTime_ = value;
    refreshCreateTimeIsSet_ = true;
}

bool CheckTokenResponse::refreshCreateTimeIsSet() const
{
    return refreshCreateTimeIsSet_;
}

void CheckTokenResponse::unsetrefreshCreateTime()
{
    refreshCreateTimeIsSet_ = false;
}

}
}
}
}
}


