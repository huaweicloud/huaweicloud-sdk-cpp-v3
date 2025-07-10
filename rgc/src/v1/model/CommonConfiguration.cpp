

#include "huaweicloud/rgc/v1/model/CommonConfiguration.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




CommonConfiguration::CommonConfiguration()
{
    homeRegion_ = "";
    homeRegionIsSet_ = false;
    cloudTrailType_ = false;
    cloudTrailTypeIsSet_ = false;
    identityCenterStatus_ = "";
    identityCenterStatusIsSet_ = false;
    organizationStructureType_ = "";
    organizationStructureTypeIsSet_ = false;
}

CommonConfiguration::~CommonConfiguration() = default;

void CommonConfiguration::validate()
{
}

web::json::value CommonConfiguration::toJson() const
{
    web::json::value val = web::json::value::object();

    if(homeRegionIsSet_) {
        val[utility::conversions::to_string_t("home_region")] = ModelBase::toJson(homeRegion_);
    }
    if(cloudTrailTypeIsSet_) {
        val[utility::conversions::to_string_t("cloud_trail_type")] = ModelBase::toJson(cloudTrailType_);
    }
    if(identityCenterStatusIsSet_) {
        val[utility::conversions::to_string_t("identity_center_status")] = ModelBase::toJson(identityCenterStatus_);
    }
    if(organizationStructureTypeIsSet_) {
        val[utility::conversions::to_string_t("organization_structure_type")] = ModelBase::toJson(organizationStructureType_);
    }

    return val;
}
bool CommonConfiguration::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("home_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("home_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHomeRegion(refVal);
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
    return ok;
}


std::string CommonConfiguration::getHomeRegion() const
{
    return homeRegion_;
}

void CommonConfiguration::setHomeRegion(const std::string& value)
{
    homeRegion_ = value;
    homeRegionIsSet_ = true;
}

bool CommonConfiguration::homeRegionIsSet() const
{
    return homeRegionIsSet_;
}

void CommonConfiguration::unsethomeRegion()
{
    homeRegionIsSet_ = false;
}

bool CommonConfiguration::isCloudTrailType() const
{
    return cloudTrailType_;
}

void CommonConfiguration::setCloudTrailType(bool value)
{
    cloudTrailType_ = value;
    cloudTrailTypeIsSet_ = true;
}

bool CommonConfiguration::cloudTrailTypeIsSet() const
{
    return cloudTrailTypeIsSet_;
}

void CommonConfiguration::unsetcloudTrailType()
{
    cloudTrailTypeIsSet_ = false;
}

std::string CommonConfiguration::getIdentityCenterStatus() const
{
    return identityCenterStatus_;
}

void CommonConfiguration::setIdentityCenterStatus(const std::string& value)
{
    identityCenterStatus_ = value;
    identityCenterStatusIsSet_ = true;
}

bool CommonConfiguration::identityCenterStatusIsSet() const
{
    return identityCenterStatusIsSet_;
}

void CommonConfiguration::unsetidentityCenterStatus()
{
    identityCenterStatusIsSet_ = false;
}

std::string CommonConfiguration::getOrganizationStructureType() const
{
    return organizationStructureType_;
}

void CommonConfiguration::setOrganizationStructureType(const std::string& value)
{
    organizationStructureType_ = value;
    organizationStructureTypeIsSet_ = true;
}

bool CommonConfiguration::organizationStructureTypeIsSet() const
{
    return organizationStructureTypeIsSet_;
}

void CommonConfiguration::unsetorganizationStructureType()
{
    organizationStructureTypeIsSet_ = false;
}

}
}
}
}
}


