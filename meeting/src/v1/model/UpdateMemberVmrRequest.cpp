

#include "huaweicloud/meeting/v1/model/UpdateMemberVmrRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateMemberVmrRequest::UpdateMemberVmrRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateMemberVmrRequest::~UpdateMemberVmrRequest() = default;

void UpdateMemberVmrRequest::validate()
{
}

web::json::value UpdateMemberVmrRequest::toJson() const
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
bool UpdateMemberVmrRequest::fromJson(const web::json::value& val)
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
            ModVmrDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateMemberVmrRequest::getXRequestId() const
{
    return xRequestId_;
}

void UpdateMemberVmrRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateMemberVmrRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateMemberVmrRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string UpdateMemberVmrRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void UpdateMemberVmrRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool UpdateMemberVmrRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void UpdateMemberVmrRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string UpdateMemberVmrRequest::getId() const
{
    return id_;
}

void UpdateMemberVmrRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateMemberVmrRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateMemberVmrRequest::unsetid()
{
    idIsSet_ = false;
}

ModVmrDTO UpdateMemberVmrRequest::getBody() const
{
    return body_;
}

void UpdateMemberVmrRequest::setBody(const ModVmrDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMemberVmrRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMemberVmrRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


