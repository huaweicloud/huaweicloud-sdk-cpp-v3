

#include "huaweicloud/codeartsdeploy/v2/model/DeploymentGroupUpdateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeploymentGroupUpdateRequest::DeploymentGroupUpdateRequest()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    slaveClusterId_ = "";
    slaveClusterIdIsSet_ = false;
    autoConnectionTestSwitch_ = 0;
    autoConnectionTestSwitchIsSet_ = false;
}

DeploymentGroupUpdateRequest::~DeploymentGroupUpdateRequest() = default;

void DeploymentGroupUpdateRequest::validate()
{
}

web::json::value DeploymentGroupUpdateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(slaveClusterIdIsSet_) {
        val[utility::conversions::to_string_t("slave_cluster_id")] = ModelBase::toJson(slaveClusterId_);
    }
    if(autoConnectionTestSwitchIsSet_) {
        val[utility::conversions::to_string_t("auto_connection_test_switch")] = ModelBase::toJson(autoConnectionTestSwitch_);
    }

    return val;
}

bool DeploymentGroupUpdateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("auto_connection_test_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_connection_test_switch"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoConnectionTestSwitch(refVal);
        }
    }
    return ok;
}

std::string DeploymentGroupUpdateRequest::getName() const
{
    return name_;
}

void DeploymentGroupUpdateRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DeploymentGroupUpdateRequest::nameIsSet() const
{
    return nameIsSet_;
}

void DeploymentGroupUpdateRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string DeploymentGroupUpdateRequest::getDescription() const
{
    return description_;
}

void DeploymentGroupUpdateRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DeploymentGroupUpdateRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DeploymentGroupUpdateRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string DeploymentGroupUpdateRequest::getSlaveClusterId() const
{
    return slaveClusterId_;
}

void DeploymentGroupUpdateRequest::setSlaveClusterId(const std::string& value)
{
    slaveClusterId_ = value;
    slaveClusterIdIsSet_ = true;
}

bool DeploymentGroupUpdateRequest::slaveClusterIdIsSet() const
{
    return slaveClusterIdIsSet_;
}

void DeploymentGroupUpdateRequest::unsetslaveClusterId()
{
    slaveClusterIdIsSet_ = false;
}

int32_t DeploymentGroupUpdateRequest::getAutoConnectionTestSwitch() const
{
    return autoConnectionTestSwitch_;
}

void DeploymentGroupUpdateRequest::setAutoConnectionTestSwitch(int32_t value)
{
    autoConnectionTestSwitch_ = value;
    autoConnectionTestSwitchIsSet_ = true;
}

bool DeploymentGroupUpdateRequest::autoConnectionTestSwitchIsSet() const
{
    return autoConnectionTestSwitchIsSet_;
}

void DeploymentGroupUpdateRequest::unsetautoConnectionTestSwitch()
{
    autoConnectionTestSwitchIsSet_ = false;
}

}
}
}
}
}


