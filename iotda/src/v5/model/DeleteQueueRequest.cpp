

#include "huaweicloud/iotda/v5/model/DeleteQueueRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteQueueRequest::DeleteQueueRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    queueId_ = "";
    queueIdIsSet_ = false;
}

DeleteQueueRequest::~DeleteQueueRequest() = default;

void DeleteQueueRequest::validate()
{
}

web::json::value DeleteQueueRequest::toJson() const
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
bool DeleteQueueRequest::fromJson(const web::json::value& val)
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


std::string DeleteQueueRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteQueueRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteQueueRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteQueueRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteQueueRequest::getQueueId() const
{
    return queueId_;
}

void DeleteQueueRequest::setQueueId(const std::string& value)
{
    queueId_ = value;
    queueIdIsSet_ = true;
}

bool DeleteQueueRequest::queueIdIsSet() const
{
    return queueIdIsSet_;
}

void DeleteQueueRequest::unsetqueueId()
{
    queueIdIsSet_ = false;
}

}
}
}
}
}


