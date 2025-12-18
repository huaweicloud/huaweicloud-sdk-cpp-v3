

#include "huaweicloud/meeting/v1/model/SetMultiPictureRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SetMultiPictureRequest::SetMultiPictureRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    bodyIsSet_ = false;
}

SetMultiPictureRequest::~SetMultiPictureRequest() = default;

void SetMultiPictureRequest::validate()
{
}

web::json::value SetMultiPictureRequest::toJson() const
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
bool SetMultiPictureRequest::fromJson(const web::json::value& val)
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
            RestMixedPictureBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetMultiPictureRequest::getConferenceID() const
{
    return conferenceID_;
}

void SetMultiPictureRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool SetMultiPictureRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void SetMultiPictureRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string SetMultiPictureRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void SetMultiPictureRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool SetMultiPictureRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void SetMultiPictureRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

RestMixedPictureBody SetMultiPictureRequest::getBody() const
{
    return body_;
}

void SetMultiPictureRequest::setBody(const RestMixedPictureBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetMultiPictureRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetMultiPictureRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


