

#include "huaweicloud/mpc/v1/model/DeleteAnimatedGraphicsTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




DeleteAnimatedGraphicsTaskRequest::DeleteAnimatedGraphicsTaskRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

DeleteAnimatedGraphicsTaskRequest::~DeleteAnimatedGraphicsTaskRequest() = default;

void DeleteAnimatedGraphicsTaskRequest::validate()
{
}

web::json::value DeleteAnimatedGraphicsTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}

bool DeleteAnimatedGraphicsTaskRequest::fromJson(const web::json::value& val)
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

std::string DeleteAnimatedGraphicsTaskRequest::getTaskId() const
{
    return taskId_;
}

void DeleteAnimatedGraphicsTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeleteAnimatedGraphicsTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeleteAnimatedGraphicsTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


