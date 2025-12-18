

#include "huaweicloud/meeting/v1/model/UpdateRecurringSubMeetingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateRecurringSubMeetingRequest::UpdateRecurringSubMeetingRequest()
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

UpdateRecurringSubMeetingRequest::~UpdateRecurringSubMeetingRequest() = default;

void UpdateRecurringSubMeetingRequest::validate()
{
}

web::json::value UpdateRecurringSubMeetingRequest::toJson() const
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
bool UpdateRecurringSubMeetingRequest::fromJson(const web::json::value& val)
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
            RestScheduleCycleConfDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateRecurringSubMeetingRequest::getXAuthorizationType() const
{
    return xAuthorizationType_;
}

void UpdateRecurringSubMeetingRequest::setXAuthorizationType(const std::string& value)
{
    xAuthorizationType_ = value;
    xAuthorizationTypeIsSet_ = true;
}

bool UpdateRecurringSubMeetingRequest::xAuthorizationTypeIsSet() const
{
    return xAuthorizationTypeIsSet_;
}

void UpdateRecurringSubMeetingRequest::unsetxAuthorizationType()
{
    xAuthorizationTypeIsSet_ = false;
}

std::string UpdateRecurringSubMeetingRequest::getUserUUID() const
{
    return userUUID_;
}

void UpdateRecurringSubMeetingRequest::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool UpdateRecurringSubMeetingRequest::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void UpdateRecurringSubMeetingRequest::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

std::string UpdateRecurringSubMeetingRequest::getXSiteId() const
{
    return xSiteId_;
}

void UpdateRecurringSubMeetingRequest::setXSiteId(const std::string& value)
{
    xSiteId_ = value;
    xSiteIdIsSet_ = true;
}

bool UpdateRecurringSubMeetingRequest::xSiteIdIsSet() const
{
    return xSiteIdIsSet_;
}

void UpdateRecurringSubMeetingRequest::unsetxSiteId()
{
    xSiteIdIsSet_ = false;
}

std::string UpdateRecurringSubMeetingRequest::getConferenceID() const
{
    return conferenceID_;
}

void UpdateRecurringSubMeetingRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool UpdateRecurringSubMeetingRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void UpdateRecurringSubMeetingRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

RestScheduleCycleConfDTO UpdateRecurringSubMeetingRequest::getBody() const
{
    return body_;
}

void UpdateRecurringSubMeetingRequest::setBody(const RestScheduleCycleConfDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRecurringSubMeetingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRecurringSubMeetingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


