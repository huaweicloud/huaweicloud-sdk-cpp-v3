

#include "huaweicloud/meeting/v1/model/ResetActivecodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ResetActivecodeRequest::ResetActivecodeRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    sn_ = "";
    snIsSet_ = false;
    bodyIsSet_ = false;
}

ResetActivecodeRequest::~ResetActivecodeRequest() = default;

void ResetActivecodeRequest::validate()
{
}

web::json::value ResetActivecodeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(snIsSet_) {
        val[utility::conversions::to_string_t("sn")] = ModelBase::toJson(sn_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ResetActivecodeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ActiveDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResetActivecodeRequest::getXRequestId() const
{
    return xRequestId_;
}

void ResetActivecodeRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ResetActivecodeRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ResetActivecodeRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ResetActivecodeRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ResetActivecodeRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ResetActivecodeRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ResetActivecodeRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string ResetActivecodeRequest::getSn() const
{
    return sn_;
}

void ResetActivecodeRequest::setSn(const std::string& value)
{
    sn_ = value;
    snIsSet_ = true;
}

bool ResetActivecodeRequest::snIsSet() const
{
    return snIsSet_;
}

void ResetActivecodeRequest::unsetsn()
{
    snIsSet_ = false;
}

ActiveDTO ResetActivecodeRequest::getBody() const
{
    return body_;
}

void ResetActivecodeRequest::setBody(const ActiveDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResetActivecodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResetActivecodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


