

#include "huaweicloud/mpc/v1/model/CancelRemuxTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CancelRemuxTaskRequest::CancelRemuxTaskRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

CancelRemuxTaskRequest::~CancelRemuxTaskRequest() = default;

void CancelRemuxTaskRequest::validate()
{
}

web::json::value CancelRemuxTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}

bool CancelRemuxTaskRequest::fromJson(const web::json::value& val)
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

std::string CancelRemuxTaskRequest::getTaskId() const
{
    return taskId_;
}

void CancelRemuxTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CancelRemuxTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CancelRemuxTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


