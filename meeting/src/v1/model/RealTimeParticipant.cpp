

#include "huaweicloud/meeting/v1/model/RealTimeParticipant.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RealTimeParticipant::RealTimeParticipant()
{
    pid_ = "";
    pidIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    state_ = 0;
    stateIsSet_ = false;
    video_ = 0;
    videoIsSet_ = false;
    mute_ = 0;
    muteIsSet_ = false;
    hand_ = 0;
    handIsSet_ = false;
}

RealTimeParticipant::~RealTimeParticipant() = default;

void RealTimeParticipant::validate()
{
}

web::json::value RealTimeParticipant::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pidIsSet_) {
        val[utility::conversions::to_string_t("pid")] = ModelBase::toJson(pid_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(phoneIsSet_) {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(phone_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(videoIsSet_) {
        val[utility::conversions::to_string_t("video")] = ModelBase::toJson(video_);
    }
    if(muteIsSet_) {
        val[utility::conversions::to_string_t("mute")] = ModelBase::toJson(mute_);
    }
    if(handIsSet_) {
        val[utility::conversions::to_string_t("hand")] = ModelBase::toJson(hand_);
    }

    return val;
}
bool RealTimeParticipant::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mute"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMute(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hand"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hand"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHand(refVal);
        }
    }
    return ok;
}


std::string RealTimeParticipant::getPid() const
{
    return pid_;
}

void RealTimeParticipant::setPid(const std::string& value)
{
    pid_ = value;
    pidIsSet_ = true;
}

bool RealTimeParticipant::pidIsSet() const
{
    return pidIsSet_;
}

void RealTimeParticipant::unsetpid()
{
    pidIsSet_ = false;
}

std::string RealTimeParticipant::getName() const
{
    return name_;
}

void RealTimeParticipant::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RealTimeParticipant::nameIsSet() const
{
    return nameIsSet_;
}

void RealTimeParticipant::unsetname()
{
    nameIsSet_ = false;
}

std::string RealTimeParticipant::getPhone() const
{
    return phone_;
}

void RealTimeParticipant::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool RealTimeParticipant::phoneIsSet() const
{
    return phoneIsSet_;
}

void RealTimeParticipant::unsetphone()
{
    phoneIsSet_ = false;
}

int32_t RealTimeParticipant::getState() const
{
    return state_;
}

void RealTimeParticipant::setState(int32_t value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool RealTimeParticipant::stateIsSet() const
{
    return stateIsSet_;
}

void RealTimeParticipant::unsetstate()
{
    stateIsSet_ = false;
}

int32_t RealTimeParticipant::getVideo() const
{
    return video_;
}

void RealTimeParticipant::setVideo(int32_t value)
{
    video_ = value;
    videoIsSet_ = true;
}

bool RealTimeParticipant::videoIsSet() const
{
    return videoIsSet_;
}

void RealTimeParticipant::unsetvideo()
{
    videoIsSet_ = false;
}

int32_t RealTimeParticipant::getMute() const
{
    return mute_;
}

void RealTimeParticipant::setMute(int32_t value)
{
    mute_ = value;
    muteIsSet_ = true;
}

bool RealTimeParticipant::muteIsSet() const
{
    return muteIsSet_;
}

void RealTimeParticipant::unsetmute()
{
    muteIsSet_ = false;
}

int32_t RealTimeParticipant::getHand() const
{
    return hand_;
}

void RealTimeParticipant::setHand(int32_t value)
{
    hand_ = value;
    handIsSet_ = true;
}

bool RealTimeParticipant::handIsSet() const
{
    return handIsSet_;
}

void RealTimeParticipant::unsethand()
{
    handIsSet_ = false;
}

}
}
}
}
}


