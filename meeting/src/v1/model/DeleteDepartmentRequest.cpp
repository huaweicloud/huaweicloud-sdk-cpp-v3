

#include "huaweicloud/meeting/v1/model/DeleteDepartmentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




DeleteDepartmentRequest::DeleteDepartmentRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    deptCode_ = "";
    deptCodeIsSet_ = false;
}

DeleteDepartmentRequest::~DeleteDepartmentRequest() = default;

void DeleteDepartmentRequest::validate()
{
}

web::json::value DeleteDepartmentRequest::toJson() const
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
bool DeleteDepartmentRequest::fromJson(const web::json::value& val)
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


std::string DeleteDepartmentRequest::getXRequestId() const
{
    return xRequestId_;
}

void DeleteDepartmentRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteDepartmentRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteDepartmentRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string DeleteDepartmentRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void DeleteDepartmentRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool DeleteDepartmentRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void DeleteDepartmentRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string DeleteDepartmentRequest::getDeptCode() const
{
    return deptCode_;
}

void DeleteDepartmentRequest::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool DeleteDepartmentRequest::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void DeleteDepartmentRequest::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

}
}
}
}
}


