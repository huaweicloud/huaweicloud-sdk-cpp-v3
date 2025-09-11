

#include "huaweicloud/functiongraph/v2/model/ListFunctionAsyncInvocationsResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionAsyncInvocationsResult::ListFunctionAsyncInvocationsResult()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
    errorCode_ = 0;
    errorCodeIsSet_ = false;
    startTime_ = utility::datetime();
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListFunctionAsyncInvocationsResult::~ListFunctionAsyncInvocationsResult() = default;

void ListFunctionAsyncInvocationsResult::validate()
{
}

web::json::value ListFunctionAsyncInvocationsResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ListFunctionAsyncInvocationsResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string ListFunctionAsyncInvocationsResult::getRequestId() const
{
    return requestId_;
}

void ListFunctionAsyncInvocationsResult::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListFunctionAsyncInvocationsResult::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListFunctionAsyncInvocationsResult::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListFunctionAsyncInvocationsResult::getStatus() const
{
    return status_;
}

void ListFunctionAsyncInvocationsResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListFunctionAsyncInvocationsResult::statusIsSet() const
{
    return statusIsSet_;
}

void ListFunctionAsyncInvocationsResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListFunctionAsyncInvocationsResult::getErrorMessage() const
{
    return errorMessage_;
}

void ListFunctionAsyncInvocationsResult::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool ListFunctionAsyncInvocationsResult::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void ListFunctionAsyncInvocationsResult::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

int32_t ListFunctionAsyncInvocationsResult::getErrorCode() const
{
    return errorCode_;
}

void ListFunctionAsyncInvocationsResult::setErrorCode(int32_t value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ListFunctionAsyncInvocationsResult::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ListFunctionAsyncInvocationsResult::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

utility::datetime ListFunctionAsyncInvocationsResult::getStartTime() const
{
    return startTime_;
}

void ListFunctionAsyncInvocationsResult::setStartTime(const utility::datetime& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListFunctionAsyncInvocationsResult::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListFunctionAsyncInvocationsResult::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListFunctionAsyncInvocationsResult::getEndTime() const
{
    return endTime_;
}

void ListFunctionAsyncInvocationsResult::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListFunctionAsyncInvocationsResult::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListFunctionAsyncInvocationsResult::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


