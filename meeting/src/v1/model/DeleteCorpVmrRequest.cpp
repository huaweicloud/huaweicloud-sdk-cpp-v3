

#include "huaweicloud/meeting/v1/model/DeleteCorpVmrRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




DeleteCorpVmrRequest::DeleteCorpVmrRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteCorpVmrRequest::~DeleteCorpVmrRequest() = default;

void DeleteCorpVmrRequest::validate()
{
}

web::json::value DeleteCorpVmrRequest::toJson() const
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
bool DeleteCorpVmrRequest::fromJson(const web::json::value& val)
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteCorpVmrRequest::getXRequestId() const
{
    return xRequestId_;
}

void DeleteCorpVmrRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteCorpVmrRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteCorpVmrRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string DeleteCorpVmrRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void DeleteCorpVmrRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool DeleteCorpVmrRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void DeleteCorpVmrRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::vector<std::string>& DeleteCorpVmrRequest::getBody()
{
    return body_;
}

void DeleteCorpVmrRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteCorpVmrRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteCorpVmrRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


