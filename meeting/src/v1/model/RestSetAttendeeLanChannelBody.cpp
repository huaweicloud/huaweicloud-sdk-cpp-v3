

#include "huaweicloud/meeting/v1/model/RestSetAttendeeLanChannelBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestSetAttendeeLanChannelBody::RestSetAttendeeLanChannelBody()
{
    participantIDsIsSet_ = false;
    listenLanChannel_ = "";
    listenLanChannelIsSet_ = false;
    speakLanChannel_ = "";
    speakLanChannelIsSet_ = false;
    includeOriginalVoice_ = 0;
    includeOriginalVoiceIsSet_ = false;
}

RestSetAttendeeLanChannelBody::~RestSetAttendeeLanChannelBody() = default;

void RestSetAttendeeLanChannelBody::validate()
{
}

web::json::value RestSetAttendeeLanChannelBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(participantIDsIsSet_) {
        val[utility::conversions::to_string_t("participantIDs")] = ModelBase::toJson(participantIDs_);
    }
    if(listenLanChannelIsSet_) {
        val[utility::conversions::to_string_t("listenLanChannel")] = ModelBase::toJson(listenLanChannel_);
    }
    if(speakLanChannelIsSet_) {
        val[utility::conversions::to_string_t("speakLanChannel")] = ModelBase::toJson(speakLanChannel_);
    }
    if(includeOriginalVoiceIsSet_) {
        val[utility::conversions::to_string_t("includeOriginalVoice")] = ModelBase::toJson(includeOriginalVoice_);
    }

    return val;
}
bool RestSetAttendeeLanChannelBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("participantIDs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("participantIDs"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParticipantIDs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("listenLanChannel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("listenLanChannel"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setListenLanChannel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("speakLanChannel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("speakLanChannel"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpeakLanChannel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("includeOriginalVoice"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("includeOriginalVoice"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeOriginalVoice(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& RestSetAttendeeLanChannelBody::getParticipantIDs()
{
    return participantIDs_;
}

void RestSetAttendeeLanChannelBody::setParticipantIDs(const std::vector<std::string>& value)
{
    participantIDs_ = value;
    participantIDsIsSet_ = true;
}

bool RestSetAttendeeLanChannelBody::participantIDsIsSet() const
{
    return participantIDsIsSet_;
}

void RestSetAttendeeLanChannelBody::unsetparticipantIDs()
{
    participantIDsIsSet_ = false;
}

std::string RestSetAttendeeLanChannelBody::getListenLanChannel() const
{
    return listenLanChannel_;
}

void RestSetAttendeeLanChannelBody::setListenLanChannel(const std::string& value)
{
    listenLanChannel_ = value;
    listenLanChannelIsSet_ = true;
}

bool RestSetAttendeeLanChannelBody::listenLanChannelIsSet() const
{
    return listenLanChannelIsSet_;
}

void RestSetAttendeeLanChannelBody::unsetlistenLanChannel()
{
    listenLanChannelIsSet_ = false;
}

std::string RestSetAttendeeLanChannelBody::getSpeakLanChannel() const
{
    return speakLanChannel_;
}

void RestSetAttendeeLanChannelBody::setSpeakLanChannel(const std::string& value)
{
    speakLanChannel_ = value;
    speakLanChannelIsSet_ = true;
}

bool RestSetAttendeeLanChannelBody::speakLanChannelIsSet() const
{
    return speakLanChannelIsSet_;
}

void RestSetAttendeeLanChannelBody::unsetspeakLanChannel()
{
    speakLanChannelIsSet_ = false;
}

int32_t RestSetAttendeeLanChannelBody::getIncludeOriginalVoice() const
{
    return includeOriginalVoice_;
}

void RestSetAttendeeLanChannelBody::setIncludeOriginalVoice(int32_t value)
{
    includeOriginalVoice_ = value;
    includeOriginalVoiceIsSet_ = true;
}

bool RestSetAttendeeLanChannelBody::includeOriginalVoiceIsSet() const
{
    return includeOriginalVoiceIsSet_;
}

void RestSetAttendeeLanChannelBody::unsetincludeOriginalVoice()
{
    includeOriginalVoiceIsSet_ = false;
}

}
}
}
}
}


