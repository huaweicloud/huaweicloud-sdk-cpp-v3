

#include "huaweicloud/rds/v3/model/CreateSupabaseApplicationRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateSupabaseApplicationRequestBody::CreateSupabaseApplicationRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    basicConfigIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    dataVip_ = "";
    dataVipIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    storageComponentIsSet_ = false;
    manageType_ = "";
    manageTypeIsSet_ = false;
    managedInstanceIsSet_ = false;
    existingInstanceIsSet_ = false;
}

CreateSupabaseApplicationRequestBody::~CreateSupabaseApplicationRequestBody() = default;

void CreateSupabaseApplicationRequestBody::validate()
{
}

web::json::value CreateSupabaseApplicationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(basicConfigIsSet_) {
        val[utility::conversions::to_string_t("basic_config")] = ModelBase::toJson(basicConfig_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavor_ref")] = ModelBase::toJson(flavorRef_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(dataVipIsSet_) {
        val[utility::conversions::to_string_t("data_vip")] = ModelBase::toJson(dataVip_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(storageComponentIsSet_) {
        val[utility::conversions::to_string_t("storage_component")] = ModelBase::toJson(storageComponent_);
    }
    if(manageTypeIsSet_) {
        val[utility::conversions::to_string_t("manage_type")] = ModelBase::toJson(manageType_);
    }
    if(managedInstanceIsSet_) {
        val[utility::conversions::to_string_t("managed_instance")] = ModelBase::toJson(managedInstance_);
    }
    if(existingInstanceIsSet_) {
        val[utility::conversions::to_string_t("existing_instance")] = ModelBase::toJson(existingInstance_);
    }

    return val;
}
bool CreateSupabaseApplicationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("basic_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("basic_config"));
        if(!fieldValue.is_null())
        {
            SupabaseAppBasicConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBasicConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_vip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_vip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage_component"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_component"));
        if(!fieldValue.is_null())
        {
            SupabaseStorageComponentConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageComponent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manage_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manage_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManageType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("managed_instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("managed_instance"));
        if(!fieldValue.is_null())
        {
            SupabaseInstanceCreateRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagedInstance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("existing_instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("existing_instance"));
        if(!fieldValue.is_null())
        {
            SupabaseExistingInstanceRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExistingInstance(refVal);
        }
    }
    return ok;
}


std::string CreateSupabaseApplicationRequestBody::getName() const
{
    return name_;
}

void CreateSupabaseApplicationRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateSupabaseApplicationRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateSupabaseApplicationRequestBody::unsetname()
{
    nameIsSet_ = false;
}

SupabaseAppBasicConfig CreateSupabaseApplicationRequestBody::getBasicConfig() const
{
    return basicConfig_;
}

void CreateSupabaseApplicationRequestBody::setBasicConfig(const SupabaseAppBasicConfig& value)
{
    basicConfig_ = value;
    basicConfigIsSet_ = true;
}

bool CreateSupabaseApplicationRequestBody::basicConfigIsSet() const
{
    return basicConfigIsSet_;
}

void CreateSupabaseApplicationRequestBody::unsetbasicConfig()
{
    basicConfigIsSet_ = false;
}

std::string CreateSupabaseApplicationRequestBody::getVersion() const
{
    return version_;
}

void CreateSupabaseApplicationRequestBody::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool CreateSupabaseApplicationRequestBody::versionIsSet() const
{
    return versionIsSet_;
}

void CreateSupabaseApplicationRequestBody::unsetversion()
{
    versionIsSet_ = false;
}

std::string CreateSupabaseApplicationRequestBody::getMode() const
{
    return mode_;
}

void CreateSupabaseApplicationRequestBody::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool CreateSupabaseApplicationRequestBody::modeIsSet() const
{
    return modeIsSet_;
}

void CreateSupabaseApplicationRequestBody::unsetmode()
{
    modeIsSet_ = false;
}

std::string CreateSupabaseApplicationRequestBody::getFlavorRef() const
{
    return flavorRef_;
}

void CreateSupabaseApplicationRequestBody::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool CreateSupabaseApplicationRequestBody::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void CreateSupabaseApplicationRequestBody::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

std::string CreateSupabaseApplicationRequestBody::getAvailabilityZone() const
{
    return availabilityZone_;
}

void CreateSupabaseApplicationRequestBody::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool CreateSupabaseApplicationRequestBody::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void CreateSupabaseApplicationRequestBody::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string CreateSupabaseApplicationRequestBody::getDataVip() const
{
    return dataVip_;
}

void CreateSupabaseApplicationRequestBody::setDataVip(const std::string& value)
{
    dataVip_ = value;
    dataVipIsSet_ = true;
}

bool CreateSupabaseApplicationRequestBody::dataVipIsSet() const
{
    return dataVipIsSet_;
}

void CreateSupabaseApplicationRequestBody::unsetdataVip()
{
    dataVipIsSet_ = false;
}

std::string CreateSupabaseApplicationRequestBody::getSecurityGroupId() const
{
    return securityGroupId_;
}

void CreateSupabaseApplicationRequestBody::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool CreateSupabaseApplicationRequestBody::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void CreateSupabaseApplicationRequestBody::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string CreateSupabaseApplicationRequestBody::getPassword() const
{
    return password_;
}

void CreateSupabaseApplicationRequestBody::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool CreateSupabaseApplicationRequestBody::passwordIsSet() const
{
    return passwordIsSet_;
}

void CreateSupabaseApplicationRequestBody::unsetpassword()
{
    passwordIsSet_ = false;
}

SupabaseStorageComponentConfig CreateSupabaseApplicationRequestBody::getStorageComponent() const
{
    return storageComponent_;
}

void CreateSupabaseApplicationRequestBody::setStorageComponent(const SupabaseStorageComponentConfig& value)
{
    storageComponent_ = value;
    storageComponentIsSet_ = true;
}

bool CreateSupabaseApplicationRequestBody::storageComponentIsSet() const
{
    return storageComponentIsSet_;
}

void CreateSupabaseApplicationRequestBody::unsetstorageComponent()
{
    storageComponentIsSet_ = false;
}

std::string CreateSupabaseApplicationRequestBody::getManageType() const
{
    return manageType_;
}

void CreateSupabaseApplicationRequestBody::setManageType(const std::string& value)
{
    manageType_ = value;
    manageTypeIsSet_ = true;
}

bool CreateSupabaseApplicationRequestBody::manageTypeIsSet() const
{
    return manageTypeIsSet_;
}

void CreateSupabaseApplicationRequestBody::unsetmanageType()
{
    manageTypeIsSet_ = false;
}

SupabaseInstanceCreateRequest CreateSupabaseApplicationRequestBody::getManagedInstance() const
{
    return managedInstance_;
}

void CreateSupabaseApplicationRequestBody::setManagedInstance(const SupabaseInstanceCreateRequest& value)
{
    managedInstance_ = value;
    managedInstanceIsSet_ = true;
}

bool CreateSupabaseApplicationRequestBody::managedInstanceIsSet() const
{
    return managedInstanceIsSet_;
}

void CreateSupabaseApplicationRequestBody::unsetmanagedInstance()
{
    managedInstanceIsSet_ = false;
}

SupabaseExistingInstanceRequest CreateSupabaseApplicationRequestBody::getExistingInstance() const
{
    return existingInstance_;
}

void CreateSupabaseApplicationRequestBody::setExistingInstance(const SupabaseExistingInstanceRequest& value)
{
    existingInstance_ = value;
    existingInstanceIsSet_ = true;
}

bool CreateSupabaseApplicationRequestBody::existingInstanceIsSet() const
{
    return existingInstanceIsSet_;
}

void CreateSupabaseApplicationRequestBody::unsetexistingInstance()
{
    existingInstanceIsSet_ = false;
}

}
}
}
}
}


