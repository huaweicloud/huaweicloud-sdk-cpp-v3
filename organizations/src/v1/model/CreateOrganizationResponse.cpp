

#include "huaweicloud/organizations/v1/model/CreateOrganizationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CreateOrganizationResponse::CreateOrganizationResponse()
{
    organizationIsSet_ = false;
}

CreateOrganizationResponse::~CreateOrganizationResponse() = default;

void CreateOrganizationResponse::validate()
{
}

web::json::value CreateOrganizationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(organizationIsSet_) {
        val[utility::conversions::to_string_t("organization")] = ModelBase::toJson(organization_);
    }

    return val;
}
bool CreateOrganizationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("organization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organization"));
        if(!fieldValue.is_null())
        {
            OrganizationDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganization(refVal);
        }
    }
    return ok;
}


OrganizationDto CreateOrganizationResponse::getOrganization() const
{
    return organization_;
}

void CreateOrganizationResponse::setOrganization(const OrganizationDto& value)
{
    organization_ = value;
    organizationIsSet_ = true;
}

bool CreateOrganizationResponse::organizationIsSet() const
{
    return organizationIsSet_;
}

void CreateOrganizationResponse::unsetorganization()
{
    organizationIsSet_ = false;
}

}
}
}
}
}


