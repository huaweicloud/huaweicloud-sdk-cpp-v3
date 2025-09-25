

#include "huaweicloud/gaussdbforopengauss/v3/model/UpdateSqlLimitTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpdateSqlLimitTaskRequest::UpdateSqlLimitTaskRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateSqlLimitTaskRequest::~UpdateSqlLimitTaskRequest() = default;

void UpdateSqlLimitTaskRequest::validate()
{
}

web::json::value UpdateSqlLimitTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateSqlLimitTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateSqlLimitTaskRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateSqlLimitTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateSqlLimitTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateSqlLimitTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateSqlLimitTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateSqlLimitTaskRequest::getTaskId() const
{
    return taskId_;
}

void UpdateSqlLimitTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool UpdateSqlLimitTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void UpdateSqlLimitTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string UpdateSqlLimitTaskRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateSqlLimitTaskRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateSqlLimitTaskRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateSqlLimitTaskRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

UpdateSqlLimitTaskRequestBody UpdateSqlLimitTaskRequest::getBody() const
{
    return body_;
}

void UpdateSqlLimitTaskRequest::setBody(const UpdateSqlLimitTaskRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSqlLimitTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSqlLimitTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


