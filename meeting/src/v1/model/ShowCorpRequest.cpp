

#include "huaweicloud/meeting/v1/model/ShowCorpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowCorpRequest::ShowCorpRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

ShowCorpRequest::~ShowCorpRequest() = default;

void ShowCorpRequest::validate()
{
}

web::json::value ShowCorpRequest::toJson() const
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
bool ShowCorpRequest::fromJson(const web::json::value& val)
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


std::string ShowCorpRequest::getXRequestId() const
{
    return xRequestId_;
}

void ShowCorpRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowCorpRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowCorpRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ShowCorpRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ShowCorpRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ShowCorpRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ShowCorpRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string ShowCorpRequest::getId() const
{
    return id_;
}

void ShowCorpRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowCorpRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowCorpRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


