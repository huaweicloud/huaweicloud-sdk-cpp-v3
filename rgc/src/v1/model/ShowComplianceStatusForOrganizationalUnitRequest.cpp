

#include "huaweicloud/rgc/v1/model/ShowComplianceStatusForOrganizationalUnitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowComplianceStatusForOrganizationalUnitRequest::ShowComplianceStatusForOrganizationalUnitRequest()
{
    managedOrganizationalUnitId_ = "";
    managedOrganizationalUnitIdIsSet_ = false;
    controlId_ = "";
    controlIdIsSet_ = false;
}

ShowComplianceStatusForOrganizationalUnitRequest::~ShowComplianceStatusForOrganizationalUnitRequest() = default;

void ShowComplianceStatusForOrganizationalUnitRequest::validate()
{
}

web::json::value ShowComplianceStatusForOrganizationalUnitRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(managedOrganizationalUnitIdIsSet_) {
        val[utility::conversions::to_string_t("managed_organizational_unit_id")] = ModelBase::toJson(managedOrganizationalUnitId_);
    }
    if(controlIdIsSet_) {
        val[utility::conversions::to_string_t("control_id")] = ModelBase::toJson(controlId_);
    }

    return val;
}
bool ShowComplianceStatusForOrganizationalUnitRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("control_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("control_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControlId(refVal);
        }
    }
    return ok;
}


std::string ShowComplianceStatusForOrganizationalUnitRequest::getManagedOrganizationalUnitId() const
{
    return managedOrganizationalUnitId_;
}

void ShowComplianceStatusForOrganizationalUnitRequest::setManagedOrganizationalUnitId(const std::string& value)
{
    managedOrganizationalUnitId_ = value;
    managedOrganizationalUnitIdIsSet_ = true;
}

bool ShowComplianceStatusForOrganizationalUnitRequest::managedOrganizationalUnitIdIsSet() const
{
    return managedOrganizationalUnitIdIsSet_;
}

void ShowComplianceStatusForOrganizationalUnitRequest::unsetmanagedOrganizationalUnitId()
{
    managedOrganizationalUnitIdIsSet_ = false;
}

std::string ShowComplianceStatusForOrganizationalUnitRequest::getControlId() const
{
    return controlId_;
}

void ShowComplianceStatusForOrganizationalUnitRequest::setControlId(const std::string& value)
{
    controlId_ = value;
    controlIdIsSet_ = true;
}

bool ShowComplianceStatusForOrganizationalUnitRequest::controlIdIsSet() const
{
    return controlIdIsSet_;
}

void ShowComplianceStatusForOrganizationalUnitRequest::unsetcontrolId()
{
    controlIdIsSet_ = false;
}

}
}
}
}
}


