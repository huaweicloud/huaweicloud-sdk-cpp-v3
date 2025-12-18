

#include "huaweicloud/meeting/v1/model/BatchDeleteUsersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




BatchDeleteUsersRequest::BatchDeleteUsersRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    accountType_ = 0;
    accountTypeIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteUsersRequest::~BatchDeleteUsersRequest() = default;

void BatchDeleteUsersRequest::validate()
{
}

web::json::value BatchDeleteUsersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(accountTypeIsSet_) {
        val[utility::conversions::to_string_t("accountType")] = ModelBase::toJson(accountType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteUsersRequest::fromJson(const web::json::value& val)
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


std::string BatchDeleteUsersRequest::getXRequestId() const
{
    return xRequestId_;
}

void BatchDeleteUsersRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchDeleteUsersRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchDeleteUsersRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string BatchDeleteUsersRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void BatchDeleteUsersRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool BatchDeleteUsersRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void BatchDeleteUsersRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

int32_t BatchDeleteUsersRequest::getAccountType() const
{
    return accountType_;
}

void BatchDeleteUsersRequest::setAccountType(int32_t value)
{
    accountType_ = value;
    accountTypeIsSet_ = true;
}

bool BatchDeleteUsersRequest::accountTypeIsSet() const
{
    return accountTypeIsSet_;
}

void BatchDeleteUsersRequest::unsetaccountType()
{
    accountTypeIsSet_ = false;
}

std::vector<std::string>& BatchDeleteUsersRequest::getBody()
{
    return body_;
}

void BatchDeleteUsersRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteUsersRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteUsersRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


