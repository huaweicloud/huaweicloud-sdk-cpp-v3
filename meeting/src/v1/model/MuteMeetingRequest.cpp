

#include "huaweicloud/meeting/v1/model/MuteMeetingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




MuteMeetingRequest::MuteMeetingRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    bodyIsSet_ = false;
}

MuteMeetingRequest::~MuteMeetingRequest() = default;

void MuteMeetingRequest::validate()
{
}

web::json::value MuteMeetingRequest::toJson() const
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
bool MuteMeetingRequest::fromJson(const web::json::value& val)
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
            RestMuteReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string MuteMeetingRequest::getConferenceID() const
{
    return conferenceID_;
}

void MuteMeetingRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool MuteMeetingRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void MuteMeetingRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string MuteMeetingRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void MuteMeetingRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool MuteMeetingRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void MuteMeetingRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

RestMuteReqBody MuteMeetingRequest::getBody() const
{
    return body_;
}

void MuteMeetingRequest::setBody(const RestMuteReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool MuteMeetingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void MuteMeetingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


