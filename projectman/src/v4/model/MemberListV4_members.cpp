

#include "huaweicloud/projectman/v4/model/MemberListV4_members.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




MemberListV4_members::MemberListV4_members()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    userNumId_ = 0;
    userNumIdIsSet_ = false;
    roleId_ = 0;
    roleIdIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    roleName_ = "";
    roleNameIsSet_ = false;
    userType_ = "";
    userTypeIsSet_ = false;
    forbidden_ = 0;
    forbiddenIsSet_ = false;
}

MemberListV4_members::~MemberListV4_members() = default;

void MemberListV4_members::validate()
{
}

web::json::value MemberListV4_members::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(userNumIdIsSet_) {
        val[utility::conversions::to_string_t("user_num_id")] = ModelBase::toJson(userNumId_);
    }
    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(roleNameIsSet_) {
        val[utility::conversions::to_string_t("role_name")] = ModelBase::toJson(roleName_);
    }
    if(userTypeIsSet_) {
        val[utility::conversions::to_string_t("user_type")] = ModelBase::toJson(userType_);
    }
    if(forbiddenIsSet_) {
        val[utility::conversions::to_string_t("forbidden")] = ModelBase::toJson(forbidden_);
    }

    return val;
}
bool MemberListV4_members::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("user_num_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_num_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserNumId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("role_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forbidden"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forbidden"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForbidden(refVal);
        }
    }
    return ok;
}


std::string MemberListV4_members::getDomainId() const
{
    return domainId_;
}

void MemberListV4_members::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool MemberListV4_members::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void MemberListV4_members::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string MemberListV4_members::getDomainName() const
{
    return domainName_;
}

void MemberListV4_members::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool MemberListV4_members::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void MemberListV4_members::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string MemberListV4_members::getUserId() const
{
    return userId_;
}

void MemberListV4_members::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool MemberListV4_members::userIdIsSet() const
{
    return userIdIsSet_;
}

void MemberListV4_members::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string MemberListV4_members::getUserName() const
{
    return userName_;
}

void MemberListV4_members::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool MemberListV4_members::userNameIsSet() const
{
    return userNameIsSet_;
}

void MemberListV4_members::unsetuserName()
{
    userNameIsSet_ = false;
}

int32_t MemberListV4_members::getUserNumId() const
{
    return userNumId_;
}

void MemberListV4_members::setUserNumId(int32_t value)
{
    userNumId_ = value;
    userNumIdIsSet_ = true;
}

bool MemberListV4_members::userNumIdIsSet() const
{
    return userNumIdIsSet_;
}

void MemberListV4_members::unsetuserNumId()
{
    userNumIdIsSet_ = false;
}

int32_t MemberListV4_members::getRoleId() const
{
    return roleId_;
}

void MemberListV4_members::setRoleId(int32_t value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool MemberListV4_members::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void MemberListV4_members::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string MemberListV4_members::getNickName() const
{
    return nickName_;
}

void MemberListV4_members::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool MemberListV4_members::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void MemberListV4_members::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string MemberListV4_members::getRoleName() const
{
    return roleName_;
}

void MemberListV4_members::setRoleName(const std::string& value)
{
    roleName_ = value;
    roleNameIsSet_ = true;
}

bool MemberListV4_members::roleNameIsSet() const
{
    return roleNameIsSet_;
}

void MemberListV4_members::unsetroleName()
{
    roleNameIsSet_ = false;
}

std::string MemberListV4_members::getUserType() const
{
    return userType_;
}

void MemberListV4_members::setUserType(const std::string& value)
{
    userType_ = value;
    userTypeIsSet_ = true;
}

bool MemberListV4_members::userTypeIsSet() const
{
    return userTypeIsSet_;
}

void MemberListV4_members::unsetuserType()
{
    userTypeIsSet_ = false;
}

int32_t MemberListV4_members::getForbidden() const
{
    return forbidden_;
}

void MemberListV4_members::setForbidden(int32_t value)
{
    forbidden_ = value;
    forbiddenIsSet_ = true;
}

bool MemberListV4_members::forbiddenIsSet() const
{
    return forbiddenIsSet_;
}

void MemberListV4_members::unsetforbidden()
{
    forbiddenIsSet_ = false;
}

}
}
}
}
}


