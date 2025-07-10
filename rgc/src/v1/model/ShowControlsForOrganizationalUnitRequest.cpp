

#include "huaweicloud/rgc/v1/model/ShowControlsForOrganizationalUnitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowControlsForOrganizationalUnitRequest::ShowControlsForOrganizationalUnitRequest()
{
    managedOrganizationalUnitId_ = "";
    managedOrganizationalUnitIdIsSet_ = false;
    controlId_ = "";
    controlIdIsSet_ = false;
}

ShowControlsForOrganizationalUnitRequest::~ShowControlsForOrganizationalUnitRequest() = default;

void ShowControlsForOrganizationalUnitRequest::validate()
{
}

web::json::value ShowControlsForOrganizationalUnitRequest::toJson() const
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
bool ShowControlsForOrganizationalUnitRequest::fromJson(const web::json::value& val)
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


std::string ShowControlsForOrganizationalUnitRequest::getManagedOrganizationalUnitId() const
{
    return managedOrganizationalUnitId_;
}

void ShowControlsForOrganizationalUnitRequest::setManagedOrganizationalUnitId(const std::string& value)
{
    managedOrganizationalUnitId_ = value;
    managedOrganizationalUnitIdIsSet_ = true;
}

bool ShowControlsForOrganizationalUnitRequest::managedOrganizationalUnitIdIsSet() const
{
    return managedOrganizationalUnitIdIsSet_;
}

void ShowControlsForOrganizationalUnitRequest::unsetmanagedOrganizationalUnitId()
{
    managedOrganizationalUnitIdIsSet_ = false;
}

std::string ShowControlsForOrganizationalUnitRequest::getControlId() const
{
    return controlId_;
}

void ShowControlsForOrganizationalUnitRequest::setControlId(const std::string& value)
{
    controlId_ = value;
    controlIdIsSet_ = true;
}

bool ShowControlsForOrganizationalUnitRequest::controlIdIsSet() const
{
    return controlIdIsSet_;
}

void ShowControlsForOrganizationalUnitRequest::unsetcontrolId()
{
    controlIdIsSet_ = false;
}

}
}
}
}
}


