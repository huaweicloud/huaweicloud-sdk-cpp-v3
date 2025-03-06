

#include "huaweicloud/gaussdbforopengauss/v3/model/DeleteScheduleTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DeleteScheduleTaskRequest::DeleteScheduleTaskRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

DeleteScheduleTaskRequest::~DeleteScheduleTaskRequest() = default;

void DeleteScheduleTaskRequest::validate()
{
}

web::json::value DeleteScheduleTaskRequest::toJson() const
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
bool DeleteScheduleTaskRequest::fromJson(const web::json::value& val)
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


std::string DeleteScheduleTaskRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteScheduleTaskRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteScheduleTaskRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteScheduleTaskRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteScheduleTaskRequest::getTaskId() const
{
    return taskId_;
}

void DeleteScheduleTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeleteScheduleTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeleteScheduleTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


