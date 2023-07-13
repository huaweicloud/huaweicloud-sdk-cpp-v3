

#include "huaweicloud/mpc/v1/model/DeleteEncryptTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




DeleteEncryptTaskRequest::DeleteEncryptTaskRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

DeleteEncryptTaskRequest::~DeleteEncryptTaskRequest() = default;

void DeleteEncryptTaskRequest::validate()
{
}

web::json::value DeleteEncryptTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}

bool DeleteEncryptTaskRequest::fromJson(const web::json::value& val)
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

std::string DeleteEncryptTaskRequest::getTaskId() const
{
    return taskId_;
}

void DeleteEncryptTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeleteEncryptTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeleteEncryptTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


