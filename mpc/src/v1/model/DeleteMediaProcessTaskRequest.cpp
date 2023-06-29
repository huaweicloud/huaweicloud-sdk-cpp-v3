

#include "huaweicloud/mpc/v1/model/DeleteMediaProcessTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




DeleteMediaProcessTaskRequest::DeleteMediaProcessTaskRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

DeleteMediaProcessTaskRequest::~DeleteMediaProcessTaskRequest() = default;

void DeleteMediaProcessTaskRequest::validate()
{
}

web::json::value DeleteMediaProcessTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}

bool DeleteMediaProcessTaskRequest::fromJson(const web::json::value& val)
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


std::string DeleteMediaProcessTaskRequest::getTaskId() const
{
    return taskId_;
}

void DeleteMediaProcessTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeleteMediaProcessTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeleteMediaProcessTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


