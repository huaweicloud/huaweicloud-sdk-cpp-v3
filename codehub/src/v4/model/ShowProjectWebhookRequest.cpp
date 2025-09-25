

#include "huaweicloud/codehub/v4/model/ShowProjectWebhookRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowProjectWebhookRequest::ShowProjectWebhookRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    hookId_ = 0;
    hookIdIsSet_ = false;
}

ShowProjectWebhookRequest::~ShowProjectWebhookRequest() = default;

void ShowProjectWebhookRequest::validate()
{
}

web::json::value ShowProjectWebhookRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(hookIdIsSet_) {
        val[utility::conversions::to_string_t("hook_id")] = ModelBase::toJson(hookId_);
    }

    return val;
}
bool ShowProjectWebhookRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowProjectWebhookRequest::getProjectId() const
{
    return projectId_;
}

void ShowProjectWebhookRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowProjectWebhookRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowProjectWebhookRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ShowProjectWebhookRequest::getHookId() const
{
    return hookId_;
}

void ShowProjectWebhookRequest::setHookId(int32_t value)
{
    hookId_ = value;
    hookIdIsSet_ = true;
}

bool ShowProjectWebhookRequest::hookIdIsSet() const
{
    return hookIdIsSet_;
}

void ShowProjectWebhookRequest::unsethookId()
{
    hookIdIsSet_ = false;
}

}
}
}
}
}


