

#include "huaweicloud/meeting/v1/model/ShowDepartmentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowDepartmentRequest::ShowDepartmentRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    deptCode_ = "";
    deptCodeIsSet_ = false;
}

ShowDepartmentRequest::~ShowDepartmentRequest() = default;

void ShowDepartmentRequest::validate()
{
}

web::json::value ShowDepartmentRequest::toJson() const
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

    return val;
}
bool ShowDepartmentRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowDepartmentRequest::getXRequestId() const
{
    return xRequestId_;
}

void ShowDepartmentRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowDepartmentRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowDepartmentRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ShowDepartmentRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ShowDepartmentRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ShowDepartmentRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ShowDepartmentRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string ShowDepartmentRequest::getDeptCode() const
{
    return deptCode_;
}

void ShowDepartmentRequest::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool ShowDepartmentRequest::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void ShowDepartmentRequest::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

}
}
}
}
}


