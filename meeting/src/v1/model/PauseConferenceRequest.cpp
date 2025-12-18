

#include "huaweicloud/meeting/v1/model/PauseConferenceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




PauseConferenceRequest::PauseConferenceRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    bodyIsSet_ = false;
}

PauseConferenceRequest::~PauseConferenceRequest() = default;

void PauseConferenceRequest::validate()
{
}

web::json::value PauseConferenceRequest::toJson() const
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
bool PauseConferenceRequest::fromJson(const web::json::value& val)
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
            PauseConferenceReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string PauseConferenceRequest::getConferenceID() const
{
    return conferenceID_;
}

void PauseConferenceRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool PauseConferenceRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void PauseConferenceRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string PauseConferenceRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void PauseConferenceRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool PauseConferenceRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void PauseConferenceRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

PauseConferenceReq PauseConferenceRequest::getBody() const
{
    return body_;
}

void PauseConferenceRequest::setBody(const PauseConferenceReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PauseConferenceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void PauseConferenceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


