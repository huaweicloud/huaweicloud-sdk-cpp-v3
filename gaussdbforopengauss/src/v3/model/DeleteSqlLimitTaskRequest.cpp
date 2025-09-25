

#include "huaweicloud/gaussdbforopengauss/v3/model/DeleteSqlLimitTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DeleteSqlLimitTaskRequest::DeleteSqlLimitTaskRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteSqlLimitTaskRequest::~DeleteSqlLimitTaskRequest() = default;

void DeleteSqlLimitTaskRequest::validate()
{
}

web::json::value DeleteSqlLimitTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteSqlLimitTaskRequest::fromJson(const web::json::value& val)
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
            DeleteSqlLimitTaskRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteSqlLimitTaskRequest::getTaskId() const
{
    return taskId_;
}

void DeleteSqlLimitTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeleteSqlLimitTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeleteSqlLimitTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string DeleteSqlLimitTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteSqlLimitTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteSqlLimitTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteSqlLimitTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteSqlLimitTaskRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteSqlLimitTaskRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteSqlLimitTaskRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteSqlLimitTaskRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

DeleteSqlLimitTaskRequestBody DeleteSqlLimitTaskRequest::getBody() const
{
    return body_;
}

void DeleteSqlLimitTaskRequest::setBody(const DeleteSqlLimitTaskRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteSqlLimitTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteSqlLimitTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


