

#include "huaweicloud/cts/v3/model/CheckBucketResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




CheckBucketResponse::CheckBucketResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
    responseCode_ = 0;
    responseCodeIsSet_ = false;
    success_ = false;
    successIsSet_ = false;
}

CheckBucketResponse::~CheckBucketResponse() = default;

void CheckBucketResponse::validate()
{
}

web::json::value CheckBucketResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }
    if(responseCodeIsSet_) {
        val[utility::conversions::to_string_t("response_code")] = ModelBase::toJson(responseCode_);
    }
    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }

    return val;
}
bool CheckBucketResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("response_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response_code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponseCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    return ok;
}


std::string CheckBucketResponse::getErrorCode() const
{
    return errorCode_;
}

void CheckBucketResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool CheckBucketResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void CheckBucketResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string CheckBucketResponse::getErrorMessage() const
{
    return errorMessage_;
}

void CheckBucketResponse::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool CheckBucketResponse::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void CheckBucketResponse::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

int32_t CheckBucketResponse::getResponseCode() const
{
    return responseCode_;
}

void CheckBucketResponse::setResponseCode(int32_t value)
{
    responseCode_ = value;
    responseCodeIsSet_ = true;
}

bool CheckBucketResponse::responseCodeIsSet() const
{
    return responseCodeIsSet_;
}

void CheckBucketResponse::unsetresponseCode()
{
    responseCodeIsSet_ = false;
}

bool CheckBucketResponse::isSuccess() const
{
    return success_;
}

void CheckBucketResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool CheckBucketResponse::successIsSet() const
{
    return successIsSet_;
}

void CheckBucketResponse::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


