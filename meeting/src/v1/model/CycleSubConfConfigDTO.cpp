

#include "huaweicloud/meeting/v1/model/CycleSubConfConfigDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CycleSubConfConfigDTO::CycleSubConfConfigDTO()
{
    callInRestriction_ = 0;
    callInRestrictionIsSet_ = false;
    audienceCallInRestriction_ = 0;
    audienceCallInRestrictionIsSet_ = false;
    allowGuestStartConf_ = false;
    allowGuestStartConfIsSet_ = false;
    enableWaitingRoom_ = false;
    enableWaitingRoomIsSet_ = false;
    showAudienceCountInfoIsSet_ = false;
}

CycleSubConfConfigDTO::~CycleSubConfConfigDTO() = default;

void CycleSubConfConfigDTO::validate()
{
}

web::json::value CycleSubConfConfigDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(callInRestrictionIsSet_) {
        val[utility::conversions::to_string_t("callInRestriction")] = ModelBase::toJson(callInRestriction_);
    }
    if(audienceCallInRestrictionIsSet_) {
        val[utility::conversions::to_string_t("audienceCallInRestriction")] = ModelBase::toJson(audienceCallInRestriction_);
    }
    if(allowGuestStartConfIsSet_) {
        val[utility::conversions::to_string_t("allowGuestStartConf")] = ModelBase::toJson(allowGuestStartConf_);
    }
    if(enableWaitingRoomIsSet_) {
        val[utility::conversions::to_string_t("enableWaitingRoom")] = ModelBase::toJson(enableWaitingRoom_);
    }
    if(showAudienceCountInfoIsSet_) {
        val[utility::conversions::to_string_t("showAudienceCountInfo")] = ModelBase::toJson(showAudienceCountInfo_);
    }

    return val;
}
bool CycleSubConfConfigDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("callInRestriction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callInRestriction"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallInRestriction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audienceCallInRestriction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audienceCallInRestriction"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudienceCallInRestriction(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enableWaitingRoom"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableWaitingRoom"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableWaitingRoom(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("showAudienceCountInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("showAudienceCountInfo"));
        if(!fieldValue.is_null())
        {
            ShowAudienceCountInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShowAudienceCountInfo(refVal);
        }
    }
    return ok;
}


int32_t CycleSubConfConfigDTO::getCallInRestriction() const
{
    return callInRestriction_;
}

void CycleSubConfConfigDTO::setCallInRestriction(int32_t value)
{
    callInRestriction_ = value;
    callInRestrictionIsSet_ = true;
}

bool CycleSubConfConfigDTO::callInRestrictionIsSet() const
{
    return callInRestrictionIsSet_;
}

void CycleSubConfConfigDTO::unsetcallInRestriction()
{
    callInRestrictionIsSet_ = false;
}

int32_t CycleSubConfConfigDTO::getAudienceCallInRestriction() const
{
    return audienceCallInRestriction_;
}

void CycleSubConfConfigDTO::setAudienceCallInRestriction(int32_t value)
{
    audienceCallInRestriction_ = value;
    audienceCallInRestrictionIsSet_ = true;
}

bool CycleSubConfConfigDTO::audienceCallInRestrictionIsSet() const
{
    return audienceCallInRestrictionIsSet_;
}

void CycleSubConfConfigDTO::unsetaudienceCallInRestriction()
{
    audienceCallInRestrictionIsSet_ = false;
}

bool CycleSubConfConfigDTO::isAllowGuestStartConf() const
{
    return allowGuestStartConf_;
}

void CycleSubConfConfigDTO::setAllowGuestStartConf(bool value)
{
    allowGuestStartConf_ = value;
    allowGuestStartConfIsSet_ = true;
}

bool CycleSubConfConfigDTO::allowGuestStartConfIsSet() const
{
    return allowGuestStartConfIsSet_;
}

void CycleSubConfConfigDTO::unsetallowGuestStartConf()
{
    allowGuestStartConfIsSet_ = false;
}

bool CycleSubConfConfigDTO::isEnableWaitingRoom() const
{
    return enableWaitingRoom_;
}

void CycleSubConfConfigDTO::setEnableWaitingRoom(bool value)
{
    enableWaitingRoom_ = value;
    enableWaitingRoomIsSet_ = true;
}

bool CycleSubConfConfigDTO::enableWaitingRoomIsSet() const
{
    return enableWaitingRoomIsSet_;
}

void CycleSubConfConfigDTO::unsetenableWaitingRoom()
{
    enableWaitingRoomIsSet_ = false;
}

ShowAudienceCountInfo CycleSubConfConfigDTO::getShowAudienceCountInfo() const
{
    return showAudienceCountInfo_;
}

void CycleSubConfConfigDTO::setShowAudienceCountInfo(const ShowAudienceCountInfo& value)
{
    showAudienceCountInfo_ = value;
    showAudienceCountInfoIsSet_ = true;
}

bool CycleSubConfConfigDTO::showAudienceCountInfoIsSet() const
{
    return showAudienceCountInfoIsSet_;
}

void CycleSubConfConfigDTO::unsetshowAudienceCountInfo()
{
    showAudienceCountInfoIsSet_ = false;
}

}
}
}
}
}


