

#include "huaweicloud/projectman/v4/model/UserVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UserVO::UserVO()
{
    userId_ = "";
    userIdIsSet_ = false;
    userNumId_ = 0;
    userNumIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    roleId_ = "";
    roleIdIsSet_ = false;
    roleName_ = "";
    roleNameIsSet_ = false;
    roleCode_ = "";
    roleCodeIsSet_ = false;
}

UserVO::~UserVO() = default;

void UserVO::validate()
{
}

web::json::value UserVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNumIdIsSet_) {
        val[utility::conversions::to_string_t("user_num_id")] = ModelBase::toJson(userNumId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(roleNameIsSet_) {
        val[utility::conversions::to_string_t("role_name")] = ModelBase::toJson(roleName_);
    }
    if(roleCodeIsSet_) {
        val[utility::conversions::to_string_t("role_code")] = ModelBase::toJson(roleCode_);
    }

    return val;
}
bool UserVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_num_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_num_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserNumId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleCode(refVal);
        }
    }
    return ok;
}


std::string UserVO::getUserId() const
{
    return userId_;
}

void UserVO::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool UserVO::userIdIsSet() const
{
    return userIdIsSet_;
}

void UserVO::unsetuserId()
{
    userIdIsSet_ = false;
}

int32_t UserVO::getUserNumId() const
{
    return userNumId_;
}

void UserVO::setUserNumId(int32_t value)
{
    userNumId_ = value;
    userNumIdIsSet_ = true;
}

bool UserVO::userNumIdIsSet() const
{
    return userNumIdIsSet_;
}

void UserVO::unsetuserNumId()
{
    userNumIdIsSet_ = false;
}

std::string UserVO::getUserName() const
{
    return userName_;
}

void UserVO::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool UserVO::userNameIsSet() const
{
    return userNameIsSet_;
}

void UserVO::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string UserVO::getDomainId() const
{
    return domainId_;
}

void UserVO::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UserVO::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UserVO::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string UserVO::getDomainName() const
{
    return domainName_;
}

void UserVO::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool UserVO::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void UserVO::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string UserVO::getNickName() const
{
    return nickName_;
}

void UserVO::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool UserVO::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void UserVO::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string UserVO::getRoleId() const
{
    return roleId_;
}

void UserVO::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool UserVO::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void UserVO::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string UserVO::getRoleName() const
{
    return roleName_;
}

void UserVO::setRoleName(const std::string& value)
{
    roleName_ = value;
    roleNameIsSet_ = true;
}

bool UserVO::roleNameIsSet() const
{
    return roleNameIsSet_;
}

void UserVO::unsetroleName()
{
    roleNameIsSet_ = false;
}

std::string UserVO::getRoleCode() const
{
    return roleCode_;
}

void UserVO::setRoleCode(const std::string& value)
{
    roleCode_ = value;
    roleCodeIsSet_ = true;
}

bool UserVO::roleCodeIsSet() const
{
    return roleCodeIsSet_;
}

void UserVO::unsetroleCode()
{
    roleCodeIsSet_ = false;
}

}
}
}
}
}


