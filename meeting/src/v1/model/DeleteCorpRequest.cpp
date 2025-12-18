

#include "huaweicloud/meeting/v1/model/DeleteCorpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




DeleteCorpRequest::DeleteCorpRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DeleteCorpRequest::~DeleteCorpRequest() = default;

void DeleteCorpRequest::validate()
{
}

web::json::value DeleteCorpRequest::toJson() const
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
bool DeleteCorpRequest::fromJson(const web::json::value& val)
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


std::string DeleteCorpRequest::getXRequestId() const
{
    return xRequestId_;
}

void DeleteCorpRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteCorpRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteCorpRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string DeleteCorpRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void DeleteCorpRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool DeleteCorpRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void DeleteCorpRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string DeleteCorpRequest::getId() const
{
    return id_;
}

void DeleteCorpRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteCorpRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteCorpRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


