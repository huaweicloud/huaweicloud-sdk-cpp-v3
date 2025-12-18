

#include "huaweicloud/meeting/v1/model/RestInviteWithPwdReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestInviteWithPwdReqBody::RestInviteWithPwdReqBody()
{
    callNum_ = "";
    callNumIsSet_ = false;
    orgID_ = "";
    orgIDIsSet_ = false;
    confID_ = "";
    confIDIsSet_ = false;
    pwd_ = "";
    pwdIsSet_ = false;
    numBelongsType_ = 0;
    numBelongsTypeIsSet_ = false;
    isNotOverlayPidName_ = false;
    isNotOverlayPidNameIsSet_ = false;
}

RestInviteWithPwdReqBody::~RestInviteWithPwdReqBody() = default;

void RestInviteWithPwdReqBody::validate()
{
}

web::json::value RestInviteWithPwdReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(callNumIsSet_) {
        val[utility::conversions::to_string_t("callNum")] = ModelBase::toJson(callNum_);
    }
    if(orgIDIsSet_) {
        val[utility::conversions::to_string_t("orgID")] = ModelBase::toJson(orgID_);
    }
    if(confIDIsSet_) {
        val[utility::conversions::to_string_t("confID")] = ModelBase::toJson(confID_);
    }
    if(pwdIsSet_) {
        val[utility::conversions::to_string_t("pwd")] = ModelBase::toJson(pwd_);
    }
    if(numBelongsTypeIsSet_) {
        val[utility::conversions::to_string_t("numBelongsType")] = ModelBase::toJson(numBelongsType_);
    }
    if(isNotOverlayPidNameIsSet_) {
        val[utility::conversions::to_string_t("isNotOverlayPidName")] = ModelBase::toJson(isNotOverlayPidName_);
    }

    return val;
}
bool RestInviteWithPwdReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("callNum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callNum"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallNum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("confID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPwd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("numBelongsType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("numBelongsType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumBelongsType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isNotOverlayPidName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isNotOverlayPidName"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsNotOverlayPidName(refVal);
        }
    }
    return ok;
}


std::string RestInviteWithPwdReqBody::getCallNum() const
{
    return callNum_;
}

void RestInviteWithPwdReqBody::setCallNum(const std::string& value)
{
    callNum_ = value;
    callNumIsSet_ = true;
}

bool RestInviteWithPwdReqBody::callNumIsSet() const
{
    return callNumIsSet_;
}

void RestInviteWithPwdReqBody::unsetcallNum()
{
    callNumIsSet_ = false;
}

std::string RestInviteWithPwdReqBody::getOrgID() const
{
    return orgID_;
}

void RestInviteWithPwdReqBody::setOrgID(const std::string& value)
{
    orgID_ = value;
    orgIDIsSet_ = true;
}

bool RestInviteWithPwdReqBody::orgIDIsSet() const
{
    return orgIDIsSet_;
}

void RestInviteWithPwdReqBody::unsetorgID()
{
    orgIDIsSet_ = false;
}

std::string RestInviteWithPwdReqBody::getConfID() const
{
    return confID_;
}

void RestInviteWithPwdReqBody::setConfID(const std::string& value)
{
    confID_ = value;
    confIDIsSet_ = true;
}

bool RestInviteWithPwdReqBody::confIDIsSet() const
{
    return confIDIsSet_;
}

void RestInviteWithPwdReqBody::unsetconfID()
{
    confIDIsSet_ = false;
}

std::string RestInviteWithPwdReqBody::getPwd() const
{
    return pwd_;
}

void RestInviteWithPwdReqBody::setPwd(const std::string& value)
{
    pwd_ = value;
    pwdIsSet_ = true;
}

bool RestInviteWithPwdReqBody::pwdIsSet() const
{
    return pwdIsSet_;
}

void RestInviteWithPwdReqBody::unsetpwd()
{
    pwdIsSet_ = false;
}

int32_t RestInviteWithPwdReqBody::getNumBelongsType() const
{
    return numBelongsType_;
}

void RestInviteWithPwdReqBody::setNumBelongsType(int32_t value)
{
    numBelongsType_ = value;
    numBelongsTypeIsSet_ = true;
}

bool RestInviteWithPwdReqBody::numBelongsTypeIsSet() const
{
    return numBelongsTypeIsSet_;
}

void RestInviteWithPwdReqBody::unsetnumBelongsType()
{
    numBelongsTypeIsSet_ = false;
}

bool RestInviteWithPwdReqBody::isIsNotOverlayPidName() const
{
    return isNotOverlayPidName_;
}

void RestInviteWithPwdReqBody::setIsNotOverlayPidName(bool value)
{
    isNotOverlayPidName_ = value;
    isNotOverlayPidNameIsSet_ = true;
}

bool RestInviteWithPwdReqBody::isNotOverlayPidNameIsSet() const
{
    return isNotOverlayPidNameIsSet_;
}

void RestInviteWithPwdReqBody::unsetisNotOverlayPidName()
{
    isNotOverlayPidNameIsSet_ = false;
}

}
}
}
}
}


