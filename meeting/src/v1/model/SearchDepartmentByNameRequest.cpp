

#include "huaweicloud/meeting/v1/model/SearchDepartmentByNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchDepartmentByNameRequest::SearchDepartmentByNameRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
}

SearchDepartmentByNameRequest::~SearchDepartmentByNameRequest() = default;

void SearchDepartmentByNameRequest::validate()
{
}

web::json::value SearchDepartmentByNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(deptNameIsSet_) {
        val[utility::conversions::to_string_t("deptName")] = ModelBase::toJson(deptName_);
    }

    return val;
}
bool SearchDepartmentByNameRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("deptName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptName(refVal);
        }
    }
    return ok;
}


std::string SearchDepartmentByNameRequest::getXRequestId() const
{
    return xRequestId_;
}

void SearchDepartmentByNameRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SearchDepartmentByNameRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SearchDepartmentByNameRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string SearchDepartmentByNameRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void SearchDepartmentByNameRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool SearchDepartmentByNameRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void SearchDepartmentByNameRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string SearchDepartmentByNameRequest::getDeptName() const
{
    return deptName_;
}

void SearchDepartmentByNameRequest::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool SearchDepartmentByNameRequest::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void SearchDepartmentByNameRequest::unsetdeptName()
{
    deptNameIsSet_ = false;
}

}
}
}
}
}


