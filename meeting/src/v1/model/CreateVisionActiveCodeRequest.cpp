

#include "huaweicloud/meeting/v1/model/CreateVisionActiveCodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CreateVisionActiveCodeRequest::CreateVisionActiveCodeRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateVisionActiveCodeRequest::~CreateVisionActiveCodeRequest() = default;

void CreateVisionActiveCodeRequest::validate()
{
}

web::json::value CreateVisionActiveCodeRequest::toJson() const
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
bool CreateVisionActiveCodeRequest::fromJson(const web::json::value& val)
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
            VisionActiveCodeDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateVisionActiveCodeRequest::getXRequestId() const
{
    return xRequestId_;
}

void CreateVisionActiveCodeRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateVisionActiveCodeRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateVisionActiveCodeRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string CreateVisionActiveCodeRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void CreateVisionActiveCodeRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool CreateVisionActiveCodeRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void CreateVisionActiveCodeRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

VisionActiveCodeDTO CreateVisionActiveCodeRequest::getBody() const
{
    return body_;
}

void CreateVisionActiveCodeRequest::setBody(const VisionActiveCodeDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateVisionActiveCodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateVisionActiveCodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


