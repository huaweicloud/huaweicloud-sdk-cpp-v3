

#include "huaweicloud/modelarts/v1/model/PoolStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolStatus::PoolStatus()
{
    phase_ = "";
    phaseIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resourcesIsSet_ = false;
    scopeIsSet_ = false;
    driverIsSet_ = false;
    parent_ = "";
    parentIsSet_ = false;
    root_ = "";
    rootIsSet_ = false;
    clustersIsSet_ = false;
}

PoolStatus::~PoolStatus() = default;

void PoolStatus::validate()
{
}

web::json::value PoolStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(scopeIsSet_) {
        val[utility::conversions::to_string_t("scope")] = ModelBase::toJson(scope_);
    }
    if(driverIsSet_) {
        val[utility::conversions::to_string_t("driver")] = ModelBase::toJson(driver_);
    }
    if(parentIsSet_) {
        val[utility::conversions::to_string_t("parent")] = ModelBase::toJson(parent_);
    }
    if(rootIsSet_) {
        val[utility::conversions::to_string_t("root")] = ModelBase::toJson(root_);
    }
    if(clustersIsSet_) {
        val[utility::conversions::to_string_t("clusters")] = ModelBase::toJson(clusters_);
    }

    return val;
}
bool PoolStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("phase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phase"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            PoolStatus_resources refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope"));
        if(!fieldValue.is_null())
        {
            std::vector<PoolStatus_scope> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScope(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("driver"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("driver"));
        if(!fieldValue.is_null())
        {
            PoolStatus_driver refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDriver(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("root"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("root"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoot(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clusters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusters"));
        if(!fieldValue.is_null())
        {
            PoolStatus_clusters refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusters(refVal);
        }
    }
    return ok;
}


std::string PoolStatus::getPhase() const
{
    return phase_;
}

void PoolStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool PoolStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void PoolStatus::unsetphase()
{
    phaseIsSet_ = false;
}

std::string PoolStatus::getMessage() const
{
    return message_;
}

void PoolStatus::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool PoolStatus::messageIsSet() const
{
    return messageIsSet_;
}

void PoolStatus::unsetmessage()
{
    messageIsSet_ = false;
}

PoolStatus_resources PoolStatus::getResources() const
{
    return resources_;
}

void PoolStatus::setResources(const PoolStatus_resources& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool PoolStatus::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void PoolStatus::unsetresources()
{
    resourcesIsSet_ = false;
}

std::vector<PoolStatus_scope>& PoolStatus::getScope()
{
    return scope_;
}

void PoolStatus::setScope(const std::vector<PoolStatus_scope>& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool PoolStatus::scopeIsSet() const
{
    return scopeIsSet_;
}

void PoolStatus::unsetscope()
{
    scopeIsSet_ = false;
}

PoolStatus_driver PoolStatus::getDriver() const
{
    return driver_;
}

void PoolStatus::setDriver(const PoolStatus_driver& value)
{
    driver_ = value;
    driverIsSet_ = true;
}

bool PoolStatus::driverIsSet() const
{
    return driverIsSet_;
}

void PoolStatus::unsetdriver()
{
    driverIsSet_ = false;
}

std::string PoolStatus::getParent() const
{
    return parent_;
}

void PoolStatus::setParent(const std::string& value)
{
    parent_ = value;
    parentIsSet_ = true;
}

bool PoolStatus::parentIsSet() const
{
    return parentIsSet_;
}

void PoolStatus::unsetparent()
{
    parentIsSet_ = false;
}

std::string PoolStatus::getRoot() const
{
    return root_;
}

void PoolStatus::setRoot(const std::string& value)
{
    root_ = value;
    rootIsSet_ = true;
}

bool PoolStatus::rootIsSet() const
{
    return rootIsSet_;
}

void PoolStatus::unsetroot()
{
    rootIsSet_ = false;
}

PoolStatus_clusters PoolStatus::getClusters() const
{
    return clusters_;
}

void PoolStatus::setClusters(const PoolStatus_clusters& value)
{
    clusters_ = value;
    clustersIsSet_ = true;
}

bool PoolStatus::clustersIsSet() const
{
    return clustersIsSet_;
}

void PoolStatus::unsetclusters()
{
    clustersIsSet_ = false;
}

}
}
}
}
}


