

#include "huaweicloud/meeting/v1/model/MoveToWaitingRoomRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




MoveToWaitingRoomRequest::MoveToWaitingRoomRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    bodyIsSet_ = false;
}

MoveToWaitingRoomRequest::~MoveToWaitingRoomRequest() = default;

void MoveToWaitingRoomRequest::validate()
{
}

web::json::value MoveToWaitingRoomRequest::toJson() const
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
bool MoveToWaitingRoomRequest::fromJson(const web::json::value& val)
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
            RestMoveToWaitingRoomReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string MoveToWaitingRoomRequest::getConferenceID() const
{
    return conferenceID_;
}

void MoveToWaitingRoomRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool MoveToWaitingRoomRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void MoveToWaitingRoomRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string MoveToWaitingRoomRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void MoveToWaitingRoomRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool MoveToWaitingRoomRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void MoveToWaitingRoomRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

RestMoveToWaitingRoomReqBody MoveToWaitingRoomRequest::getBody() const
{
    return body_;
}

void MoveToWaitingRoomRequest::setBody(const RestMoveToWaitingRoomReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool MoveToWaitingRoomRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void MoveToWaitingRoomRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


