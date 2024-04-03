

#include "huaweicloud/cfw/v1/model/FirewallInstanceVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




FirewallInstanceVO::FirewallInstanceVO()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    fwInstanceName_ = "";
    fwInstanceNameIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    haType_ = 0;
    haTypeIsSet_ = false;
    chargeMode_ = 0;
    chargeModeIsSet_ = false;
    serviceType_ = 0;
    serviceTypeIsSet_ = false;
    engineType_ = 0;
    engineTypeIsSet_ = false;
    flavorIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
}

FirewallInstanceVO::~FirewallInstanceVO() = default;

void FirewallInstanceVO::validate()
{
}

web::json::value FirewallInstanceVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(fwInstanceNameIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_name")] = ModelBase::toJson(fwInstanceName_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
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
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool FirewallInstanceVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string FirewallInstanceVO::getFwInstanceId() const
{
    return fwInstanceId_;
}

void FirewallInstanceVO::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool FirewallInstanceVO::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void FirewallInstanceVO::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string FirewallInstanceVO::getResourceId() const
{
    return resourceId_;
}

void FirewallInstanceVO::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool FirewallInstanceVO::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void FirewallInstanceVO::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string FirewallInstanceVO::getName() const
{
    return name_;
}

void FirewallInstanceVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool FirewallInstanceVO::nameIsSet() const
{
    return nameIsSet_;
}

void FirewallInstanceVO::unsetname()
{
    nameIsSet_ = false;
}

std::string FirewallInstanceVO::getFwInstanceName() const
{
    return fwInstanceName_;
}

void FirewallInstanceVO::setFwInstanceName(const std::string& value)
{
    fwInstanceName_ = value;
    fwInstanceNameIsSet_ = true;
}

bool FirewallInstanceVO::fwInstanceNameIsSet() const
{
    return fwInstanceNameIsSet_;
}

void FirewallInstanceVO::unsetfwInstanceName()
{
    fwInstanceNameIsSet_ = false;
}

std::string FirewallInstanceVO::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void FirewallInstanceVO::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool FirewallInstanceVO::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void FirewallInstanceVO::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

int32_t FirewallInstanceVO::getHaType() const
{
    return haType_;
}

void FirewallInstanceVO::setHaType(int32_t value)
{
    haType_ = value;
    haTypeIsSet_ = true;
}

bool FirewallInstanceVO::haTypeIsSet() const
{
    return haTypeIsSet_;
}

void FirewallInstanceVO::unsethaType()
{
    haTypeIsSet_ = false;
}

int32_t FirewallInstanceVO::getChargeMode() const
{
    return chargeMode_;
}

void FirewallInstanceVO::setChargeMode(int32_t value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool FirewallInstanceVO::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void FirewallInstanceVO::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

int32_t FirewallInstanceVO::getServiceType() const
{
    return serviceType_;
}

void FirewallInstanceVO::setServiceType(int32_t value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool FirewallInstanceVO::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void FirewallInstanceVO::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

int32_t FirewallInstanceVO::getEngineType() const
{
    return engineType_;
}

void FirewallInstanceVO::setEngineType(int32_t value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool FirewallInstanceVO::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void FirewallInstanceVO::unsetengineType()
{
    engineTypeIsSet_ = false;
}

Flavor FirewallInstanceVO::getFlavor() const
{
    return flavor_;
}

void FirewallInstanceVO::setFlavor(const Flavor& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool FirewallInstanceVO::flavorIsSet() const
{
    return flavorIsSet_;
}

void FirewallInstanceVO::unsetflavor()
{
    flavorIsSet_ = false;
}

int32_t FirewallInstanceVO::getStatus() const
{
    return status_;
}

void FirewallInstanceVO::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool FirewallInstanceVO::statusIsSet() const
{
    return statusIsSet_;
}

void FirewallInstanceVO::unsetstatus()
{
    statusIsSet_ = false;
}

std::string FirewallInstanceVO::getTags() const
{
    return tags_;
}

void FirewallInstanceVO::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool FirewallInstanceVO::tagsIsSet() const
{
    return tagsIsSet_;
}

void FirewallInstanceVO::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


