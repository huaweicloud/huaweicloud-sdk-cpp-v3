

#include "huaweicloud/cts/v3/model/UserInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




UserInfo::UserInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    domainIsSet_ = false;
}

UserInfo::~UserInfo() = default;

void UserInfo::validate()
{
}

web::json::value UserInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }

    return val;
}
bool UserInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            BaseUser refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    return ok;
}


std::string UserInfo::getId() const
{
    return id_;
}

void UserInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UserInfo::idIsSet() const
{
    return idIsSet_;
}

void UserInfo::unsetid()
{
    idIsSet_ = false;
}

std::string UserInfo::getName() const
{
    return name_;
}

void UserInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UserInfo::nameIsSet() const
{
    return nameIsSet_;
}

void UserInfo::unsetname()
{
    nameIsSet_ = false;
}

BaseUser UserInfo::getDomain() const
{
    return domain_;
}

void UserInfo::setDomain(const BaseUser& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool UserInfo::domainIsSet() const
{
    return domainIsSet_;
}

void UserInfo::unsetdomain()
{
    domainIsSet_ = false;
}

}
}
}
}
}


