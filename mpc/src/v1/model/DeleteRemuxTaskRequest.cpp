

#include "huaweicloud/mpc/v1/model/DeleteRemuxTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




DeleteRemuxTaskRequest::DeleteRemuxTaskRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

DeleteRemuxTaskRequest::~DeleteRemuxTaskRequest() = default;

void DeleteRemuxTaskRequest::validate()
{
}

web::json::value DeleteRemuxTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool DeleteRemuxTaskRequest::fromJson(const web::json::value& val)
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


std::string DeleteRemuxTaskRequest::getTaskId() const
{
    return taskId_;
}

void DeleteRemuxTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeleteRemuxTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeleteRemuxTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


