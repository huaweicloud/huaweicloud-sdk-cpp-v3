

#include "huaweicloud/projectman/v4/model/AddMemberRequestV4.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




AddMemberRequestV4::AddMemberRequestV4()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    roleId_ = 0;
    roleIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
}

AddMemberRequestV4::~AddMemberRequestV4() = default;

void AddMemberRequestV4::validate()
{
}

web::json::value AddMemberRequestV4::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}
bool AddMemberRequestV4::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleId(refVal);
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


std::string AddMemberRequestV4::getDomainName() const
{
    return domainName_;
}

void AddMemberRequestV4::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool AddMemberRequestV4::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void AddMemberRequestV4::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string AddMemberRequestV4::getDomainId() const
{
    return domainId_;
}

void AddMemberRequestV4::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool AddMemberRequestV4::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void AddMemberRequestV4::unsetdomainId()
{
    domainIdIsSet_ = false;
}

int32_t AddMemberRequestV4::getRoleId() const
{
    return roleId_;
}

void AddMemberRequestV4::setRoleId(int32_t value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool AddMemberRequestV4::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void AddMemberRequestV4::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string AddMemberRequestV4::getUserId() const
{
    return userId_;
}

void AddMemberRequestV4::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool AddMemberRequestV4::userIdIsSet() const
{
    return userIdIsSet_;
}

void AddMemberRequestV4::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


