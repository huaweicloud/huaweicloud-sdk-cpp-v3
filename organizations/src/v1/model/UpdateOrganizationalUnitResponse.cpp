

#include "huaweicloud/organizations/v1/model/UpdateOrganizationalUnitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




UpdateOrganizationalUnitResponse::UpdateOrganizationalUnitResponse()
{
    organizationalUnitIsSet_ = false;
}

UpdateOrganizationalUnitResponse::~UpdateOrganizationalUnitResponse() = default;

void UpdateOrganizationalUnitResponse::validate()
{
}

web::json::value UpdateOrganizationalUnitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(organizationalUnitIsSet_) {
        val[utility::conversions::to_string_t("organizational_unit")] = ModelBase::toJson(organizationalUnit_);
    }

    return val;
}
bool UpdateOrganizationalUnitResponse::fromJson(const web::json::value& val)
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


OrganizationalUnitDto UpdateOrganizationalUnitResponse::getOrganizationalUnit() const
{
    return organizationalUnit_;
}

void UpdateOrganizationalUnitResponse::setOrganizationalUnit(const OrganizationalUnitDto& value)
{
    organizationalUnit_ = value;
    organizationalUnitIsSet_ = true;
}

bool UpdateOrganizationalUnitResponse::organizationalUnitIsSet() const
{
    return organizationalUnitIsSet_;
}

void UpdateOrganizationalUnitResponse::unsetorganizationalUnit()
{
    organizationalUnitIsSet_ = false;
}

}
}
}
}
}


