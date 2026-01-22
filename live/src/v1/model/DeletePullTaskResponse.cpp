

#include "huaweicloud/live/v1/model/DeletePullTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeletePullTaskResponse::DeletePullTaskResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

DeletePullTaskResponse::~DeletePullTaskResponse() = default;

void DeletePullTaskResponse::validate()
{
}

web::json::value DeletePullTaskResponse::toJson() const
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
bool DeletePullTaskResponse::fromJson(const web::json::value& val)
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


std::string DeletePullTaskResponse::getTaskId() const
{
    return taskId_;
}

void DeletePullTaskResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeletePullTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeletePullTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string DeletePullTaskResponse::getRequestId() const
{
    return requestId_;
}

void DeletePullTaskResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DeletePullTaskResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DeletePullTaskResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


