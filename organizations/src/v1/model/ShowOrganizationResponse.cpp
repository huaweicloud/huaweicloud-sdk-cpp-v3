

#include "huaweicloud/organizations/v1/model/ShowOrganizationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ShowOrganizationResponse::ShowOrganizationResponse()
{
    organizationIsSet_ = false;
}

ShowOrganizationResponse::~ShowOrganizationResponse() = default;

void ShowOrganizationResponse::validate()
{
}

web::json::value ShowOrganizationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(organizationIsSet_) {
        val[utility::conversions::to_string_t("organization")] = ModelBase::toJson(organization_);
    }

    return val;
}
bool ShowOrganizationResponse::fromJson(const web::json::value& val)
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


OrganizationDto ShowOrganizationResponse::getOrganization() const
{
    return organization_;
}

void ShowOrganizationResponse::setOrganization(const OrganizationDto& value)
{
    organization_ = value;
    organizationIsSet_ = true;
}

bool ShowOrganizationResponse::organizationIsSet() const
{
    return organizationIsSet_;
}

void ShowOrganizationResponse::unsetorganization()
{
    organizationIsSet_ = false;
}

}
}
}
}
}


