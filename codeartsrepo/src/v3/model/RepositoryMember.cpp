

#include "huaweicloud/codeartsrepo/v3/model/RepositoryMember.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




RepositoryMember::RepositoryMember()
{
    description_ = "";
    descriptionIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    email_ = "";
    emailIsSet_ = false;
    enabled_ = "";
    enabledIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    role_ = 0;
    roleIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
}

RepositoryMember::~RepositoryMember() = default;

void RepositoryMember::validate()
{
}

web::json::value RepositoryMember::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}
bool RepositoryMember::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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


std::string RepositoryMember::getDescription() const
{
    return description_;
}

void RepositoryMember::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool RepositoryMember::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void RepositoryMember::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string RepositoryMember::getDomainId() const
{
    return domainId_;
}

void RepositoryMember::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool RepositoryMember::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void RepositoryMember::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string RepositoryMember::getDomainName() const
{
    return domainName_;
}

void RepositoryMember::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool RepositoryMember::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void RepositoryMember::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string RepositoryMember::getEmail() const
{
    return email_;
}

void RepositoryMember::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool RepositoryMember::emailIsSet() const
{
    return emailIsSet_;
}

void RepositoryMember::unsetemail()
{
    emailIsSet_ = false;
}

std::string RepositoryMember::getEnabled() const
{
    return enabled_;
}

void RepositoryMember::setEnabled(const std::string& value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool RepositoryMember::enabledIsSet() const
{
    return enabledIsSet_;
}

void RepositoryMember::unsetenabled()
{
    enabledIsSet_ = false;
}

std::string RepositoryMember::getName() const
{
    return name_;
}

void RepositoryMember::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RepositoryMember::nameIsSet() const
{
    return nameIsSet_;
}

void RepositoryMember::unsetname()
{
    nameIsSet_ = false;
}

int32_t RepositoryMember::getRole() const
{
    return role_;
}

void RepositoryMember::setRole(int32_t value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool RepositoryMember::roleIsSet() const
{
    return roleIsSet_;
}

void RepositoryMember::unsetrole()
{
    roleIsSet_ = false;
}

std::string RepositoryMember::getUserId() const
{
    return userId_;
}

void RepositoryMember::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool RepositoryMember::userIdIsSet() const
{
    return userIdIsSet_;
}

void RepositoryMember::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


