

#include "huaweicloud/meeting/v1/model/BroadcastParticipantRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




BroadcastParticipantRequest::BroadcastParticipantRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    participantID_ = "";
    participantIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
}

BroadcastParticipantRequest::~BroadcastParticipantRequest() = default;

void BroadcastParticipantRequest::validate()
{
}

web::json::value BroadcastParticipantRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conferenceIDIsSet_) {
        val[utility::conversions::to_string_t("conferenceID")] = ModelBase::toJson(conferenceID_);
    }
    if(participantIDIsSet_) {
        val[utility::conversions::to_string_t("participantID")] = ModelBase::toJson(participantID_);
    }
    if(xConferenceAuthorizationIsSet_) {
        val[utility::conversions::to_string_t("X-Conference-Authorization")] = ModelBase::toJson(xConferenceAuthorization_);
    }

    return val;
}
bool BroadcastParticipantRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("conferenceID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conferenceID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConferenceID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("participantID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("participantID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParticipantID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Conference-Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Conference-Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXConferenceAuthorization(refVal);
        }
    }
    return ok;
}


std::string BroadcastParticipantRequest::getConferenceID() const
{
    return conferenceID_;
}

void BroadcastParticipantRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool BroadcastParticipantRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void BroadcastParticipantRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string BroadcastParticipantRequest::getParticipantID() const
{
    return participantID_;
}

void BroadcastParticipantRequest::setParticipantID(const std::string& value)
{
    participantID_ = value;
    participantIDIsSet_ = true;
}

bool BroadcastParticipantRequest::participantIDIsSet() const
{
    return participantIDIsSet_;
}

void BroadcastParticipantRequest::unsetparticipantID()
{
    participantIDIsSet_ = false;
}

std::string BroadcastParticipantRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void BroadcastParticipantRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool BroadcastParticipantRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void BroadcastParticipantRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

}
}
}
}
}


