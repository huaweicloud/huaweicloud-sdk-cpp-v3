

#include "huaweicloud/mpc/v1/model/DeleteMergeChannelsTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




DeleteMergeChannelsTaskRequest::DeleteMergeChannelsTaskRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

DeleteMergeChannelsTaskRequest::~DeleteMergeChannelsTaskRequest() = default;

void DeleteMergeChannelsTaskRequest::validate()
{
}

web::json::value DeleteMergeChannelsTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool DeleteMergeChannelsTaskRequest::fromJson(const web::json::value& val)
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


std::string DeleteMergeChannelsTaskRequest::getTaskId() const
{
    return taskId_;
}

void DeleteMergeChannelsTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeleteMergeChannelsTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeleteMergeChannelsTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


