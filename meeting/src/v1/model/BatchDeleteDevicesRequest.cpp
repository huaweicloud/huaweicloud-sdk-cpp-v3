

#include "huaweicloud/meeting/v1/model/BatchDeleteDevicesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




BatchDeleteDevicesRequest::BatchDeleteDevicesRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteDevicesRequest::~BatchDeleteDevicesRequest() = default;

void BatchDeleteDevicesRequest::validate()
{
}

web::json::value BatchDeleteDevicesRequest::toJson() const
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
bool BatchDeleteDevicesRequest::fromJson(const web::json::value& val)
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteDevicesRequest::getXRequestId() const
{
    return xRequestId_;
}

void BatchDeleteDevicesRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchDeleteDevicesRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchDeleteDevicesRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string BatchDeleteDevicesRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void BatchDeleteDevicesRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool BatchDeleteDevicesRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void BatchDeleteDevicesRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::vector<std::string>& BatchDeleteDevicesRequest::getBody()
{
    return body_;
}

void BatchDeleteDevicesRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteDevicesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteDevicesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


