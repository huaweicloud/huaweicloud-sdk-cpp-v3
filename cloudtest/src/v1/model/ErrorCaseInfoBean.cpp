

#include "huaweicloud/cloudtest/v1/model/ErrorCaseInfoBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ErrorCaseInfoBean::ErrorCaseInfoBean()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    testcaseId_ = "";
    testcaseIdIsSet_ = false;
}

ErrorCaseInfoBean::~ErrorCaseInfoBean() = default;

void ErrorCaseInfoBean::validate()
{
}

web::json::value ErrorCaseInfoBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }
    if(testcaseIdIsSet_) {
        val[utility::conversions::to_string_t("testcase_id")] = ModelBase::toJson(testcaseId_);
    }

    return val;
}
bool ErrorCaseInfoBean::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testcase_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseId(refVal);
        }
    }
    return ok;
}


std::string ErrorCaseInfoBean::getErrorCode() const
{
    return errorCode_;
}

void ErrorCaseInfoBean::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ErrorCaseInfoBean::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ErrorCaseInfoBean::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ErrorCaseInfoBean::getErrorMsg() const
{
    return errorMsg_;
}

void ErrorCaseInfoBean::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ErrorCaseInfoBean::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ErrorCaseInfoBean::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

std::string ErrorCaseInfoBean::getTestcaseId() const
{
    return testcaseId_;
}

void ErrorCaseInfoBean::setTestcaseId(const std::string& value)
{
    testcaseId_ = value;
    testcaseIdIsSet_ = true;
}

bool ErrorCaseInfoBean::testcaseIdIsSet() const
{
    return testcaseIdIsSet_;
}

void ErrorCaseInfoBean::unsettestcaseId()
{
    testcaseIdIsSet_ = false;
}

}
}
}
}
}


