

#include "huaweicloud/drs/v5/model/ShowAgencyInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowAgencyInfoResponse::ShowAgencyInfoResponse()
{
    isExisted_ = false;
    isExistedIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    rolesIsSet_ = false;
}

ShowAgencyInfoResponse::~ShowAgencyInfoResponse() = default;

void ShowAgencyInfoResponse::validate()
{
}

web::json::value ShowAgencyInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isExistedIsSet_) {
        val[utility::conversions::to_string_t("is_existed")] = ModelBase::toJson(isExisted_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(rolesIsSet_) {
        val[utility::conversions::to_string_t("roles")] = ModelBase::toJson(roles_);
    }

    return val;
}
bool ShowAgencyInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_existed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_existed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsExisted(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("roles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roles"));
        if(!fieldValue.is_null())
        {
            std::vector<AgencyRole> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoles(refVal);
        }
    }
    return ok;
}


bool ShowAgencyInfoResponse::isIsExisted() const
{
    return isExisted_;
}

void ShowAgencyInfoResponse::setIsExisted(bool value)
{
    isExisted_ = value;
    isExistedIsSet_ = true;
}

bool ShowAgencyInfoResponse::isExistedIsSet() const
{
    return isExistedIsSet_;
}

void ShowAgencyInfoResponse::unsetisExisted()
{
    isExistedIsSet_ = false;
}

std::string ShowAgencyInfoResponse::getName() const
{
    return name_;
}

void ShowAgencyInfoResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowAgencyInfoResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowAgencyInfoResponse::unsetname()
{
    nameIsSet_ = false;
}

std::vector<AgencyRole>& ShowAgencyInfoResponse::getRoles()
{
    return roles_;
}

void ShowAgencyInfoResponse::setRoles(const std::vector<AgencyRole>& value)
{
    roles_ = value;
    rolesIsSet_ = true;
}

bool ShowAgencyInfoResponse::rolesIsSet() const
{
    return rolesIsSet_;
}

void ShowAgencyInfoResponse::unsetroles()
{
    rolesIsSet_ = false;
}

}
}
}
}
}


