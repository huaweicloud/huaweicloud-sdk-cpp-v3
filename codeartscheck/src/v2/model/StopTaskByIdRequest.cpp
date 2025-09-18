

#include "huaweicloud/codeartscheck/v2/model/StopTaskByIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




StopTaskByIdRequest::StopTaskByIdRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

StopTaskByIdRequest::~StopTaskByIdRequest() = default;

void StopTaskByIdRequest::validate()
{
}

web::json::value StopTaskByIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool StopTaskByIdRequest::fromJson(const web::json::value& val)
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


std::string StopTaskByIdRequest::getTaskId() const
{
    return taskId_;
}

void StopTaskByIdRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool StopTaskByIdRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void StopTaskByIdRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


