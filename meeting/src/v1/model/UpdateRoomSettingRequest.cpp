

#include "huaweicloud/meeting/v1/model/UpdateRoomSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateRoomSettingRequest::UpdateRoomSettingRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    conferenceId_ = "";
    conferenceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRoomSettingRequest::~UpdateRoomSettingRequest() = default;

void UpdateRoomSettingRequest::validate()
{
}

web::json::value UpdateRoomSettingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(conferenceIdIsSet_) {
        val[utility::conversions::to_string_t("conference_id")] = ModelBase::toJson(conferenceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateRoomSettingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Accept-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Accept-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conference_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conference_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConferenceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            OpenRoomSettingReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateRoomSettingRequest::getXRequestId() const
{
    return xRequestId_;
}

void UpdateRoomSettingRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateRoomSettingRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateRoomSettingRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string UpdateRoomSettingRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void UpdateRoomSettingRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool UpdateRoomSettingRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void UpdateRoomSettingRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string UpdateRoomSettingRequest::getConferenceId() const
{
    return conferenceId_;
}

void UpdateRoomSettingRequest::setConferenceId(const std::string& value)
{
    conferenceId_ = value;
    conferenceIdIsSet_ = true;
}

bool UpdateRoomSettingRequest::conferenceIdIsSet() const
{
    return conferenceIdIsSet_;
}

void UpdateRoomSettingRequest::unsetconferenceId()
{
    conferenceIdIsSet_ = false;
}

OpenRoomSettingReq UpdateRoomSettingRequest::getBody() const
{
    return body_;
}

void UpdateRoomSettingRequest::setBody(const OpenRoomSettingReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRoomSettingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRoomSettingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


