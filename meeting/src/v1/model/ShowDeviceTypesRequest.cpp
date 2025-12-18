

#include "huaweicloud/meeting/v1/model/ShowDeviceTypesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowDeviceTypesRequest::ShowDeviceTypesRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
}

ShowDeviceTypesRequest::~ShowDeviceTypesRequest() = default;

void ShowDeviceTypesRequest::validate()
{
}

web::json::value ShowDeviceTypesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }

    return val;
}
bool ShowDeviceTypesRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowDeviceTypesRequest::getXRequestId() const
{
    return xRequestId_;
}

void ShowDeviceTypesRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowDeviceTypesRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowDeviceTypesRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ShowDeviceTypesRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ShowDeviceTypesRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ShowDeviceTypesRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ShowDeviceTypesRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

}
}
}
}
}


