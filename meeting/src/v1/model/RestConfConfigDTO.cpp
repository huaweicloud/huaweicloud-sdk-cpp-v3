

#include "huaweicloud/meeting/v1/model/RestConfConfigDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestConfConfigDTO::RestConfConfigDTO()
{
    isSendNotify_ = false;
    isSendNotifyIsSet_ = false;
    isSendSms_ = false;
    isSendSmsIsSet_ = false;
    isSendCalendar_ = false;
    isSendCalendarIsSet_ = false;
    isAutoMute_ = false;
    isAutoMuteIsSet_ = false;
    isHardTerminalAutoMute_ = false;
    isHardTerminalAutoMuteIsSet_ = false;
    isGuestFreePwd_ = false;
    isGuestFreePwdIsSet_ = false;
    callInRestriction_ = 0;
    callInRestrictionIsSet_ = false;
    allowGuestStartConf_ = false;
    allowGuestStartConfIsSet_ = false;
    guestPwd_ = "";
    guestPwdIsSet_ = false;
    vmrIDType_ = 0;
    vmrIDTypeIsSet_ = false;
    prolongLength_ = 0;
    prolongLengthIsSet_ = false;
    enableWaitingRoom_ = false;
    enableWaitingRoomIsSet_ = false;
    isHostCameraOn_ = false;
    isHostCameraOnIsSet_ = false;
    isGuestCameraOn_ = false;
    isGuestCameraOnIsSet_ = false;
}

RestConfConfigDTO::~RestConfConfigDTO() = default;

void RestConfConfigDTO::validate()
{
}

web::json::value RestConfConfigDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isSendNotifyIsSet_) {
        val[utility::conversions::to_string_t("isSendNotify")] = ModelBase::toJson(isSendNotify_);
    }
    if(isSendSmsIsSet_) {
        val[utility::conversions::to_string_t("isSendSms")] = ModelBase::toJson(isSendSms_);
    }
    if(isSendCalendarIsSet_) {
        val[utility::conversions::to_string_t("isSendCalendar")] = ModelBase::toJson(isSendCalendar_);
    }
    if(isAutoMuteIsSet_) {
        val[utility::conversions::to_string_t("isAutoMute")] = ModelBase::toJson(isAutoMute_);
    }
    if(isHardTerminalAutoMuteIsSet_) {
        val[utility::conversions::to_string_t("isHardTerminalAutoMute")] = ModelBase::toJson(isHardTerminalAutoMute_);
    }
    if(isGuestFreePwdIsSet_) {
        val[utility::conversions::to_string_t("isGuestFreePwd")] = ModelBase::toJson(isGuestFreePwd_);
    }
    if(callInRestrictionIsSet_) {
        val[utility::conversions::to_string_t("callInRestriction")] = ModelBase::toJson(callInRestriction_);
    }
    if(allowGuestStartConfIsSet_) {
        val[utility::conversions::to_string_t("allowGuestStartConf")] = ModelBase::toJson(allowGuestStartConf_);
    }
    if(guestPwdIsSet_) {
        val[utility::conversions::to_string_t("guestPwd")] = ModelBase::toJson(guestPwd_);
    }
    if(vmrIDTypeIsSet_) {
        val[utility::conversions::to_string_t("vmrIDType")] = ModelBase::toJson(vmrIDType_);
    }
    if(prolongLengthIsSet_) {
        val[utility::conversions::to_string_t("prolongLength")] = ModelBase::toJson(prolongLength_);
    }
    if(enableWaitingRoomIsSet_) {
        val[utility::conversions::to_string_t("enableWaitingRoom")] = ModelBase::toJson(enableWaitingRoom_);
    }
    if(isHostCameraOnIsSet_) {
        val[utility::conversions::to_string_t("isHostCameraOn")] = ModelBase::toJson(isHostCameraOn_);
    }
    if(isGuestCameraOnIsSet_) {
        val[utility::conversions::to_string_t("isGuestCameraOn")] = ModelBase::toJson(isGuestCameraOn_);
    }

    return val;
}
bool RestConfConfigDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("isSendNotify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isSendNotify"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSendNotify(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isSendSms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isSendSms"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSendSms(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isSendCalendar"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isSendCalendar"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSendCalendar(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isAutoMute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isAutoMute"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoMute(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isHardTerminalAutoMute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isHardTerminalAutoMute"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsHardTerminalAutoMute(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isGuestFreePwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isGuestFreePwd"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsGuestFreePwd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("callInRestriction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callInRestriction"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallInRestriction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allowGuestStartConf"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowGuestStartConf"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowGuestStartConf(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("guestPwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("guestPwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGuestPwd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vmrIDType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrIDType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrIDType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prolongLength"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prolongLength"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProlongLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enableWaitingRoom"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableWaitingRoom"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableWaitingRoom(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isHostCameraOn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isHostCameraOn"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsHostCameraOn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isGuestCameraOn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isGuestCameraOn"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsGuestCameraOn(refVal);
        }
    }
    return ok;
}


bool RestConfConfigDTO::isIsSendNotify() const
{
    return isSendNotify_;
}

void RestConfConfigDTO::setIsSendNotify(bool value)
{
    isSendNotify_ = value;
    isSendNotifyIsSet_ = true;
}

bool RestConfConfigDTO::isSendNotifyIsSet() const
{
    return isSendNotifyIsSet_;
}

void RestConfConfigDTO::unsetisSendNotify()
{
    isSendNotifyIsSet_ = false;
}

bool RestConfConfigDTO::isIsSendSms() const
{
    return isSendSms_;
}

void RestConfConfigDTO::setIsSendSms(bool value)
{
    isSendSms_ = value;
    isSendSmsIsSet_ = true;
}

bool RestConfConfigDTO::isSendSmsIsSet() const
{
    return isSendSmsIsSet_;
}

void RestConfConfigDTO::unsetisSendSms()
{
    isSendSmsIsSet_ = false;
}

bool RestConfConfigDTO::isIsSendCalendar() const
{
    return isSendCalendar_;
}

void RestConfConfigDTO::setIsSendCalendar(bool value)
{
    isSendCalendar_ = value;
    isSendCalendarIsSet_ = true;
}

bool RestConfConfigDTO::isSendCalendarIsSet() const
{
    return isSendCalendarIsSet_;
}

void RestConfConfigDTO::unsetisSendCalendar()
{
    isSendCalendarIsSet_ = false;
}

bool RestConfConfigDTO::isIsAutoMute() const
{
    return isAutoMute_;
}

void RestConfConfigDTO::setIsAutoMute(bool value)
{
    isAutoMute_ = value;
    isAutoMuteIsSet_ = true;
}

bool RestConfConfigDTO::isAutoMuteIsSet() const
{
    return isAutoMuteIsSet_;
}

void RestConfConfigDTO::unsetisAutoMute()
{
    isAutoMuteIsSet_ = false;
}

bool RestConfConfigDTO::isIsHardTerminalAutoMute() const
{
    return isHardTerminalAutoMute_;
}

void RestConfConfigDTO::setIsHardTerminalAutoMute(bool value)
{
    isHardTerminalAutoMute_ = value;
    isHardTerminalAutoMuteIsSet_ = true;
}

bool RestConfConfigDTO::isHardTerminalAutoMuteIsSet() const
{
    return isHardTerminalAutoMuteIsSet_;
}

void RestConfConfigDTO::unsetisHardTerminalAutoMute()
{
    isHardTerminalAutoMuteIsSet_ = false;
}

bool RestConfConfigDTO::isIsGuestFreePwd() const
{
    return isGuestFreePwd_;
}

void RestConfConfigDTO::setIsGuestFreePwd(bool value)
{
    isGuestFreePwd_ = value;
    isGuestFreePwdIsSet_ = true;
}

bool RestConfConfigDTO::isGuestFreePwdIsSet() const
{
    return isGuestFreePwdIsSet_;
}

void RestConfConfigDTO::unsetisGuestFreePwd()
{
    isGuestFreePwdIsSet_ = false;
}

int32_t RestConfConfigDTO::getCallInRestriction() const
{
    return callInRestriction_;
}

void RestConfConfigDTO::setCallInRestriction(int32_t value)
{
    callInRestriction_ = value;
    callInRestrictionIsSet_ = true;
}

bool RestConfConfigDTO::callInRestrictionIsSet() const
{
    return callInRestrictionIsSet_;
}

void RestConfConfigDTO::unsetcallInRestriction()
{
    callInRestrictionIsSet_ = false;
}

bool RestConfConfigDTO::isAllowGuestStartConf() const
{
    return allowGuestStartConf_;
}

void RestConfConfigDTO::setAllowGuestStartConf(bool value)
{
    allowGuestStartConf_ = value;
    allowGuestStartConfIsSet_ = true;
}

bool RestConfConfigDTO::allowGuestStartConfIsSet() const
{
    return allowGuestStartConfIsSet_;
}

void RestConfConfigDTO::unsetallowGuestStartConf()
{
    allowGuestStartConfIsSet_ = false;
}

std::string RestConfConfigDTO::getGuestPwd() const
{
    return guestPwd_;
}

void RestConfConfigDTO::setGuestPwd(const std::string& value)
{
    guestPwd_ = value;
    guestPwdIsSet_ = true;
}

bool RestConfConfigDTO::guestPwdIsSet() const
{
    return guestPwdIsSet_;
}

void RestConfConfigDTO::unsetguestPwd()
{
    guestPwdIsSet_ = false;
}

int32_t RestConfConfigDTO::getVmrIDType() const
{
    return vmrIDType_;
}

void RestConfConfigDTO::setVmrIDType(int32_t value)
{
    vmrIDType_ = value;
    vmrIDTypeIsSet_ = true;
}

bool RestConfConfigDTO::vmrIDTypeIsSet() const
{
    return vmrIDTypeIsSet_;
}

void RestConfConfigDTO::unsetvmrIDType()
{
    vmrIDTypeIsSet_ = false;
}

int32_t RestConfConfigDTO::getProlongLength() const
{
    return prolongLength_;
}

void RestConfConfigDTO::setProlongLength(int32_t value)
{
    prolongLength_ = value;
    prolongLengthIsSet_ = true;
}

bool RestConfConfigDTO::prolongLengthIsSet() const
{
    return prolongLengthIsSet_;
}

void RestConfConfigDTO::unsetprolongLength()
{
    prolongLengthIsSet_ = false;
}

bool RestConfConfigDTO::isEnableWaitingRoom() const
{
    return enableWaitingRoom_;
}

void RestConfConfigDTO::setEnableWaitingRoom(bool value)
{
    enableWaitingRoom_ = value;
    enableWaitingRoomIsSet_ = true;
}

bool RestConfConfigDTO::enableWaitingRoomIsSet() const
{
    return enableWaitingRoomIsSet_;
}

void RestConfConfigDTO::unsetenableWaitingRoom()
{
    enableWaitingRoomIsSet_ = false;
}

bool RestConfConfigDTO::isIsHostCameraOn() const
{
    return isHostCameraOn_;
}

void RestConfConfigDTO::setIsHostCameraOn(bool value)
{
    isHostCameraOn_ = value;
    isHostCameraOnIsSet_ = true;
}

bool RestConfConfigDTO::isHostCameraOnIsSet() const
{
    return isHostCameraOnIsSet_;
}

void RestConfConfigDTO::unsetisHostCameraOn()
{
    isHostCameraOnIsSet_ = false;
}

bool RestConfConfigDTO::isIsGuestCameraOn() const
{
    return isGuestCameraOn_;
}

void RestConfConfigDTO::setIsGuestCameraOn(bool value)
{
    isGuestCameraOn_ = value;
    isGuestCameraOnIsSet_ = true;
}

bool RestConfConfigDTO::isGuestCameraOnIsSet() const
{
    return isGuestCameraOnIsSet_;
}

void RestConfConfigDTO::unsetisGuestCameraOn()
{
    isGuestCameraOnIsSet_ = false;
}

}
}
}
}
}


