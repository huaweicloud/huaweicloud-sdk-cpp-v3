

#include "huaweicloud/modelarts/v1/model/PoolSpecCreation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolSpecCreation::PoolSpecCreation()
{
    type_ = "";
    typeIsSet_ = false;
    scopeIsSet_ = false;
    resourcesIsSet_ = false;
    networkIsSet_ = false;
    jobFlavorsIsSet_ = false;
    driverIsSet_ = false;
}

PoolSpecCreation::~PoolSpecCreation() = default;

void PoolSpecCreation::validate()
{
}

web::json::value PoolSpecCreation::toJson() const
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
    if(networkIsSet_) {
        val[utility::conversions::to_string_t("network")] = ModelBase::toJson(network_);
    }
    if(jobFlavorsIsSet_) {
        val[utility::conversions::to_string_t("jobFlavors")] = ModelBase::toJson(jobFlavors_);
    }
    if(driverIsSet_) {
        val[utility::conversions::to_string_t("driver")] = ModelBase::toJson(driver_);
    }

    return val;
}
bool PoolSpecCreation::fromJson(const web::json::value& val)
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
            std::vector<PoolResourceFlavor> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network"));
        if(!fieldValue.is_null())
        {
            PoolSpecCreation_network refVal;
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
    return ok;
}


std::string PoolSpecCreation::getType() const
{
    return type_;
}

void PoolSpecCreation::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PoolSpecCreation::typeIsSet() const
{
    return typeIsSet_;
}

void PoolSpecCreation::unsettype()
{
    typeIsSet_ = false;
}

std::vector<std::string>& PoolSpecCreation::getScope()
{
    return scope_;
}

void PoolSpecCreation::setScope(const std::vector<std::string>& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool PoolSpecCreation::scopeIsSet() const
{
    return scopeIsSet_;
}

void PoolSpecCreation::unsetscope()
{
    scopeIsSet_ = false;
}

std::vector<PoolResourceFlavor>& PoolSpecCreation::getResources()
{
    return resources_;
}

void PoolSpecCreation::setResources(const std::vector<PoolResourceFlavor>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool PoolSpecCreation::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void PoolSpecCreation::unsetresources()
{
    resourcesIsSet_ = false;
}

PoolSpecCreation_network PoolSpecCreation::getNetwork() const
{
    return network_;
}

void PoolSpecCreation::setNetwork(const PoolSpecCreation_network& value)
{
    network_ = value;
    networkIsSet_ = true;
}

bool PoolSpecCreation::networkIsSet() const
{
    return networkIsSet_;
}

void PoolSpecCreation::unsetnetwork()
{
    networkIsSet_ = false;
}

std::vector<std::string>& PoolSpecCreation::getJobFlavors()
{
    return jobFlavors_;
}

void PoolSpecCreation::setJobFlavors(const std::vector<std::string>& value)
{
    jobFlavors_ = value;
    jobFlavorsIsSet_ = true;
}

bool PoolSpecCreation::jobFlavorsIsSet() const
{
    return jobFlavorsIsSet_;
}

void PoolSpecCreation::unsetjobFlavors()
{
    jobFlavorsIsSet_ = false;
}

PoolDriver PoolSpecCreation::getDriver() const
{
    return driver_;
}

void PoolSpecCreation::setDriver(const PoolDriver& value)
{
    driver_ = value;
    driverIsSet_ = true;
}

bool PoolSpecCreation::driverIsSet() const
{
    return driverIsSet_;
}

void PoolSpecCreation::unsetdriver()
{
    driverIsSet_ = false;
}

}
}
}
}
}


