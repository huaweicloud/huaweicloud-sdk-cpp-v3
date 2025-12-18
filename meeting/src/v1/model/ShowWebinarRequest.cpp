

#include "huaweicloud/meeting/v1/model/ShowWebinarRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowWebinarRequest::ShowWebinarRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    conferenceId_ = "";
    conferenceIdIsSet_ = false;
}

ShowWebinarRequest::~ShowWebinarRequest() = default;

void ShowWebinarRequest::validate()
{
}

web::json::value ShowWebinarRequest::toJson() const
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
bool ShowWebinarRequest::fromJson(const web::json::value& val)
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


std::string ShowWebinarRequest::getXRequestId() const
{
    return xRequestId_;
}

void ShowWebinarRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowWebinarRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowWebinarRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ShowWebinarRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ShowWebinarRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ShowWebinarRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ShowWebinarRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string ShowWebinarRequest::getConferenceId() const
{
    return conferenceId_;
}

void ShowWebinarRequest::setConferenceId(const std::string& value)
{
    conferenceId_ = value;
    conferenceIdIsSet_ = true;
}

bool ShowWebinarRequest::conferenceIdIsSet() const
{
    return conferenceIdIsSet_;
}

void ShowWebinarRequest::unsetconferenceId()
{
    conferenceIdIsSet_ = false;
}

}
}
}
}
}


