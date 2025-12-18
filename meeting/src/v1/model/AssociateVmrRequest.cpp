

#include "huaweicloud/meeting/v1/model/AssociateVmrRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AssociateVmrRequest::AssociateVmrRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    account_ = "";
    accountIsSet_ = false;
    accountType_ = 0;
    accountTypeIsSet_ = false;
    bodyIsSet_ = false;
}

AssociateVmrRequest::~AssociateVmrRequest() = default;

void AssociateVmrRequest::validate()
{
}

web::json::value AssociateVmrRequest::toJson() const
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
    if(accountTypeIsSet_) {
        val[utility::conversions::to_string_t("accountType")] = ModelBase::toJson(accountType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AssociateVmrRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("accountType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accountType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountType(refVal);
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


std::string AssociateVmrRequest::getXRequestId() const
{
    return xRequestId_;
}

void AssociateVmrRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool AssociateVmrRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void AssociateVmrRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string AssociateVmrRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void AssociateVmrRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool AssociateVmrRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void AssociateVmrRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string AssociateVmrRequest::getAccount() const
{
    return account_;
}

void AssociateVmrRequest::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool AssociateVmrRequest::accountIsSet() const
{
    return accountIsSet_;
}

void AssociateVmrRequest::unsetaccount()
{
    accountIsSet_ = false;
}

int32_t AssociateVmrRequest::getAccountType() const
{
    return accountType_;
}

void AssociateVmrRequest::setAccountType(int32_t value)
{
    accountType_ = value;
    accountTypeIsSet_ = true;
}

bool AssociateVmrRequest::accountTypeIsSet() const
{
    return accountTypeIsSet_;
}

void AssociateVmrRequest::unsetaccountType()
{
    accountTypeIsSet_ = false;
}

std::vector<std::string>& AssociateVmrRequest::getBody()
{
    return body_;
}

void AssociateVmrRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AssociateVmrRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AssociateVmrRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


