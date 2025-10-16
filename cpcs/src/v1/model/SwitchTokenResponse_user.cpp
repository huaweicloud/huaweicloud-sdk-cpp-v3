

#include "huaweicloud/cpcs/v1/model/SwitchTokenResponse_user.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




SwitchTokenResponse_user::SwitchTokenResponse_user()
{
    domainIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

SwitchTokenResponse_user::~SwitchTokenResponse_user() = default;

void SwitchTokenResponse_user::validate()
{
}

web::json::value SwitchTokenResponse_user::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool SwitchTokenResponse_user::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            SwitchTokenResponse_user_domain refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


SwitchTokenResponse_user_domain SwitchTokenResponse_user::getDomain() const
{
    return domain_;
}

void SwitchTokenResponse_user::setDomain(const SwitchTokenResponse_user_domain& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool SwitchTokenResponse_user::domainIsSet() const
{
    return domainIsSet_;
}

void SwitchTokenResponse_user::unsetdomain()
{
    domainIsSet_ = false;
}

std::string SwitchTokenResponse_user::getName() const
{
    return name_;
}

void SwitchTokenResponse_user::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SwitchTokenResponse_user::nameIsSet() const
{
    return nameIsSet_;
}

void SwitchTokenResponse_user::unsetname()
{
    nameIsSet_ = false;
}

std::string SwitchTokenResponse_user::getId() const
{
    return id_;
}

void SwitchTokenResponse_user::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SwitchTokenResponse_user::idIsSet() const
{
    return idIsSet_;
}

void SwitchTokenResponse_user::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


