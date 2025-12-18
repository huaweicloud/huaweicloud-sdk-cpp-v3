

#include "huaweicloud/meeting/v1/model/CancelRecurringSubMeetingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CancelRecurringSubMeetingRequest::CancelRecurringSubMeetingRequest()
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
    bodyIsSet_ = false;
}

CancelRecurringSubMeetingRequest::~CancelRecurringSubMeetingRequest() = default;

void CancelRecurringSubMeetingRequest::validate()
{
}

web::json::value CancelRecurringSubMeetingRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CancelRecurringSubMeetingRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RestCancelSingleRecordCycleConfListReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CancelRecurringSubMeetingRequest::getXAuthorizationType() const
{
    return xAuthorizationType_;
}

void CancelRecurringSubMeetingRequest::setXAuthorizationType(const std::string& value)
{
    xAuthorizationType_ = value;
    xAuthorizationTypeIsSet_ = true;
}

bool CancelRecurringSubMeetingRequest::xAuthorizationTypeIsSet() const
{
    return xAuthorizationTypeIsSet_;
}

void CancelRecurringSubMeetingRequest::unsetxAuthorizationType()
{
    xAuthorizationTypeIsSet_ = false;
}

std::string CancelRecurringSubMeetingRequest::getUserUUID() const
{
    return userUUID_;
}

void CancelRecurringSubMeetingRequest::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool CancelRecurringSubMeetingRequest::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void CancelRecurringSubMeetingRequest::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

std::string CancelRecurringSubMeetingRequest::getXSiteId() const
{
    return xSiteId_;
}

void CancelRecurringSubMeetingRequest::setXSiteId(const std::string& value)
{
    xSiteId_ = value;
    xSiteIdIsSet_ = true;
}

bool CancelRecurringSubMeetingRequest::xSiteIdIsSet() const
{
    return xSiteIdIsSet_;
}

void CancelRecurringSubMeetingRequest::unsetxSiteId()
{
    xSiteIdIsSet_ = false;
}

std::string CancelRecurringSubMeetingRequest::getConferenceID() const
{
    return conferenceID_;
}

void CancelRecurringSubMeetingRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool CancelRecurringSubMeetingRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void CancelRecurringSubMeetingRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

int32_t CancelRecurringSubMeetingRequest::getType() const
{
    return type_;
}

void CancelRecurringSubMeetingRequest::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CancelRecurringSubMeetingRequest::typeIsSet() const
{
    return typeIsSet_;
}

void CancelRecurringSubMeetingRequest::unsettype()
{
    typeIsSet_ = false;
}

RestCancelSingleRecordCycleConfListReqBody CancelRecurringSubMeetingRequest::getBody() const
{
    return body_;
}

void CancelRecurringSubMeetingRequest::setBody(const RestCancelSingleRecordCycleConfListReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CancelRecurringSubMeetingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CancelRecurringSubMeetingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


