

#include "huaweicloud/meeting/v1/model/ResumeSimultaneousInterpretationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ResumeSimultaneousInterpretationRequest::ResumeSimultaneousInterpretationRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    bodyIsSet_ = false;
}

ResumeSimultaneousInterpretationRequest::~ResumeSimultaneousInterpretationRequest() = default;

void ResumeSimultaneousInterpretationRequest::validate()
{
}

web::json::value ResumeSimultaneousInterpretationRequest::toJson() const
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
bool ResumeSimultaneousInterpretationRequest::fromJson(const web::json::value& val)
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
            RestSimultaneousInterpretationBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResumeSimultaneousInterpretationRequest::getConferenceID() const
{
    return conferenceID_;
}

void ResumeSimultaneousInterpretationRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool ResumeSimultaneousInterpretationRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void ResumeSimultaneousInterpretationRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string ResumeSimultaneousInterpretationRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void ResumeSimultaneousInterpretationRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool ResumeSimultaneousInterpretationRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void ResumeSimultaneousInterpretationRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

RestSimultaneousInterpretationBody ResumeSimultaneousInterpretationRequest::getBody() const
{
    return body_;
}

void ResumeSimultaneousInterpretationRequest::setBody(const RestSimultaneousInterpretationBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResumeSimultaneousInterpretationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResumeSimultaneousInterpretationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


