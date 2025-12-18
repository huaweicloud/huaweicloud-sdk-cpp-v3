

#include "huaweicloud/meeting/v1/model/BatchUpdateDevicesStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




BatchUpdateDevicesStatusRequest::BatchUpdateDevicesStatusRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    value_ = 0;
    valueIsSet_ = false;
    bodyIsSet_ = false;
}

BatchUpdateDevicesStatusRequest::~BatchUpdateDevicesStatusRequest() = default;

void BatchUpdateDevicesStatusRequest::validate()
{
}

web::json::value BatchUpdateDevicesStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchUpdateDevicesStatusRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
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


std::string BatchUpdateDevicesStatusRequest::getXRequestId() const
{
    return xRequestId_;
}

void BatchUpdateDevicesStatusRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchUpdateDevicesStatusRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchUpdateDevicesStatusRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string BatchUpdateDevicesStatusRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void BatchUpdateDevicesStatusRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool BatchUpdateDevicesStatusRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void BatchUpdateDevicesStatusRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

int32_t BatchUpdateDevicesStatusRequest::getValue() const
{
    return value_;
}

void BatchUpdateDevicesStatusRequest::setValue(int32_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool BatchUpdateDevicesStatusRequest::valueIsSet() const
{
    return valueIsSet_;
}

void BatchUpdateDevicesStatusRequest::unsetvalue()
{
    valueIsSet_ = false;
}

std::vector<std::string>& BatchUpdateDevicesStatusRequest::getBody()
{
    return body_;
}

void BatchUpdateDevicesStatusRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateDevicesStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateDevicesStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


