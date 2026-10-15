

#include "huaweicloud/drs/v5/model/ShowTaskExecuteProgressResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowTaskExecuteProgressResponse::ShowTaskExecuteProgressResponse()
{
    status_ = "";
    statusIsSet_ = false;
    progress_ = "";
    progressIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
}

ShowTaskExecuteProgressResponse::~ShowTaskExecuteProgressResponse() = default;

void ShowTaskExecuteProgressResponse::validate()
{
}

web::json::value ShowTaskExecuteProgressResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }

    return val;
}
bool ShowTaskExecuteProgressResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
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


std::string ShowTaskExecuteProgressResponse::getStatus() const
{
    return status_;
}

void ShowTaskExecuteProgressResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowTaskExecuteProgressResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowTaskExecuteProgressResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowTaskExecuteProgressResponse::getProgress() const
{
    return progress_;
}

void ShowTaskExecuteProgressResponse::setProgress(const std::string& value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool ShowTaskExecuteProgressResponse::progressIsSet() const
{
    return progressIsSet_;
}

void ShowTaskExecuteProgressResponse::unsetprogress()
{
    progressIsSet_ = false;
}

std::string ShowTaskExecuteProgressResponse::getErrorCode() const
{
    return errorCode_;
}

void ShowTaskExecuteProgressResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ShowTaskExecuteProgressResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ShowTaskExecuteProgressResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ShowTaskExecuteProgressResponse::getErrorMessage() const
{
    return errorMessage_;
}

void ShowTaskExecuteProgressResponse::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool ShowTaskExecuteProgressResponse::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void ShowTaskExecuteProgressResponse::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

}
}
}
}
}


