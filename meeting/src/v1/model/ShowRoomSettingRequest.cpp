

#include "huaweicloud/meeting/v1/model/ShowRoomSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowRoomSettingRequest::ShowRoomSettingRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    conferenceId_ = "";
    conferenceIdIsSet_ = false;
}

ShowRoomSettingRequest::~ShowRoomSettingRequest() = default;

void ShowRoomSettingRequest::validate()
{
}

web::json::value ShowRoomSettingRequest::toJson() const
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

    return val;
}
bool ShowRoomSettingRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowRoomSettingRequest::getXRequestId() const
{
    return xRequestId_;
}

void ShowRoomSettingRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowRoomSettingRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowRoomSettingRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ShowRoomSettingRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ShowRoomSettingRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ShowRoomSettingRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ShowRoomSettingRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string ShowRoomSettingRequest::getConferenceId() const
{
    return conferenceId_;
}

void ShowRoomSettingRequest::setConferenceId(const std::string& value)
{
    conferenceId_ = value;
    conferenceIdIsSet_ = true;
}

bool ShowRoomSettingRequest::conferenceIdIsSet() const
{
    return conferenceIdIsSet_;
}

void ShowRoomSettingRequest::unsetconferenceId()
{
    conferenceIdIsSet_ = false;
}

}
}
}
}
}


