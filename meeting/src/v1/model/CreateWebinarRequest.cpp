

#include "huaweicloud/meeting/v1/model/CreateWebinarRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CreateWebinarRequest::CreateWebinarRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateWebinarRequest::~CreateWebinarRequest() = default;

void CreateWebinarRequest::validate()
{
}

web::json::value CreateWebinarRequest::toJson() const
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
bool CreateWebinarRequest::fromJson(const web::json::value& val)
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
            OpenScheduleConfReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateWebinarRequest::getXRequestId() const
{
    return xRequestId_;
}

void CreateWebinarRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateWebinarRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateWebinarRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string CreateWebinarRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void CreateWebinarRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool CreateWebinarRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void CreateWebinarRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

OpenScheduleConfReq CreateWebinarRequest::getBody() const
{
    return body_;
}

void CreateWebinarRequest::setBody(const OpenScheduleConfReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateWebinarRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateWebinarRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


