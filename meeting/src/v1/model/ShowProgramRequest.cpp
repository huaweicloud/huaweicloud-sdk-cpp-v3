

#include "huaweicloud/meeting/v1/model/ShowProgramRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowProgramRequest::ShowProgramRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

ShowProgramRequest::~ShowProgramRequest() = default;

void ShowProgramRequest::validate()
{
}

web::json::value ShowProgramRequest::toJson() const
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
bool ShowProgramRequest::fromJson(const web::json::value& val)
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


std::string ShowProgramRequest::getXRequestId() const
{
    return xRequestId_;
}

void ShowProgramRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowProgramRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowProgramRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ShowProgramRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ShowProgramRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ShowProgramRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ShowProgramRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string ShowProgramRequest::getId() const
{
    return id_;
}

void ShowProgramRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowProgramRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowProgramRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


