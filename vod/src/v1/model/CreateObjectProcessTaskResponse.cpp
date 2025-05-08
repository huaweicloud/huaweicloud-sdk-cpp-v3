

#include "huaweicloud/vod/v1/model/CreateObjectProcessTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateObjectProcessTaskResponse::CreateObjectProcessTaskResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

CreateObjectProcessTaskResponse::~CreateObjectProcessTaskResponse() = default;

void CreateObjectProcessTaskResponse::validate()
{
}

web::json::value CreateObjectProcessTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool CreateObjectProcessTaskResponse::fromJson(const web::json::value& val)
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


std::string CreateObjectProcessTaskResponse::getTaskId() const
{
    return taskId_;
}

void CreateObjectProcessTaskResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreateObjectProcessTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreateObjectProcessTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


