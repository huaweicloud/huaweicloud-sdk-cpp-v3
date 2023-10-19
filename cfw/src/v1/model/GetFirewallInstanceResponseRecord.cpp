

#include "huaweicloud/cfw/v1/model/GetFirewallInstanceResponseRecord.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




GetFirewallInstanceResponseRecord::GetFirewallInstanceResponseRecord()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    haType_ = 0;
    haTypeIsSet_ = false;
    chargeMode_ = 0;
    chargeModeIsSet_ = false;
    serviceType_ = 0;
    serviceTypeIsSet_ = false;
    engineType_ = 0;
    engineTypeIsSet_ = false;
    flavorIsSet_ = false;
    protectObjectsIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    isOldFirewallInstance_ = false;
    isOldFirewallInstanceIsSet_ = false;
    supportIpv6_ = false;
    supportIpv6IsSet_ = false;
    featureToggleIsSet_ = false;
    resourcesIsSet_ = false;
    fwInstanceName_ = "";
    fwInstanceNameIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    supportUrlFiltering_ = false;
    supportUrlFilteringIsSet_ = false;
}

GetFirewallInstanceResponseRecord::~GetFirewallInstanceResponseRecord() = default;

void GetFirewallInstanceResponseRecord::validate()
{
}

web::json::value GetFirewallInstanceResponseRecord::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(haTypeIsSet_) {
        val[utility::conversions::to_string_t("ha_type")] = ModelBase::toJson(haType_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(engineTypeIsSet_) {
        val[utility::conversions::to_string_t("engine_type")] = ModelBase::toJson(engineType_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(protectObjectsIsSet_) {
        val[utility::conversions::to_string_t("protect_objects")] = ModelBase::toJson(protectObjects_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(isOldFirewallInstanceIsSet_) {
        val[utility::conversions::to_string_t("is_old_firewall_instance")] = ModelBase::toJson(isOldFirewallInstance_);
    }
    if(supportIpv6IsSet_) {
        val[utility::conversions::to_string_t("support_ipv6")] = ModelBase::toJson(supportIpv6_);
    }
    if(featureToggleIsSet_) {
        val[utility::conversions::to_string_t("feature_toggle")] = ModelBase::toJson(featureToggle_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(fwInstanceNameIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_name")] = ModelBase::toJson(fwInstanceName_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(supportUrlFilteringIsSet_) {
        val[utility::conversions::to_string_t("support_url_filtering")] = ModelBase::toJson(supportUrlFiltering_);
    }

    return val;
}
bool GetFirewallInstanceResponseRecord::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ha_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ha_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHaType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            Flavor refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protect_objects"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protect_objects"));
        if(!fieldValue.is_null())
        {
            std::vector<ProtectObjectVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectObjects(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_old_firewall_instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_old_firewall_instance"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOldFirewallInstance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_ipv6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_ipv6"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportIpv6(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("feature_toggle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature_toggle"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, bool> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeatureToggle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<FirewallInstanceResource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fw_instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_url_filtering"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_url_filtering"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportUrlFiltering(refVal);
        }
    }
    return ok;
}


std::string GetFirewallInstanceResponseRecord::getFwInstanceId() const
{
    return fwInstanceId_;
}

void GetFirewallInstanceResponseRecord::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool GetFirewallInstanceResponseRecord::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void GetFirewallInstanceResponseRecord::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string GetFirewallInstanceResponseRecord::getName() const
{
    return name_;
}

void GetFirewallInstanceResponseRecord::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GetFirewallInstanceResponseRecord::nameIsSet() const
{
    return nameIsSet_;
}

void GetFirewallInstanceResponseRecord::unsetname()
{
    nameIsSet_ = false;
}

int32_t GetFirewallInstanceResponseRecord::getHaType() const
{
    return haType_;
}

void GetFirewallInstanceResponseRecord::setHaType(int32_t value)
{
    haType_ = value;
    haTypeIsSet_ = true;
}

bool GetFirewallInstanceResponseRecord::haTypeIsSet() const
{
    return haTypeIsSet_;
}

void GetFirewallInstanceResponseRecord::unsethaType()
{
    haTypeIsSet_ = false;
}

int32_t GetFirewallInstanceResponseRecord::getChargeMode() const
{
    return chargeMode_;
}

void GetFirewallInstanceResponseRecord::setChargeMode(int32_t value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool GetFirewallInstanceResponseRecord::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void GetFirewallInstanceResponseRecord::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

int32_t GetFirewallInstanceResponseRecord::getServiceType() const
{
    return serviceType_;
}

void GetFirewallInstanceResponseRecord::setServiceType(int32_t value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool GetFirewallInstanceResponseRecord::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void GetFirewallInstanceResponseRecord::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

int32_t GetFirewallInstanceResponseRecord::getEngineType() const
{
    return engineType_;
}

void GetFirewallInstanceResponseRecord::setEngineType(int32_t value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool GetFirewallInstanceResponseRecord::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void GetFirewallInstanceResponseRecord::unsetengineType()
{
    engineTypeIsSet_ = false;
}

Flavor GetFirewallInstanceResponseRecord::getFlavor() const
{
    return flavor_;
}

void GetFirewallInstanceResponseRecord::setFlavor(const Flavor& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool GetFirewallInstanceResponseRecord::flavorIsSet() const
{
    return flavorIsSet_;
}

void GetFirewallInstanceResponseRecord::unsetflavor()
{
    flavorIsSet_ = false;
}

std::vector<ProtectObjectVO>& GetFirewallInstanceResponseRecord::getProtectObjects()
{
    return protectObjects_;
}

void GetFirewallInstanceResponseRecord::setProtectObjects(const std::vector<ProtectObjectVO>& value)
{
    protectObjects_ = value;
    protectObjectsIsSet_ = true;
}

bool GetFirewallInstanceResponseRecord::protectObjectsIsSet() const
{
    return protectObjectsIsSet_;
}

void GetFirewallInstanceResponseRecord::unsetprotectObjects()
{
    protectObjectsIsSet_ = false;
}

int32_t GetFirewallInstanceResponseRecord::getStatus() const
{
    return status_;
}

void GetFirewallInstanceResponseRecord::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GetFirewallInstanceResponseRecord::statusIsSet() const
{
    return statusIsSet_;
}

void GetFirewallInstanceResponseRecord::unsetstatus()
{
    statusIsSet_ = false;
}

bool GetFirewallInstanceResponseRecord::isIsOldFirewallInstance() const
{
    return isOldFirewallInstance_;
}

void GetFirewallInstanceResponseRecord::setIsOldFirewallInstance(bool value)
{
    isOldFirewallInstance_ = value;
    isOldFirewallInstanceIsSet_ = true;
}

bool GetFirewallInstanceResponseRecord::isOldFirewallInstanceIsSet() const
{
    return isOldFirewallInstanceIsSet_;
}

void GetFirewallInstanceResponseRecord::unsetisOldFirewallInstance()
{
    isOldFirewallInstanceIsSet_ = false;
}

bool GetFirewallInstanceResponseRecord::isSupportIpv6() const
{
    return supportIpv6_;
}

void GetFirewallInstanceResponseRecord::setSupportIpv6(bool value)
{
    supportIpv6_ = value;
    supportIpv6IsSet_ = true;
}

bool GetFirewallInstanceResponseRecord::supportIpv6IsSet() const
{
    return supportIpv6IsSet_;
}

void GetFirewallInstanceResponseRecord::unsetsupportIpv6()
{
    supportIpv6IsSet_ = false;
}

std::map<std::string, bool>& GetFirewallInstanceResponseRecord::getFeatureToggle()
{
    return featureToggle_;
}

void GetFirewallInstanceResponseRecord::setFeatureToggle(std::map<std::string, bool> value)
{
    featureToggle_ = value;
    featureToggleIsSet_ = true;
}

bool GetFirewallInstanceResponseRecord::featureToggleIsSet() const
{
    return featureToggleIsSet_;
}

void GetFirewallInstanceResponseRecord::unsetfeatureToggle()
{
    featureToggleIsSet_ = false;
}

std::vector<FirewallInstanceResource>& GetFirewallInstanceResponseRecord::getResources()
{
    return resources_;
}

void GetFirewallInstanceResponseRecord::setResources(const std::vector<FirewallInstanceResource>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool GetFirewallInstanceResponseRecord::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void GetFirewallInstanceResponseRecord::unsetresources()
{
    resourcesIsSet_ = false;
}

std::string GetFirewallInstanceResponseRecord::getFwInstanceName() const
{
    return fwInstanceName_;
}

void GetFirewallInstanceResponseRecord::setFwInstanceName(const std::string& value)
{
    fwInstanceName_ = value;
    fwInstanceNameIsSet_ = true;
}

bool GetFirewallInstanceResponseRecord::fwInstanceNameIsSet() const
{
    return fwInstanceNameIsSet_;
}

void GetFirewallInstanceResponseRecord::unsetfwInstanceName()
{
    fwInstanceNameIsSet_ = false;
}

std::string GetFirewallInstanceResponseRecord::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void GetFirewallInstanceResponseRecord::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool GetFirewallInstanceResponseRecord::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void GetFirewallInstanceResponseRecord::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string GetFirewallInstanceResponseRecord::getResourceId() const
{
    return resourceId_;
}

void GetFirewallInstanceResponseRecord::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool GetFirewallInstanceResponseRecord::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void GetFirewallInstanceResponseRecord::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

bool GetFirewallInstanceResponseRecord::isSupportUrlFiltering() const
{
    return supportUrlFiltering_;
}

void GetFirewallInstanceResponseRecord::setSupportUrlFiltering(bool value)
{
    supportUrlFiltering_ = value;
    supportUrlFilteringIsSet_ = true;
}

bool GetFirewallInstanceResponseRecord::supportUrlFilteringIsSet() const
{
    return supportUrlFilteringIsSet_;
}

void GetFirewallInstanceResponseRecord::unsetsupportUrlFiltering()
{
    supportUrlFilteringIsSet_ = false;
}

}
}
}
}
}


