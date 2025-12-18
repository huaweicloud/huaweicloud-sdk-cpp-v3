

#include "huaweicloud/meeting/v1/model/InviteOperateVideoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




InviteOperateVideoRequest::InviteOperateVideoRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    participantID_ = "";
    participantIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    bodyIsSet_ = false;
}

InviteOperateVideoRequest::~InviteOperateVideoRequest() = default;

void InviteOperateVideoRequest::validate()
{
}

web::json::value InviteOperateVideoRequest::toJson() const
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
bool InviteOperateVideoRequest::fromJson(const web::json::value& val)
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
            RestVideoBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string InviteOperateVideoRequest::getConferenceID() const
{
    return conferenceID_;
}

void InviteOperateVideoRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool InviteOperateVideoRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void InviteOperateVideoRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string InviteOperateVideoRequest::getParticipantID() const
{
    return participantID_;
}

void InviteOperateVideoRequest::setParticipantID(const std::string& value)
{
    participantID_ = value;
    participantIDIsSet_ = true;
}

bool InviteOperateVideoRequest::participantIDIsSet() const
{
    return participantIDIsSet_;
}

void InviteOperateVideoRequest::unsetparticipantID()
{
    participantIDIsSet_ = false;
}

std::string InviteOperateVideoRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void InviteOperateVideoRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool InviteOperateVideoRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void InviteOperateVideoRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

RestVideoBody InviteOperateVideoRequest::getBody() const
{
    return body_;
}

void InviteOperateVideoRequest::setBody(const RestVideoBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool InviteOperateVideoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void InviteOperateVideoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


