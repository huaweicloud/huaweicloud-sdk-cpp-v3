

#include "huaweicloud/meeting/v1/model/ShowMyInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowMyInfoRequest::ShowMyInfoRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
}

ShowMyInfoRequest::~ShowMyInfoRequest() = default;

void ShowMyInfoRequest::validate()
{
}

web::json::value ShowMyInfoRequest::toJson() const
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
bool ShowMyInfoRequest::fromJson(const web::json::value& val)
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


std::string ShowMyInfoRequest::getXRequestId() const
{
    return xRequestId_;
}

void ShowMyInfoRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowMyInfoRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowMyInfoRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ShowMyInfoRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ShowMyInfoRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ShowMyInfoRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ShowMyInfoRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

}
}
}
}
}


