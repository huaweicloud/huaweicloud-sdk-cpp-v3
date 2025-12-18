

#include "huaweicloud/meeting/v1/model/CreateMeetingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CreateMeetingRequest::CreateMeetingRequest()
{
    userUUID_ = "";
    userUUIDIsSet_ = false;
    xAuthorizationType_ = "";
    xAuthorizationTypeIsSet_ = false;
    xSiteId_ = "";
    xSiteIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateMeetingRequest::~CreateMeetingRequest() = default;

void CreateMeetingRequest::validate()
{
}

web::json::value CreateMeetingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool CreateMeetingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string CreateMeetingRequest::getUserUUID() const
{
    return userUUID_;
}

void CreateMeetingRequest::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool CreateMeetingRequest::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void CreateMeetingRequest::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

std::string CreateMeetingRequest::getXAuthorizationType() const
{
    return xAuthorizationType_;
}

void CreateMeetingRequest::setXAuthorizationType(const std::string& value)
{
    xAuthorizationType_ = value;
    xAuthorizationTypeIsSet_ = true;
}

bool CreateMeetingRequest::xAuthorizationTypeIsSet() const
{
    return xAuthorizationTypeIsSet_;
}

void CreateMeetingRequest::unsetxAuthorizationType()
{
    xAuthorizationTypeIsSet_ = false;
}

std::string CreateMeetingRequest::getXSiteId() const
{
    return xSiteId_;
}

void CreateMeetingRequest::setXSiteId(const std::string& value)
{
    xSiteId_ = value;
    xSiteIdIsSet_ = true;
}

bool CreateMeetingRequest::xSiteIdIsSet() const
{
    return xSiteIdIsSet_;
}

void CreateMeetingRequest::unsetxSiteId()
{
    xSiteIdIsSet_ = false;
}

RestScheduleConfDTO CreateMeetingRequest::getBody() const
{
    return body_;
}

void CreateMeetingRequest::setBody(const RestScheduleConfDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateMeetingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateMeetingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


