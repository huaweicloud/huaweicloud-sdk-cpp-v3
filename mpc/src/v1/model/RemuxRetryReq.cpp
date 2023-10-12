

#include "huaweicloud/mpc/v1/model/RemuxRetryReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




RemuxRetryReq::RemuxRetryReq()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

RemuxRetryReq::~RemuxRetryReq() = default;

void RemuxRetryReq::validate()
{
}

web::json::value RemuxRetryReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool RemuxRetryReq::fromJson(const web::json::value& val)
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


std::string RemuxRetryReq::getTaskId() const
{
    return taskId_;
}

void RemuxRetryReq::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool RemuxRetryReq::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void RemuxRetryReq::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


