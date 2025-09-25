

#include "huaweicloud/codehub/v4/model/UpdateRepositoryWebhookRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateRepositoryWebhookRequest::UpdateRepositoryWebhookRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    hookId_ = 0;
    hookIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRepositoryWebhookRequest::~UpdateRepositoryWebhookRequest() = default;

void UpdateRepositoryWebhookRequest::validate()
{
}

web::json::value UpdateRepositoryWebhookRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(hookIdIsSet_) {
        val[utility::conversions::to_string_t("hook_id")] = ModelBase::toJson(hookId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateRepositoryWebhookRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
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


int32_t UpdateRepositoryWebhookRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateRepositoryWebhookRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateRepositoryWebhookRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateRepositoryWebhookRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t UpdateRepositoryWebhookRequest::getHookId() const
{
    return hookId_;
}

void UpdateRepositoryWebhookRequest::setHookId(int32_t value)
{
    hookId_ = value;
    hookIdIsSet_ = true;
}

bool UpdateRepositoryWebhookRequest::hookIdIsSet() const
{
    return hookIdIsSet_;
}

void UpdateRepositoryWebhookRequest::unsethookId()
{
    hookIdIsSet_ = false;
}

WebhookParamsDto UpdateRepositoryWebhookRequest::getBody() const
{
    return body_;
}

void UpdateRepositoryWebhookRequest::setBody(const WebhookParamsDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRepositoryWebhookRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRepositoryWebhookRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


