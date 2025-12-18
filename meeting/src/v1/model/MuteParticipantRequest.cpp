

#include "huaweicloud/meeting/v1/model/MuteParticipantRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




MuteParticipantRequest::MuteParticipantRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    participantID_ = "";
    participantIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    bodyIsSet_ = false;
}

MuteParticipantRequest::~MuteParticipantRequest() = default;

void MuteParticipantRequest::validate()
{
}

web::json::value MuteParticipantRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool MuteParticipantRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RestMuteParticipantReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string MuteParticipantRequest::getConferenceID() const
{
    return conferenceID_;
}

void MuteParticipantRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool MuteParticipantRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void MuteParticipantRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string MuteParticipantRequest::getParticipantID() const
{
    return participantID_;
}

void MuteParticipantRequest::setParticipantID(const std::string& value)
{
    participantID_ = value;
    participantIDIsSet_ = true;
}

bool MuteParticipantRequest::participantIDIsSet() const
{
    return participantIDIsSet_;
}

void MuteParticipantRequest::unsetparticipantID()
{
    participantIDIsSet_ = false;
}

std::string MuteParticipantRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void MuteParticipantRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool MuteParticipantRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void MuteParticipantRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

RestMuteParticipantReqBody MuteParticipantRequest::getBody() const
{
    return body_;
}

void MuteParticipantRequest::setBody(const RestMuteParticipantReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool MuteParticipantRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void MuteParticipantRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


