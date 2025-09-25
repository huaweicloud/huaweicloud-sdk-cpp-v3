

#include "huaweicloud/codehub/v4/model/RepoNotificationSubscriptionStateDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




RepoNotificationSubscriptionStateDto::RepoNotificationSubscriptionStateDto()
{
    configSource_ = "";
    configSourceIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
}

RepoNotificationSubscriptionStateDto::~RepoNotificationSubscriptionStateDto() = default;

void RepoNotificationSubscriptionStateDto::validate()
{
}

web::json::value RepoNotificationSubscriptionStateDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configSourceIsSet_) {
        val[utility::conversions::to_string_t("config_source")] = ModelBase::toJson(configSource_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }

    return val;
}
bool RepoNotificationSubscriptionStateDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("config_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigSource(refVal);
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
    return ok;
}


std::string RepoNotificationSubscriptionStateDto::getConfigSource() const
{
    return configSource_;
}

void RepoNotificationSubscriptionStateDto::setConfigSource(const std::string& value)
{
    configSource_ = value;
    configSourceIsSet_ = true;
}

bool RepoNotificationSubscriptionStateDto::configSourceIsSet() const
{
    return configSourceIsSet_;
}

void RepoNotificationSubscriptionStateDto::unsetconfigSource()
{
    configSourceIsSet_ = false;
}

bool RepoNotificationSubscriptionStateDto::isEnabled() const
{
    return enabled_;
}

void RepoNotificationSubscriptionStateDto::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool RepoNotificationSubscriptionStateDto::enabledIsSet() const
{
    return enabledIsSet_;
}

void RepoNotificationSubscriptionStateDto::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


