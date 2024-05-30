

#include "huaweicloud/organizations/v1/model/ShowOrganizationalUnitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ShowOrganizationalUnitResponse::ShowOrganizationalUnitResponse()
{
    organizationalUnitIsSet_ = false;
}

ShowOrganizationalUnitResponse::~ShowOrganizationalUnitResponse() = default;

void ShowOrganizationalUnitResponse::validate()
{
}

web::json::value ShowOrganizationalUnitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(organizationalUnitIsSet_) {
        val[utility::conversions::to_string_t("organizational_unit")] = ModelBase::toJson(organizationalUnit_);
    }

    return val;
}
bool ShowOrganizationalUnitResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("organizational_unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organizational_unit"));
        if(!fieldValue.is_null())
        {
            OrganizationalUnitDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganizationalUnit(refVal);
        }
    }
    return ok;
}


OrganizationalUnitDto ShowOrganizationalUnitResponse::getOrganizationalUnit() const
{
    return organizationalUnit_;
}

void ShowOrganizationalUnitResponse::setOrganizationalUnit(const OrganizationalUnitDto& value)
{
    organizationalUnit_ = value;
    organizationalUnitIsSet_ = true;
}

bool ShowOrganizationalUnitResponse::organizationalUnitIsSet() const
{
    return organizationalUnitIsSet_;
}

void ShowOrganizationalUnitResponse::unsetorganizationalUnit()
{
    organizationalUnitIsSet_ = false;
}

}
}
}
}
}


