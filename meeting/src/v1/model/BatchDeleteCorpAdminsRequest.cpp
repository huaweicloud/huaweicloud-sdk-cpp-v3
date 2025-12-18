

#include "huaweicloud/meeting/v1/model/BatchDeleteCorpAdminsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




BatchDeleteCorpAdminsRequest::BatchDeleteCorpAdminsRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    accountType_ = 0;
    accountTypeIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteCorpAdminsRequest::~BatchDeleteCorpAdminsRequest() = default;

void BatchDeleteCorpAdminsRequest::validate()
{
}

web::json::value BatchDeleteCorpAdminsRequest::toJson() const
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
bool BatchDeleteCorpAdminsRequest::fromJson(const web::json::value& val)
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


std::string BatchDeleteCorpAdminsRequest::getXRequestId() const
{
    return xRequestId_;
}

void BatchDeleteCorpAdminsRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchDeleteCorpAdminsRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchDeleteCorpAdminsRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string BatchDeleteCorpAdminsRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void BatchDeleteCorpAdminsRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool BatchDeleteCorpAdminsRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void BatchDeleteCorpAdminsRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

int32_t BatchDeleteCorpAdminsRequest::getAccountType() const
{
    return accountType_;
}

void BatchDeleteCorpAdminsRequest::setAccountType(int32_t value)
{
    accountType_ = value;
    accountTypeIsSet_ = true;
}

bool BatchDeleteCorpAdminsRequest::accountTypeIsSet() const
{
    return accountTypeIsSet_;
}

void BatchDeleteCorpAdminsRequest::unsetaccountType()
{
    accountTypeIsSet_ = false;
}

std::vector<std::string>& BatchDeleteCorpAdminsRequest::getBody()
{
    return body_;
}

void BatchDeleteCorpAdminsRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteCorpAdminsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteCorpAdminsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


