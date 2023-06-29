

#include "huaweicloud/mpc/v1/model/CommonCreateTaskRsp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CommonCreateTaskRsp::CommonCreateTaskRsp()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

CommonCreateTaskRsp::~CommonCreateTaskRsp() = default;

void CommonCreateTaskRsp::validate()
{
}

web::json::value CommonCreateTaskRsp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}

bool CommonCreateTaskRsp::fromJson(const web::json::value& val)
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


std::string CommonCreateTaskRsp::getTaskId() const
{
    return taskId_;
}

void CommonCreateTaskRsp::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CommonCreateTaskRsp::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CommonCreateTaskRsp::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


