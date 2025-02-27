

#include "huaweicloud/live/v1/model/DeleteScheduleRecordTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeleteScheduleRecordTasksRequest::DeleteScheduleRecordTasksRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

DeleteScheduleRecordTasksRequest::~DeleteScheduleRecordTasksRequest() = default;

void DeleteScheduleRecordTasksRequest::validate()
{
}

web::json::value DeleteScheduleRecordTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool DeleteScheduleRecordTasksRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteScheduleRecordTasksRequest::getTaskId() const
{
    return taskId_;
}

void DeleteScheduleRecordTasksRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeleteScheduleRecordTasksRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeleteScheduleRecordTasksRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


