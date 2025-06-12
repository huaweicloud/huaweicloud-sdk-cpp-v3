

#include "huaweicloud/metastudio/v1/model/RTCLiveEventCallBackConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




RTCLiveEventCallBackConfig::RTCLiveEventCallBackConfig()
{
    rtcCallbackEventTypeIsSet_ = false;
}

RTCLiveEventCallBackConfig::~RTCLiveEventCallBackConfig() = default;

void RTCLiveEventCallBackConfig::validate()
{
}

web::json::value RTCLiveEventCallBackConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rtcCallbackEventTypeIsSet_) {
        val[utility::conversions::to_string_t("rtc_callback_event_type")] = ModelBase::toJson(rtcCallbackEventType_);
    }

    return val;
}
bool RTCLiveEventCallBackConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rtc_callback_event_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rtc_callback_event_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRtcCallbackEventType(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& RTCLiveEventCallBackConfig::getRtcCallbackEventType()
{
    return rtcCallbackEventType_;
}

void RTCLiveEventCallBackConfig::setRtcCallbackEventType(const std::vector<std::string>& value)
{
    rtcCallbackEventType_ = value;
    rtcCallbackEventTypeIsSet_ = true;
}

bool RTCLiveEventCallBackConfig::rtcCallbackEventTypeIsSet() const
{
    return rtcCallbackEventTypeIsSet_;
}

void RTCLiveEventCallBackConfig::unsetrtcCallbackEventType()
{
    rtcCallbackEventTypeIsSet_ = false;
}

}
}
}
}
}


