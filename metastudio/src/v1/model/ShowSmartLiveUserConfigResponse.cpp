

#include "huaweicloud/metastudio/v1/model/ShowSmartLiveUserConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowSmartLiveUserConfigResponse::ShowSmartLiveUserConfigResponse()
{
    liveExitConfigIsSet_ = false;
    liveEventCallbackConfigIsSet_ = false;
    liveNotifyConfigIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowSmartLiveUserConfigResponse::~ShowSmartLiveUserConfigResponse() = default;

void ShowSmartLiveUserConfigResponse::validate()
{
}

web::json::value ShowSmartLiveUserConfigResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowSmartLiveUserConfigResponse::fromJson(const web::json::value& val)
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
            LiveNotifyConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveNotifyConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


LiveExitConfig ShowSmartLiveUserConfigResponse::getLiveExitConfig() const
{
    return liveExitConfig_;
}

void ShowSmartLiveUserConfigResponse::setLiveExitConfig(const LiveExitConfig& value)
{
    liveExitConfig_ = value;
    liveExitConfigIsSet_ = true;
}

bool ShowSmartLiveUserConfigResponse::liveExitConfigIsSet() const
{
    return liveExitConfigIsSet_;
}

void ShowSmartLiveUserConfigResponse::unsetliveExitConfig()
{
    liveExitConfigIsSet_ = false;
}

LiveEventCallBackConfig ShowSmartLiveUserConfigResponse::getLiveEventCallbackConfig() const
{
    return liveEventCallbackConfig_;
}

void ShowSmartLiveUserConfigResponse::setLiveEventCallbackConfig(const LiveEventCallBackConfig& value)
{
    liveEventCallbackConfig_ = value;
    liveEventCallbackConfigIsSet_ = true;
}

bool ShowSmartLiveUserConfigResponse::liveEventCallbackConfigIsSet() const
{
    return liveEventCallbackConfigIsSet_;
}

void ShowSmartLiveUserConfigResponse::unsetliveEventCallbackConfig()
{
    liveEventCallbackConfigIsSet_ = false;
}

LiveNotifyConfig ShowSmartLiveUserConfigResponse::getLiveNotifyConfig() const
{
    return liveNotifyConfig_;
}

void ShowSmartLiveUserConfigResponse::setLiveNotifyConfig(const LiveNotifyConfig& value)
{
    liveNotifyConfig_ = value;
    liveNotifyConfigIsSet_ = true;
}

bool ShowSmartLiveUserConfigResponse::liveNotifyConfigIsSet() const
{
    return liveNotifyConfigIsSet_;
}

void ShowSmartLiveUserConfigResponse::unsetliveNotifyConfig()
{
    liveNotifyConfigIsSet_ = false;
}

std::string ShowSmartLiveUserConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowSmartLiveUserConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowSmartLiveUserConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowSmartLiveUserConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


