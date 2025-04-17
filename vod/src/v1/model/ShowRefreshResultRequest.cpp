

#include "huaweicloud/vod/v1/model/ShowRefreshResultRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowRefreshResultRequest::ShowRefreshResultRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

ShowRefreshResultRequest::~ShowRefreshResultRequest() = default;

void ShowRefreshResultRequest::validate()
{
}

web::json::value ShowRefreshResultRequest::toJson() const
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
bool ShowRefreshResultRequest::fromJson(const web::json::value& val)
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


std::string ShowRefreshResultRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowRefreshResultRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowRefreshResultRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowRefreshResultRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowRefreshResultRequest::getTaskId() const
{
    return taskId_;
}

void ShowRefreshResultRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowRefreshResultRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowRefreshResultRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


