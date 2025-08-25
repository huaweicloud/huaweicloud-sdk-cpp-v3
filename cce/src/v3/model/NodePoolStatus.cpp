

#include "huaweicloud/cce/v3/model/NodePoolStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodePoolStatus::NodePoolStatus()
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

NodePoolStatus::~NodePoolStatus() = default;

void NodePoolStatus::validate()
{
}

web::json::value NodePoolStatus::toJson() const
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
bool NodePoolStatus::fromJson(const web::json::value& val)
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


int32_t NodePoolStatus::getCurrentNode() const
{
    return currentNode_;
}

void NodePoolStatus::setCurrentNode(int32_t value)
{
    currentNode_ = value;
    currentNodeIsSet_ = true;
}

bool NodePoolStatus::currentNodeIsSet() const
{
    return currentNodeIsSet_;
}

void NodePoolStatus::unsetcurrentNode()
{
    currentNodeIsSet_ = false;
}

int32_t NodePoolStatus::getCreatingNode() const
{
    return creatingNode_;
}

void NodePoolStatus::setCreatingNode(int32_t value)
{
    creatingNode_ = value;
    creatingNodeIsSet_ = true;
}

bool NodePoolStatus::creatingNodeIsSet() const
{
    return creatingNodeIsSet_;
}

void NodePoolStatus::unsetcreatingNode()
{
    creatingNodeIsSet_ = false;
}

int32_t NodePoolStatus::getDeletingNode() const
{
    return deletingNode_;
}

void NodePoolStatus::setDeletingNode(int32_t value)
{
    deletingNode_ = value;
    deletingNodeIsSet_ = true;
}

bool NodePoolStatus::deletingNodeIsSet() const
{
    return deletingNodeIsSet_;
}

void NodePoolStatus::unsetdeletingNode()
{
    deletingNodeIsSet_ = false;
}

std::string NodePoolStatus::getPhase() const
{
    return phase_;
}

void NodePoolStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool NodePoolStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void NodePoolStatus::unsetphase()
{
    phaseIsSet_ = false;
}

std::string NodePoolStatus::getJobId() const
{
    return jobId_;
}

void NodePoolStatus::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool NodePoolStatus::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void NodePoolStatus::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::vector<NodePoolCondition>& NodePoolStatus::getConditions()
{
    return conditions_;
}

void NodePoolStatus::setConditions(const std::vector<NodePoolCondition>& value)
{
    conditions_ = value;
    conditionsIsSet_ = true;
}

bool NodePoolStatus::conditionsIsSet() const
{
    return conditionsIsSet_;
}

void NodePoolStatus::unsetconditions()
{
    conditionsIsSet_ = false;
}

std::vector<ScaleGroupStatus>& NodePoolStatus::getScaleGroupStatuses()
{
    return scaleGroupStatuses_;
}

void NodePoolStatus::setScaleGroupStatuses(const std::vector<ScaleGroupStatus>& value)
{
    scaleGroupStatuses_ = value;
    scaleGroupStatusesIsSet_ = true;
}

bool NodePoolStatus::scaleGroupStatusesIsSet() const
{
    return scaleGroupStatusesIsSet_;
}

void NodePoolStatus::unsetscaleGroupStatuses()
{
    scaleGroupStatusesIsSet_ = false;
}

}
}
}
}
}


