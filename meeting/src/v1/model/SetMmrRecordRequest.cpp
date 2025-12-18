

#include "huaweicloud/meeting/v1/model/SetMmrRecordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SetMmrRecordRequest::SetMmrRecordRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    bodyIsSet_ = false;
}

SetMmrRecordRequest::~SetMmrRecordRequest() = default;

void SetMmrRecordRequest::validate()
{
}

web::json::value SetMmrRecordRequest::toJson() const
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
bool SetMmrRecordRequest::fromJson(const web::json::value& val)
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
            RestSetMmrRecordReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetMmrRecordRequest::getConferenceID() const
{
    return conferenceID_;
}

void SetMmrRecordRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool SetMmrRecordRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void SetMmrRecordRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string SetMmrRecordRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void SetMmrRecordRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool SetMmrRecordRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void SetMmrRecordRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

RestSetMmrRecordReqBody SetMmrRecordRequest::getBody() const
{
    return body_;
}

void SetMmrRecordRequest::setBody(const RestSetMmrRecordReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetMmrRecordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetMmrRecordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


