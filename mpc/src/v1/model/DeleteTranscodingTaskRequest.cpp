

#include "huaweicloud/mpc/v1/model/DeleteTranscodingTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




DeleteTranscodingTaskRequest::DeleteTranscodingTaskRequest()
{
    taskId_ = 0;
    taskIdIsSet_ = false;
}

DeleteTranscodingTaskRequest::~DeleteTranscodingTaskRequest() = default;

void DeleteTranscodingTaskRequest::validate()
{
}

web::json::value DeleteTranscodingTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool DeleteTranscodingTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    return ok;
}


int32_t DeleteTranscodingTaskRequest::getTaskId() const
{
    return taskId_;
}

void DeleteTranscodingTaskRequest::setTaskId(int32_t value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeleteTranscodingTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeleteTranscodingTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


