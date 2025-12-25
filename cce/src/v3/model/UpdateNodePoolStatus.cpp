

#include "huaweicloud/cce/v3/model/UpdateNodePoolStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateNodePoolStatus::UpdateNodePoolStatus()
{
    currentNode_ = 0;
    currentNodeIsSet_ = false;
    creatingNode_ = 0;
    creatingNodeIsSet_ = false;
    deletingNode_ = 0;
    deletingNodeIsSet_ = false;
    configurationSyncedNodeCount_ = 0;
    configurationSyncedNodeCountIsSet_ = false;
    phase_ = "";
    phaseIsSet_ = false;
    conditionsIsSet_ = false;
    scaleGroupStatusesIsSet_ = false;
}

UpdateNodePoolStatus::~UpdateNodePoolStatus() = default;

void UpdateNodePoolStatus::validate()
{
}

web::json::value UpdateNodePoolStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(currentNodeIsSet_) {
        val[utility::conversions::to_string_t("currentNode")] = ModelBase::toJson(currentNode_);
    }
    if(creatingNodeIsSet_) {
        val[utility::conversions::to_string_t("creatingNode")] = ModelBase::toJson(creatingNode_);
    }
    if(deletingNodeIsSet_) {
        val[utility::conversions::to_string_t("deletingNode")] = ModelBase::toJson(deletingNode_);
    }
    if(configurationSyncedNodeCountIsSet_) {
        val[utility::conversions::to_string_t("configurationSyncedNodeCount")] = ModelBase::toJson(configurationSyncedNodeCount_);
    }
    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }
    if(conditionsIsSet_) {
        val[utility::conversions::to_string_t("conditions")] = ModelBase::toJson(conditions_);
    }
    if(scaleGroupStatusesIsSet_) {
        val[utility::conversions::to_string_t("scaleGroupStatuses")] = ModelBase::toJson(scaleGroupStatuses_);
    }

    return val;
}
bool UpdateNodePoolStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("currentNode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("currentNode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentNode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creatingNode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creatingNode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatingNode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deletingNode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deletingNode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeletingNode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configurationSyncedNodeCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configurationSyncedNodeCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationSyncedNodeCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phase"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conditions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conditions"));
        if(!fieldValue.is_null())
        {
            std::vector<NodePoolCondition> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scaleGroupStatuses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scaleGroupStatuses"));
        if(!fieldValue.is_null())
        {
            std::vector<ScaleGroupStatus> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScaleGroupStatuses(refVal);
        }
    }
    return ok;
}


int32_t UpdateNodePoolStatus::getCurrentNode() const
{
    return currentNode_;
}

void UpdateNodePoolStatus::setCurrentNode(int32_t value)
{
    currentNode_ = value;
    currentNodeIsSet_ = true;
}

bool UpdateNodePoolStatus::currentNodeIsSet() const
{
    return currentNodeIsSet_;
}

void UpdateNodePoolStatus::unsetcurrentNode()
{
    currentNodeIsSet_ = false;
}

int32_t UpdateNodePoolStatus::getCreatingNode() const
{
    return creatingNode_;
}

void UpdateNodePoolStatus::setCreatingNode(int32_t value)
{
    creatingNode_ = value;
    creatingNodeIsSet_ = true;
}

bool UpdateNodePoolStatus::creatingNodeIsSet() const
{
    return creatingNodeIsSet_;
}

void UpdateNodePoolStatus::unsetcreatingNode()
{
    creatingNodeIsSet_ = false;
}

int32_t UpdateNodePoolStatus::getDeletingNode() const
{
    return deletingNode_;
}

void UpdateNodePoolStatus::setDeletingNode(int32_t value)
{
    deletingNode_ = value;
    deletingNodeIsSet_ = true;
}

bool UpdateNodePoolStatus::deletingNodeIsSet() const
{
    return deletingNodeIsSet_;
}

void UpdateNodePoolStatus::unsetdeletingNode()
{
    deletingNodeIsSet_ = false;
}

int32_t UpdateNodePoolStatus::getConfigurationSyncedNodeCount() const
{
    return configurationSyncedNodeCount_;
}

void UpdateNodePoolStatus::setConfigurationSyncedNodeCount(int32_t value)
{
    configurationSyncedNodeCount_ = value;
    configurationSyncedNodeCountIsSet_ = true;
}

bool UpdateNodePoolStatus::configurationSyncedNodeCountIsSet() const
{
    return configurationSyncedNodeCountIsSet_;
}

void UpdateNodePoolStatus::unsetconfigurationSyncedNodeCount()
{
    configurationSyncedNodeCountIsSet_ = false;
}

std::string UpdateNodePoolStatus::getPhase() const
{
    return phase_;
}

void UpdateNodePoolStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool UpdateNodePoolStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void UpdateNodePoolStatus::unsetphase()
{
    phaseIsSet_ = false;
}

std::vector<NodePoolCondition>& UpdateNodePoolStatus::getConditions()
{
    return conditions_;
}

void UpdateNodePoolStatus::setConditions(const std::vector<NodePoolCondition>& value)
{
    conditions_ = value;
    conditionsIsSet_ = true;
}

bool UpdateNodePoolStatus::conditionsIsSet() const
{
    return conditionsIsSet_;
}

void UpdateNodePoolStatus::unsetconditions()
{
    conditionsIsSet_ = false;
}

std::vector<ScaleGroupStatus>& UpdateNodePoolStatus::getScaleGroupStatuses()
{
    return scaleGroupStatuses_;
}

void UpdateNodePoolStatus::setScaleGroupStatuses(const std::vector<ScaleGroupStatus>& value)
{
    scaleGroupStatuses_ = value;
    scaleGroupStatusesIsSet_ = true;
}

bool UpdateNodePoolStatus::scaleGroupStatusesIsSet() const
{
    return scaleGroupStatusesIsSet_;
}

void UpdateNodePoolStatus::unsetscaleGroupStatuses()
{
    scaleGroupStatusesIsSet_ = false;
}

}
}
}
}
}


