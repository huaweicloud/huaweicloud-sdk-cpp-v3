

#include "huaweicloud/modelarts/v1/model/ListScheduledEventsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListScheduledEventsRequest::ListScheduledEventsRequest()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    stateIsSet_ = false;
    typeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    nodeName_ = "";
    nodeNameIsSet_ = false;
    poolName_ = "";
    poolNameIsSet_ = false;
    publishStartTime_ = "";
    publishStartTimeIsSet_ = false;
    publishEndTime_ = "";
    publishEndTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListScheduledEventsRequest::~ListScheduledEventsRequest() = default;

void ListScheduledEventsRequest::validate()
{
}

web::json::value ListScheduledEventsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspaceId")] = ModelBase::toJson(workspaceId_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("nodeName")] = ModelBase::toJson(nodeName_);
    }
    if(poolNameIsSet_) {
        val[utility::conversions::to_string_t("poolName")] = ModelBase::toJson(poolName_);
    }
    if(publishStartTimeIsSet_) {
        val[utility::conversions::to_string_t("publishStartTime")] = ModelBase::toJson(publishStartTime_);
    }
    if(publishEndTimeIsSet_) {
        val[utility::conversions::to_string_t("publishEndTime")] = ModelBase::toJson(publishEndTime_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListScheduledEventsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workspaceId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspaceId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("publishStartTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publishStartTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publishEndTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publishEndTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListScheduledEventsRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ListScheduledEventsRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ListScheduledEventsRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ListScheduledEventsRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::vector<std::string>& ListScheduledEventsRequest::getState()
{
    return state_;
}

void ListScheduledEventsRequest::setState(const std::vector<std::string>& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListScheduledEventsRequest::stateIsSet() const
{
    return stateIsSet_;
}

void ListScheduledEventsRequest::unsetstate()
{
    stateIsSet_ = false;
}

std::vector<std::string>& ListScheduledEventsRequest::getType()
{
    return type_;
}

void ListScheduledEventsRequest::setType(const std::vector<std::string>& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListScheduledEventsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListScheduledEventsRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListScheduledEventsRequest::getId() const
{
    return id_;
}

void ListScheduledEventsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListScheduledEventsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListScheduledEventsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListScheduledEventsRequest::getNodeName() const
{
    return nodeName_;
}

void ListScheduledEventsRequest::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool ListScheduledEventsRequest::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void ListScheduledEventsRequest::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string ListScheduledEventsRequest::getPoolName() const
{
    return poolName_;
}

void ListScheduledEventsRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool ListScheduledEventsRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void ListScheduledEventsRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

std::string ListScheduledEventsRequest::getPublishStartTime() const
{
    return publishStartTime_;
}

void ListScheduledEventsRequest::setPublishStartTime(const std::string& value)
{
    publishStartTime_ = value;
    publishStartTimeIsSet_ = true;
}

bool ListScheduledEventsRequest::publishStartTimeIsSet() const
{
    return publishStartTimeIsSet_;
}

void ListScheduledEventsRequest::unsetpublishStartTime()
{
    publishStartTimeIsSet_ = false;
}

std::string ListScheduledEventsRequest::getPublishEndTime() const
{
    return publishEndTime_;
}

void ListScheduledEventsRequest::setPublishEndTime(const std::string& value)
{
    publishEndTime_ = value;
    publishEndTimeIsSet_ = true;
}

bool ListScheduledEventsRequest::publishEndTimeIsSet() const
{
    return publishEndTimeIsSet_;
}

void ListScheduledEventsRequest::unsetpublishEndTime()
{
    publishEndTimeIsSet_ = false;
}

int32_t ListScheduledEventsRequest::getOffset() const
{
    return offset_;
}

void ListScheduledEventsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListScheduledEventsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListScheduledEventsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListScheduledEventsRequest::getLimit() const
{
    return limit_;
}

void ListScheduledEventsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListScheduledEventsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListScheduledEventsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


