

#include "huaweicloud/meeting/v1/model/ShowDeviceStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowDeviceStatusRequest::ShowDeviceStatusRequest()
{
    xRequestID_ = "";
    xRequestIDIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ShowDeviceStatusRequest::~ShowDeviceStatusRequest() = default;

void ShowDeviceStatusRequest::validate()
{
}

web::json::value ShowDeviceStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIDIsSet_) {
        val[utility::conversions::to_string_t("X-Request-ID")] = ModelBase::toJson(xRequestID_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowDeviceStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-ID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-ID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestID(refVal);
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowDeviceStatusRequest::getXRequestID() const
{
    return xRequestID_;
}

void ShowDeviceStatusRequest::setXRequestID(const std::string& value)
{
    xRequestID_ = value;
    xRequestIDIsSet_ = true;
}

bool ShowDeviceStatusRequest::xRequestIDIsSet() const
{
    return xRequestIDIsSet_;
}

void ShowDeviceStatusRequest::unsetxRequestID()
{
    xRequestIDIsSet_ = false;
}

std::string ShowDeviceStatusRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ShowDeviceStatusRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ShowDeviceStatusRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ShowDeviceStatusRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::vector<std::string>& ShowDeviceStatusRequest::getBody()
{
    return body_;
}

void ShowDeviceStatusRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowDeviceStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowDeviceStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


