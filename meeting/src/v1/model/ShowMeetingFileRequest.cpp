

#include "huaweicloud/meeting/v1/model/ShowMeetingFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowMeetingFileRequest::ShowMeetingFileRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    fileCode_ = "";
    fileCodeIsSet_ = false;
}

ShowMeetingFileRequest::~ShowMeetingFileRequest() = default;

void ShowMeetingFileRequest::validate()
{
}

web::json::value ShowMeetingFileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(fileCodeIsSet_) {
        val[utility::conversions::to_string_t("file_code")] = ModelBase::toJson(fileCode_);
    }

    return val;
}
bool ShowMeetingFileRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("file_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileCode(refVal);
        }
    }
    return ok;
}


std::string ShowMeetingFileRequest::getXRequestId() const
{
    return xRequestId_;
}

void ShowMeetingFileRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowMeetingFileRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowMeetingFileRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ShowMeetingFileRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ShowMeetingFileRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ShowMeetingFileRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ShowMeetingFileRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string ShowMeetingFileRequest::getFileCode() const
{
    return fileCode_;
}

void ShowMeetingFileRequest::setFileCode(const std::string& value)
{
    fileCode_ = value;
    fileCodeIsSet_ = true;
}

bool ShowMeetingFileRequest::fileCodeIsSet() const
{
    return fileCodeIsSet_;
}

void ShowMeetingFileRequest::unsetfileCode()
{
    fileCodeIsSet_ = false;
}

}
}
}
}
}


