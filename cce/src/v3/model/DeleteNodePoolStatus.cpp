

#include "huaweicloud/cce/v3/model/DeleteNodePoolStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteNodePoolStatus::DeleteNodePoolStatus()
{
    currentNode_ = 0;
    currentNodeIsSet_ = false;
    creatingNode_ = 0;
    creatingNodeIsSet_ = false;
    deletingNode_ = 0;
    deletingNodeIsSet_ = false;
    phase_ = "";
    phaseIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    conditionsIsSet_ = false;
    scaleGroupStatusesIsSet_ = false;
}

DeleteNodePoolStatus::~DeleteNodePoolStatus() = default;

void DeleteNodePoolStatus::validate()
{
}

web::json::value DeleteNodePoolStatus::toJson() const
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
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("jobId")] = ModelBase::toJson(jobId_);
    }
    if(conditionsIsSet_) {
        val[utility::conversions::to_string_t("conditions")] = ModelBase::toJson(conditions_);
    }
    if(scaleGroupStatusesIsSet_) {
        val[utility::conversions::to_string_t("scaleGroupStatuses")] = ModelBase::toJson(scaleGroupStatuses_);
    }

    return val;
}
bool DeleteNodePoolStatus::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("jobId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
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


int32_t DeleteNodePoolStatus::getCurrentNode() const
{
    return currentNode_;
}

void DeleteNodePoolStatus::setCurrentNode(int32_t value)
{
    currentNode_ = value;
    currentNodeIsSet_ = true;
}

bool DeleteNodePoolStatus::currentNodeIsSet() const
{
    return currentNodeIsSet_;
}

void DeleteNodePoolStatus::unsetcurrentNode()
{
    currentNodeIsSet_ = false;
}

int32_t DeleteNodePoolStatus::getCreatingNode() const
{
    return creatingNode_;
}

void DeleteNodePoolStatus::setCreatingNode(int32_t value)
{
    creatingNode_ = value;
    creatingNodeIsSet_ = true;
}

bool DeleteNodePoolStatus::creatingNodeIsSet() const
{
    return creatingNodeIsSet_;
}

void DeleteNodePoolStatus::unsetcreatingNode()
{
    creatingNodeIsSet_ = false;
}

int32_t DeleteNodePoolStatus::getDeletingNode() const
{
    return deletingNode_;
}

void DeleteNodePoolStatus::setDeletingNode(int32_t value)
{
    deletingNode_ = value;
    deletingNodeIsSet_ = true;
}

bool DeleteNodePoolStatus::deletingNodeIsSet() const
{
    return deletingNodeIsSet_;
}

void DeleteNodePoolStatus::unsetdeletingNode()
{
    deletingNodeIsSet_ = false;
}

std::string DeleteNodePoolStatus::getPhase() const
{
    return phase_;
}

void DeleteNodePoolStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool DeleteNodePoolStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void DeleteNodePoolStatus::unsetphase()
{
    phaseIsSet_ = false;
}

std::string DeleteNodePoolStatus::getJobId() const
{
    return jobId_;
}

void DeleteNodePoolStatus::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteNodePoolStatus::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteNodePoolStatus::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::vector<NodePoolCondition>& DeleteNodePoolStatus::getConditions()
{
    return conditions_;
}

void DeleteNodePoolStatus::setConditions(const std::vector<NodePoolCondition>& value)
{
    conditions_ = value;
    conditionsIsSet_ = true;
}

bool DeleteNodePoolStatus::conditionsIsSet() const
{
    return conditionsIsSet_;
}

void DeleteNodePoolStatus::unsetconditions()
{
    conditionsIsSet_ = false;
}

std::vector<ScaleGroupStatus>& DeleteNodePoolStatus::getScaleGroupStatuses()
{
    return scaleGroupStatuses_;
}

void DeleteNodePoolStatus::setScaleGroupStatuses(const std::vector<ScaleGroupStatus>& value)
{
    scaleGroupStatuses_ = value;
    scaleGroupStatusesIsSet_ = true;
}

bool DeleteNodePoolStatus::scaleGroupStatusesIsSet() const
{
    return scaleGroupStatusesIsSet_;
}

void DeleteNodePoolStatus::unsetscaleGroupStatuses()
{
    scaleGroupStatusesIsSet_ = false;
}

}
}
}
}
}


