

#include "huaweicloud/cce/v3/model/HyperNodeStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




HyperNodeStatus::HyperNodeStatus()
{
    phase_ = "";
    phaseIsSet_ = false;
    instanceID_ = "";
    instanceIDIsSet_ = false;
    currentNode_ = 0;
    currentNodeIsSet_ = false;
    deletingNode_ = 0;
    deletingNodeIsSet_ = false;
    creatingNode_ = 0;
    creatingNodeIsSet_ = false;
    activeNode_ = 0;
    activeNodeIsSet_ = false;
}

HyperNodeStatus::~HyperNodeStatus() = default;

void HyperNodeStatus::validate()
{
}

web::json::value HyperNodeStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }
    if(instanceIDIsSet_) {
        val[utility::conversions::to_string_t("instanceID")] = ModelBase::toJson(instanceID_);
    }
    if(currentNodeIsSet_) {
        val[utility::conversions::to_string_t("currentNode")] = ModelBase::toJson(currentNode_);
    }
    if(deletingNodeIsSet_) {
        val[utility::conversions::to_string_t("deletingNode")] = ModelBase::toJson(deletingNode_);
    }
    if(creatingNodeIsSet_) {
        val[utility::conversions::to_string_t("creatingNode")] = ModelBase::toJson(creatingNode_);
    }
    if(activeNodeIsSet_) {
        val[utility::conversions::to_string_t("activeNode")] = ModelBase::toJson(activeNode_);
    }

    return val;
}
bool HyperNodeStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("phase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phase"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instanceID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instanceID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("currentNode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("currentNode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentNode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("creatingNode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creatingNode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatingNode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("activeNode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("activeNode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveNode(refVal);
        }
    }
    return ok;
}


std::string HyperNodeStatus::getPhase() const
{
    return phase_;
}

void HyperNodeStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool HyperNodeStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void HyperNodeStatus::unsetphase()
{
    phaseIsSet_ = false;
}

std::string HyperNodeStatus::getInstanceID() const
{
    return instanceID_;
}

void HyperNodeStatus::setInstanceID(const std::string& value)
{
    instanceID_ = value;
    instanceIDIsSet_ = true;
}

bool HyperNodeStatus::instanceIDIsSet() const
{
    return instanceIDIsSet_;
}

void HyperNodeStatus::unsetinstanceID()
{
    instanceIDIsSet_ = false;
}

int32_t HyperNodeStatus::getCurrentNode() const
{
    return currentNode_;
}

void HyperNodeStatus::setCurrentNode(int32_t value)
{
    currentNode_ = value;
    currentNodeIsSet_ = true;
}

bool HyperNodeStatus::currentNodeIsSet() const
{
    return currentNodeIsSet_;
}

void HyperNodeStatus::unsetcurrentNode()
{
    currentNodeIsSet_ = false;
}

int32_t HyperNodeStatus::getDeletingNode() const
{
    return deletingNode_;
}

void HyperNodeStatus::setDeletingNode(int32_t value)
{
    deletingNode_ = value;
    deletingNodeIsSet_ = true;
}

bool HyperNodeStatus::deletingNodeIsSet() const
{
    return deletingNodeIsSet_;
}

void HyperNodeStatus::unsetdeletingNode()
{
    deletingNodeIsSet_ = false;
}

int32_t HyperNodeStatus::getCreatingNode() const
{
    return creatingNode_;
}

void HyperNodeStatus::setCreatingNode(int32_t value)
{
    creatingNode_ = value;
    creatingNodeIsSet_ = true;
}

bool HyperNodeStatus::creatingNodeIsSet() const
{
    return creatingNodeIsSet_;
}

void HyperNodeStatus::unsetcreatingNode()
{
    creatingNodeIsSet_ = false;
}

int32_t HyperNodeStatus::getActiveNode() const
{
    return activeNode_;
}

void HyperNodeStatus::setActiveNode(int32_t value)
{
    activeNode_ = value;
    activeNodeIsSet_ = true;
}

bool HyperNodeStatus::activeNodeIsSet() const
{
    return activeNodeIsSet_;
}

void HyperNodeStatus::unsetactiveNode()
{
    activeNodeIsSet_ = false;
}

}
}
}
}
}


