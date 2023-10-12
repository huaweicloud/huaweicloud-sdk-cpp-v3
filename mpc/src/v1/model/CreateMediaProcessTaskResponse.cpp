

#include "huaweicloud/mpc/v1/model/CreateMediaProcessTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateMediaProcessTaskResponse::CreateMediaProcessTaskResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

CreateMediaProcessTaskResponse::~CreateMediaProcessTaskResponse() = default;

void CreateMediaProcessTaskResponse::validate()
{
}

web::json::value CreateMediaProcessTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool CreateMediaProcessTaskResponse::fromJson(const web::json::value& val)
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


std::string CreateMediaProcessTaskResponse::getTaskId() const
{
    return taskId_;
}

void CreateMediaProcessTaskResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreateMediaProcessTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreateMediaProcessTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


