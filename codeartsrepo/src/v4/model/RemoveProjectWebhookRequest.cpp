

#include "huaweicloud/codeartsrepo/v4/model/RemoveProjectWebhookRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RemoveProjectWebhookRequest::RemoveProjectWebhookRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    hookId_ = 0;
    hookIdIsSet_ = false;
}

RemoveProjectWebhookRequest::~RemoveProjectWebhookRequest() = default;

void RemoveProjectWebhookRequest::validate()
{
}

web::json::value RemoveProjectWebhookRequest::toJson() const
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
bool RemoveProjectWebhookRequest::fromJson(const web::json::value& val)
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


std::string RemoveProjectWebhookRequest::getProjectId() const
{
    return projectId_;
}

void RemoveProjectWebhookRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RemoveProjectWebhookRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RemoveProjectWebhookRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t RemoveProjectWebhookRequest::getHookId() const
{
    return hookId_;
}

void RemoveProjectWebhookRequest::setHookId(int32_t value)
{
    hookId_ = value;
    hookIdIsSet_ = true;
}

bool RemoveProjectWebhookRequest::hookIdIsSet() const
{
    return hookIdIsSet_;
}

void RemoveProjectWebhookRequest::unsethookId()
{
    hookIdIsSet_ = false;
}

}
}
}
}
}


