

#include "huaweicloud/meeting/v1/model/DisassociateVmrRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




DisassociateVmrRequest::DisassociateVmrRequest()
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

DisassociateVmrRequest::~DisassociateVmrRequest() = default;

void DisassociateVmrRequest::validate()
{
}

web::json::value DisassociateVmrRequest::toJson() const
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
bool DisassociateVmrRequest::fromJson(const web::json::value& val)
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


std::string DisassociateVmrRequest::getXRequestId() const
{
    return xRequestId_;
}

void DisassociateVmrRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DisassociateVmrRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DisassociateVmrRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string DisassociateVmrRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void DisassociateVmrRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool DisassociateVmrRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void DisassociateVmrRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string DisassociateVmrRequest::getAccount() const
{
    return account_;
}

void DisassociateVmrRequest::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool DisassociateVmrRequest::accountIsSet() const
{
    return accountIsSet_;
}

void DisassociateVmrRequest::unsetaccount()
{
    accountIsSet_ = false;
}

int32_t DisassociateVmrRequest::getAccountType() const
{
    return accountType_;
}

void DisassociateVmrRequest::setAccountType(int32_t value)
{
    accountType_ = value;
    accountTypeIsSet_ = true;
}

bool DisassociateVmrRequest::accountTypeIsSet() const
{
    return accountTypeIsSet_;
}

void DisassociateVmrRequest::unsetaccountType()
{
    accountTypeIsSet_ = false;
}

std::vector<std::string>& DisassociateVmrRequest::getBody()
{
    return body_;
}

void DisassociateVmrRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DisassociateVmrRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DisassociateVmrRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


