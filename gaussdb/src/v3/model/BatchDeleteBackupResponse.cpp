

#include "huaweicloud/gaussdb/v3/model/BatchDeleteBackupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




BatchDeleteBackupResponse::BatchDeleteBackupResponse()
{
    failedResultsIsSet_ = false;
    successCount_ = 0;
    successCountIsSet_ = false;
    failedCount_ = 0;
    failedCountIsSet_ = false;
}

BatchDeleteBackupResponse::~BatchDeleteBackupResponse() = default;

void BatchDeleteBackupResponse::validate()
{
}

web::json::value BatchDeleteBackupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(failedResultsIsSet_) {
        val[utility::conversions::to_string_t("failed_results")] = ModelBase::toJson(failedResults_);
    }
    if(successCountIsSet_) {
        val[utility::conversions::to_string_t("success_count")] = ModelBase::toJson(successCount_);
    }
    if(failedCountIsSet_) {
        val[utility::conversions::to_string_t("failed_count")] = ModelBase::toJson(failedCount_);
    }

    return val;
}
bool BatchDeleteBackupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("failed_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_results"));
        if(!fieldValue.is_null())
        {
            std::vector<DeleteBackupResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedResults(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("failed_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedCount(refVal);
        }
    }
    return ok;
}


std::vector<DeleteBackupResult>& BatchDeleteBackupResponse::getFailedResults()
{
    return failedResults_;
}

void BatchDeleteBackupResponse::setFailedResults(const std::vector<DeleteBackupResult>& value)
{
    failedResults_ = value;
    failedResultsIsSet_ = true;
}

bool BatchDeleteBackupResponse::failedResultsIsSet() const
{
    return failedResultsIsSet_;
}

void BatchDeleteBackupResponse::unsetfailedResults()
{
    failedResultsIsSet_ = false;
}

int32_t BatchDeleteBackupResponse::getSuccessCount() const
{
    return successCount_;
}

void BatchDeleteBackupResponse::setSuccessCount(int32_t value)
{
    successCount_ = value;
    successCountIsSet_ = true;
}

bool BatchDeleteBackupResponse::successCountIsSet() const
{
    return successCountIsSet_;
}

void BatchDeleteBackupResponse::unsetsuccessCount()
{
    successCountIsSet_ = false;
}

int32_t BatchDeleteBackupResponse::getFailedCount() const
{
    return failedCount_;
}

void BatchDeleteBackupResponse::setFailedCount(int32_t value)
{
    failedCount_ = value;
    failedCountIsSet_ = true;
}

bool BatchDeleteBackupResponse::failedCountIsSet() const
{
    return failedCountIsSet_;
}

void BatchDeleteBackupResponse::unsetfailedCount()
{
    failedCountIsSet_ = false;
}

}
}
}
}
}


