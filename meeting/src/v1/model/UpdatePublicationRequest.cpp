

#include "huaweicloud/meeting/v1/model/UpdatePublicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdatePublicationRequest::UpdatePublicationRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePublicationRequest::~UpdatePublicationRequest() = default;

void UpdatePublicationRequest::validate()
{
}

web::json::value UpdatePublicationRequest::toJson() const
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
bool UpdatePublicationRequest::fromJson(const web::json::value& val)
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
            UpdatePublicationRequestDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePublicationRequest::getXRequestId() const
{
    return xRequestId_;
}

void UpdatePublicationRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdatePublicationRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdatePublicationRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string UpdatePublicationRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void UpdatePublicationRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool UpdatePublicationRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void UpdatePublicationRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string UpdatePublicationRequest::getId() const
{
    return id_;
}

void UpdatePublicationRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdatePublicationRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdatePublicationRequest::unsetid()
{
    idIsSet_ = false;
}

UpdatePublicationRequestDTO UpdatePublicationRequest::getBody() const
{
    return body_;
}

void UpdatePublicationRequest::setBody(const UpdatePublicationRequestDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePublicationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePublicationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


