

#include "huaweicloud/codehub/v3/model/RepoMemberInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




RepoMemberInfo::RepoMemberInfo()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    role_ = 0;
    roleIsSet_ = false;
}

RepoMemberInfo::~RepoMemberInfo() = default;

void RepoMemberInfo::validate()
{
}

web::json::value RepoMemberInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }

    return val;
}
bool RepoMemberInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    return ok;
}


std::string RepoMemberInfo::getDomainId() const
{
    return domainId_;
}

void RepoMemberInfo::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool RepoMemberInfo::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void RepoMemberInfo::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string RepoMemberInfo::getDomainName() const
{
    return domainName_;
}

void RepoMemberInfo::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool RepoMemberInfo::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void RepoMemberInfo::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string RepoMemberInfo::getId() const
{
    return id_;
}

void RepoMemberInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RepoMemberInfo::idIsSet() const
{
    return idIsSet_;
}

void RepoMemberInfo::unsetid()
{
    idIsSet_ = false;
}

std::string RepoMemberInfo::getName() const
{
    return name_;
}

void RepoMemberInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RepoMemberInfo::nameIsSet() const
{
    return nameIsSet_;
}

void RepoMemberInfo::unsetname()
{
    nameIsSet_ = false;
}

int32_t RepoMemberInfo::getRole() const
{
    return role_;
}

void RepoMemberInfo::setRole(int32_t value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool RepoMemberInfo::roleIsSet() const
{
    return roleIsSet_;
}

void RepoMemberInfo::unsetrole()
{
    roleIsSet_ = false;
}

}
}
}
}
}


