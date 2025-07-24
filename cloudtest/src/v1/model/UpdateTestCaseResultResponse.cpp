

#include "huaweicloud/cloudtest/v1/model/UpdateTestCaseResultResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateTestCaseResultResponse::UpdateTestCaseResultResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    errorDetailIsSet_ = false;
}

UpdateTestCaseResultResponse::~UpdateTestCaseResultResponse() = default;

void UpdateTestCaseResultResponse::validate()
{
}

web::json::value UpdateTestCaseResultResponse::toJson() const
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
bool UpdateTestCaseResultResponse::fromJson(const web::json::value& val)
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


std::string UpdateTestCaseResultResponse::getErrorCode() const
{
    return errorCode_;
}

void UpdateTestCaseResultResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool UpdateTestCaseResultResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void UpdateTestCaseResultResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string UpdateTestCaseResultResponse::getErrorMsg() const
{
    return errorMsg_;
}

void UpdateTestCaseResultResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool UpdateTestCaseResultResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void UpdateTestCaseResultResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

ErrorDetailInfo UpdateTestCaseResultResponse::getErrorDetail() const
{
    return errorDetail_;
}

void UpdateTestCaseResultResponse::setErrorDetail(const ErrorDetailInfo& value)
{
    errorDetail_ = value;
    errorDetailIsSet_ = true;
}

bool UpdateTestCaseResultResponse::errorDetailIsSet() const
{
    return errorDetailIsSet_;
}

void UpdateTestCaseResultResponse::unseterrorDetail()
{
    errorDetailIsSet_ = false;
}

}
}
}
}
}


