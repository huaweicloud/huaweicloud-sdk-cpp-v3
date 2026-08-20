

#include "huaweicloud/projectman/v4/model/BatchUpdateSnapshotDeletableFlagResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchUpdateSnapshotDeletableFlagResponse::BatchUpdateSnapshotDeletableFlagResponse()
{
    message_ = "";
    messageIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    successCount_ = 0;
    successCountIsSet_ = false;
    failureCount_ = 0;
    failureCountIsSet_ = false;
    failureDetailsIsSet_ = false;
}

BatchUpdateSnapshotDeletableFlagResponse::~BatchUpdateSnapshotDeletableFlagResponse() = default;

void BatchUpdateSnapshotDeletableFlagResponse::validate()
{
}

web::json::value BatchUpdateSnapshotDeletableFlagResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(successCountIsSet_) {
        val[utility::conversions::to_string_t("success_count")] = ModelBase::toJson(successCount_);
    }
    if(failureCountIsSet_) {
        val[utility::conversions::to_string_t("failure_count")] = ModelBase::toJson(failureCount_);
    }
    if(failureDetailsIsSet_) {
        val[utility::conversions::to_string_t("failure_details")] = ModelBase::toJson(failureDetails_);
    }

    return val;
}
bool BatchUpdateSnapshotDeletableFlagResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failure_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failure_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_details"));
        if(!fieldValue.is_null())
        {
            std::vector<FailureDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureDetails(refVal);
        }
    }
    return ok;
}


std::string BatchUpdateSnapshotDeletableFlagResponse::getMessage() const
{
    return message_;
}

void BatchUpdateSnapshotDeletableFlagResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool BatchUpdateSnapshotDeletableFlagResponse::messageIsSet() const
{
    return messageIsSet_;
}

void BatchUpdateSnapshotDeletableFlagResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::string BatchUpdateSnapshotDeletableFlagResponse::getCode() const
{
    return code_;
}

void BatchUpdateSnapshotDeletableFlagResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool BatchUpdateSnapshotDeletableFlagResponse::codeIsSet() const
{
    return codeIsSet_;
}

void BatchUpdateSnapshotDeletableFlagResponse::unsetcode()
{
    codeIsSet_ = false;
}

int32_t BatchUpdateSnapshotDeletableFlagResponse::getTotalCount() const
{
    return totalCount_;
}

void BatchUpdateSnapshotDeletableFlagResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool BatchUpdateSnapshotDeletableFlagResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void BatchUpdateSnapshotDeletableFlagResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

int32_t BatchUpdateSnapshotDeletableFlagResponse::getSuccessCount() const
{
    return successCount_;
}

void BatchUpdateSnapshotDeletableFlagResponse::setSuccessCount(int32_t value)
{
    successCount_ = value;
    successCountIsSet_ = true;
}

bool BatchUpdateSnapshotDeletableFlagResponse::successCountIsSet() const
{
    return successCountIsSet_;
}

void BatchUpdateSnapshotDeletableFlagResponse::unsetsuccessCount()
{
    successCountIsSet_ = false;
}

int32_t BatchUpdateSnapshotDeletableFlagResponse::getFailureCount() const
{
    return failureCount_;
}

void BatchUpdateSnapshotDeletableFlagResponse::setFailureCount(int32_t value)
{
    failureCount_ = value;
    failureCountIsSet_ = true;
}

bool BatchUpdateSnapshotDeletableFlagResponse::failureCountIsSet() const
{
    return failureCountIsSet_;
}

void BatchUpdateSnapshotDeletableFlagResponse::unsetfailureCount()
{
    failureCountIsSet_ = false;
}

std::vector<FailureDetail>& BatchUpdateSnapshotDeletableFlagResponse::getFailureDetails()
{
    return failureDetails_;
}

void BatchUpdateSnapshotDeletableFlagResponse::setFailureDetails(const std::vector<FailureDetail>& value)
{
    failureDetails_ = value;
    failureDetailsIsSet_ = true;
}

bool BatchUpdateSnapshotDeletableFlagResponse::failureDetailsIsSet() const
{
    return failureDetailsIsSet_;
}

void BatchUpdateSnapshotDeletableFlagResponse::unsetfailureDetails()
{
    failureDetailsIsSet_ = false;
}

}
}
}
}
}


