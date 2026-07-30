

#include "huaweicloud/modelarts/v1/model/ScheduledEvent.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ScheduledEvent::ScheduledEvent()
{
    id_ = "";
    idIsSet_ = false;
    catalog_ = "";
    catalogIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    instanceType_ = "";
    instanceTypeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeName_ = "";
    nodeNameIsSet_ = false;
    poolName_ = "";
    poolNameIsSet_ = false;
    poolDisplayName_ = "";
    poolDisplayNameIsSet_ = false;
    publishTime_ = "";
    publishTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    finishTime_ = "";
    finishTimeIsSet_ = false;
    notBefore_ = "";
    notBeforeIsSet_ = false;
    probeMsg_ = "";
    probeMsgIsSet_ = false;
    jobProgress_ = "";
    jobProgressIsSet_ = false;
    redeployTypeIsSet_ = false;
    underLyingInstanceId_ = "";
    underLyingInstanceIdIsSet_ = false;
}

ScheduledEvent::~ScheduledEvent() = default;

void ScheduledEvent::validate()
{
}

web::json::value ScheduledEvent::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(catalogIsSet_) {
        val[utility::conversions::to_string_t("catalog")] = ModelBase::toJson(catalog_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instanceType")] = ModelBase::toJson(instanceType_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instanceId")] = ModelBase::toJson(instanceId_);
    }
    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("nodeName")] = ModelBase::toJson(nodeName_);
    }
    if(poolNameIsSet_) {
        val[utility::conversions::to_string_t("poolName")] = ModelBase::toJson(poolName_);
    }
    if(poolDisplayNameIsSet_) {
        val[utility::conversions::to_string_t("poolDisplayName")] = ModelBase::toJson(poolDisplayName_);
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
    if(notBeforeIsSet_) {
        val[utility::conversions::to_string_t("notBefore")] = ModelBase::toJson(notBefore_);
    }
    if(probeMsgIsSet_) {
        val[utility::conversions::to_string_t("probeMsg")] = ModelBase::toJson(probeMsg_);
    }
    if(jobProgressIsSet_) {
        val[utility::conversions::to_string_t("jobProgress")] = ModelBase::toJson(jobProgress_);
    }
    if(redeployTypeIsSet_) {
        val[utility::conversions::to_string_t("redeployType")] = ModelBase::toJson(redeployType_);
    }
    if(underLyingInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("underLyingInstanceId")] = ModelBase::toJson(underLyingInstanceId_);
    }

    return val;
}
bool ScheduledEvent::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("catalog"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("catalog"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCatalog(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instanceType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instanceType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("nodeName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("notBefore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notBefore"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotBefore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("probeMsg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("probeMsg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProbeMsg(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("redeployType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("redeployType"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRedeployType(refVal);
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
    return ok;
}


std::string ScheduledEvent::getId() const
{
    return id_;
}

void ScheduledEvent::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ScheduledEvent::idIsSet() const
{
    return idIsSet_;
}

void ScheduledEvent::unsetid()
{
    idIsSet_ = false;
}

std::string ScheduledEvent::getCatalog() const
{
    return catalog_;
}

void ScheduledEvent::setCatalog(const std::string& value)
{
    catalog_ = value;
    catalogIsSet_ = true;
}

bool ScheduledEvent::catalogIsSet() const
{
    return catalogIsSet_;
}

void ScheduledEvent::unsetcatalog()
{
    catalogIsSet_ = false;
}

std::string ScheduledEvent::getType() const
{
    return type_;
}

void ScheduledEvent::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ScheduledEvent::typeIsSet() const
{
    return typeIsSet_;
}

void ScheduledEvent::unsettype()
{
    typeIsSet_ = false;
}

std::string ScheduledEvent::getDescription() const
{
    return description_;
}

void ScheduledEvent::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ScheduledEvent::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ScheduledEvent::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ScheduledEvent::getState() const
{
    return state_;
}

void ScheduledEvent::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ScheduledEvent::stateIsSet() const
{
    return stateIsSet_;
}

void ScheduledEvent::unsetstate()
{
    stateIsSet_ = false;
}

std::string ScheduledEvent::getInstanceType() const
{
    return instanceType_;
}

void ScheduledEvent::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool ScheduledEvent::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void ScheduledEvent::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

std::string ScheduledEvent::getInstanceId() const
{
    return instanceId_;
}

void ScheduledEvent::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ScheduledEvent::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ScheduledEvent::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ScheduledEvent::getNodeName() const
{
    return nodeName_;
}

void ScheduledEvent::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool ScheduledEvent::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void ScheduledEvent::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string ScheduledEvent::getPoolName() const
{
    return poolName_;
}

void ScheduledEvent::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool ScheduledEvent::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void ScheduledEvent::unsetpoolName()
{
    poolNameIsSet_ = false;
}

std::string ScheduledEvent::getPoolDisplayName() const
{
    return poolDisplayName_;
}

void ScheduledEvent::setPoolDisplayName(const std::string& value)
{
    poolDisplayName_ = value;
    poolDisplayNameIsSet_ = true;
}

bool ScheduledEvent::poolDisplayNameIsSet() const
{
    return poolDisplayNameIsSet_;
}

void ScheduledEvent::unsetpoolDisplayName()
{
    poolDisplayNameIsSet_ = false;
}

std::string ScheduledEvent::getPublishTime() const
{
    return publishTime_;
}

void ScheduledEvent::setPublishTime(const std::string& value)
{
    publishTime_ = value;
    publishTimeIsSet_ = true;
}

bool ScheduledEvent::publishTimeIsSet() const
{
    return publishTimeIsSet_;
}

void ScheduledEvent::unsetpublishTime()
{
    publishTimeIsSet_ = false;
}

std::string ScheduledEvent::getStartTime() const
{
    return startTime_;
}

void ScheduledEvent::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ScheduledEvent::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ScheduledEvent::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ScheduledEvent::getFinishTime() const
{
    return finishTime_;
}

void ScheduledEvent::setFinishTime(const std::string& value)
{
    finishTime_ = value;
    finishTimeIsSet_ = true;
}

bool ScheduledEvent::finishTimeIsSet() const
{
    return finishTimeIsSet_;
}

void ScheduledEvent::unsetfinishTime()
{
    finishTimeIsSet_ = false;
}

std::string ScheduledEvent::getNotBefore() const
{
    return notBefore_;
}

void ScheduledEvent::setNotBefore(const std::string& value)
{
    notBefore_ = value;
    notBeforeIsSet_ = true;
}

bool ScheduledEvent::notBeforeIsSet() const
{
    return notBeforeIsSet_;
}

void ScheduledEvent::unsetnotBefore()
{
    notBeforeIsSet_ = false;
}

std::string ScheduledEvent::getProbeMsg() const
{
    return probeMsg_;
}

void ScheduledEvent::setProbeMsg(const std::string& value)
{
    probeMsg_ = value;
    probeMsgIsSet_ = true;
}

bool ScheduledEvent::probeMsgIsSet() const
{
    return probeMsgIsSet_;
}

void ScheduledEvent::unsetprobeMsg()
{
    probeMsgIsSet_ = false;
}

std::string ScheduledEvent::getJobProgress() const
{
    return jobProgress_;
}

void ScheduledEvent::setJobProgress(const std::string& value)
{
    jobProgress_ = value;
    jobProgressIsSet_ = true;
}

bool ScheduledEvent::jobProgressIsSet() const
{
    return jobProgressIsSet_;
}

void ScheduledEvent::unsetjobProgress()
{
    jobProgressIsSet_ = false;
}

std::vector<std::string>& ScheduledEvent::getRedeployType()
{
    return redeployType_;
}

void ScheduledEvent::setRedeployType(const std::vector<std::string>& value)
{
    redeployType_ = value;
    redeployTypeIsSet_ = true;
}

bool ScheduledEvent::redeployTypeIsSet() const
{
    return redeployTypeIsSet_;
}

void ScheduledEvent::unsetredeployType()
{
    redeployTypeIsSet_ = false;
}

std::string ScheduledEvent::getUnderLyingInstanceId() const
{
    return underLyingInstanceId_;
}

void ScheduledEvent::setUnderLyingInstanceId(const std::string& value)
{
    underLyingInstanceId_ = value;
    underLyingInstanceIdIsSet_ = true;
}

bool ScheduledEvent::underLyingInstanceIdIsSet() const
{
    return underLyingInstanceIdIsSet_;
}

void ScheduledEvent::unsetunderLyingInstanceId()
{
    underLyingInstanceIdIsSet_ = false;
}

}
}
}
}
}


