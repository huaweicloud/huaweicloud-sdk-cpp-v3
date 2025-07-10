

#include "huaweicloud/rgc/v1/model/ControlViolation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ControlViolation::ControlViolation()
{
    accountId_ = "";
    accountIdIsSet_ = false;
    accountName_ = "";
    accountNameIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    controlId_ = "";
    controlIdIsSet_ = false;
    parentOrganizationalUnitId_ = "";
    parentOrganizationalUnitIdIsSet_ = false;
    parentOrganizationalUnitName_ = "";
    parentOrganizationalUnitNameIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    resource_ = "";
    resourceIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    service_ = "";
    serviceIsSet_ = false;
}

ControlViolation::~ControlViolation() = default;

void ControlViolation::validate()
{
}

web::json::value ControlViolation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }
    if(accountNameIsSet_) {
        val[utility::conversions::to_string_t("account_name")] = ModelBase::toJson(accountName_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(controlIdIsSet_) {
        val[utility::conversions::to_string_t("control_id")] = ModelBase::toJson(controlId_);
    }
    if(parentOrganizationalUnitIdIsSet_) {
        val[utility::conversions::to_string_t("parent_organizational_unit_id")] = ModelBase::toJson(parentOrganizationalUnitId_);
    }
    if(parentOrganizationalUnitNameIsSet_) {
        val[utility::conversions::to_string_t("parent_organizational_unit_name")] = ModelBase::toJson(parentOrganizationalUnitName_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(serviceIsSet_) {
        val[utility::conversions::to_string_t("service")] = ModelBase::toJson(service_);
    }

    return val;
}
bool ControlViolation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("account_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parent_organizational_unit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_organizational_unit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentOrganizationalUnitId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_organizational_unit_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_organizational_unit_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentOrganizationalUnitName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setService(refVal);
        }
    }
    return ok;
}


std::string ControlViolation::getAccountId() const
{
    return accountId_;
}

void ControlViolation::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool ControlViolation::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void ControlViolation::unsetaccountId()
{
    accountIdIsSet_ = false;
}

std::string ControlViolation::getAccountName() const
{
    return accountName_;
}

void ControlViolation::setAccountName(const std::string& value)
{
    accountName_ = value;
    accountNameIsSet_ = true;
}

bool ControlViolation::accountNameIsSet() const
{
    return accountNameIsSet_;
}

void ControlViolation::unsetaccountName()
{
    accountNameIsSet_ = false;
}

std::string ControlViolation::getDisplayName() const
{
    return displayName_;
}

void ControlViolation::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool ControlViolation::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void ControlViolation::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string ControlViolation::getName() const
{
    return name_;
}

void ControlViolation::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ControlViolation::nameIsSet() const
{
    return nameIsSet_;
}

void ControlViolation::unsetname()
{
    nameIsSet_ = false;
}

std::string ControlViolation::getControlId() const
{
    return controlId_;
}

void ControlViolation::setControlId(const std::string& value)
{
    controlId_ = value;
    controlIdIsSet_ = true;
}

bool ControlViolation::controlIdIsSet() const
{
    return controlIdIsSet_;
}

void ControlViolation::unsetcontrolId()
{
    controlIdIsSet_ = false;
}

std::string ControlViolation::getParentOrganizationalUnitId() const
{
    return parentOrganizationalUnitId_;
}

void ControlViolation::setParentOrganizationalUnitId(const std::string& value)
{
    parentOrganizationalUnitId_ = value;
    parentOrganizationalUnitIdIsSet_ = true;
}

bool ControlViolation::parentOrganizationalUnitIdIsSet() const
{
    return parentOrganizationalUnitIdIsSet_;
}

void ControlViolation::unsetparentOrganizationalUnitId()
{
    parentOrganizationalUnitIdIsSet_ = false;
}

std::string ControlViolation::getParentOrganizationalUnitName() const
{
    return parentOrganizationalUnitName_;
}

void ControlViolation::setParentOrganizationalUnitName(const std::string& value)
{
    parentOrganizationalUnitName_ = value;
    parentOrganizationalUnitNameIsSet_ = true;
}

bool ControlViolation::parentOrganizationalUnitNameIsSet() const
{
    return parentOrganizationalUnitNameIsSet_;
}

void ControlViolation::unsetparentOrganizationalUnitName()
{
    parentOrganizationalUnitNameIsSet_ = false;
}

std::string ControlViolation::getRegion() const
{
    return region_;
}

void ControlViolation::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ControlViolation::regionIsSet() const
{
    return regionIsSet_;
}

void ControlViolation::unsetregion()
{
    regionIsSet_ = false;
}

std::string ControlViolation::getResource() const
{
    return resource_;
}

void ControlViolation::setResource(const std::string& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool ControlViolation::resourceIsSet() const
{
    return resourceIsSet_;
}

void ControlViolation::unsetresource()
{
    resourceIsSet_ = false;
}

std::string ControlViolation::getResourceName() const
{
    return resourceName_;
}

void ControlViolation::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool ControlViolation::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void ControlViolation::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::string ControlViolation::getResourceType() const
{
    return resourceType_;
}

void ControlViolation::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ControlViolation::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ControlViolation::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ControlViolation::getService() const
{
    return service_;
}

void ControlViolation::setService(const std::string& value)
{
    service_ = value;
    serviceIsSet_ = true;
}

bool ControlViolation::serviceIsSet() const
{
    return serviceIsSet_;
}

void ControlViolation::unsetservice()
{
    serviceIsSet_ = false;
}

}
}
}
}
}


