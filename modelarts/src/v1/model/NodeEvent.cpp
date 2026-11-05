

#include "huaweicloud/modelarts/v1/model/NodeEvent.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeEvent::NodeEvent()
{
    eventId_ = "";
    eventIdIsSet_ = false;
    isFaultNode_ = false;
    isFaultNodeIsSet_ = false;
    nodeName_ = "";
    nodeNameIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceType_ = "";
    instanceTypeIsSet_ = false;
    underLyingInstanceId_ = "";
    underLyingInstanceIdIsSet_ = false;
    flavorSupportRedeploy_ = false;
    flavorSupportRedeployIsSet_ = false;
    poolName_ = "";
    poolNameIsSet_ = false;
    poolDisplayName_ = "";
    poolDisplayNameIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    publishTime_ = "";
    publishTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    finishTime_ = "";
    finishTimeIsSet_ = false;
    jobProgress_ = "";
    jobProgressIsSet_ = false;
}

NodeEvent::~NodeEvent() = default;

void NodeEvent::validate()
{
}

web::json::value NodeEvent::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventIdIsSet_) {
        val[utility::conversions::to_string_t("eventId")] = ModelBase::toJson(eventId_);
    }
    if(isFaultNodeIsSet_) {
        val[utility::conversions::to_string_t("isFaultNode")] = ModelBase::toJson(isFaultNode_);
    }
    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("nodeName")] = ModelBase::toJson(nodeName_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instanceId")] = ModelBase::toJson(instanceId_);
    }
    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instanceType")] = ModelBase::toJson(instanceType_);
    }
    if(underLyingInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("underLyingInstanceId")] = ModelBase::toJson(underLyingInstanceId_);
    }
    if(flavorSupportRedeployIsSet_) {
        val[utility::conversions::to_string_t("flavorSupportRedeploy")] = ModelBase::toJson(flavorSupportRedeploy_);
    }
    if(poolNameIsSet_) {
        val[utility::conversions::to_string_t("poolName")] = ModelBase::toJson(poolName_);
    }
    if(poolDisplayNameIsSet_) {
        val[utility::conversions::to_string_t("poolDisplayName")] = ModelBase::toJson(poolDisplayName_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(publishTimeIsSet_) {
        val[utility::conversions::to_string_t("publishTime")] = ModelBase::toJson(publishTime_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(startTime_);
    }
    if(finishTimeIsSet_) {
        val[utility::conversions::to_string_t("finishTime")] = ModelBase::toJson(finishTime_);
    }
    if(jobProgressIsSet_) {
        val[utility::conversions::to_string_t("jobProgress")] = ModelBase::toJson(jobProgress_);
    }

    return val;
}
bool NodeEvent::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eventId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eventId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isFaultNode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isFaultNode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFaultNode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instanceId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instanceId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instanceType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instanceType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("underLyingInstanceId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("underLyingInstanceId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnderLyingInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavorSupportRedeploy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavorSupportRedeploy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorSupportRedeploy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("poolName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("poolName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("poolDisplayName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("poolDisplayName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publishTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publishTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finishTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finishTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobProgress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobProgress"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobProgress(refVal);
        }
    }
    return ok;
}


std::string NodeEvent::getEventId() const
{
    return eventId_;
}

void NodeEvent::setEventId(const std::string& value)
{
    eventId_ = value;
    eventIdIsSet_ = true;
}

bool NodeEvent::eventIdIsSet() const
{
    return eventIdIsSet_;
}

void NodeEvent::unseteventId()
{
    eventIdIsSet_ = false;
}

bool NodeEvent::isIsFaultNode() const
{
    return isFaultNode_;
}

void NodeEvent::setIsFaultNode(bool value)
{
    isFaultNode_ = value;
    isFaultNodeIsSet_ = true;
}

bool NodeEvent::isFaultNodeIsSet() const
{
    return isFaultNodeIsSet_;
}

void NodeEvent::unsetisFaultNode()
{
    isFaultNodeIsSet_ = false;
}

std::string NodeEvent::getNodeName() const
{
    return nodeName_;
}

void NodeEvent::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool NodeEvent::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void NodeEvent::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string NodeEvent::getInstanceId() const
{
    return instanceId_;
}

void NodeEvent::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool NodeEvent::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void NodeEvent::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string NodeEvent::getInstanceType() const
{
    return instanceType_;
}

void NodeEvent::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool NodeEvent::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void NodeEvent::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

std::string NodeEvent::getUnderLyingInstanceId() const
{
    return underLyingInstanceId_;
}

void NodeEvent::setUnderLyingInstanceId(const std::string& value)
{
    underLyingInstanceId_ = value;
    underLyingInstanceIdIsSet_ = true;
}

bool NodeEvent::underLyingInstanceIdIsSet() const
{
    return underLyingInstanceIdIsSet_;
}

void NodeEvent::unsetunderLyingInstanceId()
{
    underLyingInstanceIdIsSet_ = false;
}

bool NodeEvent::isFlavorSupportRedeploy() const
{
    return flavorSupportRedeploy_;
}

void NodeEvent::setFlavorSupportRedeploy(bool value)
{
    flavorSupportRedeploy_ = value;
    flavorSupportRedeployIsSet_ = true;
}

bool NodeEvent::flavorSupportRedeployIsSet() const
{
    return flavorSupportRedeployIsSet_;
}

void NodeEvent::unsetflavorSupportRedeploy()
{
    flavorSupportRedeployIsSet_ = false;
}

std::string NodeEvent::getPoolName() const
{
    return poolName_;
}

void NodeEvent::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool NodeEvent::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void NodeEvent::unsetpoolName()
{
    poolNameIsSet_ = false;
}

std::string NodeEvent::getPoolDisplayName() const
{
    return poolDisplayName_;
}

void NodeEvent::setPoolDisplayName(const std::string& value)
{
    poolDisplayName_ = value;
    poolDisplayNameIsSet_ = true;
}

bool NodeEvent::poolDisplayNameIsSet() const
{
    return poolDisplayNameIsSet_;
}

void NodeEvent::unsetpoolDisplayName()
{
    poolDisplayNameIsSet_ = false;
}

std::string NodeEvent::getState() const
{
    return state_;
}

void NodeEvent::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool NodeEvent::stateIsSet() const
{
    return stateIsSet_;
}

void NodeEvent::unsetstate()
{
    stateIsSet_ = false;
}

std::string NodeEvent::getPublishTime() const
{
    return publishTime_;
}

void NodeEvent::setPublishTime(const std::string& value)
{
    publishTime_ = value;
    publishTimeIsSet_ = true;
}

bool NodeEvent::publishTimeIsSet() const
{
    return publishTimeIsSet_;
}

void NodeEvent::unsetpublishTime()
{
    publishTimeIsSet_ = false;
}

std::string NodeEvent::getStartTime() const
{
    return startTime_;
}

void NodeEvent::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool NodeEvent::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void NodeEvent::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string NodeEvent::getFinishTime() const
{
    return finishTime_;
}

void NodeEvent::setFinishTime(const std::string& value)
{
    finishTime_ = value;
    finishTimeIsSet_ = true;
}

bool NodeEvent::finishTimeIsSet() const
{
    return finishTimeIsSet_;
}

void NodeEvent::unsetfinishTime()
{
    finishTimeIsSet_ = false;
}

std::string NodeEvent::getJobProgress() const
{
    return jobProgress_;
}

void NodeEvent::setJobProgress(const std::string& value)
{
    jobProgress_ = value;
    jobProgressIsSet_ = true;
}

bool NodeEvent::jobProgressIsSet() const
{
    return jobProgressIsSet_;
}

void NodeEvent::unsetjobProgress()
{
    jobProgressIsSet_ = false;
}

}
}
}
}
}


