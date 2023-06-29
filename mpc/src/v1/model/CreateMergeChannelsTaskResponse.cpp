

#include "huaweicloud/mpc/v1/model/CreateMergeChannelsTaskResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateMergeChannelsTaskResponse::CreateMergeChannelsTaskResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

CreateMergeChannelsTaskResponse::~CreateMergeChannelsTaskResponse() = default;

void CreateMergeChannelsTaskResponse::validate()
{
}

web::json::value CreateMergeChannelsTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}

bool CreateMergeChannelsTaskResponse::fromJson(const web::json::value& val)
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


std::string CreateMergeChannelsTaskResponse::getTaskId() const
{
    return taskId_;
}

void CreateMergeChannelsTaskResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreateMergeChannelsTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreateMergeChannelsTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


