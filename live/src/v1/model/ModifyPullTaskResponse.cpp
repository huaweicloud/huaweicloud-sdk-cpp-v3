

#include "huaweicloud/live/v1/model/ModifyPullTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyPullTaskResponse::ModifyPullTaskResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ModifyPullTaskResponse::~ModifyPullTaskResponse() = default;

void ModifyPullTaskResponse::validate()
{
}

web::json::value ModifyPullTaskResponse::toJson() const
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
bool ModifyPullTaskResponse::fromJson(const web::json::value& val)
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


std::string ModifyPullTaskResponse::getTaskId() const
{
    return taskId_;
}

void ModifyPullTaskResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ModifyPullTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ModifyPullTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ModifyPullTaskResponse::getRequestId() const
{
    return requestId_;
}

void ModifyPullTaskResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ModifyPullTaskResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ModifyPullTaskResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


