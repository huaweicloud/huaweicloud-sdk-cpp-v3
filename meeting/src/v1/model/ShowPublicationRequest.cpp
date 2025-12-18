

#include "huaweicloud/meeting/v1/model/ShowPublicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowPublicationRequest::ShowPublicationRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

ShowPublicationRequest::~ShowPublicationRequest() = default;

void ShowPublicationRequest::validate()
{
}

web::json::value ShowPublicationRequest::toJson() const
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

    return val;
}
bool ShowPublicationRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowPublicationRequest::getXRequestId() const
{
    return xRequestId_;
}

void ShowPublicationRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowPublicationRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowPublicationRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ShowPublicationRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ShowPublicationRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ShowPublicationRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ShowPublicationRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string ShowPublicationRequest::getId() const
{
    return id_;
}

void ShowPublicationRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowPublicationRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowPublicationRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


