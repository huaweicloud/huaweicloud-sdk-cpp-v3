

#include "huaweicloud/meeting/v1/model/ShowSsoConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowSsoConfigRequest::ShowSsoConfigRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
}

ShowSsoConfigRequest::~ShowSsoConfigRequest() = default;

void ShowSsoConfigRequest::validate()
{
}

web::json::value ShowSsoConfigRequest::toJson() const
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
bool ShowSsoConfigRequest::fromJson(const web::json::value& val)
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


std::string ShowSsoConfigRequest::getXRequestId() const
{
    return xRequestId_;
}

void ShowSsoConfigRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowSsoConfigRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowSsoConfigRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ShowSsoConfigRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ShowSsoConfigRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ShowSsoConfigRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ShowSsoConfigRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

}
}
}
}
}


