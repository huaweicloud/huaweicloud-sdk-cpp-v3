

#include "huaweicloud/rgc/v1/model/SetupLandingZoneReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




SetupLandingZoneReqBody::SetupLandingZoneReqBody()
{
    identityStoreEmail_ = "";
    identityStoreEmailIsSet_ = false;
    homeRegion_ = "";
    homeRegionIsSet_ = false;
    setupLandingZoneActionType_ = "";
    setupLandingZoneActionTypeIsSet_ = false;
    regionConfigurationListIsSet_ = false;
    identityCenterStatus_ = "";
    identityCenterStatusIsSet_ = false;
    organizationStructureType_ = "";
    organizationStructureTypeIsSet_ = false;
    organizationStructureIsSet_ = false;
    denyUngovernedRegions_ = false;
    denyUngovernedRegionsIsSet_ = false;
    cloudTrailType_ = false;
    cloudTrailTypeIsSet_ = false;
    kmsKeyId_ = "";
    kmsKeyIdIsSet_ = false;
    loggingConfigurationIsSet_ = false;
    baselineVersion_ = "";
    baselineVersionIsSet_ = false;
}

SetupLandingZoneReqBody::~SetupLandingZoneReqBody() = default;

void SetupLandingZoneReqBody::validate()
{
}

web::json::value SetupLandingZoneReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identityStoreEmailIsSet_) {
        val[utility::conversions::to_string_t("identity_store_email")] = ModelBase::toJson(identityStoreEmail_);
    }
    if(homeRegionIsSet_) {
        val[utility::conversions::to_string_t("home_region")] = ModelBase::toJson(homeRegion_);
    }
    if(setupLandingZoneActionTypeIsSet_) {
        val[utility::conversions::to_string_t("setup_landing_zone_action_type")] = ModelBase::toJson(setupLandingZoneActionType_);
    }
    if(regionConfigurationListIsSet_) {
        val[utility::conversions::to_string_t("region_configuration_list")] = ModelBase::toJson(regionConfigurationList_);
    }
    if(identityCenterStatusIsSet_) {
        val[utility::conversions::to_string_t("identity_center_status")] = ModelBase::toJson(identityCenterStatus_);
    }
    if(organizationStructureTypeIsSet_) {
        val[utility::conversions::to_string_t("organization_structure_type")] = ModelBase::toJson(organizationStructureType_);
    }
    if(organizationStructureIsSet_) {
        val[utility::conversions::to_string_t("organization_structure")] = ModelBase::toJson(organizationStructure_);
    }
    if(denyUngovernedRegionsIsSet_) {
        val[utility::conversions::to_string_t("deny_ungoverned_regions")] = ModelBase::toJson(denyUngovernedRegions_);
    }
    if(cloudTrailTypeIsSet_) {
        val[utility::conversions::to_string_t("cloud_trail_type")] = ModelBase::toJson(cloudTrailType_);
    }
    if(kmsKeyIdIsSet_) {
        val[utility::conversions::to_string_t("kms_key_id")] = ModelBase::toJson(kmsKeyId_);
    }
    if(loggingConfigurationIsSet_) {
        val[utility::conversions::to_string_t("logging_configuration")] = ModelBase::toJson(loggingConfiguration_);
    }
    if(baselineVersionIsSet_) {
        val[utility::conversions::to_string_t("baseline_version")] = ModelBase::toJson(baselineVersion_);
    }

    return val;
}
bool SetupLandingZoneReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("identity_store_email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("home_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("home_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHomeRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("setup_landing_zone_action_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("setup_landing_zone_action_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetupLandingZoneActionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_configuration_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_configuration_list"));
        if(!fieldValue.is_null())
        {
            std::vector<RegionConfigurationList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionConfigurationList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identity_center_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_center_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityCenterStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("organization_structure_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organization_structure_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganizationStructureType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("organization_structure"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organization_structure"));
        if(!fieldValue.is_null())
        {
            std::vector<OrganizationStructureBaseLine> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganizationStructure(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deny_ungoverned_regions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deny_ungoverned_regions"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDenyUngovernedRegions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cloud_trail_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud_trail_type"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudTrailType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kms_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kms_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKmsKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logging_configuration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logging_configuration"));
        if(!fieldValue.is_null())
        {
            LoggingConfiguration refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLoggingConfiguration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("baseline_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("baseline_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaselineVersion(refVal);
        }
    }
    return ok;
}


std::string SetupLandingZoneReqBody::getIdentityStoreEmail() const
{
    return identityStoreEmail_;
}

void SetupLandingZoneReqBody::setIdentityStoreEmail(const std::string& value)
{
    identityStoreEmail_ = value;
    identityStoreEmailIsSet_ = true;
}

bool SetupLandingZoneReqBody::identityStoreEmailIsSet() const
{
    return identityStoreEmailIsSet_;
}

void SetupLandingZoneReqBody::unsetidentityStoreEmail()
{
    identityStoreEmailIsSet_ = false;
}

std::string SetupLandingZoneReqBody::getHomeRegion() const
{
    return homeRegion_;
}

void SetupLandingZoneReqBody::setHomeRegion(const std::string& value)
{
    homeRegion_ = value;
    homeRegionIsSet_ = true;
}

bool SetupLandingZoneReqBody::homeRegionIsSet() const
{
    return homeRegionIsSet_;
}

void SetupLandingZoneReqBody::unsethomeRegion()
{
    homeRegionIsSet_ = false;
}

std::string SetupLandingZoneReqBody::getSetupLandingZoneActionType() const
{
    return setupLandingZoneActionType_;
}

void SetupLandingZoneReqBody::setSetupLandingZoneActionType(const std::string& value)
{
    setupLandingZoneActionType_ = value;
    setupLandingZoneActionTypeIsSet_ = true;
}

bool SetupLandingZoneReqBody::setupLandingZoneActionTypeIsSet() const
{
    return setupLandingZoneActionTypeIsSet_;
}

void SetupLandingZoneReqBody::unsetsetupLandingZoneActionType()
{
    setupLandingZoneActionTypeIsSet_ = false;
}

std::vector<RegionConfigurationList>& SetupLandingZoneReqBody::getRegionConfigurationList()
{
    return regionConfigurationList_;
}

void SetupLandingZoneReqBody::setRegionConfigurationList(const std::vector<RegionConfigurationList>& value)
{
    regionConfigurationList_ = value;
    regionConfigurationListIsSet_ = true;
}

bool SetupLandingZoneReqBody::regionConfigurationListIsSet() const
{
    return regionConfigurationListIsSet_;
}

void SetupLandingZoneReqBody::unsetregionConfigurationList()
{
    regionConfigurationListIsSet_ = false;
}

std::string SetupLandingZoneReqBody::getIdentityCenterStatus() const
{
    return identityCenterStatus_;
}

void SetupLandingZoneReqBody::setIdentityCenterStatus(const std::string& value)
{
    identityCenterStatus_ = value;
    identityCenterStatusIsSet_ = true;
}

bool SetupLandingZoneReqBody::identityCenterStatusIsSet() const
{
    return identityCenterStatusIsSet_;
}

void SetupLandingZoneReqBody::unsetidentityCenterStatus()
{
    identityCenterStatusIsSet_ = false;
}

std::string SetupLandingZoneReqBody::getOrganizationStructureType() const
{
    return organizationStructureType_;
}

void SetupLandingZoneReqBody::setOrganizationStructureType(const std::string& value)
{
    organizationStructureType_ = value;
    organizationStructureTypeIsSet_ = true;
}

bool SetupLandingZoneReqBody::organizationStructureTypeIsSet() const
{
    return organizationStructureTypeIsSet_;
}

void SetupLandingZoneReqBody::unsetorganizationStructureType()
{
    organizationStructureTypeIsSet_ = false;
}

std::vector<OrganizationStructureBaseLine>& SetupLandingZoneReqBody::getOrganizationStructure()
{
    return organizationStructure_;
}

void SetupLandingZoneReqBody::setOrganizationStructure(const std::vector<OrganizationStructureBaseLine>& value)
{
    organizationStructure_ = value;
    organizationStructureIsSet_ = true;
}

bool SetupLandingZoneReqBody::organizationStructureIsSet() const
{
    return organizationStructureIsSet_;
}

void SetupLandingZoneReqBody::unsetorganizationStructure()
{
    organizationStructureIsSet_ = false;
}

bool SetupLandingZoneReqBody::isDenyUngovernedRegions() const
{
    return denyUngovernedRegions_;
}

void SetupLandingZoneReqBody::setDenyUngovernedRegions(bool value)
{
    denyUngovernedRegions_ = value;
    denyUngovernedRegionsIsSet_ = true;
}

bool SetupLandingZoneReqBody::denyUngovernedRegionsIsSet() const
{
    return denyUngovernedRegionsIsSet_;
}

void SetupLandingZoneReqBody::unsetdenyUngovernedRegions()
{
    denyUngovernedRegionsIsSet_ = false;
}

bool SetupLandingZoneReqBody::isCloudTrailType() const
{
    return cloudTrailType_;
}

void SetupLandingZoneReqBody::setCloudTrailType(bool value)
{
    cloudTrailType_ = value;
    cloudTrailTypeIsSet_ = true;
}

bool SetupLandingZoneReqBody::cloudTrailTypeIsSet() const
{
    return cloudTrailTypeIsSet_;
}

void SetupLandingZoneReqBody::unsetcloudTrailType()
{
    cloudTrailTypeIsSet_ = false;
}

std::string SetupLandingZoneReqBody::getKmsKeyId() const
{
    return kmsKeyId_;
}

void SetupLandingZoneReqBody::setKmsKeyId(const std::string& value)
{
    kmsKeyId_ = value;
    kmsKeyIdIsSet_ = true;
}

bool SetupLandingZoneReqBody::kmsKeyIdIsSet() const
{
    return kmsKeyIdIsSet_;
}

void SetupLandingZoneReqBody::unsetkmsKeyId()
{
    kmsKeyIdIsSet_ = false;
}

LoggingConfiguration SetupLandingZoneReqBody::getLoggingConfiguration() const
{
    return loggingConfiguration_;
}

void SetupLandingZoneReqBody::setLoggingConfiguration(const LoggingConfiguration& value)
{
    loggingConfiguration_ = value;
    loggingConfigurationIsSet_ = true;
}

bool SetupLandingZoneReqBody::loggingConfigurationIsSet() const
{
    return loggingConfigurationIsSet_;
}

void SetupLandingZoneReqBody::unsetloggingConfiguration()
{
    loggingConfigurationIsSet_ = false;
}

std::string SetupLandingZoneReqBody::getBaselineVersion() const
{
    return baselineVersion_;
}

void SetupLandingZoneReqBody::setBaselineVersion(const std::string& value)
{
    baselineVersion_ = value;
    baselineVersionIsSet_ = true;
}

bool SetupLandingZoneReqBody::baselineVersionIsSet() const
{
    return baselineVersionIsSet_;
}

void SetupLandingZoneReqBody::unsetbaselineVersion()
{
    baselineVersionIsSet_ = false;
}

}
}
}
}
}


