

#include "huaweicloud/mpc/v1/model/DeleteResetTracksTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




DeleteResetTracksTaskRequest::DeleteResetTracksTaskRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

DeleteResetTracksTaskRequest::~DeleteResetTracksTaskRequest() = default;

void DeleteResetTracksTaskRequest::validate()
{
}

web::json::value DeleteResetTracksTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}

bool DeleteResetTracksTaskRequest::fromJson(const web::json::value& val)
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

std::string DeleteResetTracksTaskRequest::getTaskId() const
{
    return taskId_;
}

void DeleteResetTracksTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeleteResetTracksTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeleteResetTracksTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


