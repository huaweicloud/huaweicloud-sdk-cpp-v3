

#include "huaweicloud/meeting/v1/model/UpdateUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateUserRequest::UpdateUserRequest()
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

UpdateUserRequest::~UpdateUserRequest() = default;

void UpdateUserRequest::validate()
{
}

web::json::value UpdateUserRequest::toJson() const
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
bool UpdateUserRequest::fromJson(const web::json::value& val)
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
            ModUserDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateUserRequest::getXRequestId() const
{
    return xRequestId_;
}

void UpdateUserRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateUserRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateUserRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string UpdateUserRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void UpdateUserRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool UpdateUserRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void UpdateUserRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string UpdateUserRequest::getAccount() const
{
    return account_;
}

void UpdateUserRequest::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool UpdateUserRequest::accountIsSet() const
{
    return accountIsSet_;
}

void UpdateUserRequest::unsetaccount()
{
    accountIsSet_ = false;
}

int32_t UpdateUserRequest::getAccountType() const
{
    return accountType_;
}

void UpdateUserRequest::setAccountType(int32_t value)
{
    accountType_ = value;
    accountTypeIsSet_ = true;
}

bool UpdateUserRequest::accountTypeIsSet() const
{
    return accountTypeIsSet_;
}

void UpdateUserRequest::unsetaccountType()
{
    accountTypeIsSet_ = false;
}

ModUserDTO UpdateUserRequest::getBody() const
{
    return body_;
}

void UpdateUserRequest::setBody(const ModUserDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateUserRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateUserRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


