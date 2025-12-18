

#include "huaweicloud/meeting/v1/model/ShowDeviceDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowDeviceDetailRequest::ShowDeviceDetailRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    sn_ = "";
    snIsSet_ = false;
}

ShowDeviceDetailRequest::~ShowDeviceDetailRequest() = default;

void ShowDeviceDetailRequest::validate()
{
}

web::json::value ShowDeviceDetailRequest::toJson() const
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

    return val;
}
bool ShowDeviceDetailRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowDeviceDetailRequest::getXRequestId() const
{
    return xRequestId_;
}

void ShowDeviceDetailRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowDeviceDetailRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowDeviceDetailRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ShowDeviceDetailRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ShowDeviceDetailRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ShowDeviceDetailRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ShowDeviceDetailRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string ShowDeviceDetailRequest::getSn() const
{
    return sn_;
}

void ShowDeviceDetailRequest::setSn(const std::string& value)
{
    sn_ = value;
    snIsSet_ = true;
}

bool ShowDeviceDetailRequest::snIsSet() const
{
    return snIsSet_;
}

void ShowDeviceDetailRequest::unsetsn()
{
    snIsSet_ = false;
}

}
}
}
}
}


