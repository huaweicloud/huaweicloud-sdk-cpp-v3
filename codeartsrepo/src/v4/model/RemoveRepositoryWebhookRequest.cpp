

#include "huaweicloud/codeartsrepo/v4/model/RemoveRepositoryWebhookRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RemoveRepositoryWebhookRequest::RemoveRepositoryWebhookRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    hookId_ = 0;
    hookIdIsSet_ = false;
}

RemoveRepositoryWebhookRequest::~RemoveRepositoryWebhookRequest() = default;

void RemoveRepositoryWebhookRequest::validate()
{
}

web::json::value RemoveRepositoryWebhookRequest::toJson() const
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
bool RemoveRepositoryWebhookRequest::fromJson(const web::json::value& val)
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


int32_t RemoveRepositoryWebhookRequest::getRepositoryId() const
{
    return repositoryId_;
}

void RemoveRepositoryWebhookRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool RemoveRepositoryWebhookRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void RemoveRepositoryWebhookRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t RemoveRepositoryWebhookRequest::getHookId() const
{
    return hookId_;
}

void RemoveRepositoryWebhookRequest::setHookId(int32_t value)
{
    hookId_ = value;
    hookIdIsSet_ = true;
}

bool RemoveRepositoryWebhookRequest::hookIdIsSet() const
{
    return hookIdIsSet_;
}

void RemoveRepositoryWebhookRequest::unsethookId()
{
    hookIdIsSet_ = false;
}

}
}
}
}
}


