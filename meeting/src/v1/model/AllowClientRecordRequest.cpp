

#include "huaweicloud/meeting/v1/model/AllowClientRecordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AllowClientRecordRequest::AllowClientRecordRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    participantID_ = "";
    participantIDIsSet_ = false;
    bodyIsSet_ = false;
}

AllowClientRecordRequest::~AllowClientRecordRequest() = default;

void AllowClientRecordRequest::validate()
{
}

web::json::value AllowClientRecordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conferenceIDIsSet_) {
        val[utility::conversions::to_string_t("conferenceID")] = ModelBase::toJson(conferenceID_);
    }
    if(xConferenceAuthorizationIsSet_) {
        val[utility::conversions::to_string_t("X-Conference-Authorization")] = ModelBase::toJson(xConferenceAuthorization_);
    }
    if(participantIDIsSet_) {
        val[utility::conversions::to_string_t("participantID")] = ModelBase::toJson(participantID_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AllowClientRecordRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("participantID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("participantID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParticipantID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RestAllowClientRecordReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AllowClientRecordRequest::getConferenceID() const
{
    return conferenceID_;
}

void AllowClientRecordRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool AllowClientRecordRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void AllowClientRecordRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string AllowClientRecordRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void AllowClientRecordRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool AllowClientRecordRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void AllowClientRecordRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

std::string AllowClientRecordRequest::getParticipantID() const
{
    return participantID_;
}

void AllowClientRecordRequest::setParticipantID(const std::string& value)
{
    participantID_ = value;
    participantIDIsSet_ = true;
}

bool AllowClientRecordRequest::participantIDIsSet() const
{
    return participantIDIsSet_;
}

void AllowClientRecordRequest::unsetparticipantID()
{
    participantIDIsSet_ = false;
}

RestAllowClientRecordReqBody AllowClientRecordRequest::getBody() const
{
    return body_;
}

void AllowClientRecordRequest::setBody(const RestAllowClientRecordReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AllowClientRecordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AllowClientRecordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


