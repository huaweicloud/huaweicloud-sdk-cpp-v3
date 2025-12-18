

#include "huaweicloud/meeting/v1/model/ShowMeetingFileListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowMeetingFileListRequest::ShowMeetingFileListRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ShowMeetingFileListRequest::~ShowMeetingFileListRequest() = default;

void ShowMeetingFileListRequest::validate()
{
}

web::json::value ShowMeetingFileListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowMeetingFileListRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowMeetingFileListRequest::getXRequestId() const
{
    return xRequestId_;
}

void ShowMeetingFileListRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowMeetingFileListRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowMeetingFileListRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ShowMeetingFileListRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ShowMeetingFileListRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ShowMeetingFileListRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ShowMeetingFileListRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::map<std::string, std::string>& ShowMeetingFileListRequest::getBody()
{
    return body_;
}

void ShowMeetingFileListRequest::setBody(const std::map<std::string, std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowMeetingFileListRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowMeetingFileListRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


