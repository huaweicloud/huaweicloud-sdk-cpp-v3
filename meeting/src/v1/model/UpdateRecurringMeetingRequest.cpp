

#include "huaweicloud/meeting/v1/model/UpdateRecurringMeetingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateRecurringMeetingRequest::UpdateRecurringMeetingRequest()
{
    xAuthorizationType_ = "";
    xAuthorizationTypeIsSet_ = false;
    userUUID_ = "";
    userUUIDIsSet_ = false;
    xSiteId_ = "";
    xSiteIdIsSet_ = false;
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRecurringMeetingRequest::~UpdateRecurringMeetingRequest() = default;

void UpdateRecurringMeetingRequest::validate()
{
}

web::json::value UpdateRecurringMeetingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xAuthorizationTypeIsSet_) {
        val[utility::conversions::to_string_t("X-Authorization-Type")] = ModelBase::toJson(xAuthorizationType_);
    }
    if(userUUIDIsSet_) {
        val[utility::conversions::to_string_t("userUUID")] = ModelBase::toJson(userUUID_);
    }
    if(xSiteIdIsSet_) {
        val[utility::conversions::to_string_t("X-Site-Id")] = ModelBase::toJson(xSiteId_);
    }
    if(conferenceIDIsSet_) {
        val[utility::conversions::to_string_t("conferenceID")] = ModelBase::toJson(conferenceID_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateRecurringMeetingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Authorization-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Authorization-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAuthorizationType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("X-Site-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Site-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSiteId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conferenceID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conferenceID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConferenceID(refVal);
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


std::string UpdateRecurringMeetingRequest::getXAuthorizationType() const
{
    return xAuthorizationType_;
}

void UpdateRecurringMeetingRequest::setXAuthorizationType(const std::string& value)
{
    xAuthorizationType_ = value;
    xAuthorizationTypeIsSet_ = true;
}

bool UpdateRecurringMeetingRequest::xAuthorizationTypeIsSet() const
{
    return xAuthorizationTypeIsSet_;
}

void UpdateRecurringMeetingRequest::unsetxAuthorizationType()
{
    xAuthorizationTypeIsSet_ = false;
}

std::string UpdateRecurringMeetingRequest::getUserUUID() const
{
    return userUUID_;
}

void UpdateRecurringMeetingRequest::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool UpdateRecurringMeetingRequest::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void UpdateRecurringMeetingRequest::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

std::string UpdateRecurringMeetingRequest::getXSiteId() const
{
    return xSiteId_;
}

void UpdateRecurringMeetingRequest::setXSiteId(const std::string& value)
{
    xSiteId_ = value;
    xSiteIdIsSet_ = true;
}

bool UpdateRecurringMeetingRequest::xSiteIdIsSet() const
{
    return xSiteIdIsSet_;
}

void UpdateRecurringMeetingRequest::unsetxSiteId()
{
    xSiteIdIsSet_ = false;
}

std::string UpdateRecurringMeetingRequest::getConferenceID() const
{
    return conferenceID_;
}

void UpdateRecurringMeetingRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool UpdateRecurringMeetingRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void UpdateRecurringMeetingRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

RestScheduleConfDTO UpdateRecurringMeetingRequest::getBody() const
{
    return body_;
}

void UpdateRecurringMeetingRequest::setBody(const RestScheduleConfDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRecurringMeetingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRecurringMeetingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


