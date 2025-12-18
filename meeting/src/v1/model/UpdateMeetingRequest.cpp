

#include "huaweicloud/meeting/v1/model/UpdateMeetingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateMeetingRequest::UpdateMeetingRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    userUUID_ = "";
    userUUIDIsSet_ = false;
    xAuthorizationType_ = "";
    xAuthorizationTypeIsSet_ = false;
    xSiteId_ = "";
    xSiteIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateMeetingRequest::~UpdateMeetingRequest() = default;

void UpdateMeetingRequest::validate()
{
}

web::json::value UpdateMeetingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conferenceIDIsSet_) {
        val[utility::conversions::to_string_t("conferenceID")] = ModelBase::toJson(conferenceID_);
    }
    if(userUUIDIsSet_) {
        val[utility::conversions::to_string_t("userUUID")] = ModelBase::toJson(userUUID_);
    }
    if(xAuthorizationTypeIsSet_) {
        val[utility::conversions::to_string_t("X-Authorization-Type")] = ModelBase::toJson(xAuthorizationType_);
    }
    if(xSiteIdIsSet_) {
        val[utility::conversions::to_string_t("X-Site-Id")] = ModelBase::toJson(xSiteId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateMeetingRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("userUUID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userUUID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserUUID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Authorization-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Authorization-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAuthorizationType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Site-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Site-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSiteId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RestScheduleConfDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateMeetingRequest::getConferenceID() const
{
    return conferenceID_;
}

void UpdateMeetingRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool UpdateMeetingRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void UpdateMeetingRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string UpdateMeetingRequest::getUserUUID() const
{
    return userUUID_;
}

void UpdateMeetingRequest::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool UpdateMeetingRequest::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void UpdateMeetingRequest::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

std::string UpdateMeetingRequest::getXAuthorizationType() const
{
    return xAuthorizationType_;
}

void UpdateMeetingRequest::setXAuthorizationType(const std::string& value)
{
    xAuthorizationType_ = value;
    xAuthorizationTypeIsSet_ = true;
}

bool UpdateMeetingRequest::xAuthorizationTypeIsSet() const
{
    return xAuthorizationTypeIsSet_;
}

void UpdateMeetingRequest::unsetxAuthorizationType()
{
    xAuthorizationTypeIsSet_ = false;
}

std::string UpdateMeetingRequest::getXSiteId() const
{
    return xSiteId_;
}

void UpdateMeetingRequest::setXSiteId(const std::string& value)
{
    xSiteId_ = value;
    xSiteIdIsSet_ = true;
}

bool UpdateMeetingRequest::xSiteIdIsSet() const
{
    return xSiteIdIsSet_;
}

void UpdateMeetingRequest::unsetxSiteId()
{
    xSiteIdIsSet_ = false;
}

RestScheduleConfDTO UpdateMeetingRequest::getBody() const
{
    return body_;
}

void UpdateMeetingRequest::setBody(const RestScheduleConfDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMeetingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMeetingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


