

#include "huaweicloud/modelarts/v1/model/PoolSpecUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolSpecUpdate::PoolSpecUpdate()
{
    scopeIsSet_ = false;
    resourcesIsSet_ = false;
    jobFlavorsIsSet_ = false;
    driverIsSet_ = false;
}

PoolSpecUpdate::~PoolSpecUpdate() = default;

void PoolSpecUpdate::validate()
{
}

web::json::value PoolSpecUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scopeIsSet_) {
        val[utility::conversions::to_string_t("scope")] = ModelBase::toJson(scope_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(jobFlavorsIsSet_) {
        val[utility::conversions::to_string_t("jobFlavors")] = ModelBase::toJson(jobFlavors_);
    }
    if(driverIsSet_) {
        val[utility::conversions::to_string_t("driver")] = ModelBase::toJson(driver_);
    }

    return val;
}
bool PoolSpecUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            std::vector<PoolSpecUpdate_resources> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
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


std::vector<std::string>& PoolSpecUpdate::getScope()
{
    return scope_;
}

void PoolSpecUpdate::setScope(const std::vector<std::string>& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool PoolSpecUpdate::scopeIsSet() const
{
    return scopeIsSet_;
}

void PoolSpecUpdate::unsetscope()
{
    scopeIsSet_ = false;
}

std::vector<PoolSpecUpdate_resources>& PoolSpecUpdate::getResources()
{
    return resources_;
}

void PoolSpecUpdate::setResources(const std::vector<PoolSpecUpdate_resources>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool PoolSpecUpdate::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void PoolSpecUpdate::unsetresources()
{
    resourcesIsSet_ = false;
}

std::vector<std::string>& PoolSpecUpdate::getJobFlavors()
{
    return jobFlavors_;
}

void PoolSpecUpdate::setJobFlavors(const std::vector<std::string>& value)
{
    jobFlavors_ = value;
    jobFlavorsIsSet_ = true;
}

bool PoolSpecUpdate::jobFlavorsIsSet() const
{
    return jobFlavorsIsSet_;
}

void PoolSpecUpdate::unsetjobFlavors()
{
    jobFlavorsIsSet_ = false;
}

PoolDriver PoolSpecUpdate::getDriver() const
{
    return driver_;
}

void PoolSpecUpdate::setDriver(const PoolDriver& value)
{
    driver_ = value;
    driverIsSet_ = true;
}

bool PoolSpecUpdate::driverIsSet() const
{
    return driverIsSet_;
}

void PoolSpecUpdate::unsetdriver()
{
    driverIsSet_ = false;
}

}
}
}
}
}


