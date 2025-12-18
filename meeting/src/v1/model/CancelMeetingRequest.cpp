

#include "huaweicloud/meeting/v1/model/CancelMeetingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CancelMeetingRequest::CancelMeetingRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    userUUID_ = "";
    userUUIDIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
    xAuthorizationType_ = "";
    xAuthorizationTypeIsSet_ = false;
    xSiteId_ = "";
    xSiteIdIsSet_ = false;
}

CancelMeetingRequest::~CancelMeetingRequest() = default;

void CancelMeetingRequest::validate()
{
}

web::json::value CancelMeetingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conferenceIDIsSet_) {
        val[utility::conversions::to_string_t("conferenceID")] = ModelBase::toJson(conferenceID_);
    }
    if(userUUIDIsSet_) {
        val[utility::conversions::to_string_t("userUUID")] = ModelBase::toJson(userUUID_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(xAuthorizationTypeIsSet_) {
        val[utility::conversions::to_string_t("X-Authorization-Type")] = ModelBase::toJson(xAuthorizationType_);
    }
    if(xSiteIdIsSet_) {
        val[utility::conversions::to_string_t("X-Site-Id")] = ModelBase::toJson(xSiteId_);
    }

    return val;
}
bool CancelMeetingRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    return ok;
}


std::string CancelMeetingRequest::getConferenceID() const
{
    return conferenceID_;
}

void CancelMeetingRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool CancelMeetingRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void CancelMeetingRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string CancelMeetingRequest::getUserUUID() const
{
    return userUUID_;
}

void CancelMeetingRequest::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool CancelMeetingRequest::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void CancelMeetingRequest::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

int32_t CancelMeetingRequest::getType() const
{
    return type_;
}

void CancelMeetingRequest::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CancelMeetingRequest::typeIsSet() const
{
    return typeIsSet_;
}

void CancelMeetingRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string CancelMeetingRequest::getXAuthorizationType() const
{
    return xAuthorizationType_;
}

void CancelMeetingRequest::setXAuthorizationType(const std::string& value)
{
    xAuthorizationType_ = value;
    xAuthorizationTypeIsSet_ = true;
}

bool CancelMeetingRequest::xAuthorizationTypeIsSet() const
{
    return xAuthorizationTypeIsSet_;
}

void CancelMeetingRequest::unsetxAuthorizationType()
{
    xAuthorizationTypeIsSet_ = false;
}

std::string CancelMeetingRequest::getXSiteId() const
{
    return xSiteId_;
}

void CancelMeetingRequest::setXSiteId(const std::string& value)
{
    xSiteId_ = value;
    xSiteIdIsSet_ = true;
}

bool CancelMeetingRequest::xSiteIdIsSet() const
{
    return xSiteIdIsSet_;
}

void CancelMeetingRequest::unsetxSiteId()
{
    xSiteIdIsSet_ = false;
}

}
}
}
}
}


