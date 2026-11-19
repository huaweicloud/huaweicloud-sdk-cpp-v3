

#include "huaweicloud/gaussdb/v3/model/StopKillProcessTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




StopKillProcessTaskRequest::StopKillProcessTaskRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

StopKillProcessTaskRequest::~StopKillProcessTaskRequest() = default;

void StopKillProcessTaskRequest::validate()
{
}

web::json::value StopKillProcessTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool StopKillProcessTaskRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string StopKillProcessTaskRequest::getXLanguage() const
{
    return xLanguage_;
}

void StopKillProcessTaskRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StopKillProcessTaskRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StopKillProcessTaskRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string StopKillProcessTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void StopKillProcessTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StopKillProcessTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StopKillProcessTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string StopKillProcessTaskRequest::getTaskId() const
{
    return taskId_;
}

void StopKillProcessTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool StopKillProcessTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void StopKillProcessTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


