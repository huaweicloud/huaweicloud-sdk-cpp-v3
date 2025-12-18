

#include "huaweicloud/meeting/v1/model/DeleteVisionActiveCodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




DeleteVisionActiveCodeRequest::DeleteVisionActiveCodeRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteVisionActiveCodeRequest::~DeleteVisionActiveCodeRequest() = default;

void DeleteVisionActiveCodeRequest::validate()
{
}

web::json::value DeleteVisionActiveCodeRequest::toJson() const
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
bool DeleteVisionActiveCodeRequest::fromJson(const web::json::value& val)
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


std::string DeleteVisionActiveCodeRequest::getXRequestId() const
{
    return xRequestId_;
}

void DeleteVisionActiveCodeRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteVisionActiveCodeRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteVisionActiveCodeRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string DeleteVisionActiveCodeRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void DeleteVisionActiveCodeRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool DeleteVisionActiveCodeRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void DeleteVisionActiveCodeRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::vector<std::string>& DeleteVisionActiveCodeRequest::getBody()
{
    return body_;
}

void DeleteVisionActiveCodeRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteVisionActiveCodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteVisionActiveCodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


