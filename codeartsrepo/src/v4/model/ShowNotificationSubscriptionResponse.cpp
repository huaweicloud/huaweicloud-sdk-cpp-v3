

#include "huaweicloud/codeartsrepo/v4/model/ShowNotificationSubscriptionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowNotificationSubscriptionResponse::ShowNotificationSubscriptionResponse()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
    configSource_ = "";
    configSourceIsSet_ = false;
    webhookConfigIsSet_ = false;
    waringRepoUsageRate_ = 0;
    waringRepoUsageRateIsSet_ = false;
    subscriptEventsIsSet_ = false;
}

ShowNotificationSubscriptionResponse::~ShowNotificationSubscriptionResponse() = default;

void ShowNotificationSubscriptionResponse::validate()
{
}

web::json::value ShowNotificationSubscriptionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(configSourceIsSet_) {
        val[utility::conversions::to_string_t("config_source")] = ModelBase::toJson(configSource_);
    }
    if(webhookConfigIsSet_) {
        val[utility::conversions::to_string_t("webhook_config")] = ModelBase::toJson(webhookConfig_);
    }
    if(waringRepoUsageRateIsSet_) {
        val[utility::conversions::to_string_t("waring_repo_usage_rate")] = ModelBase::toJson(waringRepoUsageRate_);
    }
    if(subscriptEventsIsSet_) {
        val[utility::conversions::to_string_t("subscript_events")] = ModelBase::toJson(subscriptEvents_);
    }

    return val;
}
bool ShowNotificationSubscriptionResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("webhook_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("webhook_config"));
        if(!fieldValue.is_null())
        {
            RepoWebHookSubscriptionDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebhookConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("waring_repo_usage_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("waring_repo_usage_rate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaringRepoUsageRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscript_events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscript_events"));
        if(!fieldValue.is_null())
        {
            std::vector<RepoSubscriptionEventDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptEvents(refVal);
        }
    }
    return ok;
}


int32_t ShowNotificationSubscriptionResponse::getRepositoryId() const
{
    return repositoryId_;
}

void ShowNotificationSubscriptionResponse::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowNotificationSubscriptionResponse::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowNotificationSubscriptionResponse::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

bool ShowNotificationSubscriptionResponse::isEnabled() const
{
    return enabled_;
}

void ShowNotificationSubscriptionResponse::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool ShowNotificationSubscriptionResponse::enabledIsSet() const
{
    return enabledIsSet_;
}

void ShowNotificationSubscriptionResponse::unsetenabled()
{
    enabledIsSet_ = false;
}

std::string ShowNotificationSubscriptionResponse::getConfigSource() const
{
    return configSource_;
}

void ShowNotificationSubscriptionResponse::setConfigSource(const std::string& value)
{
    configSource_ = value;
    configSourceIsSet_ = true;
}

bool ShowNotificationSubscriptionResponse::configSourceIsSet() const
{
    return configSourceIsSet_;
}

void ShowNotificationSubscriptionResponse::unsetconfigSource()
{
    configSourceIsSet_ = false;
}

RepoWebHookSubscriptionDto ShowNotificationSubscriptionResponse::getWebhookConfig() const
{
    return webhookConfig_;
}

void ShowNotificationSubscriptionResponse::setWebhookConfig(const RepoWebHookSubscriptionDto& value)
{
    webhookConfig_ = value;
    webhookConfigIsSet_ = true;
}

bool ShowNotificationSubscriptionResponse::webhookConfigIsSet() const
{
    return webhookConfigIsSet_;
}

void ShowNotificationSubscriptionResponse::unsetwebhookConfig()
{
    webhookConfigIsSet_ = false;
}

int32_t ShowNotificationSubscriptionResponse::getWaringRepoUsageRate() const
{
    return waringRepoUsageRate_;
}

void ShowNotificationSubscriptionResponse::setWaringRepoUsageRate(int32_t value)
{
    waringRepoUsageRate_ = value;
    waringRepoUsageRateIsSet_ = true;
}

bool ShowNotificationSubscriptionResponse::waringRepoUsageRateIsSet() const
{
    return waringRepoUsageRateIsSet_;
}

void ShowNotificationSubscriptionResponse::unsetwaringRepoUsageRate()
{
    waringRepoUsageRateIsSet_ = false;
}

std::vector<RepoSubscriptionEventDto>& ShowNotificationSubscriptionResponse::getSubscriptEvents()
{
    return subscriptEvents_;
}

void ShowNotificationSubscriptionResponse::setSubscriptEvents(const std::vector<RepoSubscriptionEventDto>& value)
{
    subscriptEvents_ = value;
    subscriptEventsIsSet_ = true;
}

bool ShowNotificationSubscriptionResponse::subscriptEventsIsSet() const
{
    return subscriptEventsIsSet_;
}

void ShowNotificationSubscriptionResponse::unsetsubscriptEvents()
{
    subscriptEventsIsSet_ = false;
}

}
}
}
}
}


