

#include "huaweicloud/rgc/v1/model/DeregisterOrganizationalUnitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




DeregisterOrganizationalUnitRequest::DeregisterOrganizationalUnitRequest()
{
    managedOrganizationalUnitId_ = "";
    managedOrganizationalUnitIdIsSet_ = false;
}

DeregisterOrganizationalUnitRequest::~DeregisterOrganizationalUnitRequest() = default;

void DeregisterOrganizationalUnitRequest::validate()
{
}

web::json::value DeregisterOrganizationalUnitRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(managedOrganizationalUnitIdIsSet_) {
        val[utility::conversions::to_string_t("managed_organizational_unit_id")] = ModelBase::toJson(managedOrganizationalUnitId_);
    }

    return val;
}
bool DeregisterOrganizationalUnitRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("managed_organizational_unit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("managed_organizational_unit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagedOrganizationalUnitId(refVal);
        }
    }
    return ok;
}


std::string DeregisterOrganizationalUnitRequest::getManagedOrganizationalUnitId() const
{
    return managedOrganizationalUnitId_;
}

void DeregisterOrganizationalUnitRequest::setManagedOrganizationalUnitId(const std::string& value)
{
    managedOrganizationalUnitId_ = value;
    managedOrganizationalUnitIdIsSet_ = true;
}

bool DeregisterOrganizationalUnitRequest::managedOrganizationalUnitIdIsSet() const
{
    return managedOrganizationalUnitIdIsSet_;
}

void DeregisterOrganizationalUnitRequest::unsetmanagedOrganizationalUnitId()
{
    managedOrganizationalUnitIdIsSet_ = false;
}

}
}
}
}
}


