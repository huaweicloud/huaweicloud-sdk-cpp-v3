

#include "huaweicloud/vod/v1/model/ShowTaskDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowTaskDetailRequest::ShowTaskDetailRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

ShowTaskDetailRequest::~ShowTaskDetailRequest() = default;

void ShowTaskDetailRequest::validate()
{
}

web::json::value ShowTaskDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool ShowTaskDetailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
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


std::string ShowTaskDetailRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowTaskDetailRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowTaskDetailRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowTaskDetailRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowTaskDetailRequest::getTaskId() const
{
    return taskId_;
}

void ShowTaskDetailRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowTaskDetailRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowTaskDetailRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


