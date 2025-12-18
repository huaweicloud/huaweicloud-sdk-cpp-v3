

#include "huaweicloud/meeting/v1/model/UserQos.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UserQos::UserQos()
{
    participantID_ = "";
    participantIDIsSet_ = false;
    netRate_ = "";
    netRateIsSet_ = false;
    bandWidthUp_ = 0;
    bandWidthUpIsSet_ = false;
    bandWidthDown_ = 0;
    bandWidthDownIsSet_ = false;
    lostPacketRateUp_ = 0;
    lostPacketRateUpIsSet_ = false;
    lostPacketRateDown_ = 0;
    lostPacketRateDownIsSet_ = false;
    delay_ = 0;
    delayIsSet_ = false;
    videoQosIsSet_ = false;
    audioQosIsSet_ = false;
    auxQosIsSet_ = false;
}

UserQos::~UserQos() = default;

void UserQos::validate()
{
}

web::json::value UserQos::toJson() const
{
    web::json::value val = web::json::value::object();

    if(participantIDIsSet_) {
        val[utility::conversions::to_string_t("participantID")] = ModelBase::toJson(participantID_);
    }
    if(netRateIsSet_) {
        val[utility::conversions::to_string_t("netRate")] = ModelBase::toJson(netRate_);
    }
    if(bandWidthUpIsSet_) {
        val[utility::conversions::to_string_t("bandWidthUp")] = ModelBase::toJson(bandWidthUp_);
    }
    if(bandWidthDownIsSet_) {
        val[utility::conversions::to_string_t("bandWidthDown")] = ModelBase::toJson(bandWidthDown_);
    }
    if(lostPacketRateUpIsSet_) {
        val[utility::conversions::to_string_t("lostPacketRateUp")] = ModelBase::toJson(lostPacketRateUp_);
    }
    if(lostPacketRateDownIsSet_) {
        val[utility::conversions::to_string_t("lostPacketRateDown")] = ModelBase::toJson(lostPacketRateDown_);
    }
    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }
    if(videoQosIsSet_) {
        val[utility::conversions::to_string_t("videoQos")] = ModelBase::toJson(videoQos_);
    }
    if(audioQosIsSet_) {
        val[utility::conversions::to_string_t("audioQos")] = ModelBase::toJson(audioQos_);
    }
    if(auxQosIsSet_) {
        val[utility::conversions::to_string_t("auxQos")] = ModelBase::toJson(auxQos_);
    }

    return val;
}
bool UserQos::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("participantID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("participantID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParticipantID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("netRate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("netRate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandWidthUp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandWidthUp"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandWidthUp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandWidthDown"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandWidthDown"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandWidthDown(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lostPacketRateUp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lostPacketRateUp"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLostPacketRateUp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lostPacketRateDown"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lostPacketRateDown"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLostPacketRateDown(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("videoQos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("videoQos"));
        if(!fieldValue.is_null())
        {
            MediaQos refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoQos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audioQos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audioQos"));
        if(!fieldValue.is_null())
        {
            MediaQos refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioQos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auxQos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auxQos"));
        if(!fieldValue.is_null())
        {
            MediaQos refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuxQos(refVal);
        }
    }
    return ok;
}


std::string UserQos::getParticipantID() const
{
    return participantID_;
}

void UserQos::setParticipantID(const std::string& value)
{
    participantID_ = value;
    participantIDIsSet_ = true;
}

bool UserQos::participantIDIsSet() const
{
    return participantIDIsSet_;
}

void UserQos::unsetparticipantID()
{
    participantIDIsSet_ = false;
}

std::string UserQos::getNetRate() const
{
    return netRate_;
}

void UserQos::setNetRate(const std::string& value)
{
    netRate_ = value;
    netRateIsSet_ = true;
}

bool UserQos::netRateIsSet() const
{
    return netRateIsSet_;
}

void UserQos::unsetnetRate()
{
    netRateIsSet_ = false;
}

int32_t UserQos::getBandWidthUp() const
{
    return bandWidthUp_;
}

void UserQos::setBandWidthUp(int32_t value)
{
    bandWidthUp_ = value;
    bandWidthUpIsSet_ = true;
}

bool UserQos::bandWidthUpIsSet() const
{
    return bandWidthUpIsSet_;
}

void UserQos::unsetbandWidthUp()
{
    bandWidthUpIsSet_ = false;
}

int32_t UserQos::getBandWidthDown() const
{
    return bandWidthDown_;
}

void UserQos::setBandWidthDown(int32_t value)
{
    bandWidthDown_ = value;
    bandWidthDownIsSet_ = true;
}

bool UserQos::bandWidthDownIsSet() const
{
    return bandWidthDownIsSet_;
}

void UserQos::unsetbandWidthDown()
{
    bandWidthDownIsSet_ = false;
}

int32_t UserQos::getLostPacketRateUp() const
{
    return lostPacketRateUp_;
}

void UserQos::setLostPacketRateUp(int32_t value)
{
    lostPacketRateUp_ = value;
    lostPacketRateUpIsSet_ = true;
}

bool UserQos::lostPacketRateUpIsSet() const
{
    return lostPacketRateUpIsSet_;
}

void UserQos::unsetlostPacketRateUp()
{
    lostPacketRateUpIsSet_ = false;
}

int32_t UserQos::getLostPacketRateDown() const
{
    return lostPacketRateDown_;
}

void UserQos::setLostPacketRateDown(int32_t value)
{
    lostPacketRateDown_ = value;
    lostPacketRateDownIsSet_ = true;
}

bool UserQos::lostPacketRateDownIsSet() const
{
    return lostPacketRateDownIsSet_;
}

void UserQos::unsetlostPacketRateDown()
{
    lostPacketRateDownIsSet_ = false;
}

int32_t UserQos::getDelay() const
{
    return delay_;
}

void UserQos::setDelay(int32_t value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool UserQos::delayIsSet() const
{
    return delayIsSet_;
}

void UserQos::unsetdelay()
{
    delayIsSet_ = false;
}

MediaQos UserQos::getVideoQos() const
{
    return videoQos_;
}

void UserQos::setVideoQos(const MediaQos& value)
{
    videoQos_ = value;
    videoQosIsSet_ = true;
}

bool UserQos::videoQosIsSet() const
{
    return videoQosIsSet_;
}

void UserQos::unsetvideoQos()
{
    videoQosIsSet_ = false;
}

MediaQos UserQos::getAudioQos() const
{
    return audioQos_;
}

void UserQos::setAudioQos(const MediaQos& value)
{
    audioQos_ = value;
    audioQosIsSet_ = true;
}

bool UserQos::audioQosIsSet() const
{
    return audioQosIsSet_;
}

void UserQos::unsetaudioQos()
{
    audioQosIsSet_ = false;
}

MediaQos UserQos::getAuxQos() const
{
    return auxQos_;
}

void UserQos::setAuxQos(const MediaQos& value)
{
    auxQos_ = value;
    auxQosIsSet_ = true;
}

bool UserQos::auxQosIsSet() const
{
    return auxQosIsSet_;
}

void UserQos::unsetauxQos()
{
    auxQosIsSet_ = false;
}

}
}
}
}
}


