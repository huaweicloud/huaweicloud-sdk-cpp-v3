

#include "huaweicloud/cfw/v1/model/CancelCaptureTaskDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CancelCaptureTaskDto::CancelCaptureTaskDto()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

CancelCaptureTaskDto::~CancelCaptureTaskDto() = default;

void CancelCaptureTaskDto::validate()
{
}

web::json::value CancelCaptureTaskDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool CancelCaptureTaskDto::fromJson(const web::json::value& val)
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


std::string CancelCaptureTaskDto::getTaskId() const
{
    return taskId_;
}

void CancelCaptureTaskDto::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CancelCaptureTaskDto::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CancelCaptureTaskDto::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


