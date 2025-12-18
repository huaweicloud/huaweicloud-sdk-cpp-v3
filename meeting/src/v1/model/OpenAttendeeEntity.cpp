

#include "huaweicloud/meeting/v1/model/OpenAttendeeEntity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




OpenAttendeeEntity::OpenAttendeeEntity()
{
    appId_ = "";
    appIdIsSet_ = false;
    userAccount_ = "";
    userAccountIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    email_ = "";
    emailIsSet_ = false;
    sms_ = "";
    smsIsSet_ = false;
    isHardTerminal_ = false;
    isHardTerminalIsSet_ = false;
}

OpenAttendeeEntity::~OpenAttendeeEntity() = default;

void OpenAttendeeEntity::validate()
{
}

web::json::value OpenAttendeeEntity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("appId")] = ModelBase::toJson(appId_);
    }
    if(userAccountIsSet_) {
        val[utility::conversions::to_string_t("userAccount")] = ModelBase::toJson(userAccount_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("userName")] = ModelBase::toJson(userName_);
    }
    if(deptNameIsSet_) {
        val[utility::conversions::to_string_t("deptName")] = ModelBase::toJson(deptName_);
    }
    if(phoneIsSet_) {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(phone_);
    }
    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }
    if(smsIsSet_) {
        val[utility::conversions::to_string_t("sms")] = ModelBase::toJson(sms_);
    }
    if(isHardTerminalIsSet_) {
        val[utility::conversions::to_string_t("isHardTerminal")] = ModelBase::toJson(isHardTerminal_);
    }

    return val;
}
bool OpenAttendeeEntity::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("appId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("appId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userAccount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userAccount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deptName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sms"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSms(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isHardTerminal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isHardTerminal"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsHardTerminal(refVal);
        }
    }
    return ok;
}


std::string OpenAttendeeEntity::getAppId() const
{
    return appId_;
}

void OpenAttendeeEntity::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool OpenAttendeeEntity::appIdIsSet() const
{
    return appIdIsSet_;
}

void OpenAttendeeEntity::unsetappId()
{
    appIdIsSet_ = false;
}

std::string OpenAttendeeEntity::getUserAccount() const
{
    return userAccount_;
}

void OpenAttendeeEntity::setUserAccount(const std::string& value)
{
    userAccount_ = value;
    userAccountIsSet_ = true;
}

bool OpenAttendeeEntity::userAccountIsSet() const
{
    return userAccountIsSet_;
}

void OpenAttendeeEntity::unsetuserAccount()
{
    userAccountIsSet_ = false;
}

std::string OpenAttendeeEntity::getUserName() const
{
    return userName_;
}

void OpenAttendeeEntity::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool OpenAttendeeEntity::userNameIsSet() const
{
    return userNameIsSet_;
}

void OpenAttendeeEntity::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string OpenAttendeeEntity::getDeptName() const
{
    return deptName_;
}

void OpenAttendeeEntity::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool OpenAttendeeEntity::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void OpenAttendeeEntity::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string OpenAttendeeEntity::getPhone() const
{
    return phone_;
}

void OpenAttendeeEntity::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool OpenAttendeeEntity::phoneIsSet() const
{
    return phoneIsSet_;
}

void OpenAttendeeEntity::unsetphone()
{
    phoneIsSet_ = false;
}

std::string OpenAttendeeEntity::getEmail() const
{
    return email_;
}

void OpenAttendeeEntity::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool OpenAttendeeEntity::emailIsSet() const
{
    return emailIsSet_;
}

void OpenAttendeeEntity::unsetemail()
{
    emailIsSet_ = false;
}

std::string OpenAttendeeEntity::getSms() const
{
    return sms_;
}

void OpenAttendeeEntity::setSms(const std::string& value)
{
    sms_ = value;
    smsIsSet_ = true;
}

bool OpenAttendeeEntity::smsIsSet() const
{
    return smsIsSet_;
}

void OpenAttendeeEntity::unsetsms()
{
    smsIsSet_ = false;
}

bool OpenAttendeeEntity::isIsHardTerminal() const
{
    return isHardTerminal_;
}

void OpenAttendeeEntity::setIsHardTerminal(bool value)
{
    isHardTerminal_ = value;
    isHardTerminalIsSet_ = true;
}

bool OpenAttendeeEntity::isHardTerminalIsSet() const
{
    return isHardTerminalIsSet_;
}

void OpenAttendeeEntity::unsetisHardTerminal()
{
    isHardTerminalIsSet_ = false;
}

}
}
}
}
}


