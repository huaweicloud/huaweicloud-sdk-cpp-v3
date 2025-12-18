

#include "huaweicloud/meeting/v1/model/UpdateCorpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateCorpRequest::UpdateCorpRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateCorpRequest::~UpdateCorpRequest() = default;

void UpdateCorpRequest::validate()
{
}

web::json::value UpdateCorpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateCorpRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModCorpDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateCorpRequest::getXRequestId() const
{
    return xRequestId_;
}

void UpdateCorpRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateCorpRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateCorpRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string UpdateCorpRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void UpdateCorpRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool UpdateCorpRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void UpdateCorpRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string UpdateCorpRequest::getId() const
{
    return id_;
}

void UpdateCorpRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateCorpRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateCorpRequest::unsetid()
{
    idIsSet_ = false;
}

ModCorpDTO UpdateCorpRequest::getBody() const
{
    return body_;
}

void UpdateCorpRequest::setBody(const ModCorpDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateCorpRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateCorpRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


