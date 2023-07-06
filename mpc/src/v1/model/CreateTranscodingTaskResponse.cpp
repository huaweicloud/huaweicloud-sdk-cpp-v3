

#include "huaweicloud/mpc/v1/model/CreateTranscodingTaskResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateTranscodingTaskResponse::CreateTranscodingTaskResponse()
{
    taskId_ = 0;
    taskIdIsSet_ = false;
}

CreateTranscodingTaskResponse::~CreateTranscodingTaskResponse() = default;

void CreateTranscodingTaskResponse::validate()
{
}

web::json::value CreateTranscodingTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}

bool CreateTranscodingTaskResponse::fromJson(const web::json::value& val)
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

int32_t CreateTranscodingTaskResponse::getTaskId() const
{
    return taskId_;
}

void CreateTranscodingTaskResponse::setTaskId(int32_t value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreateTranscodingTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreateTranscodingTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


