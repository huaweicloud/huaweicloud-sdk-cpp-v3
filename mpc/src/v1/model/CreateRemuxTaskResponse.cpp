

#include "huaweicloud/mpc/v1/model/CreateRemuxTaskResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateRemuxTaskResponse::CreateRemuxTaskResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

CreateRemuxTaskResponse::~CreateRemuxTaskResponse() = default;

void CreateRemuxTaskResponse::validate()
{
}

web::json::value CreateRemuxTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}

bool CreateRemuxTaskResponse::fromJson(const web::json::value& val)
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


std::string CreateRemuxTaskResponse::getTaskId() const
{
    return taskId_;
}

void CreateRemuxTaskResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreateRemuxTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreateRemuxTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


