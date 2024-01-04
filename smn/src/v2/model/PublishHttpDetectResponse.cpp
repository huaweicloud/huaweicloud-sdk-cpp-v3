

#include "huaweicloud/smn/v2/model/PublishHttpDetectResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




PublishHttpDetectResponse::PublishHttpDetectResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

PublishHttpDetectResponse::~PublishHttpDetectResponse() = default;

void PublishHttpDetectResponse::validate()
{
}

web::json::value PublishHttpDetectResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool PublishHttpDetectResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    return ok;
}


std::string PublishHttpDetectResponse::getRequestId() const
{
    return requestId_;
}

void PublishHttpDetectResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool PublishHttpDetectResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void PublishHttpDetectResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string PublishHttpDetectResponse::getTaskId() const
{
    return taskId_;
}

void PublishHttpDetectResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool PublishHttpDetectResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void PublishHttpDetectResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


