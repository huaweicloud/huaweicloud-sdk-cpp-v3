

#include "huaweicloud/modelarts/v1/model/NodeStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeStatus::NodeStatus()
{
    phase_ = "";
    phaseIsSet_ = false;
    az_ = "";
    azIsSet_ = false;
    privateIp_ = "";
    privateIpIsSet_ = false;
    resourcesIsSet_ = false;
    availableResourcesIsSet_ = false;
}

NodeStatus::~NodeStatus() = default;

void NodeStatus::validate()
{
}

web::json::value NodeStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }
    if(azIsSet_) {
        val[utility::conversions::to_string_t("az")] = ModelBase::toJson(az_);
    }
    if(privateIpIsSet_) {
        val[utility::conversions::to_string_t("privateIp")] = ModelBase::toJson(privateIp_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(availableResourcesIsSet_) {
        val[utility::conversions::to_string_t("availableResources")] = ModelBase::toJson(availableResources_);
    }

    return val;
}
bool NodeStatus::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("privateIp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("privateIp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            NodeResource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availableResources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availableResources"));
        if(!fieldValue.is_null())
        {
            NodeResource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailableResources(refVal);
        }
    }
    return ok;
}


std::string NodeStatus::getPhase() const
{
    return phase_;
}

void NodeStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool NodeStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void NodeStatus::unsetphase()
{
    phaseIsSet_ = false;
}

std::string NodeStatus::getAz() const
{
    return az_;
}

void NodeStatus::setAz(const std::string& value)
{
    az_ = value;
    azIsSet_ = true;
}

bool NodeStatus::azIsSet() const
{
    return azIsSet_;
}

void NodeStatus::unsetaz()
{
    azIsSet_ = false;
}

std::string NodeStatus::getPrivateIp() const
{
    return privateIp_;
}

void NodeStatus::setPrivateIp(const std::string& value)
{
    privateIp_ = value;
    privateIpIsSet_ = true;
}

bool NodeStatus::privateIpIsSet() const
{
    return privateIpIsSet_;
}

void NodeStatus::unsetprivateIp()
{
    privateIpIsSet_ = false;
}

NodeResource NodeStatus::getResources() const
{
    return resources_;
}

void NodeStatus::setResources(const NodeResource& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool NodeStatus::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void NodeStatus::unsetresources()
{
    resourcesIsSet_ = false;
}

NodeResource NodeStatus::getAvailableResources() const
{
    return availableResources_;
}

void NodeStatus::setAvailableResources(const NodeResource& value)
{
    availableResources_ = value;
    availableResourcesIsSet_ = true;
}

bool NodeStatus::availableResourcesIsSet() const
{
    return availableResourcesIsSet_;
}

void NodeStatus::unsetavailableResources()
{
    availableResourcesIsSet_ = false;
}

}
}
}
}
}


