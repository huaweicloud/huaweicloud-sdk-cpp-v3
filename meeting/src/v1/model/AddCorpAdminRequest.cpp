

#include "huaweicloud/meeting/v1/model/AddCorpAdminRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AddCorpAdminRequest::AddCorpAdminRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    accountType_ = 0;
    accountTypeIsSet_ = false;
    bodyIsSet_ = false;
}

AddCorpAdminRequest::~AddCorpAdminRequest() = default;

void AddCorpAdminRequest::validate()
{
}

web::json::value AddCorpAdminRequest::toJson() const
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
bool AddCorpAdminRequest::fromJson(const web::json::value& val)
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
            CorpAdminDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddCorpAdminRequest::getXRequestId() const
{
    return xRequestId_;
}

void AddCorpAdminRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool AddCorpAdminRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void AddCorpAdminRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string AddCorpAdminRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void AddCorpAdminRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool AddCorpAdminRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void AddCorpAdminRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

int32_t AddCorpAdminRequest::getAccountType() const
{
    return accountType_;
}

void AddCorpAdminRequest::setAccountType(int32_t value)
{
    accountType_ = value;
    accountTypeIsSet_ = true;
}

bool AddCorpAdminRequest::accountTypeIsSet() const
{
    return accountTypeIsSet_;
}

void AddCorpAdminRequest::unsetaccountType()
{
    accountTypeIsSet_ = false;
}

CorpAdminDTO AddCorpAdminRequest::getBody() const
{
    return body_;
}

void AddCorpAdminRequest::setBody(const CorpAdminDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddCorpAdminRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddCorpAdminRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


