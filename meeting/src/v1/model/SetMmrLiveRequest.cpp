

#include "huaweicloud/meeting/v1/model/SetMmrLiveRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SetMmrLiveRequest::SetMmrLiveRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    bodyIsSet_ = false;
}

SetMmrLiveRequest::~SetMmrLiveRequest() = default;

void SetMmrLiveRequest::validate()
{
}

web::json::value SetMmrLiveRequest::toJson() const
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
bool SetMmrLiveRequest::fromJson(const web::json::value& val)
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
            RestSetMmrLiveReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetMmrLiveRequest::getConferenceID() const
{
    return conferenceID_;
}

void SetMmrLiveRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool SetMmrLiveRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void SetMmrLiveRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string SetMmrLiveRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void SetMmrLiveRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool SetMmrLiveRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void SetMmrLiveRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

RestSetMmrLiveReqBody SetMmrLiveRequest::getBody() const
{
    return body_;
}

void SetMmrLiveRequest::setBody(const RestSetMmrLiveReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetMmrLiveRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetMmrLiveRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


