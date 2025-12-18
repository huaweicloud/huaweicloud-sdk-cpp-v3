

#include "huaweicloud/meeting/v1/model/AddDepartmentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AddDepartmentRequest::AddDepartmentRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

AddDepartmentRequest::~AddDepartmentRequest() = default;

void AddDepartmentRequest::validate()
{
}

web::json::value AddDepartmentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddDepartmentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeptDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddDepartmentRequest::getXRequestId() const
{
    return xRequestId_;
}

void AddDepartmentRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool AddDepartmentRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void AddDepartmentRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string AddDepartmentRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void AddDepartmentRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool AddDepartmentRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void AddDepartmentRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

DeptDTO AddDepartmentRequest::getBody() const
{
    return body_;
}

void AddDepartmentRequest::setBody(const DeptDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddDepartmentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddDepartmentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


