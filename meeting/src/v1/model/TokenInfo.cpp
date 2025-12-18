

#include "huaweicloud/meeting/v1/model/TokenInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




TokenInfo::TokenInfo()
{
    token_ = "";
    tokenIsSet_ = false;
    tmpWsToken_ = "";
    tmpWsTokenIsSet_ = false;
    wsURL_ = "";
    wsURLIsSet_ = false;
    role_ = 0;
    roleIsSet_ = false;
    expireTime_ = 0L;
    expireTimeIsSet_ = false;
    userID_ = "";
    userIDIsSet_ = false;
    orgID_ = "";
    orgIDIsSet_ = false;
    participantID_ = "";
    participantIDIsSet_ = false;
    confTokenExpireTime_ = 0;
    confTokenExpireTimeIsSet_ = false;
    vmrCurrentConfID_ = "";
    vmrCurrentConfIDIsSet_ = false;
    supportNotifyTypeIsSet_ = false;
}

TokenInfo::~TokenInfo() = default;

void TokenInfo::validate()
{
}

web::json::value TokenInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tokenIsSet_) {
        val[utility::conversions::to_string_t("token")] = ModelBase::toJson(token_);
    }
    if(tmpWsTokenIsSet_) {
        val[utility::conversions::to_string_t("tmpWsToken")] = ModelBase::toJson(tmpWsToken_);
    }
    if(wsURLIsSet_) {
        val[utility::conversions::to_string_t("wsURL")] = ModelBase::toJson(wsURL_);
    }
    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expireTime")] = ModelBase::toJson(expireTime_);
    }
    if(userIDIsSet_) {
        val[utility::conversions::to_string_t("userID")] = ModelBase::toJson(userID_);
    }
    if(orgIDIsSet_) {
        val[utility::conversions::to_string_t("orgID")] = ModelBase::toJson(orgID_);
    }
    if(participantIDIsSet_) {
        val[utility::conversions::to_string_t("participantID")] = ModelBase::toJson(participantID_);
    }
    if(confTokenExpireTimeIsSet_) {
        val[utility::conversions::to_string_t("confTokenExpireTime")] = ModelBase::toJson(confTokenExpireTime_);
    }
    if(vmrCurrentConfIDIsSet_) {
        val[utility::conversions::to_string_t("vmrCurrentConfID")] = ModelBase::toJson(vmrCurrentConfID_);
    }
    if(supportNotifyTypeIsSet_) {
        val[utility::conversions::to_string_t("supportNotifyType")] = ModelBase::toJson(supportNotifyType_);
    }

    return val;
}
bool TokenInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tmpWsToken"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tmpWsToken"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTmpWsToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wsURL"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wsURL"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWsURL(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRole(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("userID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("orgID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("orgID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrgID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("participantID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("participantID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParticipantID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confTokenExpireTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confTokenExpireTime"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfTokenExpireTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vmrCurrentConfID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrCurrentConfID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrCurrentConfID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("supportNotifyType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supportNotifyType"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportNotifyType(refVal);
        }
    }
    return ok;
}


std::string TokenInfo::getToken() const
{
    return token_;
}

void TokenInfo::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool TokenInfo::tokenIsSet() const
{
    return tokenIsSet_;
}

void TokenInfo::unsettoken()
{
    tokenIsSet_ = false;
}

std::string TokenInfo::getTmpWsToken() const
{
    return tmpWsToken_;
}

void TokenInfo::setTmpWsToken(const std::string& value)
{
    tmpWsToken_ = value;
    tmpWsTokenIsSet_ = true;
}

bool TokenInfo::tmpWsTokenIsSet() const
{
    return tmpWsTokenIsSet_;
}

void TokenInfo::unsettmpWsToken()
{
    tmpWsTokenIsSet_ = false;
}

std::string TokenInfo::getWsURL() const
{
    return wsURL_;
}

void TokenInfo::setWsURL(const std::string& value)
{
    wsURL_ = value;
    wsURLIsSet_ = true;
}

bool TokenInfo::wsURLIsSet() const
{
    return wsURLIsSet_;
}

void TokenInfo::unsetwsURL()
{
    wsURLIsSet_ = false;
}

int32_t TokenInfo::getRole() const
{
    return role_;
}

void TokenInfo::setRole(int32_t value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool TokenInfo::roleIsSet() const
{
    return roleIsSet_;
}

void TokenInfo::unsetrole()
{
    roleIsSet_ = false;
}

int64_t TokenInfo::getExpireTime() const
{
    return expireTime_;
}

void TokenInfo::setExpireTime(int64_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool TokenInfo::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void TokenInfo::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::string TokenInfo::getUserID() const
{
    return userID_;
}

void TokenInfo::setUserID(const std::string& value)
{
    userID_ = value;
    userIDIsSet_ = true;
}

bool TokenInfo::userIDIsSet() const
{
    return userIDIsSet_;
}

void TokenInfo::unsetuserID()
{
    userIDIsSet_ = false;
}

std::string TokenInfo::getOrgID() const
{
    return orgID_;
}

void TokenInfo::setOrgID(const std::string& value)
{
    orgID_ = value;
    orgIDIsSet_ = true;
}

bool TokenInfo::orgIDIsSet() const
{
    return orgIDIsSet_;
}

void TokenInfo::unsetorgID()
{
    orgIDIsSet_ = false;
}

std::string TokenInfo::getParticipantID() const
{
    return participantID_;
}

void TokenInfo::setParticipantID(const std::string& value)
{
    participantID_ = value;
    participantIDIsSet_ = true;
}

bool TokenInfo::participantIDIsSet() const
{
    return participantIDIsSet_;
}

void TokenInfo::unsetparticipantID()
{
    participantIDIsSet_ = false;
}

int32_t TokenInfo::getConfTokenExpireTime() const
{
    return confTokenExpireTime_;
}

void TokenInfo::setConfTokenExpireTime(int32_t value)
{
    confTokenExpireTime_ = value;
    confTokenExpireTimeIsSet_ = true;
}

bool TokenInfo::confTokenExpireTimeIsSet() const
{
    return confTokenExpireTimeIsSet_;
}

void TokenInfo::unsetconfTokenExpireTime()
{
    confTokenExpireTimeIsSet_ = false;
}

std::string TokenInfo::getVmrCurrentConfID() const
{
    return vmrCurrentConfID_;
}

void TokenInfo::setVmrCurrentConfID(const std::string& value)
{
    vmrCurrentConfID_ = value;
    vmrCurrentConfIDIsSet_ = true;
}

bool TokenInfo::vmrCurrentConfIDIsSet() const
{
    return vmrCurrentConfIDIsSet_;
}

void TokenInfo::unsetvmrCurrentConfID()
{
    vmrCurrentConfIDIsSet_ = false;
}

std::vector<std::string>& TokenInfo::getSupportNotifyType()
{
    return supportNotifyType_;
}

void TokenInfo::setSupportNotifyType(const std::vector<std::string>& value)
{
    supportNotifyType_ = value;
    supportNotifyTypeIsSet_ = true;
}

bool TokenInfo::supportNotifyTypeIsSet() const
{
    return supportNotifyTypeIsSet_;
}

void TokenInfo::unsetsupportNotifyType()
{
    supportNotifyTypeIsSet_ = false;
}

}
}
}
}
}


