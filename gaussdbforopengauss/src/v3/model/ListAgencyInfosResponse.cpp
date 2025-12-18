

#include "huaweicloud/gaussdbforopengauss/v3/model/ListAgencyInfosResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListAgencyInfosResponse::ListAgencyInfosResponse()
{
    name_ = "";
    nameIsSet_ = false;
    isExisted_ = false;
    isExistedIsSet_ = false;
    rolesIsSet_ = false;
}

ListAgencyInfosResponse::~ListAgencyInfosResponse() = default;

void ListAgencyInfosResponse::validate()
{
}

web::json::value ListAgencyInfosResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(isExistedIsSet_) {
        val[utility::conversions::to_string_t("is_existed")] = ModelBase::toJson(isExisted_);
    }
    if(rolesIsSet_) {
        val[utility::conversions::to_string_t("roles")] = ModelBase::toJson(roles_);
    }

    return val;
}
bool ListAgencyInfosResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_existed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_existed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsExisted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("roles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roles"));
        if(!fieldValue.is_null())
        {
            std::vector<AgencyRoleResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoles(refVal);
        }
    }
    return ok;
}


std::string ListAgencyInfosResponse::getName() const
{
    return name_;
}

void ListAgencyInfosResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListAgencyInfosResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ListAgencyInfosResponse::unsetname()
{
    nameIsSet_ = false;
}

bool ListAgencyInfosResponse::isIsExisted() const
{
    return isExisted_;
}

void ListAgencyInfosResponse::setIsExisted(bool value)
{
    isExisted_ = value;
    isExistedIsSet_ = true;
}

bool ListAgencyInfosResponse::isExistedIsSet() const
{
    return isExistedIsSet_;
}

void ListAgencyInfosResponse::unsetisExisted()
{
    isExistedIsSet_ = false;
}

std::vector<AgencyRoleResult>& ListAgencyInfosResponse::getRoles()
{
    return roles_;
}

void ListAgencyInfosResponse::setRoles(const std::vector<AgencyRoleResult>& value)
{
    roles_ = value;
    rolesIsSet_ = true;
}

bool ListAgencyInfosResponse::rolesIsSet() const
{
    return rolesIsSet_;
}

void ListAgencyInfosResponse::unsetroles()
{
    rolesIsSet_ = false;
}

}
}
}
}
}


