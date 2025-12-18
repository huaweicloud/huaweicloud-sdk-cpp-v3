

#include "huaweicloud/meeting/v1/model/UpdateDeviceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateDeviceRequest::UpdateDeviceRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    sn_ = "";
    snIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDeviceRequest::~UpdateDeviceRequest() = default;

void UpdateDeviceRequest::validate()
{
}

web::json::value UpdateDeviceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(snIsSet_) {
        val[utility::conversions::to_string_t("sn")] = ModelBase::toJson(sn_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDeviceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModDeviceDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDeviceRequest::getXRequestId() const
{
    return xRequestId_;
}

void UpdateDeviceRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateDeviceRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateDeviceRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string UpdateDeviceRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void UpdateDeviceRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool UpdateDeviceRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void UpdateDeviceRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string UpdateDeviceRequest::getSn() const
{
    return sn_;
}

void UpdateDeviceRequest::setSn(const std::string& value)
{
    sn_ = value;
    snIsSet_ = true;
}

bool UpdateDeviceRequest::snIsSet() const
{
    return snIsSet_;
}

void UpdateDeviceRequest::unsetsn()
{
    snIsSet_ = false;
}

ModDeviceDTO UpdateDeviceRequest::getBody() const
{
    return body_;
}

void UpdateDeviceRequest::setBody(const ModDeviceDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDeviceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDeviceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


