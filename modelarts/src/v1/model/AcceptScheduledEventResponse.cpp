

#include "huaweicloud/modelarts/v1/model/AcceptScheduledEventResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AcceptScheduledEventResponse::AcceptScheduledEventResponse()
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
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

AcceptScheduledEventResponse::~AcceptScheduledEventResponse() = default;

void AcceptScheduledEventResponse::validate()
{
}

web::json::value AcceptScheduledEventResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool AcceptScheduledEventResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string AcceptScheduledEventResponse::getId() const
{
    return id_;
}

void AcceptScheduledEventResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AcceptScheduledEventResponse::idIsSet() const
{
    return idIsSet_;
}

void AcceptScheduledEventResponse::unsetid()
{
    idIsSet_ = false;
}

std::string AcceptScheduledEventResponse::getCatalog() const
{
    return catalog_;
}

void AcceptScheduledEventResponse::setCatalog(const std::string& value)
{
    catalog_ = value;
    catalogIsSet_ = true;
}

bool AcceptScheduledEventResponse::catalogIsSet() const
{
    return catalogIsSet_;
}

void AcceptScheduledEventResponse::unsetcatalog()
{
    catalogIsSet_ = false;
}

std::string AcceptScheduledEventResponse::getType() const
{
    return type_;
}

void AcceptScheduledEventResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AcceptScheduledEventResponse::typeIsSet() const
{
    return typeIsSet_;
}

void AcceptScheduledEventResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string AcceptScheduledEventResponse::getDescription() const
{
    return description_;
}

void AcceptScheduledEventResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AcceptScheduledEventResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AcceptScheduledEventResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string AcceptScheduledEventResponse::getState() const
{
    return state_;
}

void AcceptScheduledEventResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool AcceptScheduledEventResponse::stateIsSet() const
{
    return stateIsSet_;
}

void AcceptScheduledEventResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string AcceptScheduledEventResponse::getInstanceType() const
{
    return instanceType_;
}

void AcceptScheduledEventResponse::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool AcceptScheduledEventResponse::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void AcceptScheduledEventResponse::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

std::string AcceptScheduledEventResponse::getInstanceId() const
{
    return instanceId_;
}

void AcceptScheduledEventResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AcceptScheduledEventResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AcceptScheduledEventResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string AcceptScheduledEventResponse::getNodeName() const
{
    return nodeName_;
}

void AcceptScheduledEventResponse::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool AcceptScheduledEventResponse::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void AcceptScheduledEventResponse::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string AcceptScheduledEventResponse::getPoolName() const
{
    return poolName_;
}

void AcceptScheduledEventResponse::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool AcceptScheduledEventResponse::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void AcceptScheduledEventResponse::unsetpoolName()
{
    poolNameIsSet_ = false;
}

std::string AcceptScheduledEventResponse::getPoolDisplayName() const
{
    return poolDisplayName_;
}

void AcceptScheduledEventResponse::setPoolDisplayName(const std::string& value)
{
    poolDisplayName_ = value;
    poolDisplayNameIsSet_ = true;
}

bool AcceptScheduledEventResponse::poolDisplayNameIsSet() const
{
    return poolDisplayNameIsSet_;
}

void AcceptScheduledEventResponse::unsetpoolDisplayName()
{
    poolDisplayNameIsSet_ = false;
}

std::string AcceptScheduledEventResponse::getPublishTime() const
{
    return publishTime_;
}

void AcceptScheduledEventResponse::setPublishTime(const std::string& value)
{
    publishTime_ = value;
    publishTimeIsSet_ = true;
}

bool AcceptScheduledEventResponse::publishTimeIsSet() const
{
    return publishTimeIsSet_;
}

void AcceptScheduledEventResponse::unsetpublishTime()
{
    publishTimeIsSet_ = false;
}

std::string AcceptScheduledEventResponse::getStartTime() const
{
    return startTime_;
}

void AcceptScheduledEventResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool AcceptScheduledEventResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void AcceptScheduledEventResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string AcceptScheduledEventResponse::getFinishTime() const
{
    return finishTime_;
}

void AcceptScheduledEventResponse::setFinishTime(const std::string& value)
{
    finishTime_ = value;
    finishTimeIsSet_ = true;
}

bool AcceptScheduledEventResponse::finishTimeIsSet() const
{
    return finishTimeIsSet_;
}

void AcceptScheduledEventResponse::unsetfinishTime()
{
    finishTimeIsSet_ = false;
}

std::string AcceptScheduledEventResponse::getNotBefore() const
{
    return notBefore_;
}

void AcceptScheduledEventResponse::setNotBefore(const std::string& value)
{
    notBefore_ = value;
    notBeforeIsSet_ = true;
}

bool AcceptScheduledEventResponse::notBeforeIsSet() const
{
    return notBeforeIsSet_;
}

void AcceptScheduledEventResponse::unsetnotBefore()
{
    notBeforeIsSet_ = false;
}

std::string AcceptScheduledEventResponse::getProbeMsg() const
{
    return probeMsg_;
}

void AcceptScheduledEventResponse::setProbeMsg(const std::string& value)
{
    probeMsg_ = value;
    probeMsgIsSet_ = true;
}

bool AcceptScheduledEventResponse::probeMsgIsSet() const
{
    return probeMsgIsSet_;
}

void AcceptScheduledEventResponse::unsetprobeMsg()
{
    probeMsgIsSet_ = false;
}

std::string AcceptScheduledEventResponse::getJobProgress() const
{
    return jobProgress_;
}

void AcceptScheduledEventResponse::setJobProgress(const std::string& value)
{
    jobProgress_ = value;
    jobProgressIsSet_ = true;
}

bool AcceptScheduledEventResponse::jobProgressIsSet() const
{
    return jobProgressIsSet_;
}

void AcceptScheduledEventResponse::unsetjobProgress()
{
    jobProgressIsSet_ = false;
}

std::vector<std::string>& AcceptScheduledEventResponse::getRedeployType()
{
    return redeployType_;
}

void AcceptScheduledEventResponse::setRedeployType(const std::vector<std::string>& value)
{
    redeployType_ = value;
    redeployTypeIsSet_ = true;
}

bool AcceptScheduledEventResponse::redeployTypeIsSet() const
{
    return redeployTypeIsSet_;
}

void AcceptScheduledEventResponse::unsetredeployType()
{
    redeployTypeIsSet_ = false;
}

std::string AcceptScheduledEventResponse::getUnderLyingInstanceId() const
{
    return underLyingInstanceId_;
}

void AcceptScheduledEventResponse::setUnderLyingInstanceId(const std::string& value)
{
    underLyingInstanceId_ = value;
    underLyingInstanceIdIsSet_ = true;
}

bool AcceptScheduledEventResponse::underLyingInstanceIdIsSet() const
{
    return underLyingInstanceIdIsSet_;
}

void AcceptScheduledEventResponse::unsetunderLyingInstanceId()
{
    underLyingInstanceIdIsSet_ = false;
}

std::string AcceptScheduledEventResponse::getXRequestId() const
{
    return xRequestId_;
}

void AcceptScheduledEventResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool AcceptScheduledEventResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void AcceptScheduledEventResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


