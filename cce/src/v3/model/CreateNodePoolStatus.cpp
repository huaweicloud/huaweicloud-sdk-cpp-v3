

#include "huaweicloud/cce/v3/model/CreateNodePoolStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateNodePoolStatus::CreateNodePoolStatus()
{
    currentNode_ = 0;
    currentNodeIsSet_ = false;
    creatingNode_ = 0;
    creatingNodeIsSet_ = false;
    deletingNode_ = 0;
    deletingNodeIsSet_ = false;
    phase_ = "";
    phaseIsSet_ = false;
    conditionsIsSet_ = false;
    scaleGroupStatusesIsSet_ = false;
}

CreateNodePoolStatus::~CreateNodePoolStatus() = default;

void CreateNodePoolStatus::validate()
{
}

web::json::value CreateNodePoolStatus::toJson() const
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
bool CreateNodePoolStatus::fromJson(const web::json::value& val)
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


int32_t CreateNodePoolStatus::getCurrentNode() const
{
    return currentNode_;
}

void CreateNodePoolStatus::setCurrentNode(int32_t value)
{
    currentNode_ = value;
    currentNodeIsSet_ = true;
}

bool CreateNodePoolStatus::currentNodeIsSet() const
{
    return currentNodeIsSet_;
}

void CreateNodePoolStatus::unsetcurrentNode()
{
    currentNodeIsSet_ = false;
}

int32_t CreateNodePoolStatus::getCreatingNode() const
{
    return creatingNode_;
}

void CreateNodePoolStatus::setCreatingNode(int32_t value)
{
    creatingNode_ = value;
    creatingNodeIsSet_ = true;
}

bool CreateNodePoolStatus::creatingNodeIsSet() const
{
    return creatingNodeIsSet_;
}

void CreateNodePoolStatus::unsetcreatingNode()
{
    creatingNodeIsSet_ = false;
}

int32_t CreateNodePoolStatus::getDeletingNode() const
{
    return deletingNode_;
}

void CreateNodePoolStatus::setDeletingNode(int32_t value)
{
    deletingNode_ = value;
    deletingNodeIsSet_ = true;
}

bool CreateNodePoolStatus::deletingNodeIsSet() const
{
    return deletingNodeIsSet_;
}

void CreateNodePoolStatus::unsetdeletingNode()
{
    deletingNodeIsSet_ = false;
}

std::string CreateNodePoolStatus::getPhase() const
{
    return phase_;
}

void CreateNodePoolStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool CreateNodePoolStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void CreateNodePoolStatus::unsetphase()
{
    phaseIsSet_ = false;
}

std::vector<NodePoolCondition>& CreateNodePoolStatus::getConditions()
{
    return conditions_;
}

void CreateNodePoolStatus::setConditions(const std::vector<NodePoolCondition>& value)
{
    conditions_ = value;
    conditionsIsSet_ = true;
}

bool CreateNodePoolStatus::conditionsIsSet() const
{
    return conditionsIsSet_;
}

void CreateNodePoolStatus::unsetconditions()
{
    conditionsIsSet_ = false;
}

std::vector<ScaleGroupStatus>& CreateNodePoolStatus::getScaleGroupStatuses()
{
    return scaleGroupStatuses_;
}

void CreateNodePoolStatus::setScaleGroupStatuses(const std::vector<ScaleGroupStatus>& value)
{
    scaleGroupStatuses_ = value;
    scaleGroupStatusesIsSet_ = true;
}

bool CreateNodePoolStatus::scaleGroupStatusesIsSet() const
{
    return scaleGroupStatusesIsSet_;
}

void CreateNodePoolStatus::unsetscaleGroupStatuses()
{
    scaleGroupStatusesIsSet_ = false;
}

}
}
}
}
}


