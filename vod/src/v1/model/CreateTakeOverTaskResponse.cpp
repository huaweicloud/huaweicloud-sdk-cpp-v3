

#include "huaweicloud/vod/v1/model/CreateTakeOverTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateTakeOverTaskResponse::CreateTakeOverTaskResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

CreateTakeOverTaskResponse::~CreateTakeOverTaskResponse() = default;

void CreateTakeOverTaskResponse::validate()
{
}

web::json::value CreateTakeOverTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool CreateTakeOverTaskResponse::fromJson(const web::json::value& val)
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


std::string CreateTakeOverTaskResponse::getTaskId() const
{
    return taskId_;
}

void CreateTakeOverTaskResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreateTakeOverTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreateTakeOverTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


