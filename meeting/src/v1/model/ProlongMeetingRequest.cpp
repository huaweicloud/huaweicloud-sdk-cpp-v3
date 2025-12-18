

#include "huaweicloud/meeting/v1/model/ProlongMeetingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ProlongMeetingRequest::ProlongMeetingRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    bodyIsSet_ = false;
}

ProlongMeetingRequest::~ProlongMeetingRequest() = default;

void ProlongMeetingRequest::validate()
{
}

web::json::value ProlongMeetingRequest::toJson() const
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
bool ProlongMeetingRequest::fromJson(const web::json::value& val)
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
            RestProlongDurReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ProlongMeetingRequest::getConferenceID() const
{
    return conferenceID_;
}

void ProlongMeetingRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool ProlongMeetingRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void ProlongMeetingRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string ProlongMeetingRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void ProlongMeetingRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool ProlongMeetingRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void ProlongMeetingRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

RestProlongDurReqBody ProlongMeetingRequest::getBody() const
{
    return body_;
}

void ProlongMeetingRequest::setBody(const RestProlongDurReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ProlongMeetingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ProlongMeetingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


