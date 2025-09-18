

#include "huaweicloud/codeartscheck/v2/model/DeleteTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




DeleteTaskRequest::DeleteTaskRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

DeleteTaskRequest::~DeleteTaskRequest() = default;

void DeleteTaskRequest::validate()
{
}

web::json::value DeleteTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool DeleteTaskRequest::fromJson(const web::json::value& val)
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


std::string DeleteTaskRequest::getTaskId() const
{
    return taskId_;
}

void DeleteTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeleteTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeleteTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


