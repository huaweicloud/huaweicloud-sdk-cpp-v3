

#include "huaweicloud/cdn/v2/model/CreateAccessControlTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




CreateAccessControlTaskResponse::CreateAccessControlTaskResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

CreateAccessControlTaskResponse::~CreateAccessControlTaskResponse() = default;

void CreateAccessControlTaskResponse::validate()
{
}

web::json::value CreateAccessControlTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool CreateAccessControlTaskResponse::fromJson(const web::json::value& val)
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


std::string CreateAccessControlTaskResponse::getTaskId() const
{
    return taskId_;
}

void CreateAccessControlTaskResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreateAccessControlTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreateAccessControlTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


