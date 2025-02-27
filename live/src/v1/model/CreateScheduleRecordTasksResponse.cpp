

#include "huaweicloud/live/v1/model/CreateScheduleRecordTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateScheduleRecordTasksResponse::CreateScheduleRecordTasksResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateScheduleRecordTasksResponse::~CreateScheduleRecordTasksResponse() = default;

void CreateScheduleRecordTasksResponse::validate()
{
}

web::json::value CreateScheduleRecordTasksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateScheduleRecordTasksResponse::fromJson(const web::json::value& val)
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


std::string CreateScheduleRecordTasksResponse::getTaskId() const
{
    return taskId_;
}

void CreateScheduleRecordTasksResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreateScheduleRecordTasksResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreateScheduleRecordTasksResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string CreateScheduleRecordTasksResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateScheduleRecordTasksResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateScheduleRecordTasksResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateScheduleRecordTasksResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


