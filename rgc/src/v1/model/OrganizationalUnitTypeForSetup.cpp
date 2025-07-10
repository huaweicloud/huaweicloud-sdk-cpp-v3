

#include "huaweicloud/rgc/v1/model/OrganizationalUnitTypeForSetup.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {



OrganizationalUnitTypeForSetup::OrganizationalUnitTypeForSetup()
{
}

OrganizationalUnitTypeForSetup::~OrganizationalUnitTypeForSetup()
{
}

void OrganizationalUnitTypeForSetup::validate()
{
}

web::json::value OrganizationalUnitTypeForSetup::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eOrganizationalUnitTypeForSetup::OrganizationalUnitTypeForSetup_CORE) val = web::json::value::string(U("CORE"));
    if (value_ == eOrganizationalUnitTypeForSetup::OrganizationalUnitTypeForSetup_CUSTOM) val = web::json::value::string(U("CUSTOM"));

    return val;
}

bool OrganizationalUnitTypeForSetup::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("CORE")) value_ = eOrganizationalUnitTypeForSetup::OrganizationalUnitTypeForSetup_CORE;
    if (s == utility::conversions::to_string_t("CUSTOM")) value_ = eOrganizationalUnitTypeForSetup::OrganizationalUnitTypeForSetup_CUSTOM;
    return true;
}

OrganizationalUnitTypeForSetup::eOrganizationalUnitTypeForSetup OrganizationalUnitTypeForSetup::getValue() const
{
   return value_;
}

void OrganizationalUnitTypeForSetup::setValue(OrganizationalUnitTypeForSetup::eOrganizationalUnitTypeForSetup const value)
{
   value_ = value;
}


}
}
}
}
}


