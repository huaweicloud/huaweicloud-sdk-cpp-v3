

#include "huaweicloud/codehub/v4/model/UpdateRepoNotificationSubscriptionDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateRepoNotificationSubscriptionDto::UpdateRepoNotificationSubscriptionDto()
{
    enabled_ = false;
    enabledIsSet_ = false;
    configSource_ = "";
    configSourceIsSet_ = false;
    webhookConfigIsSet_ = false;
    waringRepoUsageRate_ = 0;
    waringRepoUsageRateIsSet_ = false;
    subscriptEventsIsSet_ = false;
}

UpdateRepoNotificationSubscriptionDto::~UpdateRepoNotificationSubscriptionDto() = default;

void UpdateRepoNotificationSubscriptionDto::validate()
{
}

web::json::value UpdateRepoNotificationSubscriptionDto::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool UpdateRepoNotificationSubscriptionDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            UpdateRepoWebHookSubscriptionDto refVal;
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


bool UpdateRepoNotificationSubscriptionDto::isEnabled() const
{
    return enabled_;
}

void UpdateRepoNotificationSubscriptionDto::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool UpdateRepoNotificationSubscriptionDto::enabledIsSet() const
{
    return enabledIsSet_;
}

void UpdateRepoNotificationSubscriptionDto::unsetenabled()
{
    enabledIsSet_ = false;
}

std::string UpdateRepoNotificationSubscriptionDto::getConfigSource() const
{
    return configSource_;
}

void UpdateRepoNotificationSubscriptionDto::setConfigSource(const std::string& value)
{
    configSource_ = value;
    configSourceIsSet_ = true;
}

bool UpdateRepoNotificationSubscriptionDto::configSourceIsSet() const
{
    return configSourceIsSet_;
}

void UpdateRepoNotificationSubscriptionDto::unsetconfigSource()
{
    configSourceIsSet_ = false;
}

UpdateRepoWebHookSubscriptionDto UpdateRepoNotificationSubscriptionDto::getWebhookConfig() const
{
    return webhookConfig_;
}

void UpdateRepoNotificationSubscriptionDto::setWebhookConfig(const UpdateRepoWebHookSubscriptionDto& value)
{
    webhookConfig_ = value;
    webhookConfigIsSet_ = true;
}

bool UpdateRepoNotificationSubscriptionDto::webhookConfigIsSet() const
{
    return webhookConfigIsSet_;
}

void UpdateRepoNotificationSubscriptionDto::unsetwebhookConfig()
{
    webhookConfigIsSet_ = false;
}

int32_t UpdateRepoNotificationSubscriptionDto::getWaringRepoUsageRate() const
{
    return waringRepoUsageRate_;
}

void UpdateRepoNotificationSubscriptionDto::setWaringRepoUsageRate(int32_t value)
{
    waringRepoUsageRate_ = value;
    waringRepoUsageRateIsSet_ = true;
}

bool UpdateRepoNotificationSubscriptionDto::waringRepoUsageRateIsSet() const
{
    return waringRepoUsageRateIsSet_;
}

void UpdateRepoNotificationSubscriptionDto::unsetwaringRepoUsageRate()
{
    waringRepoUsageRateIsSet_ = false;
}

std::vector<RepoSubscriptionEventDto>& UpdateRepoNotificationSubscriptionDto::getSubscriptEvents()
{
    return subscriptEvents_;
}

void UpdateRepoNotificationSubscriptionDto::setSubscriptEvents(const std::vector<RepoSubscriptionEventDto>& value)
{
    subscriptEvents_ = value;
    subscriptEventsIsSet_ = true;
}

bool UpdateRepoNotificationSubscriptionDto::subscriptEventsIsSet() const
{
    return subscriptEventsIsSet_;
}

void UpdateRepoNotificationSubscriptionDto::unsetsubscriptEvents()
{
    subscriptEventsIsSet_ = false;
}

}
}
}
}
}


