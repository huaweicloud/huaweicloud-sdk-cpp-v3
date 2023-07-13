

#include "huaweicloud/mpc/v1/model/CreateAnimatedGraphicsTaskResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateAnimatedGraphicsTaskResponse::CreateAnimatedGraphicsTaskResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

CreateAnimatedGraphicsTaskResponse::~CreateAnimatedGraphicsTaskResponse() = default;

void CreateAnimatedGraphicsTaskResponse::validate()
{
}

web::json::value CreateAnimatedGraphicsTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}

bool CreateAnimatedGraphicsTaskResponse::fromJson(const web::json::value& val)
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

std::string CreateAnimatedGraphicsTaskResponse::getTaskId() const
{
    return taskId_;
}

void CreateAnimatedGraphicsTaskResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreateAnimatedGraphicsTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreateAnimatedGraphicsTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


