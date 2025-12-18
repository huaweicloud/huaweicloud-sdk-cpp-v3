

#include "huaweicloud/meeting/v1/model/SetRoleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SetRoleRequest::SetRoleRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    participantID_ = "";
    participantIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    bodyIsSet_ = false;
}

SetRoleRequest::~SetRoleRequest() = default;

void SetRoleRequest::validate()
{
}

web::json::value SetRoleRequest::toJson() const
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
bool SetRoleRequest::fromJson(const web::json::value& val)
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
            RestChairTokenReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetRoleRequest::getConferenceID() const
{
    return conferenceID_;
}

void SetRoleRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool SetRoleRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void SetRoleRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string SetRoleRequest::getParticipantID() const
{
    return participantID_;
}

void SetRoleRequest::setParticipantID(const std::string& value)
{
    participantID_ = value;
    participantIDIsSet_ = true;
}

bool SetRoleRequest::participantIDIsSet() const
{
    return participantIDIsSet_;
}

void SetRoleRequest::unsetparticipantID()
{
    participantIDIsSet_ = false;
}

std::string SetRoleRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void SetRoleRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool SetRoleRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void SetRoleRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

RestChairTokenReqBody SetRoleRequest::getBody() const
{
    return body_;
}

void SetRoleRequest::setBody(const RestChairTokenReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetRoleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetRoleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


