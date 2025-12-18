

#include "huaweicloud/meeting/v1/model/DeleteAttendeesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




DeleteAttendeesRequest::DeleteAttendeesRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteAttendeesRequest::~DeleteAttendeesRequest() = default;

void DeleteAttendeesRequest::validate()
{
}

web::json::value DeleteAttendeesRequest::toJson() const
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
bool DeleteAttendeesRequest::fromJson(const web::json::value& val)
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
            RestBulkDelAttendReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteAttendeesRequest::getConferenceID() const
{
    return conferenceID_;
}

void DeleteAttendeesRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool DeleteAttendeesRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void DeleteAttendeesRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string DeleteAttendeesRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void DeleteAttendeesRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool DeleteAttendeesRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void DeleteAttendeesRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

RestBulkDelAttendReqBody DeleteAttendeesRequest::getBody() const
{
    return body_;
}

void DeleteAttendeesRequest::setBody(const RestBulkDelAttendReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteAttendeesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteAttendeesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


