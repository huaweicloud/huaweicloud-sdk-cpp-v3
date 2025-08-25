

#include "huaweicloud/cce/v3/model/UpgradeAutopilotWorkFlowUpdateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeAutopilotWorkFlowUpdateRequest::UpgradeAutopilotWorkFlowUpdateRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    upgradeWorkflowId_ = "";
    upgradeWorkflowIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpgradeAutopilotWorkFlowUpdateRequest::~UpgradeAutopilotWorkFlowUpdateRequest() = default;

void UpgradeAutopilotWorkFlowUpdateRequest::validate()
{
}

web::json::value UpgradeAutopilotWorkFlowUpdateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(upgradeWorkflowIdIsSet_) {
        val[utility::conversions::to_string_t("upgrade_workflow_id")] = ModelBase::toJson(upgradeWorkflowId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpgradeAutopilotWorkFlowUpdateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpgradeWorkFlowUpdateRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpgradeAutopilotWorkFlowUpdateRequest::getClusterId() const
{
    return clusterId_;
}

void UpgradeAutopilotWorkFlowUpdateRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UpgradeAutopilotWorkFlowUpdateRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UpgradeAutopilotWorkFlowUpdateRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string UpgradeAutopilotWorkFlowUpdateRequest::getUpgradeWorkflowId() const
{
    return upgradeWorkflowId_;
}

void UpgradeAutopilotWorkFlowUpdateRequest::setUpgradeWorkflowId(const std::string& value)
{
    upgradeWorkflowId_ = value;
    upgradeWorkflowIdIsSet_ = true;
}

bool UpgradeAutopilotWorkFlowUpdateRequest::upgradeWorkflowIdIsSet() const
{
    return upgradeWorkflowIdIsSet_;
}

void UpgradeAutopilotWorkFlowUpdateRequest::unsetupgradeWorkflowId()
{
    upgradeWorkflowIdIsSet_ = false;
}

UpgradeWorkFlowUpdateRequestBody UpgradeAutopilotWorkFlowUpdateRequest::getBody() const
{
    return body_;
}

void UpgradeAutopilotWorkFlowUpdateRequest::setBody(const UpgradeWorkFlowUpdateRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpgradeAutopilotWorkFlowUpdateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpgradeAutopilotWorkFlowUpdateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


