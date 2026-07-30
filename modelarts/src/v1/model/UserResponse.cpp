

#include "huaweicloud/modelarts/v1/model/UserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UserResponse::UserResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    domainIsSet_ = false;
}

UserResponse::~UserResponse() = default;

void UserResponse::validate()
{
}

web::json::value UserResponse::toJson() const
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
bool UserResponse::fromJson(const web::json::value& val)
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
            Domain refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    return ok;
}


std::string UserResponse::getId() const
{
    return id_;
}

void UserResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UserResponse::idIsSet() const
{
    return idIsSet_;
}

void UserResponse::unsetid()
{
    idIsSet_ = false;
}

std::string UserResponse::getName() const
{
    return name_;
}

void UserResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UserResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UserResponse::unsetname()
{
    nameIsSet_ = false;
}

Domain UserResponse::getDomain() const
{
    return domain_;
}

void UserResponse::setDomain(const Domain& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool UserResponse::domainIsSet() const
{
    return domainIsSet_;
}

void UserResponse::unsetdomain()
{
    domainIsSet_ = false;
}

}
}
}
}
}


