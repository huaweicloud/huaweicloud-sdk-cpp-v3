

#include "huaweicloud/antiddos/v2/model/ShowNewTaskStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V2 {
namespace Model {




ShowNewTaskStatusRequest::ShowNewTaskStatusRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

ShowNewTaskStatusRequest::~ShowNewTaskStatusRequest() = default;

void ShowNewTaskStatusRequest::validate()
{
}

web::json::value ShowNewTaskStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool ShowNewTaskStatusRequest::fromJson(const web::json::value& val)
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


std::string ShowNewTaskStatusRequest::getTaskId() const
{
    return taskId_;
}

void ShowNewTaskStatusRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowNewTaskStatusRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowNewTaskStatusRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


