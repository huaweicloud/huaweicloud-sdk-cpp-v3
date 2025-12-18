

#include "huaweicloud/meeting/v1/model/CreateRecurringMeetingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CreateRecurringMeetingRequest::CreateRecurringMeetingRequest()
{
    xAuthorizationType_ = "";
    xAuthorizationTypeIsSet_ = false;
    userUUID_ = "";
    userUUIDIsSet_ = false;
    xSiteId_ = "";
    xSiteIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateRecurringMeetingRequest::~CreateRecurringMeetingRequest() = default;

void CreateRecurringMeetingRequest::validate()
{
}

web::json::value CreateRecurringMeetingRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateRecurringMeetingRequest::fromJson(const web::json::value& val)
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


std::string CreateRecurringMeetingRequest::getXAuthorizationType() const
{
    return xAuthorizationType_;
}

void CreateRecurringMeetingRequest::setXAuthorizationType(const std::string& value)
{
    xAuthorizationType_ = value;
    xAuthorizationTypeIsSet_ = true;
}

bool CreateRecurringMeetingRequest::xAuthorizationTypeIsSet() const
{
    return xAuthorizationTypeIsSet_;
}

void CreateRecurringMeetingRequest::unsetxAuthorizationType()
{
    xAuthorizationTypeIsSet_ = false;
}

std::string CreateRecurringMeetingRequest::getUserUUID() const
{
    return userUUID_;
}

void CreateRecurringMeetingRequest::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool CreateRecurringMeetingRequest::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void CreateRecurringMeetingRequest::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

std::string CreateRecurringMeetingRequest::getXSiteId() const
{
    return xSiteId_;
}

void CreateRecurringMeetingRequest::setXSiteId(const std::string& value)
{
    xSiteId_ = value;
    xSiteIdIsSet_ = true;
}

bool CreateRecurringMeetingRequest::xSiteIdIsSet() const
{
    return xSiteIdIsSet_;
}

void CreateRecurringMeetingRequest::unsetxSiteId()
{
    xSiteIdIsSet_ = false;
}

RestScheduleConfDTO CreateRecurringMeetingRequest::getBody() const
{
    return body_;
}

void CreateRecurringMeetingRequest::setBody(const RestScheduleConfDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRecurringMeetingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRecurringMeetingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


