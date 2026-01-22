

#include "huaweicloud/live/v1/model/CreatePullTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreatePullTaskResponse::CreatePullTaskResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

CreatePullTaskResponse::~CreatePullTaskResponse() = default;

void CreatePullTaskResponse::validate()
{
}

web::json::value CreatePullTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool CreatePullTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


std::string CreatePullTaskResponse::getTaskId() const
{
    return taskId_;
}

void CreatePullTaskResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreatePullTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreatePullTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string CreatePullTaskResponse::getRequestId() const
{
    return requestId_;
}

void CreatePullTaskResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreatePullTaskResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreatePullTaskResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


