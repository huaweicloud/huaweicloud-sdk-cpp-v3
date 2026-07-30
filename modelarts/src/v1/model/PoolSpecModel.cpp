

#include "huaweicloud/modelarts/v1/model/PoolSpecModel.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolSpecModel::PoolSpecModel()
{
    type_ = "";
    typeIsSet_ = false;
    scopeIsSet_ = false;
    resourcesIsSet_ = false;
    containernetworkIsSet_ = false;
    networkIsSet_ = false;
    jobFlavorsIsSet_ = false;
    driverIsSet_ = false;
    controlMode_ = 0;
    controlModeIsSet_ = false;
}

PoolSpecModel::~PoolSpecModel() = default;

void PoolSpecModel::validate()
{
}

web::json::value PoolSpecModel::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(scopeIsSet_) {
        val[utility::conversions::to_string_t("scope")] = ModelBase::toJson(scope_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(containernetworkIsSet_) {
        val[utility::conversions::to_string_t("containernetwork")] = ModelBase::toJson(containernetwork_);
    }
    if(networkIsSet_) {
        val[utility::conversions::to_string_t("network")] = ModelBase::toJson(network_);
    }
    if(jobFlavorsIsSet_) {
        val[utility::conversions::to_string_t("jobFlavors")] = ModelBase::toJson(jobFlavors_);
    }
    if(driverIsSet_) {
        val[utility::conversions::to_string_t("driver")] = ModelBase::toJson(driver_);
    }
    if(controlModeIsSet_) {
        val[utility::conversions::to_string_t("controlMode")] = ModelBase::toJson(controlMode_);
    }

    return val;
}
bool PoolSpecModel::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScope(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<PoolSpecModel_resources> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("containernetwork"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("containernetwork"));
        if(!fieldValue.is_null())
        {
            PoolSpecModel_containernetwork refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContainernetwork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network"));
        if(!fieldValue.is_null())
        {
            PoolSpecModel_network refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetwork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobFlavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobFlavors"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobFlavors(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("driver"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("driver"));
        if(!fieldValue.is_null())
        {
            PoolDriver refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDriver(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("controlMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("controlMode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControlMode(refVal);
        }
    }
    return ok;
}


std::string PoolSpecModel::getType() const
{
    return type_;
}

void PoolSpecModel::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PoolSpecModel::typeIsSet() const
{
    return typeIsSet_;
}

void PoolSpecModel::unsettype()
{
    typeIsSet_ = false;
}

std::vector<std::string>& PoolSpecModel::getScope()
{
    return scope_;
}

void PoolSpecModel::setScope(const std::vector<std::string>& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool PoolSpecModel::scopeIsSet() const
{
    return scopeIsSet_;
}

void PoolSpecModel::unsetscope()
{
    scopeIsSet_ = false;
}

std::vector<PoolSpecModel_resources>& PoolSpecModel::getResources()
{
    return resources_;
}

void PoolSpecModel::setResources(const std::vector<PoolSpecModel_resources>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool PoolSpecModel::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void PoolSpecModel::unsetresources()
{
    resourcesIsSet_ = false;
}

PoolSpecModel_containernetwork PoolSpecModel::getContainernetwork() const
{
    return containernetwork_;
}

void PoolSpecModel::setContainernetwork(const PoolSpecModel_containernetwork& value)
{
    containernetwork_ = value;
    containernetworkIsSet_ = true;
}

bool PoolSpecModel::containernetworkIsSet() const
{
    return containernetworkIsSet_;
}

void PoolSpecModel::unsetcontainernetwork()
{
    containernetworkIsSet_ = false;
}

PoolSpecModel_network PoolSpecModel::getNetwork() const
{
    return network_;
}

void PoolSpecModel::setNetwork(const PoolSpecModel_network& value)
{
    network_ = value;
    networkIsSet_ = true;
}

bool PoolSpecModel::networkIsSet() const
{
    return networkIsSet_;
}

void PoolSpecModel::unsetnetwork()
{
    networkIsSet_ = false;
}

std::vector<std::string>& PoolSpecModel::getJobFlavors()
{
    return jobFlavors_;
}

void PoolSpecModel::setJobFlavors(const std::vector<std::string>& value)
{
    jobFlavors_ = value;
    jobFlavorsIsSet_ = true;
}

bool PoolSpecModel::jobFlavorsIsSet() const
{
    return jobFlavorsIsSet_;
}

void PoolSpecModel::unsetjobFlavors()
{
    jobFlavorsIsSet_ = false;
}

PoolDriver PoolSpecModel::getDriver() const
{
    return driver_;
}

void PoolSpecModel::setDriver(const PoolDriver& value)
{
    driver_ = value;
    driverIsSet_ = true;
}

bool PoolSpecModel::driverIsSet() const
{
    return driverIsSet_;
}

void PoolSpecModel::unsetdriver()
{
    driverIsSet_ = false;
}

int32_t PoolSpecModel::getControlMode() const
{
    return controlMode_;
}

void PoolSpecModel::setControlMode(int32_t value)
{
    controlMode_ = value;
    controlModeIsSet_ = true;
}

bool PoolSpecModel::controlModeIsSet() const
{
    return controlModeIsSet_;
}

void PoolSpecModel::unsetcontrolMode()
{
    controlModeIsSet_ = false;
}

}
}
}
}
}


