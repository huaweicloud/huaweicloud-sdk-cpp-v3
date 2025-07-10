

#include "huaweicloud/rgc/v1/model/DeleteManagedOrganizationalUnitsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




DeleteManagedOrganizationalUnitsRequest::DeleteManagedOrganizationalUnitsRequest()
{
    managedOrganizationalUnitId_ = "";
    managedOrganizationalUnitIdIsSet_ = false;
}

DeleteManagedOrganizationalUnitsRequest::~DeleteManagedOrganizationalUnitsRequest() = default;

void DeleteManagedOrganizationalUnitsRequest::validate()
{
}

web::json::value DeleteManagedOrganizationalUnitsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(managedOrganizationalUnitIdIsSet_) {
        val[utility::conversions::to_string_t("managed_organizational_unit_id")] = ModelBase::toJson(managedOrganizationalUnitId_);
    }

    return val;
}
bool DeleteManagedOrganizationalUnitsRequest::fromJson(const web::json::value& val)
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


std::string DeleteManagedOrganizationalUnitsRequest::getManagedOrganizationalUnitId() const
{
    return managedOrganizationalUnitId_;
}

void DeleteManagedOrganizationalUnitsRequest::setManagedOrganizationalUnitId(const std::string& value)
{
    managedOrganizationalUnitId_ = value;
    managedOrganizationalUnitIdIsSet_ = true;
}

bool DeleteManagedOrganizationalUnitsRequest::managedOrganizationalUnitIdIsSet() const
{
    return managedOrganizationalUnitIdIsSet_;
}

void DeleteManagedOrganizationalUnitsRequest::unsetmanagedOrganizationalUnitId()
{
    managedOrganizationalUnitIdIsSet_ = false;
}

}
}
}
}
}


