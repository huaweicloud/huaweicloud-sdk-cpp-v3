

#include "huaweicloud/meeting/v1/model/AllowWaitingParticipantRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AllowWaitingParticipantRequest::AllowWaitingParticipantRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    bodyIsSet_ = false;
}

AllowWaitingParticipantRequest::~AllowWaitingParticipantRequest() = default;

void AllowWaitingParticipantRequest::validate()
{
}

web::json::value AllowWaitingParticipantRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conferenceIDIsSet_) {
        val[utility::conversions::to_string_t("conferenceID")] = ModelBase::toJson(conferenceID_);
    }
    if(xConferenceAuthorizationIsSet_) {
        val[utility::conversions::to_string_t("X-Conference-Authorization")] = ModelBase::toJson(xConferenceAuthorization_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AllowWaitingParticipantRequest::fromJson(const web::json::value& val)
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
            RestAllowWaitingParticipantReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AllowWaitingParticipantRequest::getConferenceID() const
{
    return conferenceID_;
}

void AllowWaitingParticipantRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool AllowWaitingParticipantRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void AllowWaitingParticipantRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string AllowWaitingParticipantRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void AllowWaitingParticipantRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool AllowWaitingParticipantRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void AllowWaitingParticipantRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

RestAllowWaitingParticipantReqBody AllowWaitingParticipantRequest::getBody() const
{
    return body_;
}

void AllowWaitingParticipantRequest::setBody(const RestAllowWaitingParticipantReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AllowWaitingParticipantRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AllowWaitingParticipantRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


