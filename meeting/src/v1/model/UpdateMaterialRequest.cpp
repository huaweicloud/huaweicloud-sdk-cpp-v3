

#include "huaweicloud/meeting/v1/model/UpdateMaterialRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateMaterialRequest::UpdateMaterialRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateMaterialRequest::~UpdateMaterialRequest() = default;

void UpdateMaterialRequest::validate()
{
}

web::json::value UpdateMaterialRequest::toJson() const
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
bool UpdateMaterialRequest::fromJson(const web::json::value& val)
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
            UpdateMaterialRequestDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateMaterialRequest::getXRequestId() const
{
    return xRequestId_;
}

void UpdateMaterialRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateMaterialRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateMaterialRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string UpdateMaterialRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void UpdateMaterialRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool UpdateMaterialRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void UpdateMaterialRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string UpdateMaterialRequest::getId() const
{
    return id_;
}

void UpdateMaterialRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateMaterialRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateMaterialRequest::unsetid()
{
    idIsSet_ = false;
}

UpdateMaterialRequestDTO UpdateMaterialRequest::getBody() const
{
    return body_;
}

void UpdateMaterialRequest::setBody(const UpdateMaterialRequestDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMaterialRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMaterialRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


