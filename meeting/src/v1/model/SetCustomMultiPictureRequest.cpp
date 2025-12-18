

#include "huaweicloud/meeting/v1/model/SetCustomMultiPictureRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SetCustomMultiPictureRequest::SetCustomMultiPictureRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    bodyIsSet_ = false;
}

SetCustomMultiPictureRequest::~SetCustomMultiPictureRequest() = default;

void SetCustomMultiPictureRequest::validate()
{
}

web::json::value SetCustomMultiPictureRequest::toJson() const
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
bool SetCustomMultiPictureRequest::fromJson(const web::json::value& val)
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
            RestCustomMultiPictureBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetCustomMultiPictureRequest::getConferenceID() const
{
    return conferenceID_;
}

void SetCustomMultiPictureRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool SetCustomMultiPictureRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void SetCustomMultiPictureRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string SetCustomMultiPictureRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void SetCustomMultiPictureRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool SetCustomMultiPictureRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void SetCustomMultiPictureRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

RestCustomMultiPictureBody SetCustomMultiPictureRequest::getBody() const
{
    return body_;
}

void SetCustomMultiPictureRequest::setBody(const RestCustomMultiPictureBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetCustomMultiPictureRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetCustomMultiPictureRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


