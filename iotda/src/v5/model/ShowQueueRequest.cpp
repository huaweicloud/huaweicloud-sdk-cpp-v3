

#include "huaweicloud/iotda/v5/model/ShowQueueRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowQueueRequest::ShowQueueRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    queueId_ = "";
    queueIdIsSet_ = false;
}

ShowQueueRequest::~ShowQueueRequest() = default;

void ShowQueueRequest::validate()
{
}

web::json::value ShowQueueRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(queueIdIsSet_) {
        val[utility::conversions::to_string_t("queue_id")] = ModelBase::toJson(queueId_);
    }

    return val;
}
bool ShowQueueRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("queue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("queue_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueueId(refVal);
        }
    }
    return ok;
}


std::string ShowQueueRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowQueueRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowQueueRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowQueueRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowQueueRequest::getQueueId() const
{
    return queueId_;
}

void ShowQueueRequest::setQueueId(const std::string& value)
{
    queueId_ = value;
    queueIdIsSet_ = true;
}

bool ShowQueueRequest::queueIdIsSet() const
{
    return queueIdIsSet_;
}

void ShowQueueRequest::unsetqueueId()
{
    queueIdIsSet_ = false;
}

}
}
}
}
}


