

#include "huaweicloud/codeartsdeploy/v2/model/DeploymentGroup.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeploymentGroup::DeploymentGroup()
{
    name_ = "";
    nameIsSet_ = false;
    regionName_ = "";
    regionNameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    os_ = "";
    osIsSet_ = false;
    slaveClusterId_ = "";
    slaveClusterIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    isProxyMode_ = 0;
    isProxyModeIsSet_ = false;
}

DeploymentGroup::~DeploymentGroup() = default;

void DeploymentGroup::validate()
{
}

web::json::value DeploymentGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(regionNameIsSet_) {
        val[utility::conversions::to_string_t("region_name")] = ModelBase::toJson(regionName_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
    }
    if(slaveClusterIdIsSet_) {
        val[utility::conversions::to_string_t("slave_cluster_id")] = ModelBase::toJson(slaveClusterId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(isProxyModeIsSet_) {
        val[utility::conversions::to_string_t("is_proxy_mode")] = ModelBase::toJson(isProxyMode_);
    }

    return val;
}

bool DeploymentGroup::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slave_cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slave_cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlaveClusterId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_proxy_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_proxy_mode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsProxyMode(refVal);
        }
    }
    return ok;
}

std::string DeploymentGroup::getName() const
{
    return name_;
}

void DeploymentGroup::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DeploymentGroup::nameIsSet() const
{
    return nameIsSet_;
}

void DeploymentGroup::unsetname()
{
    nameIsSet_ = false;
}

std::string DeploymentGroup::getRegionName() const
{
    return regionName_;
}

void DeploymentGroup::setRegionName(const std::string& value)
{
    regionName_ = value;
    regionNameIsSet_ = true;
}

bool DeploymentGroup::regionNameIsSet() const
{
    return regionNameIsSet_;
}

void DeploymentGroup::unsetregionName()
{
    regionNameIsSet_ = false;
}

std::string DeploymentGroup::getProjectId() const
{
    return projectId_;
}

void DeploymentGroup::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeploymentGroup::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeploymentGroup::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeploymentGroup::getOs() const
{
    return os_;
}

void DeploymentGroup::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool DeploymentGroup::osIsSet() const
{
    return osIsSet_;
}

void DeploymentGroup::unsetos()
{
    osIsSet_ = false;
}

std::string DeploymentGroup::getSlaveClusterId() const
{
    return slaveClusterId_;
}

void DeploymentGroup::setSlaveClusterId(const std::string& value)
{
    slaveClusterId_ = value;
    slaveClusterIdIsSet_ = true;
}

bool DeploymentGroup::slaveClusterIdIsSet() const
{
    return slaveClusterIdIsSet_;
}

void DeploymentGroup::unsetslaveClusterId()
{
    slaveClusterIdIsSet_ = false;
}

std::string DeploymentGroup::getDescription() const
{
    return description_;
}

void DeploymentGroup::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DeploymentGroup::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DeploymentGroup::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t DeploymentGroup::getIsProxyMode() const
{
    return isProxyMode_;
}

void DeploymentGroup::setIsProxyMode(int32_t value)
{
    isProxyMode_ = value;
    isProxyModeIsSet_ = true;
}

bool DeploymentGroup::isProxyModeIsSet() const
{
    return isProxyModeIsSet_;
}

void DeploymentGroup::unsetisProxyMode()
{
    isProxyModeIsSet_ = false;
}

}
}
}
}
}


