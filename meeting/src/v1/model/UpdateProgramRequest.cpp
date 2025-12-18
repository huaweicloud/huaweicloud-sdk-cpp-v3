

#include "huaweicloud/meeting/v1/model/UpdateProgramRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateProgramRequest::UpdateProgramRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProgramRequest::~UpdateProgramRequest() = default;

void UpdateProgramRequest::validate()
{
}

web::json::value UpdateProgramRequest::toJson() const
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
bool UpdateProgramRequest::fromJson(const web::json::value& val)
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
            UpdateProgramRequestDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateProgramRequest::getXRequestId() const
{
    return xRequestId_;
}

void UpdateProgramRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateProgramRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateProgramRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string UpdateProgramRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void UpdateProgramRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool UpdateProgramRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void UpdateProgramRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string UpdateProgramRequest::getId() const
{
    return id_;
}

void UpdateProgramRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateProgramRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateProgramRequest::unsetid()
{
    idIsSet_ = false;
}

UpdateProgramRequestDTO UpdateProgramRequest::getBody() const
{
    return body_;
}

void UpdateProgramRequest::setBody(const UpdateProgramRequestDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProgramRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProgramRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


