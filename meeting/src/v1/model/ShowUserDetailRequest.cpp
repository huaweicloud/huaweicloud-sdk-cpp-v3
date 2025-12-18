

#include "huaweicloud/meeting/v1/model/ShowUserDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowUserDetailRequest::ShowUserDetailRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    account_ = "";
    accountIsSet_ = false;
    accountType_ = 0;
    accountTypeIsSet_ = false;
}

ShowUserDetailRequest::~ShowUserDetailRequest() = default;

void ShowUserDetailRequest::validate()
{
}

web::json::value ShowUserDetailRequest::toJson() const
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

    return val;
}
bool ShowUserDetailRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowUserDetailRequest::getXRequestId() const
{
    return xRequestId_;
}

void ShowUserDetailRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowUserDetailRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowUserDetailRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ShowUserDetailRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ShowUserDetailRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ShowUserDetailRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ShowUserDetailRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string ShowUserDetailRequest::getAccount() const
{
    return account_;
}

void ShowUserDetailRequest::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool ShowUserDetailRequest::accountIsSet() const
{
    return accountIsSet_;
}

void ShowUserDetailRequest::unsetaccount()
{
    accountIsSet_ = false;
}

int32_t ShowUserDetailRequest::getAccountType() const
{
    return accountType_;
}

void ShowUserDetailRequest::setAccountType(int32_t value)
{
    accountType_ = value;
    accountTypeIsSet_ = true;
}

bool ShowUserDetailRequest::accountTypeIsSet() const
{
    return accountTypeIsSet_;
}

void ShowUserDetailRequest::unsetaccountType()
{
    accountTypeIsSet_ = false;
}

}
}
}
}
}


