

#include "huaweicloud/vod/v1/model/CreateEditTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateEditTaskResponse::CreateEditTaskResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

CreateEditTaskResponse::~CreateEditTaskResponse() = default;

void CreateEditTaskResponse::validate()
{
}

web::json::value CreateEditTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool CreateEditTaskResponse::fromJson(const web::json::value& val)
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


std::string CreateEditTaskResponse::getTaskId() const
{
    return taskId_;
}

void CreateEditTaskResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreateEditTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreateEditTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


