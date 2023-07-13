

#include "huaweicloud/mpc/v1/model/DeleteExtractTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




DeleteExtractTaskRequest::DeleteExtractTaskRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

DeleteExtractTaskRequest::~DeleteExtractTaskRequest() = default;

void DeleteExtractTaskRequest::validate()
{
}

web::json::value DeleteExtractTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}

bool DeleteExtractTaskRequest::fromJson(const web::json::value& val)
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

std::string DeleteExtractTaskRequest::getTaskId() const
{
    return taskId_;
}

void DeleteExtractTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeleteExtractTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeleteExtractTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


