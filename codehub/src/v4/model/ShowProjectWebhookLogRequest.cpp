

#include "huaweicloud/codehub/v4/model/ShowProjectWebhookLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowProjectWebhookLogRequest::ShowProjectWebhookLogRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    hookId_ = 0;
    hookIdIsSet_ = false;
    logId_ = 0;
    logIdIsSet_ = false;
}

ShowProjectWebhookLogRequest::~ShowProjectWebhookLogRequest() = default;

void ShowProjectWebhookLogRequest::validate()
{
}

web::json::value ShowProjectWebhookLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(hookIdIsSet_) {
        val[utility::conversions::to_string_t("hook_id")] = ModelBase::toJson(hookId_);
    }
    if(logIdIsSet_) {
        val[utility::conversions::to_string_t("log_id")] = ModelBase::toJson(logId_);
    }

    return val;
}
bool ShowProjectWebhookLogRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hook_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hook_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHookId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogId(refVal);
        }
    }
    return ok;
}


std::string ShowProjectWebhookLogRequest::getProjectId() const
{
    return projectId_;
}

void ShowProjectWebhookLogRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowProjectWebhookLogRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowProjectWebhookLogRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ShowProjectWebhookLogRequest::getHookId() const
{
    return hookId_;
}

void ShowProjectWebhookLogRequest::setHookId(int32_t value)
{
    hookId_ = value;
    hookIdIsSet_ = true;
}

bool ShowProjectWebhookLogRequest::hookIdIsSet() const
{
    return hookIdIsSet_;
}

void ShowProjectWebhookLogRequest::unsethookId()
{
    hookIdIsSet_ = false;
}

int32_t ShowProjectWebhookLogRequest::getLogId() const
{
    return logId_;
}

void ShowProjectWebhookLogRequest::setLogId(int32_t value)
{
    logId_ = value;
    logIdIsSet_ = true;
}

bool ShowProjectWebhookLogRequest::logIdIsSet() const
{
    return logIdIsSet_;
}

void ShowProjectWebhookLogRequest::unsetlogId()
{
    logIdIsSet_ = false;
}

}
}
}
}
}


