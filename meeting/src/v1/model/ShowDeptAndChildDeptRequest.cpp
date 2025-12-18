

#include "huaweicloud/meeting/v1/model/ShowDeptAndChildDeptRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowDeptAndChildDeptRequest::ShowDeptAndChildDeptRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    deptCode_ = "";
    deptCodeIsSet_ = false;
}

ShowDeptAndChildDeptRequest::~ShowDeptAndChildDeptRequest() = default;

void ShowDeptAndChildDeptRequest::validate()
{
}

web::json::value ShowDeptAndChildDeptRequest::toJson() const
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
bool ShowDeptAndChildDeptRequest::fromJson(const web::json::value& val)
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


std::string ShowDeptAndChildDeptRequest::getXRequestId() const
{
    return xRequestId_;
}

void ShowDeptAndChildDeptRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowDeptAndChildDeptRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowDeptAndChildDeptRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ShowDeptAndChildDeptRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ShowDeptAndChildDeptRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ShowDeptAndChildDeptRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ShowDeptAndChildDeptRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string ShowDeptAndChildDeptRequest::getDeptCode() const
{
    return deptCode_;
}

void ShowDeptAndChildDeptRequest::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool ShowDeptAndChildDeptRequest::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void ShowDeptAndChildDeptRequest::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

}
}
}
}
}


