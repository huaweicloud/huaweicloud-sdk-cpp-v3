

#include "huaweicloud/cce/v3/model/ShowUpgradeWorkFlowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowUpgradeWorkFlowRequest::ShowUpgradeWorkFlowRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    upgradeWorkflowId_ = "";
    upgradeWorkflowIdIsSet_ = false;
}

ShowUpgradeWorkFlowRequest::~ShowUpgradeWorkFlowRequest() = default;

void ShowUpgradeWorkFlowRequest::validate()
{
}

web::json::value ShowUpgradeWorkFlowRequest::toJson() const
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
bool ShowUpgradeWorkFlowRequest::fromJson(const web::json::value& val)
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


std::string ShowUpgradeWorkFlowRequest::getClusterId() const
{
    return clusterId_;
}

void ShowUpgradeWorkFlowRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowUpgradeWorkFlowRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowUpgradeWorkFlowRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowUpgradeWorkFlowRequest::getUpgradeWorkflowId() const
{
    return upgradeWorkflowId_;
}

void ShowUpgradeWorkFlowRequest::setUpgradeWorkflowId(const std::string& value)
{
    upgradeWorkflowId_ = value;
    upgradeWorkflowIdIsSet_ = true;
}

bool ShowUpgradeWorkFlowRequest::upgradeWorkflowIdIsSet() const
{
    return upgradeWorkflowIdIsSet_;
}

void ShowUpgradeWorkFlowRequest::unsetupgradeWorkflowId()
{
    upgradeWorkflowIdIsSet_ = false;
}

}
}
}
}
}


