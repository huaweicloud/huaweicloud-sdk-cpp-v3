

#include "huaweicloud/meeting/v1/model/SetInterpreterGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SetInterpreterGroupRequest::SetInterpreterGroupRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    bodyIsSet_ = false;
}

SetInterpreterGroupRequest::~SetInterpreterGroupRequest() = default;

void SetInterpreterGroupRequest::validate()
{
}

web::json::value SetInterpreterGroupRequest::toJson() const
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
bool SetInterpreterGroupRequest::fromJson(const web::json::value& val)
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
            RestSetInterpreterGroupBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetInterpreterGroupRequest::getConferenceID() const
{
    return conferenceID_;
}

void SetInterpreterGroupRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool SetInterpreterGroupRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void SetInterpreterGroupRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string SetInterpreterGroupRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void SetInterpreterGroupRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool SetInterpreterGroupRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void SetInterpreterGroupRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

RestSetInterpreterGroupBody SetInterpreterGroupRequest::getBody() const
{
    return body_;
}

void SetInterpreterGroupRequest::setBody(const RestSetInterpreterGroupBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetInterpreterGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetInterpreterGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


