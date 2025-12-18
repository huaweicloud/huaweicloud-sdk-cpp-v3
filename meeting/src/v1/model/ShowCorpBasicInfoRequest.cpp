

#include "huaweicloud/meeting/v1/model/ShowCorpBasicInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowCorpBasicInfoRequest::ShowCorpBasicInfoRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
}

ShowCorpBasicInfoRequest::~ShowCorpBasicInfoRequest() = default;

void ShowCorpBasicInfoRequest::validate()
{
}

web::json::value ShowCorpBasicInfoRequest::toJson() const
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
bool ShowCorpBasicInfoRequest::fromJson(const web::json::value& val)
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


std::string ShowCorpBasicInfoRequest::getXRequestId() const
{
    return xRequestId_;
}

void ShowCorpBasicInfoRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowCorpBasicInfoRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowCorpBasicInfoRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ShowCorpBasicInfoRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ShowCorpBasicInfoRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ShowCorpBasicInfoRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ShowCorpBasicInfoRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

}
}
}
}
}


