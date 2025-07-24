

#include "huaweicloud/cloudtest/v1/model/RunTestCaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




RunTestCaseResponse::RunTestCaseResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    errorDetailIsSet_ = false;
}

RunTestCaseResponse::~RunTestCaseResponse() = default;

void RunTestCaseResponse::validate()
{
}

web::json::value RunTestCaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }
    if(errorDetailIsSet_) {
        val[utility::conversions::to_string_t("error_detail")] = ModelBase::toJson(errorDetail_);
    }

    return val;
}
bool RunTestCaseResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("error_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_detail"));
        if(!fieldValue.is_null())
        {
            ErrorDetailInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorDetail(refVal);
        }
    }
    return ok;
}


std::string RunTestCaseResponse::getErrorCode() const
{
    return errorCode_;
}

void RunTestCaseResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool RunTestCaseResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void RunTestCaseResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string RunTestCaseResponse::getErrorMsg() const
{
    return errorMsg_;
}

void RunTestCaseResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool RunTestCaseResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void RunTestCaseResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

ErrorDetailInfo RunTestCaseResponse::getErrorDetail() const
{
    return errorDetail_;
}

void RunTestCaseResponse::setErrorDetail(const ErrorDetailInfo& value)
{
    errorDetail_ = value;
    errorDetailIsSet_ = true;
}

bool RunTestCaseResponse::errorDetailIsSet() const
{
    return errorDetailIsSet_;
}

void RunTestCaseResponse::unseterrorDetail()
{
    errorDetailIsSet_ = false;
}

}
}
}
}
}


