

#include "huaweicloud/codeartsrepo/v4/model/ContributorDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ContributorDto::ContributorDto()
{
    name_ = "";
    nameIsSet_ = false;
    email_ = "";
    emailIsSet_ = false;
    commits_ = 0;
    commitsIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

ContributorDto::~ContributorDto() = default;

void ContributorDto::validate()
{
}

web::json::value ContributorDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }
    if(commitsIsSet_) {
        val[utility::conversions::to_string_t("commits")] = ModelBase::toJson(commits_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(tenantNameIsSet_) {
        val[utility::conversions::to_string_t("tenant_name")] = ModelBase::toJson(tenantName_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }

    return val;
}
bool ContributorDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("commits"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commits"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommits(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tenant_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantName(refVal);
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


std::string ContributorDto::getName() const
{
    return name_;
}

void ContributorDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ContributorDto::nameIsSet() const
{
    return nameIsSet_;
}

void ContributorDto::unsetname()
{
    nameIsSet_ = false;
}

std::string ContributorDto::getEmail() const
{
    return email_;
}

void ContributorDto::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool ContributorDto::emailIsSet() const
{
    return emailIsSet_;
}

void ContributorDto::unsetemail()
{
    emailIsSet_ = false;
}

int32_t ContributorDto::getCommits() const
{
    return commits_;
}

void ContributorDto::setCommits(int32_t value)
{
    commits_ = value;
    commitsIsSet_ = true;
}

bool ContributorDto::commitsIsSet() const
{
    return commitsIsSet_;
}

void ContributorDto::unsetcommits()
{
    commitsIsSet_ = false;
}

std::string ContributorDto::getNickName() const
{
    return nickName_;
}

void ContributorDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool ContributorDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void ContributorDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string ContributorDto::getTenantName() const
{
    return tenantName_;
}

void ContributorDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool ContributorDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void ContributorDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

std::string ContributorDto::getUserName() const
{
    return userName_;
}

void ContributorDto::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ContributorDto::userNameIsSet() const
{
    return userNameIsSet_;
}

void ContributorDto::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


