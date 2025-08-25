

#include "huaweicloud/cce/v3/model/ShowAutopilotUpgradeWorkFlowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowAutopilotUpgradeWorkFlowRequest::ShowAutopilotUpgradeWorkFlowRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    upgradeWorkflowId_ = "";
    upgradeWorkflowIdIsSet_ = false;
}

ShowAutopilotUpgradeWorkFlowRequest::~ShowAutopilotUpgradeWorkFlowRequest() = default;

void ShowAutopilotUpgradeWorkFlowRequest::validate()
{
}

web::json::value ShowAutopilotUpgradeWorkFlowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(upgradeWorkflowIdIsSet_) {
        val[utility::conversions::to_string_t("upgrade_workflow_id")] = ModelBase::toJson(upgradeWorkflowId_);
    }

    return val;
}
bool ShowAutopilotUpgradeWorkFlowRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upgrade_workflow_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_workflow_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeWorkflowId(refVal);
        }
    }
    return ok;
}


std::string ShowAutopilotUpgradeWorkFlowRequest::getClusterId() const
{
    return clusterId_;
}

void ShowAutopilotUpgradeWorkFlowRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowAutopilotUpgradeWorkFlowRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowAutopilotUpgradeWorkFlowRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowAutopilotUpgradeWorkFlowRequest::getUpgradeWorkflowId() const
{
    return upgradeWorkflowId_;
}

void ShowAutopilotUpgradeWorkFlowRequest::setUpgradeWorkflowId(const std::string& value)
{
    upgradeWorkflowId_ = value;
    upgradeWorkflowIdIsSet_ = true;
}

bool ShowAutopilotUpgradeWorkFlowRequest::upgradeWorkflowIdIsSet() const
{
    return upgradeWorkflowIdIsSet_;
}

void ShowAutopilotUpgradeWorkFlowRequest::unsetupgradeWorkflowId()
{
    upgradeWorkflowIdIsSet_ = false;
}

}
}
}
}
}


