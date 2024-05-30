

#include "huaweicloud/organizations/v1/model/CreateOrganizationalUnitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CreateOrganizationalUnitResponse::CreateOrganizationalUnitResponse()
{
    organizationalUnitIsSet_ = false;
}

CreateOrganizationalUnitResponse::~CreateOrganizationalUnitResponse() = default;

void CreateOrganizationalUnitResponse::validate()
{
}

web::json::value CreateOrganizationalUnitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(organizationalUnitIsSet_) {
        val[utility::conversions::to_string_t("organizational_unit")] = ModelBase::toJson(organizationalUnit_);
    }

    return val;
}
bool CreateOrganizationalUnitResponse::fromJson(const web::json::value& val)
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


OrganizationalUnitDto CreateOrganizationalUnitResponse::getOrganizationalUnit() const
{
    return organizationalUnit_;
}

void CreateOrganizationalUnitResponse::setOrganizationalUnit(const OrganizationalUnitDto& value)
{
    organizationalUnit_ = value;
    organizationalUnitIsSet_ = true;
}

bool CreateOrganizationalUnitResponse::organizationalUnitIsSet() const
{
    return organizationalUnitIsSet_;
}

void CreateOrganizationalUnitResponse::unsetorganizationalUnit()
{
    organizationalUnitIsSet_ = false;
}

}
}
}
}
}


