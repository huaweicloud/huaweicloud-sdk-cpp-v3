

#include "huaweicloud/meeting/v1/model/AddCorpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AddCorpRequest::AddCorpRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

AddCorpRequest::~AddCorpRequest() = default;

void AddCorpRequest::validate()
{
}

web::json::value AddCorpRequest::toJson() const
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
bool AddCorpRequest::fromJson(const web::json::value& val)
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
            AddCorpDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddCorpRequest::getXRequestId() const
{
    return xRequestId_;
}

void AddCorpRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool AddCorpRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void AddCorpRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string AddCorpRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void AddCorpRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool AddCorpRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void AddCorpRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

AddCorpDTO AddCorpRequest::getBody() const
{
    return body_;
}

void AddCorpRequest::setBody(const AddCorpDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddCorpRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddCorpRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


