

#include "huaweicloud/iotda/v5/model/BatchShowQueueRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




BatchShowQueueRequest::BatchShowQueueRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    queueName_ = "";
    queueNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

BatchShowQueueRequest::~BatchShowQueueRequest() = default;

void BatchShowQueueRequest::validate()
{
}

web::json::value BatchShowQueueRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(queueNameIsSet_) {
        val[utility::conversions::to_string_t("queue_name")] = ModelBase::toJson(queueName_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool BatchShowQueueRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("queue_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("queue_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueueName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
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
    return ok;
}


std::string BatchShowQueueRequest::getInstanceId() const
{
    return instanceId_;
}

void BatchShowQueueRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BatchShowQueueRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BatchShowQueueRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string BatchShowQueueRequest::getQueueName() const
{
    return queueName_;
}

void BatchShowQueueRequest::setQueueName(const std::string& value)
{
    queueName_ = value;
    queueNameIsSet_ = true;
}

bool BatchShowQueueRequest::queueNameIsSet() const
{
    return queueNameIsSet_;
}

void BatchShowQueueRequest::unsetqueueName()
{
    queueNameIsSet_ = false;
}

int32_t BatchShowQueueRequest::getLimit() const
{
    return limit_;
}

void BatchShowQueueRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool BatchShowQueueRequest::limitIsSet() const
{
    return limitIsSet_;
}

void BatchShowQueueRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string BatchShowQueueRequest::getMarker() const
{
    return marker_;
}

void BatchShowQueueRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool BatchShowQueueRequest::markerIsSet() const
{
    return markerIsSet_;
}

void BatchShowQueueRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t BatchShowQueueRequest::getOffset() const
{
    return offset_;
}

void BatchShowQueueRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool BatchShowQueueRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void BatchShowQueueRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


