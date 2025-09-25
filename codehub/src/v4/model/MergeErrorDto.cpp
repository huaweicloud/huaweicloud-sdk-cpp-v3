

#include "huaweicloud/codehub/v4/model/MergeErrorDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




MergeErrorDto::MergeErrorDto()
{
    mergeUserName_ = "";
    mergeUserNameIsSet_ = false;
    mergeStartTime_ = "";
    mergeStartTimeIsSet_ = false;
    errorTitle_ = "";
    errorTitleIsSet_ = false;
    httpCodeStatus_ = "";
    httpCodeStatusIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
}

MergeErrorDto::~MergeErrorDto() = default;

void MergeErrorDto::validate()
{
}

web::json::value MergeErrorDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(mergeUserNameIsSet_) {
        val[utility::conversions::to_string_t("merge_user_name")] = ModelBase::toJson(mergeUserName_);
    }
    if(mergeStartTimeIsSet_) {
        val[utility::conversions::to_string_t("merge_start_time")] = ModelBase::toJson(mergeStartTime_);
    }
    if(errorTitleIsSet_) {
        val[utility::conversions::to_string_t("error_title")] = ModelBase::toJson(errorTitle_);
    }
    if(httpCodeStatusIsSet_) {
        val[utility::conversions::to_string_t("http_code_status")] = ModelBase::toJson(httpCodeStatus_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }

    return val;
}
bool MergeErrorDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("merge_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http_code_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_code_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpCodeStatus(refVal);
        }
    }
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
    return ok;
}


std::string MergeErrorDto::getMergeUserName() const
{
    return mergeUserName_;
}

void MergeErrorDto::setMergeUserName(const std::string& value)
{
    mergeUserName_ = value;
    mergeUserNameIsSet_ = true;
}

bool MergeErrorDto::mergeUserNameIsSet() const
{
    return mergeUserNameIsSet_;
}

void MergeErrorDto::unsetmergeUserName()
{
    mergeUserNameIsSet_ = false;
}

std::string MergeErrorDto::getMergeStartTime() const
{
    return mergeStartTime_;
}

void MergeErrorDto::setMergeStartTime(const std::string& value)
{
    mergeStartTime_ = value;
    mergeStartTimeIsSet_ = true;
}

bool MergeErrorDto::mergeStartTimeIsSet() const
{
    return mergeStartTimeIsSet_;
}

void MergeErrorDto::unsetmergeStartTime()
{
    mergeStartTimeIsSet_ = false;
}

std::string MergeErrorDto::getErrorTitle() const
{
    return errorTitle_;
}

void MergeErrorDto::setErrorTitle(const std::string& value)
{
    errorTitle_ = value;
    errorTitleIsSet_ = true;
}

bool MergeErrorDto::errorTitleIsSet() const
{
    return errorTitleIsSet_;
}

void MergeErrorDto::unseterrorTitle()
{
    errorTitleIsSet_ = false;
}

std::string MergeErrorDto::getHttpCodeStatus() const
{
    return httpCodeStatus_;
}

void MergeErrorDto::setHttpCodeStatus(const std::string& value)
{
    httpCodeStatus_ = value;
    httpCodeStatusIsSet_ = true;
}

bool MergeErrorDto::httpCodeStatusIsSet() const
{
    return httpCodeStatusIsSet_;
}

void MergeErrorDto::unsethttpCodeStatus()
{
    httpCodeStatusIsSet_ = false;
}

std::string MergeErrorDto::getErrorCode() const
{
    return errorCode_;
}

void MergeErrorDto::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool MergeErrorDto::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void MergeErrorDto::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string MergeErrorDto::getErrorMessage() const
{
    return errorMessage_;
}

void MergeErrorDto::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool MergeErrorDto::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void MergeErrorDto::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

}
}
}
}
}


