

#include "huaweicloud/gaussdbfornosql/v3/model/ShowErrorLogRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowErrorLogRequest::ShowErrorLogRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowErrorLogRequest::~ShowErrorLogRequest() = default;

void ShowErrorLogRequest::validate()
{
}

web::json::value ShowErrorLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}

bool ShowErrorLogRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
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

std::string ShowErrorLogRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowErrorLogRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowErrorLogRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowErrorLogRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowErrorLogRequest::getStartTime() const
{
    return startTime_;
}

void ShowErrorLogRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowErrorLogRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowErrorLogRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowErrorLogRequest::getEndTime() const
{
    return endTime_;
}

void ShowErrorLogRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowErrorLogRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowErrorLogRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowErrorLogRequest::getNodeId() const
{
    return nodeId_;
}

void ShowErrorLogRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ShowErrorLogRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ShowErrorLogRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ShowErrorLogRequest::getType() const
{
    return type_;
}

void ShowErrorLogRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowErrorLogRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowErrorLogRequest::unsettype()
{
    typeIsSet_ = false;
}

int32_t ShowErrorLogRequest::getOffset() const
{
    return offset_;
}

void ShowErrorLogRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowErrorLogRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowErrorLogRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowErrorLogRequest::getLimit() const
{
    return limit_;
}

void ShowErrorLogRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowErrorLogRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowErrorLogRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


