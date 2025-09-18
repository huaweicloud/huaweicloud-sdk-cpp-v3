

#include "huaweicloud/codeartscheck/v2/model/ShowTaskDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTaskDetailRequest::ShowTaskDetailRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

ShowTaskDetailRequest::~ShowTaskDetailRequest() = default;

void ShowTaskDetailRequest::validate()
{
}

web::json::value ShowTaskDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool ShowTaskDetailRequest::fromJson(const web::json::value& val)
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


std::string ShowTaskDetailRequest::getTaskId() const
{
    return taskId_;
}

void ShowTaskDetailRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowTaskDetailRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowTaskDetailRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


