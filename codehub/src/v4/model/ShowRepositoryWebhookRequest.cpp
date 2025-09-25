

#include "huaweicloud/codehub/v4/model/ShowRepositoryWebhookRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowRepositoryWebhookRequest::ShowRepositoryWebhookRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    hookId_ = 0;
    hookIdIsSet_ = false;
}

ShowRepositoryWebhookRequest::~ShowRepositoryWebhookRequest() = default;

void ShowRepositoryWebhookRequest::validate()
{
}

web::json::value ShowRepositoryWebhookRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(hookIdIsSet_) {
        val[utility::conversions::to_string_t("hook_id")] = ModelBase::toJson(hookId_);
    }

    return val;
}
bool ShowRepositoryWebhookRequest::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t ShowRepositoryWebhookRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowRepositoryWebhookRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowRepositoryWebhookRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowRepositoryWebhookRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ShowRepositoryWebhookRequest::getHookId() const
{
    return hookId_;
}

void ShowRepositoryWebhookRequest::setHookId(int32_t value)
{
    hookId_ = value;
    hookIdIsSet_ = true;
}

bool ShowRepositoryWebhookRequest::hookIdIsSet() const
{
    return hookIdIsSet_;
}

void ShowRepositoryWebhookRequest::unsethookId()
{
    hookIdIsSet_ = false;
}

}
}
}
}
}


