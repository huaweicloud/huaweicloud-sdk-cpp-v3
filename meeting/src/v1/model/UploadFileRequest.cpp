

#include "huaweicloud/meeting/v1/model/UploadFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UploadFileRequest::UploadFileRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UploadFileRequest::~UploadFileRequest() = default;

void UploadFileRequest::validate()
{
}

web::json::value UploadFileRequest::toJson() const
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
bool UploadFileRequest::fromJson(const web::json::value& val)
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
            UploadFileRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UploadFileRequest::getXRequestId() const
{
    return xRequestId_;
}

void UploadFileRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UploadFileRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UploadFileRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string UploadFileRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void UploadFileRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool UploadFileRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void UploadFileRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

UploadFileRequestBody UploadFileRequest::getBody() const
{
    return body_;
}

void UploadFileRequest::setBody(const UploadFileRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UploadFileRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UploadFileRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


