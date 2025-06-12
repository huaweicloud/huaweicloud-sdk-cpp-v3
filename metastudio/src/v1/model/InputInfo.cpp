

#include "huaweicloud/metastudio/v1/model/InputInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




InputInfo::InputInfo()
{
    rtcRoomInfoIsSet_ = false;
}

InputInfo::~InputInfo() = default;

void InputInfo::validate()
{
}

web::json::value InputInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rtcRoomInfoIsSet_) {
        val[utility::conversions::to_string_t("rtc_room_info")] = ModelBase::toJson(rtcRoomInfo_);
    }

    return val;
}
bool InputInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rtc_room_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rtc_room_info"));
        if(!fieldValue.is_null())
        {
            RTCRoomInfoList refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRtcRoomInfo(refVal);
        }
    }
    return ok;
}


RTCRoomInfoList InputInfo::getRtcRoomInfo() const
{
    return rtcRoomInfo_;
}

void InputInfo::setRtcRoomInfo(const RTCRoomInfoList& value)
{
    rtcRoomInfo_ = value;
    rtcRoomInfoIsSet_ = true;
}

bool InputInfo::rtcRoomInfoIsSet() const
{
    return rtcRoomInfoIsSet_;
}

void InputInfo::unsetrtcRoomInfo()
{
    rtcRoomInfoIsSet_ = false;
}

}
}
}
}
}


