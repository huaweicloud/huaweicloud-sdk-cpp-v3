

#include "huaweicloud/codeartscheck/v2/model/CreateTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




CreateTaskResponse::CreateTaskResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

CreateTaskResponse::~CreateTaskResponse() = default;

void CreateTaskResponse::validate()
{
}

web::json::value CreateTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool CreateTaskResponse::fromJson(const web::json::value& val)
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


std::string CreateTaskResponse::getTaskId() const
{
    return taskId_;
}

void CreateTaskResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreateTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreateTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


