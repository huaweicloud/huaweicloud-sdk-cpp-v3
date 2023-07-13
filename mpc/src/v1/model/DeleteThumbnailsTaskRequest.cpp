

#include "huaweicloud/mpc/v1/model/DeleteThumbnailsTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




DeleteThumbnailsTaskRequest::DeleteThumbnailsTaskRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

DeleteThumbnailsTaskRequest::~DeleteThumbnailsTaskRequest() = default;

void DeleteThumbnailsTaskRequest::validate()
{
}

web::json::value DeleteThumbnailsTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}

bool DeleteThumbnailsTaskRequest::fromJson(const web::json::value& val)
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

std::string DeleteThumbnailsTaskRequest::getTaskId() const
{
    return taskId_;
}

void DeleteThumbnailsTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeleteThumbnailsTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeleteThumbnailsTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


