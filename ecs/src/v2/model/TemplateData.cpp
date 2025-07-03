

#include "huaweicloud/ecs/v2/model/TemplateData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




TemplateData::TemplateData()
{
    flavorId_ = "";
    flavorIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    availabilityZoneId_ = "";
    availabilityZoneIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    autoRecovery_ = false;
    autoRecoveryIsSet_ = false;
    osProfileIsSet_ = false;
    securityGroupIdsIsSet_ = false;
    networkInterfacesIsSet_ = false;
    blockDeviceMappingsIsSet_ = false;
    marketOptionsIsSet_ = false;
    internetAccessIsSet_ = false;
    metadataIsSet_ = false;
    tagOptionsIsSet_ = false;
}

TemplateData::~TemplateData() = default;

void TemplateData::validate()
{
}

web::json::value TemplateData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIdIsSet_) {
        val[utility::conversions::to_string_t("flavor_id")] = ModelBase::toJson(flavorId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(availabilityZoneIdIsSet_) {
        val[utility::conversions::to_string_t("availability_zone_id")] = ModelBase::toJson(availabilityZoneId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(autoRecoveryIsSet_) {
        val[utility::conversions::to_string_t("auto_recovery")] = ModelBase::toJson(autoRecovery_);
    }
    if(osProfileIsSet_) {
        val[utility::conversions::to_string_t("os_profile")] = ModelBase::toJson(osProfile_);
    }
    if(securityGroupIdsIsSet_) {
        val[utility::conversions::to_string_t("security_group_ids")] = ModelBase::toJson(securityGroupIds_);
    }
    if(networkInterfacesIsSet_) {
        val[utility::conversions::to_string_t("network_interfaces")] = ModelBase::toJson(networkInterfaces_);
    }
    if(blockDeviceMappingsIsSet_) {
        val[utility::conversions::to_string_t("block_device_mappings")] = ModelBase::toJson(blockDeviceMappings_);
    }
    if(marketOptionsIsSet_) {
        val[utility::conversions::to_string_t("market_options")] = ModelBase::toJson(marketOptions_);
    }
    if(internetAccessIsSet_) {
        val[utility::conversions::to_string_t("internet_access")] = ModelBase::toJson(internetAccess_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(tagOptionsIsSet_) {
        val[utility::conversions::to_string_t("tag_options")] = ModelBase::toJson(tagOptions_);
    }

    return val;
}
bool TemplateData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZoneId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_recovery"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_recovery"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoRecovery(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os_profile"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os_profile"));
        if(!fieldValue.is_null())
        {
            TemplateOsProfile refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsProfile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_group_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network_interfaces"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_interfaces"));
        if(!fieldValue.is_null())
        {
            std::vector<TemplateNetworkInterfaceOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkInterfaces(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("block_device_mappings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("block_device_mappings"));
        if(!fieldValue.is_null())
        {
            std::vector<TemplateBlockDeviceMappingOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockDeviceMappings(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("market_options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("market_options"));
        if(!fieldValue.is_null())
        {
            TemplateMarketOptions refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarketOptions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("internet_access"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_access"));
        if(!fieldValue.is_null())
        {
            TemplateInternetAccessOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetAccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_options"));
        if(!fieldValue.is_null())
        {
            std::vector<TemplateTagOptions> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagOptions(refVal);
        }
    }
    return ok;
}


std::string TemplateData::getFlavorId() const
{
    return flavorId_;
}

void TemplateData::setFlavorId(const std::string& value)
{
    flavorId_ = value;
    flavorIdIsSet_ = true;
}

bool TemplateData::flavorIdIsSet() const
{
    return flavorIdIsSet_;
}

void TemplateData::unsetflavorId()
{
    flavorIdIsSet_ = false;
}

std::string TemplateData::getName() const
{
    return name_;
}

void TemplateData::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TemplateData::nameIsSet() const
{
    return nameIsSet_;
}

void TemplateData::unsetname()
{
    nameIsSet_ = false;
}

std::string TemplateData::getDescription() const
{
    return description_;
}

void TemplateData::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TemplateData::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TemplateData::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string TemplateData::getAvailabilityZoneId() const
{
    return availabilityZoneId_;
}

void TemplateData::setAvailabilityZoneId(const std::string& value)
{
    availabilityZoneId_ = value;
    availabilityZoneIdIsSet_ = true;
}

bool TemplateData::availabilityZoneIdIsSet() const
{
    return availabilityZoneIdIsSet_;
}

void TemplateData::unsetavailabilityZoneId()
{
    availabilityZoneIdIsSet_ = false;
}

std::string TemplateData::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void TemplateData::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool TemplateData::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void TemplateData::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool TemplateData::isAutoRecovery() const
{
    return autoRecovery_;
}

void TemplateData::setAutoRecovery(bool value)
{
    autoRecovery_ = value;
    autoRecoveryIsSet_ = true;
}

bool TemplateData::autoRecoveryIsSet() const
{
    return autoRecoveryIsSet_;
}

void TemplateData::unsetautoRecovery()
{
    autoRecoveryIsSet_ = false;
}

TemplateOsProfile TemplateData::getOsProfile() const
{
    return osProfile_;
}

void TemplateData::setOsProfile(const TemplateOsProfile& value)
{
    osProfile_ = value;
    osProfileIsSet_ = true;
}

bool TemplateData::osProfileIsSet() const
{
    return osProfileIsSet_;
}

void TemplateData::unsetosProfile()
{
    osProfileIsSet_ = false;
}

std::vector<std::string>& TemplateData::getSecurityGroupIds()
{
    return securityGroupIds_;
}

void TemplateData::setSecurityGroupIds(const std::vector<std::string>& value)
{
    securityGroupIds_ = value;
    securityGroupIdsIsSet_ = true;
}

bool TemplateData::securityGroupIdsIsSet() const
{
    return securityGroupIdsIsSet_;
}

void TemplateData::unsetsecurityGroupIds()
{
    securityGroupIdsIsSet_ = false;
}

std::vector<TemplateNetworkInterfaceOption>& TemplateData::getNetworkInterfaces()
{
    return networkInterfaces_;
}

void TemplateData::setNetworkInterfaces(const std::vector<TemplateNetworkInterfaceOption>& value)
{
    networkInterfaces_ = value;
    networkInterfacesIsSet_ = true;
}

bool TemplateData::networkInterfacesIsSet() const
{
    return networkInterfacesIsSet_;
}

void TemplateData::unsetnetworkInterfaces()
{
    networkInterfacesIsSet_ = false;
}

std::vector<TemplateBlockDeviceMappingOption>& TemplateData::getBlockDeviceMappings()
{
    return blockDeviceMappings_;
}

void TemplateData::setBlockDeviceMappings(const std::vector<TemplateBlockDeviceMappingOption>& value)
{
    blockDeviceMappings_ = value;
    blockDeviceMappingsIsSet_ = true;
}

bool TemplateData::blockDeviceMappingsIsSet() const
{
    return blockDeviceMappingsIsSet_;
}

void TemplateData::unsetblockDeviceMappings()
{
    blockDeviceMappingsIsSet_ = false;
}

TemplateMarketOptions TemplateData::getMarketOptions() const
{
    return marketOptions_;
}

void TemplateData::setMarketOptions(const TemplateMarketOptions& value)
{
    marketOptions_ = value;
    marketOptionsIsSet_ = true;
}

bool TemplateData::marketOptionsIsSet() const
{
    return marketOptionsIsSet_;
}

void TemplateData::unsetmarketOptions()
{
    marketOptionsIsSet_ = false;
}

TemplateInternetAccessOption TemplateData::getInternetAccess() const
{
    return internetAccess_;
}

void TemplateData::setInternetAccess(const TemplateInternetAccessOption& value)
{
    internetAccess_ = value;
    internetAccessIsSet_ = true;
}

bool TemplateData::internetAccessIsSet() const
{
    return internetAccessIsSet_;
}

void TemplateData::unsetinternetAccess()
{
    internetAccessIsSet_ = false;
}

std::map<std::string, std::string>& TemplateData::getMetadata()
{
    return metadata_;
}

void TemplateData::setMetadata(const std::map<std::string, std::string>& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool TemplateData::metadataIsSet() const
{
    return metadataIsSet_;
}

void TemplateData::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::vector<TemplateTagOptions>& TemplateData::getTagOptions()
{
    return tagOptions_;
}

void TemplateData::setTagOptions(const std::vector<TemplateTagOptions>& value)
{
    tagOptions_ = value;
    tagOptionsIsSet_ = true;
}

bool TemplateData::tagOptionsIsSet() const
{
    return tagOptionsIsSet_;
}

void TemplateData::unsettagOptions()
{
    tagOptionsIsSet_ = false;
}

}
}
}
}
}


