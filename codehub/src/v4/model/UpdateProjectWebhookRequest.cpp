

#include "huaweicloud/codehub/v4/model/UpdateProjectWebhookRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateProjectWebhookRequest::UpdateProjectWebhookRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    hookId_ = 0;
    hookIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProjectWebhookRequest::~UpdateProjectWebhookRequest() = default;

void UpdateProjectWebhookRequest::validate()
{
}

web::json::value UpdateProjectWebhookRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(hookIdIsSet_) {
        val[utility::conversions::to_string_t("hook_id")] = ModelBase::toJson(hookId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateProjectWebhookRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            WebhookParamsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateProjectWebhookRequest::getProjectId() const
{
    return projectId_;
}

void UpdateProjectWebhookRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateProjectWebhookRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateProjectWebhookRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t UpdateProjectWebhookRequest::getHookId() const
{
    return hookId_;
}

void UpdateProjectWebhookRequest::setHookId(int32_t value)
{
    hookId_ = value;
    hookIdIsSet_ = true;
}

bool UpdateProjectWebhookRequest::hookIdIsSet() const
{
    return hookIdIsSet_;
}

void UpdateProjectWebhookRequest::unsethookId()
{
    hookIdIsSet_ = false;
}

WebhookParamsDto UpdateProjectWebhookRequest::getBody() const
{
    return body_;
}

void UpdateProjectWebhookRequest::setBody(const WebhookParamsDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProjectWebhookRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProjectWebhookRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


