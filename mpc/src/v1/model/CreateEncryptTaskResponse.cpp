

#include "huaweicloud/mpc/v1/model/CreateEncryptTaskResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateEncryptTaskResponse::CreateEncryptTaskResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

CreateEncryptTaskResponse::~CreateEncryptTaskResponse() = default;

void CreateEncryptTaskResponse::validate()
{
}

web::json::value CreateEncryptTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}

bool CreateEncryptTaskResponse::fromJson(const web::json::value& val)
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

std::string CreateEncryptTaskResponse::getTaskId() const
{
    return taskId_;
}

void CreateEncryptTaskResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreateEncryptTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreateEncryptTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


