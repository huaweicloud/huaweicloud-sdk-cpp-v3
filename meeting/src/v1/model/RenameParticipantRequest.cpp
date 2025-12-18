

#include "huaweicloud/meeting/v1/model/RenameParticipantRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RenameParticipantRequest::RenameParticipantRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    bodyIsSet_ = false;
}

RenameParticipantRequest::~RenameParticipantRequest() = default;

void RenameParticipantRequest::validate()
{
}

web::json::value RenameParticipantRequest::toJson() const
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
bool RenameParticipantRequest::fromJson(const web::json::value& val)
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
            RestRenamePartReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RenameParticipantRequest::getConferenceID() const
{
    return conferenceID_;
}

void RenameParticipantRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool RenameParticipantRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void RenameParticipantRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string RenameParticipantRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void RenameParticipantRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool RenameParticipantRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void RenameParticipantRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

RestRenamePartReqBody RenameParticipantRequest::getBody() const
{
    return body_;
}

void RenameParticipantRequest::setBody(const RestRenamePartReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RenameParticipantRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RenameParticipantRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


