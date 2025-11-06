

#include "huaweicloud/codeartsrepo/v4/model/ShowRepositoryWebhookLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowRepositoryWebhookLogRequest::ShowRepositoryWebhookLogRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    hookId_ = 0;
    hookIdIsSet_ = false;
    logId_ = 0;
    logIdIsSet_ = false;
}

ShowRepositoryWebhookLogRequest::~ShowRepositoryWebhookLogRequest() = default;

void ShowRepositoryWebhookLogRequest::validate()
{
}

web::json::value ShowRepositoryWebhookLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(hookIdIsSet_) {
        val[utility::conversions::to_string_t("hook_id")] = ModelBase::toJson(hookId_);
    }
    if(logIdIsSet_) {
        val[utility::conversions::to_string_t("log_id")] = ModelBase::toJson(logId_);
    }

    return val;
}
bool ShowRepositoryWebhookLogRequest::fromJson(const web::json::value& val)
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


int32_t ShowRepositoryWebhookLogRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowRepositoryWebhookLogRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowRepositoryWebhookLogRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowRepositoryWebhookLogRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ShowRepositoryWebhookLogRequest::getHookId() const
{
    return hookId_;
}

void ShowRepositoryWebhookLogRequest::setHookId(int32_t value)
{
    hookId_ = value;
    hookIdIsSet_ = true;
}

bool ShowRepositoryWebhookLogRequest::hookIdIsSet() const
{
    return hookIdIsSet_;
}

void ShowRepositoryWebhookLogRequest::unsethookId()
{
    hookIdIsSet_ = false;
}

int32_t ShowRepositoryWebhookLogRequest::getLogId() const
{
    return logId_;
}

void ShowRepositoryWebhookLogRequest::setLogId(int32_t value)
{
    logId_ = value;
    logIdIsSet_ = true;
}

bool ShowRepositoryWebhookLogRequest::logIdIsSet() const
{
    return logIdIsSet_;
}

void ShowRepositoryWebhookLogRequest::unsetlogId()
{
    logIdIsSet_ = false;
}

}
}
}
}
}


