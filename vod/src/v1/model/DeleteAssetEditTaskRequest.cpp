

#include "huaweicloud/vod/v1/model/DeleteAssetEditTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




DeleteAssetEditTaskRequest::DeleteAssetEditTaskRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

DeleteAssetEditTaskRequest::~DeleteAssetEditTaskRequest() = default;

void DeleteAssetEditTaskRequest::validate()
{
}

web::json::value DeleteAssetEditTaskRequest::toJson() const
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
bool DeleteAssetEditTaskRequest::fromJson(const web::json::value& val)
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


std::string DeleteAssetEditTaskRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteAssetEditTaskRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteAssetEditTaskRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteAssetEditTaskRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteAssetEditTaskRequest::getTaskId() const
{
    return taskId_;
}

void DeleteAssetEditTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeleteAssetEditTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeleteAssetEditTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


