

#include "huaweicloud/mpc/v1/model/DeleteTranscodingTaskByConsoleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




DeleteTranscodingTaskByConsoleRequest::DeleteTranscodingTaskByConsoleRequest()
{
    taskId_ = 0;
    taskIdIsSet_ = false;
}

DeleteTranscodingTaskByConsoleRequest::~DeleteTranscodingTaskByConsoleRequest() = default;

void DeleteTranscodingTaskByConsoleRequest::validate()
{
}

web::json::value DeleteTranscodingTaskByConsoleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}

bool DeleteTranscodingTaskByConsoleRequest::fromJson(const web::json::value& val)
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


int32_t DeleteTranscodingTaskByConsoleRequest::getTaskId() const
{
    return taskId_;
}

void DeleteTranscodingTaskByConsoleRequest::setTaskId(int32_t value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeleteTranscodingTaskByConsoleRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeleteTranscodingTaskByConsoleRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


