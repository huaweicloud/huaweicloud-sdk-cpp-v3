

#include "huaweicloud/meeting/v1/model/ShowCorpResourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowCorpResourceRequest::ShowCorpResourceRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
}

ShowCorpResourceRequest::~ShowCorpResourceRequest() = default;

void ShowCorpResourceRequest::validate()
{
}

web::json::value ShowCorpResourceRequest::toJson() const
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
bool ShowCorpResourceRequest::fromJson(const web::json::value& val)
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


std::string ShowCorpResourceRequest::getXRequestId() const
{
    return xRequestId_;
}

void ShowCorpResourceRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowCorpResourceRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowCorpResourceRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ShowCorpResourceRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ShowCorpResourceRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ShowCorpResourceRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ShowCorpResourceRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

}
}
}
}
}


