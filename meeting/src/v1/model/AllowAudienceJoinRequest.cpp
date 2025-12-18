

#include "huaweicloud/meeting/v1/model/AllowAudienceJoinRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AllowAudienceJoinRequest::AllowAudienceJoinRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    bodyIsSet_ = false;
}

AllowAudienceJoinRequest::~AllowAudienceJoinRequest() = default;

void AllowAudienceJoinRequest::validate()
{
}

web::json::value AllowAudienceJoinRequest::toJson() const
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
bool AllowAudienceJoinRequest::fromJson(const web::json::value& val)
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
            RestAllowAudienceReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AllowAudienceJoinRequest::getConferenceID() const
{
    return conferenceID_;
}

void AllowAudienceJoinRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool AllowAudienceJoinRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void AllowAudienceJoinRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string AllowAudienceJoinRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void AllowAudienceJoinRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool AllowAudienceJoinRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void AllowAudienceJoinRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

RestAllowAudienceReqBody AllowAudienceJoinRequest::getBody() const
{
    return body_;
}

void AllowAudienceJoinRequest::setBody(const RestAllowAudienceReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AllowAudienceJoinRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AllowAudienceJoinRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


