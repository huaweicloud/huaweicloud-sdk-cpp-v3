

#include "huaweicloud/rgc/v1/model/OrganizationalUnitType.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {



OrganizationalUnitType::OrganizationalUnitType()
{
}

OrganizationalUnitType::~OrganizationalUnitType()
{
}

void OrganizationalUnitType::validate()
{
}

web::json::value OrganizationalUnitType::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eOrganizationalUnitType::OrganizationalUnitType_CORE) val = web::json::value::string(U("CORE"));
    if (value_ == eOrganizationalUnitType::OrganizationalUnitType_CUSTOM) val = web::json::value::string(U("CUSTOM"));
    if (value_ == eOrganizationalUnitType::OrganizationalUnitType_ROOT) val = web::json::value::string(U("ROOT"));

    return val;
}

bool OrganizationalUnitType::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("CORE")) value_ = eOrganizationalUnitType::OrganizationalUnitType_CORE;
    if (s == utility::conversions::to_string_t("CUSTOM")) value_ = eOrganizationalUnitType::OrganizationalUnitType_CUSTOM;
    if (s == utility::conversions::to_string_t("ROOT")) value_ = eOrganizationalUnitType::OrganizationalUnitType_ROOT;
    return true;
}

OrganizationalUnitType::eOrganizationalUnitType OrganizationalUnitType::getValue() const
{
   return value_;
}

void OrganizationalUnitType::setValue(OrganizationalUnitType::eOrganizationalUnitType const value)
{
   value_ = value;
}


}
}
}
}
}


