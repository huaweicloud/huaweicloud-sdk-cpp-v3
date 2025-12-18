

#include "huaweicloud/meeting/v1/model/SetAttendeeLanChannelRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SetAttendeeLanChannelRequest::SetAttendeeLanChannelRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    bodyIsSet_ = false;
}

SetAttendeeLanChannelRequest::~SetAttendeeLanChannelRequest() = default;

void SetAttendeeLanChannelRequest::validate()
{
}

web::json::value SetAttendeeLanChannelRequest::toJson() const
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
bool SetAttendeeLanChannelRequest::fromJson(const web::json::value& val)
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
            RestSetAttendeeLanChannelBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetAttendeeLanChannelRequest::getConferenceID() const
{
    return conferenceID_;
}

void SetAttendeeLanChannelRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool SetAttendeeLanChannelRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void SetAttendeeLanChannelRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string SetAttendeeLanChannelRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void SetAttendeeLanChannelRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool SetAttendeeLanChannelRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void SetAttendeeLanChannelRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

RestSetAttendeeLanChannelBody SetAttendeeLanChannelRequest::getBody() const
{
    return body_;
}

void SetAttendeeLanChannelRequest::setBody(const RestSetAttendeeLanChannelBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetAttendeeLanChannelRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetAttendeeLanChannelRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


