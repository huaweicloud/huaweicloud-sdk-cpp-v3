

#include "huaweicloud/metastudio/v1/model/UpdateSmartLiveUserConfigReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateSmartLiveUserConfigReq::UpdateSmartLiveUserConfigReq()
{
    liveExitConfigIsSet_ = false;
    liveEventCallbackConfigIsSet_ = false;
    liveNotifyConfigIsSet_ = false;
}

UpdateSmartLiveUserConfigReq::~UpdateSmartLiveUserConfigReq() = default;

void UpdateSmartLiveUserConfigReq::validate()
{
}

web::json::value UpdateSmartLiveUserConfigReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(liveExitConfigIsSet_) {
        val[utility::conversions::to_string_t("live_exit_config")] = ModelBase::toJson(liveExitConfig_);
    }
    if(liveEventCallbackConfigIsSet_) {
        val[utility::conversions::to_string_t("live_event_callback_config")] = ModelBase::toJson(liveEventCallbackConfig_);
    }
    if(liveNotifyConfigIsSet_) {
        val[utility::conversions::to_string_t("live_notify_config")] = ModelBase::toJson(liveNotifyConfig_);
    }

    return val;
}
bool UpdateSmartLiveUserConfigReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("live_exit_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("live_exit_config"));
        if(!fieldValue.is_null())
        {
            LiveExitConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveExitConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("live_event_callback_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("live_event_callback_config"));
        if(!fieldValue.is_null())
        {
            LiveEventCallBackConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveEventCallbackConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("live_notify_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("live_notify_config"));
        if(!fieldValue.is_null())
        {
            LiveNotifyConfigReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveNotifyConfig(refVal);
        }
    }
    return ok;
}


LiveExitConfig UpdateSmartLiveUserConfigReq::getLiveExitConfig() const
{
    return liveExitConfig_;
}

void UpdateSmartLiveUserConfigReq::setLiveExitConfig(const LiveExitConfig& value)
{
    liveExitConfig_ = value;
    liveExitConfigIsSet_ = true;
}

bool UpdateSmartLiveUserConfigReq::liveExitConfigIsSet() const
{
    return liveExitConfigIsSet_;
}

void UpdateSmartLiveUserConfigReq::unsetliveExitConfig()
{
    liveExitConfigIsSet_ = false;
}

LiveEventCallBackConfig UpdateSmartLiveUserConfigReq::getLiveEventCallbackConfig() const
{
    return liveEventCallbackConfig_;
}

void UpdateSmartLiveUserConfigReq::setLiveEventCallbackConfig(const LiveEventCallBackConfig& value)
{
    liveEventCallbackConfig_ = value;
    liveEventCallbackConfigIsSet_ = true;
}

bool UpdateSmartLiveUserConfigReq::liveEventCallbackConfigIsSet() const
{
    return liveEventCallbackConfigIsSet_;
}

void UpdateSmartLiveUserConfigReq::unsetliveEventCallbackConfig()
{
    liveEventCallbackConfigIsSet_ = false;
}

LiveNotifyConfigReq UpdateSmartLiveUserConfigReq::getLiveNotifyConfig() const
{
    return liveNotifyConfig_;
}

void UpdateSmartLiveUserConfigReq::setLiveNotifyConfig(const LiveNotifyConfigReq& value)
{
    liveNotifyConfig_ = value;
    liveNotifyConfigIsSet_ = true;
}

bool UpdateSmartLiveUserConfigReq::liveNotifyConfigIsSet() const
{
    return liveNotifyConfigIsSet_;
}

void UpdateSmartLiveUserConfigReq::unsetliveNotifyConfig()
{
    liveNotifyConfigIsSet_ = false;
}

}
}
}
}
}


