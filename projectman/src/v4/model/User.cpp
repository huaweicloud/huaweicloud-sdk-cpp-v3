

#include "huaweicloud/projectman/v4/model/User.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




User::User()
{
    gender_ = "";
    genderIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
}

User::~User() = default;

void User::validate()
{
}

web::json::value User::toJson() const
{
    web::json::value val = web::json::value::object();

    if(genderIsSet_) {
        val[utility::conversions::to_string_t("gender")] = ModelBase::toJson(gender_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }

    return val;
}
bool User::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("gender"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gender"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGender(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    return ok;
}


std::string User::getGender() const
{
    return gender_;
}

void User::setGender(const std::string& value)
{
    gender_ = value;
    genderIsSet_ = true;
}

bool User::genderIsSet() const
{
    return genderIsSet_;
}

void User::unsetgender()
{
    genderIsSet_ = false;
}

std::string User::getUserId() const
{
    return userId_;
}

void User::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool User::userIdIsSet() const
{
    return userIdIsSet_;
}

void User::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string User::getUserName() const
{
    return userName_;
}

void User::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool User::userNameIsSet() const
{
    return userNameIsSet_;
}

void User::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string User::getNickName() const
{
    return nickName_;
}

void User::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool User::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void User::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string User::getDomainId() const
{
    return domainId_;
}

void User::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool User::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void User::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string User::getDomainName() const
{
    return domainName_;
}

void User::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool User::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void User::unsetdomainName()
{
    domainNameIsSet_ = false;
}

}
}
}
}
}


