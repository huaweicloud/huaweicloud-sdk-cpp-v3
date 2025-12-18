

#include "huaweicloud/meeting/v1/model/UpdateCorpBasicInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateCorpBasicInfoRequest::UpdateCorpBasicInfoRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateCorpBasicInfoRequest::~UpdateCorpBasicInfoRequest() = default;

void UpdateCorpBasicInfoRequest::validate()
{
}

web::json::value UpdateCorpBasicInfoRequest::toJson() const
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
bool UpdateCorpBasicInfoRequest::fromJson(const web::json::value& val)
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
            ModCorpBasicInfoDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateCorpBasicInfoRequest::getXRequestId() const
{
    return xRequestId_;
}

void UpdateCorpBasicInfoRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateCorpBasicInfoRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateCorpBasicInfoRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string UpdateCorpBasicInfoRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void UpdateCorpBasicInfoRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool UpdateCorpBasicInfoRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void UpdateCorpBasicInfoRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

ModCorpBasicInfoDTO UpdateCorpBasicInfoRequest::getBody() const
{
    return body_;
}

void UpdateCorpBasicInfoRequest::setBody(const ModCorpBasicInfoDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateCorpBasicInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateCorpBasicInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


