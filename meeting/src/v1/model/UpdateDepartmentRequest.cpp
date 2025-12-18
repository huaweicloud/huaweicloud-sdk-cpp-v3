

#include "huaweicloud/meeting/v1/model/UpdateDepartmentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateDepartmentRequest::UpdateDepartmentRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    deptCode_ = "";
    deptCodeIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDepartmentRequest::~UpdateDepartmentRequest() = default;

void UpdateDepartmentRequest::validate()
{
}

web::json::value UpdateDepartmentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(deptCodeIsSet_) {
        val[utility::conversions::to_string_t("dept_code")] = ModelBase::toJson(deptCode_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDepartmentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("dept_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dept_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModDeptDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDepartmentRequest::getXRequestId() const
{
    return xRequestId_;
}

void UpdateDepartmentRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateDepartmentRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateDepartmentRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string UpdateDepartmentRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void UpdateDepartmentRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool UpdateDepartmentRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void UpdateDepartmentRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string UpdateDepartmentRequest::getDeptCode() const
{
    return deptCode_;
}

void UpdateDepartmentRequest::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool UpdateDepartmentRequest::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void UpdateDepartmentRequest::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

ModDeptDTO UpdateDepartmentRequest::getBody() const
{
    return body_;
}

void UpdateDepartmentRequest::setBody(const ModDeptDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDepartmentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDepartmentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


