

#include "huaweicloud/rgc/v1/model/ManagedOrganizationalUnit.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ManagedOrganizationalUnit::ManagedOrganizationalUnit()
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

ManagedOrganizationalUnit::~ManagedOrganizationalUnit() = default;

void ManagedOrganizationalUnit::validate()
{
}

web::json::value ManagedOrganizationalUnit::toJson() const
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
bool ManagedOrganizationalUnit::fromJson(const web::json::value& val)
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


std::string ManagedOrganizationalUnit::getManageAccountId() const
{
    return manageAccountId_;
}

void ManagedOrganizationalUnit::setManageAccountId(const std::string& value)
{
    manageAccountId_ = value;
    manageAccountIdIsSet_ = true;
}

bool ManagedOrganizationalUnit::manageAccountIdIsSet() const
{
    return manageAccountIdIsSet_;
}

void ManagedOrganizationalUnit::unsetmanageAccountId()
{
    manageAccountIdIsSet_ = false;
}

std::string ManagedOrganizationalUnit::getOrganizationalUnitId() const
{
    return organizationalUnitId_;
}

void ManagedOrganizationalUnit::setOrganizationalUnitId(const std::string& value)
{
    organizationalUnitId_ = value;
    organizationalUnitIdIsSet_ = true;
}

bool ManagedOrganizationalUnit::organizationalUnitIdIsSet() const
{
    return organizationalUnitIdIsSet_;
}

void ManagedOrganizationalUnit::unsetorganizationalUnitId()
{
    organizationalUnitIdIsSet_ = false;
}

std::string ManagedOrganizationalUnit::getOrganizationalUnitName() const
{
    return organizationalUnitName_;
}

void ManagedOrganizationalUnit::setOrganizationalUnitName(const std::string& value)
{
    organizationalUnitName_ = value;
    organizationalUnitNameIsSet_ = true;
}

bool ManagedOrganizationalUnit::organizationalUnitNameIsSet() const
{
    return organizationalUnitNameIsSet_;
}

void ManagedOrganizationalUnit::unsetorganizationalUnitName()
{
    organizationalUnitNameIsSet_ = false;
}

std::string ManagedOrganizationalUnit::getOrganizationalUnitStatus() const
{
    return organizationalUnitStatus_;
}

void ManagedOrganizationalUnit::setOrganizationalUnitStatus(const std::string& value)
{
    organizationalUnitStatus_ = value;
    organizationalUnitStatusIsSet_ = true;
}

bool ManagedOrganizationalUnit::organizationalUnitStatusIsSet() const
{
    return organizationalUnitStatusIsSet_;
}

void ManagedOrganizationalUnit::unsetorganizationalUnitStatus()
{
    organizationalUnitStatusIsSet_ = false;
}

OrganizationalUnitType ManagedOrganizationalUnit::getOrganizationalUnitType() const
{
    return organizationalUnitType_;
}

void ManagedOrganizationalUnit::setOrganizationalUnitType(const OrganizationalUnitType& value)
{
    organizationalUnitType_ = value;
    organizationalUnitTypeIsSet_ = true;
}

bool ManagedOrganizationalUnit::organizationalUnitTypeIsSet() const
{
    return organizationalUnitTypeIsSet_;
}

void ManagedOrganizationalUnit::unsetorganizationalUnitType()
{
    organizationalUnitTypeIsSet_ = false;
}

std::string ManagedOrganizationalUnit::getParentOrganizationalUnitId() const
{
    return parentOrganizationalUnitId_;
}

void ManagedOrganizationalUnit::setParentOrganizationalUnitId(const std::string& value)
{
    parentOrganizationalUnitId_ = value;
    parentOrganizationalUnitIdIsSet_ = true;
}

bool ManagedOrganizationalUnit::parentOrganizationalUnitIdIsSet() const
{
    return parentOrganizationalUnitIdIsSet_;
}

void ManagedOrganizationalUnit::unsetparentOrganizationalUnitId()
{
    parentOrganizationalUnitIdIsSet_ = false;
}

std::string ManagedOrganizationalUnit::getParentOrganizationalUnitName() const
{
    return parentOrganizationalUnitName_;
}

void ManagedOrganizationalUnit::setParentOrganizationalUnitName(const std::string& value)
{
    parentOrganizationalUnitName_ = value;
    parentOrganizationalUnitNameIsSet_ = true;
}

bool ManagedOrganizationalUnit::parentOrganizationalUnitNameIsSet() const
{
    return parentOrganizationalUnitNameIsSet_;
}

void ManagedOrganizationalUnit::unsetparentOrganizationalUnitName()
{
    parentOrganizationalUnitNameIsSet_ = false;
}

utility::datetime ManagedOrganizationalUnit::getCreatedAt() const
{
    return createdAt_;
}

void ManagedOrganizationalUnit::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ManagedOrganizationalUnit::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ManagedOrganizationalUnit::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ManagedOrganizationalUnit::getLandingZoneVersion() const
{
    return landingZoneVersion_;
}

void ManagedOrganizationalUnit::setLandingZoneVersion(const std::string& value)
{
    landingZoneVersion_ = value;
    landingZoneVersionIsSet_ = true;
}

bool ManagedOrganizationalUnit::landingZoneVersionIsSet() const
{
    return landingZoneVersionIsSet_;
}

void ManagedOrganizationalUnit::unsetlandingZoneVersion()
{
    landingZoneVersionIsSet_ = false;
}

utility::datetime ManagedOrganizationalUnit::getUpdatedAt() const
{
    return updatedAt_;
}

void ManagedOrganizationalUnit::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ManagedOrganizationalUnit::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ManagedOrganizationalUnit::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string ManagedOrganizationalUnit::getMessage() const
{
    return message_;
}

void ManagedOrganizationalUnit::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ManagedOrganizationalUnit::messageIsSet() const
{
    return messageIsSet_;
}

void ManagedOrganizationalUnit::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


