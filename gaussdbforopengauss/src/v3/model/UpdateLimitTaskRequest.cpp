

#include "huaweicloud/gaussdbforopengauss/v3/model/UpdateLimitTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpdateLimitTaskRequest::UpdateLimitTaskRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateLimitTaskRequest::~UpdateLimitTaskRequest() = default;

void UpdateLimitTaskRequest::validate()
{
}

web::json::value UpdateLimitTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateLimitTaskRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateLimitTaskRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateLimitTaskRequest::getTaskId() const
{
    return taskId_;
}

void UpdateLimitTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool UpdateLimitTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void UpdateLimitTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string UpdateLimitTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateLimitTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateLimitTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateLimitTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateLimitTaskRequestBody UpdateLimitTaskRequest::getBody() const
{
    return body_;
}

void UpdateLimitTaskRequest::setBody(const UpdateLimitTaskRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateLimitTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateLimitTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


