

#include "huaweicloud/meeting/v1/model/SetCohostRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SetCohostRequest::SetCohostRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    participantID_ = "";
    participantIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    bodyIsSet_ = false;
}

SetCohostRequest::~SetCohostRequest() = default;

void SetCohostRequest::validate()
{
}

web::json::value SetCohostRequest::toJson() const
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
bool SetCohostRequest::fromJson(const web::json::value& val)
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
            RestSetCohostBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetCohostRequest::getConferenceID() const
{
    return conferenceID_;
}

void SetCohostRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool SetCohostRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void SetCohostRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string SetCohostRequest::getParticipantID() const
{
    return participantID_;
}

void SetCohostRequest::setParticipantID(const std::string& value)
{
    participantID_ = value;
    participantIDIsSet_ = true;
}

bool SetCohostRequest::participantIDIsSet() const
{
    return participantIDIsSet_;
}

void SetCohostRequest::unsetparticipantID()
{
    participantIDIsSet_ = false;
}

std::string SetCohostRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void SetCohostRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool SetCohostRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void SetCohostRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

RestSetCohostBody SetCohostRequest::getBody() const
{
    return body_;
}

void SetCohostRequest::setBody(const RestSetCohostBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetCohostRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetCohostRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


