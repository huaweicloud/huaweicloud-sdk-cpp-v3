

#include "huaweicloud/rgc/v1/model/CreateManagedOrganizationalUnitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




CreateManagedOrganizationalUnitResponse::CreateManagedOrganizationalUnitResponse()
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

CreateManagedOrganizationalUnitResponse::~CreateManagedOrganizationalUnitResponse() = default;

void CreateManagedOrganizationalUnitResponse::validate()
{
}

web::json::value CreateManagedOrganizationalUnitResponse::toJson() const
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
bool CreateManagedOrganizationalUnitResponse::fromJson(const web::json::value& val)
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


std::string CreateManagedOrganizationalUnitResponse::getManageAccountId() const
{
    return manageAccountId_;
}

void CreateManagedOrganizationalUnitResponse::setManageAccountId(const std::string& value)
{
    manageAccountId_ = value;
    manageAccountIdIsSet_ = true;
}

bool CreateManagedOrganizationalUnitResponse::manageAccountIdIsSet() const
{
    return manageAccountIdIsSet_;
}

void CreateManagedOrganizationalUnitResponse::unsetmanageAccountId()
{
    manageAccountIdIsSet_ = false;
}

std::string CreateManagedOrganizationalUnitResponse::getOrganizationalUnitId() const
{
    return organizationalUnitId_;
}

void CreateManagedOrganizationalUnitResponse::setOrganizationalUnitId(const std::string& value)
{
    organizationalUnitId_ = value;
    organizationalUnitIdIsSet_ = true;
}

bool CreateManagedOrganizationalUnitResponse::organizationalUnitIdIsSet() const
{
    return organizationalUnitIdIsSet_;
}

void CreateManagedOrganizationalUnitResponse::unsetorganizationalUnitId()
{
    organizationalUnitIdIsSet_ = false;
}

std::string CreateManagedOrganizationalUnitResponse::getOrganizationalUnitName() const
{
    return organizationalUnitName_;
}

void CreateManagedOrganizationalUnitResponse::setOrganizationalUnitName(const std::string& value)
{
    organizationalUnitName_ = value;
    organizationalUnitNameIsSet_ = true;
}

bool CreateManagedOrganizationalUnitResponse::organizationalUnitNameIsSet() const
{
    return organizationalUnitNameIsSet_;
}

void CreateManagedOrganizationalUnitResponse::unsetorganizationalUnitName()
{
    organizationalUnitNameIsSet_ = false;
}

std::string CreateManagedOrganizationalUnitResponse::getOrganizationalUnitStatus() const
{
    return organizationalUnitStatus_;
}

void CreateManagedOrganizationalUnitResponse::setOrganizationalUnitStatus(const std::string& value)
{
    organizationalUnitStatus_ = value;
    organizationalUnitStatusIsSet_ = true;
}

bool CreateManagedOrganizationalUnitResponse::organizationalUnitStatusIsSet() const
{
    return organizationalUnitStatusIsSet_;
}

void CreateManagedOrganizationalUnitResponse::unsetorganizationalUnitStatus()
{
    organizationalUnitStatusIsSet_ = false;
}

OrganizationalUnitType CreateManagedOrganizationalUnitResponse::getOrganizationalUnitType() const
{
    return organizationalUnitType_;
}

void CreateManagedOrganizationalUnitResponse::setOrganizationalUnitType(const OrganizationalUnitType& value)
{
    organizationalUnitType_ = value;
    organizationalUnitTypeIsSet_ = true;
}

bool CreateManagedOrganizationalUnitResponse::organizationalUnitTypeIsSet() const
{
    return organizationalUnitTypeIsSet_;
}

void CreateManagedOrganizationalUnitResponse::unsetorganizationalUnitType()
{
    organizationalUnitTypeIsSet_ = false;
}

std::string CreateManagedOrganizationalUnitResponse::getParentOrganizationalUnitId() const
{
    return parentOrganizationalUnitId_;
}

void CreateManagedOrganizationalUnitResponse::setParentOrganizationalUnitId(const std::string& value)
{
    parentOrganizationalUnitId_ = value;
    parentOrganizationalUnitIdIsSet_ = true;
}

bool CreateManagedOrganizationalUnitResponse::parentOrganizationalUnitIdIsSet() const
{
    return parentOrganizationalUnitIdIsSet_;
}

void CreateManagedOrganizationalUnitResponse::unsetparentOrganizationalUnitId()
{
    parentOrganizationalUnitIdIsSet_ = false;
}

std::string CreateManagedOrganizationalUnitResponse::getParentOrganizationalUnitName() const
{
    return parentOrganizationalUnitName_;
}

void CreateManagedOrganizationalUnitResponse::setParentOrganizationalUnitName(const std::string& value)
{
    parentOrganizationalUnitName_ = value;
    parentOrganizationalUnitNameIsSet_ = true;
}

bool CreateManagedOrganizationalUnitResponse::parentOrganizationalUnitNameIsSet() const
{
    return parentOrganizationalUnitNameIsSet_;
}

void CreateManagedOrganizationalUnitResponse::unsetparentOrganizationalUnitName()
{
    parentOrganizationalUnitNameIsSet_ = false;
}

utility::datetime CreateManagedOrganizationalUnitResponse::getCreatedAt() const
{
    return createdAt_;
}

void CreateManagedOrganizationalUnitResponse::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CreateManagedOrganizationalUnitResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CreateManagedOrganizationalUnitResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string CreateManagedOrganizationalUnitResponse::getLandingZoneVersion() const
{
    return landingZoneVersion_;
}

void CreateManagedOrganizationalUnitResponse::setLandingZoneVersion(const std::string& value)
{
    landingZoneVersion_ = value;
    landingZoneVersionIsSet_ = true;
}

bool CreateManagedOrganizationalUnitResponse::landingZoneVersionIsSet() const
{
    return landingZoneVersionIsSet_;
}

void CreateManagedOrganizationalUnitResponse::unsetlandingZoneVersion()
{
    landingZoneVersionIsSet_ = false;
}

}
}
}
}
}


