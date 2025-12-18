

#include "huaweicloud/meeting/v1/model/ResetVisionActiveCodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ResetVisionActiveCodeRequest::ResetVisionActiveCodeRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    account_ = "";
    accountIsSet_ = false;
    bodyIsSet_ = false;
}

ResetVisionActiveCodeRequest::~ResetVisionActiveCodeRequest() = default;

void ResetVisionActiveCodeRequest::validate()
{
}

web::json::value ResetVisionActiveCodeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(accountIsSet_) {
        val[utility::conversions::to_string_t("account")] = ModelBase::toJson(account_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ResetVisionActiveCodeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ActiveDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResetVisionActiveCodeRequest::getXRequestId() const
{
    return xRequestId_;
}

void ResetVisionActiveCodeRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ResetVisionActiveCodeRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ResetVisionActiveCodeRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ResetVisionActiveCodeRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ResetVisionActiveCodeRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ResetVisionActiveCodeRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ResetVisionActiveCodeRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string ResetVisionActiveCodeRequest::getAccount() const
{
    return account_;
}

void ResetVisionActiveCodeRequest::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool ResetVisionActiveCodeRequest::accountIsSet() const
{
    return accountIsSet_;
}

void ResetVisionActiveCodeRequest::unsetaccount()
{
    accountIsSet_ = false;
}

ActiveDTO ResetVisionActiveCodeRequest::getBody() const
{
    return body_;
}

void ResetVisionActiveCodeRequest::setBody(const ActiveDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResetVisionActiveCodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResetVisionActiveCodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


