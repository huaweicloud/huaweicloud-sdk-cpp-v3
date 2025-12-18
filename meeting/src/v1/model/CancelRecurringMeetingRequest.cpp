

#include "huaweicloud/meeting/v1/model/CancelRecurringMeetingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CancelRecurringMeetingRequest::CancelRecurringMeetingRequest()
{
    xAuthorizationType_ = "";
    xAuthorizationTypeIsSet_ = false;
    userUUID_ = "";
    userUUIDIsSet_ = false;
    xSiteId_ = "";
    xSiteIdIsSet_ = false;
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
}

CancelRecurringMeetingRequest::~CancelRecurringMeetingRequest() = default;

void CancelRecurringMeetingRequest::validate()
{
}

web::json::value CancelRecurringMeetingRequest::toJson() const
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
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool CancelRecurringMeetingRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string CancelRecurringMeetingRequest::getXAuthorizationType() const
{
    return xAuthorizationType_;
}

void CancelRecurringMeetingRequest::setXAuthorizationType(const std::string& value)
{
    xAuthorizationType_ = value;
    xAuthorizationTypeIsSet_ = true;
}

bool CancelRecurringMeetingRequest::xAuthorizationTypeIsSet() const
{
    return xAuthorizationTypeIsSet_;
}

void CancelRecurringMeetingRequest::unsetxAuthorizationType()
{
    xAuthorizationTypeIsSet_ = false;
}

std::string CancelRecurringMeetingRequest::getUserUUID() const
{
    return userUUID_;
}

void CancelRecurringMeetingRequest::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool CancelRecurringMeetingRequest::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void CancelRecurringMeetingRequest::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

std::string CancelRecurringMeetingRequest::getXSiteId() const
{
    return xSiteId_;
}

void CancelRecurringMeetingRequest::setXSiteId(const std::string& value)
{
    xSiteId_ = value;
    xSiteIdIsSet_ = true;
}

bool CancelRecurringMeetingRequest::xSiteIdIsSet() const
{
    return xSiteIdIsSet_;
}

void CancelRecurringMeetingRequest::unsetxSiteId()
{
    xSiteIdIsSet_ = false;
}

std::string CancelRecurringMeetingRequest::getConferenceID() const
{
    return conferenceID_;
}

void CancelRecurringMeetingRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool CancelRecurringMeetingRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void CancelRecurringMeetingRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

int32_t CancelRecurringMeetingRequest::getType() const
{
    return type_;
}

void CancelRecurringMeetingRequest::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CancelRecurringMeetingRequest::typeIsSet() const
{
    return typeIsSet_;
}

void CancelRecurringMeetingRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


