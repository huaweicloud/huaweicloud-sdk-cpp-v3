

#include "huaweicloud/rgc/v1/model/ShowManagedOrganizationalUnitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowManagedOrganizationalUnitResponse::ShowManagedOrganizationalUnitResponse()
{
    manageAccountId_ = "";
    manageAccountIdIsSet_ = false;
    organizationalUnitId_ = "";
    organizationalUnitIdIsSet_ = false;
    organizationalUnitName_ = "";
    organizationalUnitNameIsSet_ = false;
    organizationalUnitStatus_ = "";
    organizationalUnitStatusIsSet_ = false;
    organizationalUnitTypeIsSet_ = false;
    parentOrganizationalUnitId_ = "";
    parentOrganizationalUnitIdIsSet_ = false;
    parentOrganizationalUnitName_ = "";
    parentOrganizationalUnitNameIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    landingZoneVersion_ = "";
    landingZoneVersionIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ShowManagedOrganizationalUnitResponse::~ShowManagedOrganizationalUnitResponse() = default;

void ShowManagedOrganizationalUnitResponse::validate()
{
}

web::json::value ShowManagedOrganizationalUnitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(manageAccountIdIsSet_) {
        val[utility::conversions::to_string_t("manage_account_id")] = ModelBase::toJson(manageAccountId_);
    }
    if(organizationalUnitIdIsSet_) {
        val[utility::conversions::to_string_t("organizational_unit_id")] = ModelBase::toJson(organizationalUnitId_);
    }
    if(organizationalUnitNameIsSet_) {
        val[utility::conversions::to_string_t("organizational_unit_name")] = ModelBase::toJson(organizationalUnitName_);
    }
    if(organizationalUnitStatusIsSet_) {
        val[utility::conversions::to_string_t("organizational_unit_status")] = ModelBase::toJson(organizationalUnitStatus_);
    }
    if(organizationalUnitTypeIsSet_) {
        val[utility::conversions::to_string_t("organizational_unit_type")] = ModelBase::toJson(organizationalUnitType_);
    }
    if(parentOrganizationalUnitIdIsSet_) {
        val[utility::conversions::to_string_t("parent_organizational_unit_id")] = ModelBase::toJson(parentOrganizationalUnitId_);
    }
    if(parentOrganizationalUnitNameIsSet_) {
        val[utility::conversions::to_string_t("parent_organizational_unit_name")] = ModelBase::toJson(parentOrganizationalUnitName_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(landingZoneVersionIsSet_) {
        val[utility::conversions::to_string_t("landing_zone_version")] = ModelBase::toJson(landingZoneVersion_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool ShowManagedOrganizationalUnitResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("manage_account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manage_account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManageAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("organizational_unit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organizational_unit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganizationalUnitId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("organizational_unit_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organizational_unit_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganizationalUnitName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("organizational_unit_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organizational_unit_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganizationalUnitStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("organizational_unit_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organizational_unit_type"));
        if(!fieldValue.is_null())
        {
            OrganizationalUnitType refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganizationalUnitType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("landing_zone_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("landing_zone_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLandingZoneVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}


std::string ShowManagedOrganizationalUnitResponse::getManageAccountId() const
{
    return manageAccountId_;
}

void ShowManagedOrganizationalUnitResponse::setManageAccountId(const std::string& value)
{
    manageAccountId_ = value;
    manageAccountIdIsSet_ = true;
}

bool ShowManagedOrganizationalUnitResponse::manageAccountIdIsSet() const
{
    return manageAccountIdIsSet_;
}

void ShowManagedOrganizationalUnitResponse::unsetmanageAccountId()
{
    manageAccountIdIsSet_ = false;
}

std::string ShowManagedOrganizationalUnitResponse::getOrganizationalUnitId() const
{
    return organizationalUnitId_;
}

void ShowManagedOrganizationalUnitResponse::setOrganizationalUnitId(const std::string& value)
{
    organizationalUnitId_ = value;
    organizationalUnitIdIsSet_ = true;
}

bool ShowManagedOrganizationalUnitResponse::organizationalUnitIdIsSet() const
{
    return organizationalUnitIdIsSet_;
}

void ShowManagedOrganizationalUnitResponse::unsetorganizationalUnitId()
{
    organizationalUnitIdIsSet_ = false;
}

std::string ShowManagedOrganizationalUnitResponse::getOrganizationalUnitName() const
{
    return organizationalUnitName_;
}

void ShowManagedOrganizationalUnitResponse::setOrganizationalUnitName(const std::string& value)
{
    organizationalUnitName_ = value;
    organizationalUnitNameIsSet_ = true;
}

bool ShowManagedOrganizationalUnitResponse::organizationalUnitNameIsSet() const
{
    return organizationalUnitNameIsSet_;
}

void ShowManagedOrganizationalUnitResponse::unsetorganizationalUnitName()
{
    organizationalUnitNameIsSet_ = false;
}

std::string ShowManagedOrganizationalUnitResponse::getOrganizationalUnitStatus() const
{
    return organizationalUnitStatus_;
}

void ShowManagedOrganizationalUnitResponse::setOrganizationalUnitStatus(const std::string& value)
{
    organizationalUnitStatus_ = value;
    organizationalUnitStatusIsSet_ = true;
}

bool ShowManagedOrganizationalUnitResponse::organizationalUnitStatusIsSet() const
{
    return organizationalUnitStatusIsSet_;
}

void ShowManagedOrganizationalUnitResponse::unsetorganizationalUnitStatus()
{
    organizationalUnitStatusIsSet_ = false;
}

OrganizationalUnitType ShowManagedOrganizationalUnitResponse::getOrganizationalUnitType() const
{
    return organizationalUnitType_;
}

void ShowManagedOrganizationalUnitResponse::setOrganizationalUnitType(const OrganizationalUnitType& value)
{
    organizationalUnitType_ = value;
    organizationalUnitTypeIsSet_ = true;
}

bool ShowManagedOrganizationalUnitResponse::organizationalUnitTypeIsSet() const
{
    return organizationalUnitTypeIsSet_;
}

void ShowManagedOrganizationalUnitResponse::unsetorganizationalUnitType()
{
    organizationalUnitTypeIsSet_ = false;
}

std::string ShowManagedOrganizationalUnitResponse::getParentOrganizationalUnitId() const
{
    return parentOrganizationalUnitId_;
}

void ShowManagedOrganizationalUnitResponse::setParentOrganizationalUnitId(const std::string& value)
{
    parentOrganizationalUnitId_ = value;
    parentOrganizationalUnitIdIsSet_ = true;
}

bool ShowManagedOrganizationalUnitResponse::parentOrganizationalUnitIdIsSet() const
{
    return parentOrganizationalUnitIdIsSet_;
}

void ShowManagedOrganizationalUnitResponse::unsetparentOrganizationalUnitId()
{
    parentOrganizationalUnitIdIsSet_ = false;
}

std::string ShowManagedOrganizationalUnitResponse::getParentOrganizationalUnitName() const
{
    return parentOrganizationalUnitName_;
}

void ShowManagedOrganizationalUnitResponse::setParentOrganizationalUnitName(const std::string& value)
{
    parentOrganizationalUnitName_ = value;
    parentOrganizationalUnitNameIsSet_ = true;
}

bool ShowManagedOrganizationalUnitResponse::parentOrganizationalUnitNameIsSet() const
{
    return parentOrganizationalUnitNameIsSet_;
}

void ShowManagedOrganizationalUnitResponse::unsetparentOrganizationalUnitName()
{
    parentOrganizationalUnitNameIsSet_ = false;
}

utility::datetime ShowManagedOrganizationalUnitResponse::getCreatedAt() const
{
    return createdAt_;
}

void ShowManagedOrganizationalUnitResponse::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowManagedOrganizationalUnitResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowManagedOrganizationalUnitResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowManagedOrganizationalUnitResponse::getLandingZoneVersion() const
{
    return landingZoneVersion_;
}

void ShowManagedOrganizationalUnitResponse::setLandingZoneVersion(const std::string& value)
{
    landingZoneVersion_ = value;
    landingZoneVersionIsSet_ = true;
}

bool ShowManagedOrganizationalUnitResponse::landingZoneVersionIsSet() const
{
    return landingZoneVersionIsSet_;
}

void ShowManagedOrganizationalUnitResponse::unsetlandingZoneVersion()
{
    landingZoneVersionIsSet_ = false;
}

utility::datetime ShowManagedOrganizationalUnitResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void ShowManagedOrganizationalUnitResponse::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ShowManagedOrganizationalUnitResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ShowManagedOrganizationalUnitResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string ShowManagedOrganizationalUnitResponse::getMessage() const
{
    return message_;
}

void ShowManagedOrganizationalUnitResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowManagedOrganizationalUnitResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowManagedOrganizationalUnitResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


