

#include "huaweicloud/cce/v3/model/UpgradeWorkFlowUpdateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeWorkFlowUpdateRequest::UpgradeWorkFlowUpdateRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    upgradeWorkflowId_ = "";
    upgradeWorkflowIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpgradeWorkFlowUpdateRequest::~UpgradeWorkFlowUpdateRequest() = default;

void UpgradeWorkFlowUpdateRequest::validate()
{
}

web::json::value UpgradeWorkFlowUpdateRequest::toJson() const
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
bool UpgradeWorkFlowUpdateRequest::fromJson(const web::json::value& val)
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


std::string UpgradeWorkFlowUpdateRequest::getClusterId() const
{
    return clusterId_;
}

void UpgradeWorkFlowUpdateRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UpgradeWorkFlowUpdateRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UpgradeWorkFlowUpdateRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string UpgradeWorkFlowUpdateRequest::getUpgradeWorkflowId() const
{
    return upgradeWorkflowId_;
}

void UpgradeWorkFlowUpdateRequest::setUpgradeWorkflowId(const std::string& value)
{
    upgradeWorkflowId_ = value;
    upgradeWorkflowIdIsSet_ = true;
}

bool UpgradeWorkFlowUpdateRequest::upgradeWorkflowIdIsSet() const
{
    return upgradeWorkflowIdIsSet_;
}

void UpgradeWorkFlowUpdateRequest::unsetupgradeWorkflowId()
{
    upgradeWorkflowIdIsSet_ = false;
}

UpgradeWorkFlowUpdateRequestBody UpgradeWorkFlowUpdateRequest::getBody() const
{
    return body_;
}

void UpgradeWorkFlowUpdateRequest::setBody(const UpgradeWorkFlowUpdateRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpgradeWorkFlowUpdateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpgradeWorkFlowUpdateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


