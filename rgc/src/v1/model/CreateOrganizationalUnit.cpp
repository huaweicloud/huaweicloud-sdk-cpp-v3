

#include "huaweicloud/rgc/v1/model/CreateOrganizationalUnit.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




CreateOrganizationalUnit::CreateOrganizationalUnit()
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
}

CreateOrganizationalUnit::~CreateOrganizationalUnit() = default;

void CreateOrganizationalUnit::validate()
{
}

web::json::value CreateOrganizationalUnit::toJson() const
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

    return val;
}
bool CreateOrganizationalUnit::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateOrganizationalUnit::getManageAccountId() const
{
    return manageAccountId_;
}

void CreateOrganizationalUnit::setManageAccountId(const std::string& value)
{
    manageAccountId_ = value;
    manageAccountIdIsSet_ = true;
}

bool CreateOrganizationalUnit::manageAccountIdIsSet() const
{
    return manageAccountIdIsSet_;
}

void CreateOrganizationalUnit::unsetmanageAccountId()
{
    manageAccountIdIsSet_ = false;
}

std::string CreateOrganizationalUnit::getOrganizationalUnitId() const
{
    return organizationalUnitId_;
}

void CreateOrganizationalUnit::setOrganizationalUnitId(const std::string& value)
{
    organizationalUnitId_ = value;
    organizationalUnitIdIsSet_ = true;
}

bool CreateOrganizationalUnit::organizationalUnitIdIsSet() const
{
    return organizationalUnitIdIsSet_;
}

void CreateOrganizationalUnit::unsetorganizationalUnitId()
{
    organizationalUnitIdIsSet_ = false;
}

std::string CreateOrganizationalUnit::getOrganizationalUnitName() const
{
    return organizationalUnitName_;
}

void CreateOrganizationalUnit::setOrganizationalUnitName(const std::string& value)
{
    organizationalUnitName_ = value;
    organizationalUnitNameIsSet_ = true;
}

bool CreateOrganizationalUnit::organizationalUnitNameIsSet() const
{
    return organizationalUnitNameIsSet_;
}

void CreateOrganizationalUnit::unsetorganizationalUnitName()
{
    organizationalUnitNameIsSet_ = false;
}

std::string CreateOrganizationalUnit::getOrganizationalUnitStatus() const
{
    return organizationalUnitStatus_;
}

void CreateOrganizationalUnit::setOrganizationalUnitStatus(const std::string& value)
{
    organizationalUnitStatus_ = value;
    organizationalUnitStatusIsSet_ = true;
}

bool CreateOrganizationalUnit::organizationalUnitStatusIsSet() const
{
    return organizationalUnitStatusIsSet_;
}

void CreateOrganizationalUnit::unsetorganizationalUnitStatus()
{
    organizationalUnitStatusIsSet_ = false;
}

OrganizationalUnitType CreateOrganizationalUnit::getOrganizationalUnitType() const
{
    return organizationalUnitType_;
}

void CreateOrganizationalUnit::setOrganizationalUnitType(const OrganizationalUnitType& value)
{
    organizationalUnitType_ = value;
    organizationalUnitTypeIsSet_ = true;
}

bool CreateOrganizationalUnit::organizationalUnitTypeIsSet() const
{
    return organizationalUnitTypeIsSet_;
}

void CreateOrganizationalUnit::unsetorganizationalUnitType()
{
    organizationalUnitTypeIsSet_ = false;
}

std::string CreateOrganizationalUnit::getParentOrganizationalUnitId() const
{
    return parentOrganizationalUnitId_;
}

void CreateOrganizationalUnit::setParentOrganizationalUnitId(const std::string& value)
{
    parentOrganizationalUnitId_ = value;
    parentOrganizationalUnitIdIsSet_ = true;
}

bool CreateOrganizationalUnit::parentOrganizationalUnitIdIsSet() const
{
    return parentOrganizationalUnitIdIsSet_;
}

void CreateOrganizationalUnit::unsetparentOrganizationalUnitId()
{
    parentOrganizationalUnitIdIsSet_ = false;
}

std::string CreateOrganizationalUnit::getParentOrganizationalUnitName() const
{
    return parentOrganizationalUnitName_;
}

void CreateOrganizationalUnit::setParentOrganizationalUnitName(const std::string& value)
{
    parentOrganizationalUnitName_ = value;
    parentOrganizationalUnitNameIsSet_ = true;
}

bool CreateOrganizationalUnit::parentOrganizationalUnitNameIsSet() const
{
    return parentOrganizationalUnitNameIsSet_;
}

void CreateOrganizationalUnit::unsetparentOrganizationalUnitName()
{
    parentOrganizationalUnitNameIsSet_ = false;
}

utility::datetime CreateOrganizationalUnit::getCreatedAt() const
{
    return createdAt_;
}

void CreateOrganizationalUnit::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CreateOrganizationalUnit::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CreateOrganizationalUnit::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string CreateOrganizationalUnit::getLandingZoneVersion() const
{
    return landingZoneVersion_;
}

void CreateOrganizationalUnit::setLandingZoneVersion(const std::string& value)
{
    landingZoneVersion_ = value;
    landingZoneVersionIsSet_ = true;
}

bool CreateOrganizationalUnit::landingZoneVersionIsSet() const
{
    return landingZoneVersionIsSet_;
}

void CreateOrganizationalUnit::unsetlandingZoneVersion()
{
    landingZoneVersionIsSet_ = false;
}

}
}
}
}
}


