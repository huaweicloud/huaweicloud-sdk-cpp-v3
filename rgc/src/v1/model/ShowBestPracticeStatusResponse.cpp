

#include "huaweicloud/rgc/v1/model/ShowBestPracticeStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowBestPracticeStatusResponse::ShowBestPracticeStatusResponse()
{
    operationId_ = "";
    operationIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    percentageComplete_ = 0;
    percentageCompleteIsSet_ = false;
    errorMessagesIsSet_ = false;
}

ShowBestPracticeStatusResponse::~ShowBestPracticeStatusResponse() = default;

void ShowBestPracticeStatusResponse::validate()
{
}

web::json::value ShowBestPracticeStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationIdIsSet_) {
        val[utility::conversions::to_string_t("operation_id")] = ModelBase::toJson(operationId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(percentageCompleteIsSet_) {
        val[utility::conversions::to_string_t("percentage_complete")] = ModelBase::toJson(percentageComplete_);
    }
    if(errorMessagesIsSet_) {
        val[utility::conversions::to_string_t("error_messages")] = ModelBase::toJson(errorMessages_);
    }

    return val;
}
bool ShowBestPracticeStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operation_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("percentage_complete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("percentage_complete"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPercentageComplete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_messages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_messages"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessages(refVal);
        }
    }
    return ok;
}


std::string ShowBestPracticeStatusResponse::getOperationId() const
{
    return operationId_;
}

void ShowBestPracticeStatusResponse::setOperationId(const std::string& value)
{
    operationId_ = value;
    operationIdIsSet_ = true;
}

bool ShowBestPracticeStatusResponse::operationIdIsSet() const
{
    return operationIdIsSet_;
}

void ShowBestPracticeStatusResponse::unsetoperationId()
{
    operationIdIsSet_ = false;
}

std::string ShowBestPracticeStatusResponse::getStatus() const
{
    return status_;
}

void ShowBestPracticeStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowBestPracticeStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowBestPracticeStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ShowBestPracticeStatusResponse::getPercentageComplete() const
{
    return percentageComplete_;
}

void ShowBestPracticeStatusResponse::setPercentageComplete(int32_t value)
{
    percentageComplete_ = value;
    percentageCompleteIsSet_ = true;
}

bool ShowBestPracticeStatusResponse::percentageCompleteIsSet() const
{
    return percentageCompleteIsSet_;
}

void ShowBestPracticeStatusResponse::unsetpercentageComplete()
{
    percentageCompleteIsSet_ = false;
}

std::vector<std::string>& ShowBestPracticeStatusResponse::getErrorMessages()
{
    return errorMessages_;
}

void ShowBestPracticeStatusResponse::setErrorMessages(const std::vector<std::string>& value)
{
    errorMessages_ = value;
    errorMessagesIsSet_ = true;
}

bool ShowBestPracticeStatusResponse::errorMessagesIsSet() const
{
    return errorMessagesIsSet_;
}

void ShowBestPracticeStatusResponse::unseterrorMessages()
{
    errorMessagesIsSet_ = false;
}

}
}
}
}
}


