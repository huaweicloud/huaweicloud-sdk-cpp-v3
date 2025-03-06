

#include "huaweicloud/gaussdbforopengauss/v3/model/CancelScheduleTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CancelScheduleTaskRequest::CancelScheduleTaskRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

CancelScheduleTaskRequest::~CancelScheduleTaskRequest() = default;

void CancelScheduleTaskRequest::validate()
{
}

web::json::value CancelScheduleTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool CancelScheduleTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
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


std::string CancelScheduleTaskRequest::getXLanguage() const
{
    return xLanguage_;
}

void CancelScheduleTaskRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CancelScheduleTaskRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CancelScheduleTaskRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CancelScheduleTaskRequest::getTaskId() const
{
    return taskId_;
}

void CancelScheduleTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CancelScheduleTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CancelScheduleTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


