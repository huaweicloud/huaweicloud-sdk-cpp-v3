

#include "huaweicloud/meeting/v1/model/BatchUpdateUserStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




BatchUpdateUserStatusRequest::BatchUpdateUserStatusRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    value_ = 0;
    valueIsSet_ = false;
    accountType_ = 0;
    accountTypeIsSet_ = false;
    bodyIsSet_ = false;
}

BatchUpdateUserStatusRequest::~BatchUpdateUserStatusRequest() = default;

void BatchUpdateUserStatusRequest::validate()
{
}

web::json::value BatchUpdateUserStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(accountTypeIsSet_) {
        val[utility::conversions::to_string_t("accountType")] = ModelBase::toJson(accountType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchUpdateUserStatusRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
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


std::string BatchUpdateUserStatusRequest::getXRequestId() const
{
    return xRequestId_;
}

void BatchUpdateUserStatusRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchUpdateUserStatusRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchUpdateUserStatusRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string BatchUpdateUserStatusRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void BatchUpdateUserStatusRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool BatchUpdateUserStatusRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void BatchUpdateUserStatusRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

int32_t BatchUpdateUserStatusRequest::getValue() const
{
    return value_;
}

void BatchUpdateUserStatusRequest::setValue(int32_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool BatchUpdateUserStatusRequest::valueIsSet() const
{
    return valueIsSet_;
}

void BatchUpdateUserStatusRequest::unsetvalue()
{
    valueIsSet_ = false;
}

int32_t BatchUpdateUserStatusRequest::getAccountType() const
{
    return accountType_;
}

void BatchUpdateUserStatusRequest::setAccountType(int32_t value)
{
    accountType_ = value;
    accountTypeIsSet_ = true;
}

bool BatchUpdateUserStatusRequest::accountTypeIsSet() const
{
    return accountTypeIsSet_;
}

void BatchUpdateUserStatusRequest::unsetaccountType()
{
    accountTypeIsSet_ = false;
}

std::vector<std::string>& BatchUpdateUserStatusRequest::getBody()
{
    return body_;
}

void BatchUpdateUserStatusRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateUserStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateUserStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


