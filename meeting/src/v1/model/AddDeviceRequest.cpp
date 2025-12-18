

#include "huaweicloud/meeting/v1/model/AddDeviceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AddDeviceRequest::AddDeviceRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

AddDeviceRequest::~AddDeviceRequest() = default;

void AddDeviceRequest::validate()
{
}

web::json::value AddDeviceRequest::toJson() const
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
bool AddDeviceRequest::fromJson(const web::json::value& val)
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
            AddDeviceDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddDeviceRequest::getXRequestId() const
{
    return xRequestId_;
}

void AddDeviceRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool AddDeviceRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void AddDeviceRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string AddDeviceRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void AddDeviceRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool AddDeviceRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void AddDeviceRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

AddDeviceDTO AddDeviceRequest::getBody() const
{
    return body_;
}

void AddDeviceRequest::setBody(const AddDeviceDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddDeviceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddDeviceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


