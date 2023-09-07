

#include "huaweicloud/drs/v5/model/ShowDataFilteringResultResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowDataFilteringResultResponse::ShowDataFilteringResultResponse()
{
    successCount_ = 0L;
    successCountIsSet_ = false;
    failedCount_ = 0L;
    failedCountIsSet_ = false;
    dbObjectFilteringResultIsSet_ = false;
}

ShowDataFilteringResultResponse::~ShowDataFilteringResultResponse() = default;

void ShowDataFilteringResultResponse::validate()
{
}

web::json::value ShowDataFilteringResultResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successCountIsSet_) {
        val[utility::conversions::to_string_t("success_count")] = ModelBase::toJson(successCount_);
    }
    if(failedCountIsSet_) {
        val[utility::conversions::to_string_t("failed_count")] = ModelBase::toJson(failedCount_);
    }
    if(dbObjectFilteringResultIsSet_) {
        val[utility::conversions::to_string_t("db_object_filtering_result")] = ModelBase::toJson(dbObjectFilteringResult_);
    }

    return val;
}

bool ShowDataFilteringResultResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_object_filtering_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_object_filtering_result"));
        if(!fieldValue.is_null())
        {
            std::vector<DbObjectFilteringResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbObjectFilteringResult(refVal);
        }
    }
    return ok;
}

int64_t ShowDataFilteringResultResponse::getSuccessCount() const
{
    return successCount_;
}

void ShowDataFilteringResultResponse::setSuccessCount(int64_t value)
{
    successCount_ = value;
    successCountIsSet_ = true;
}

bool ShowDataFilteringResultResponse::successCountIsSet() const
{
    return successCountIsSet_;
}

void ShowDataFilteringResultResponse::unsetsuccessCount()
{
    successCountIsSet_ = false;
}

int64_t ShowDataFilteringResultResponse::getFailedCount() const
{
    return failedCount_;
}

void ShowDataFilteringResultResponse::setFailedCount(int64_t value)
{
    failedCount_ = value;
    failedCountIsSet_ = true;
}

bool ShowDataFilteringResultResponse::failedCountIsSet() const
{
    return failedCountIsSet_;
}

void ShowDataFilteringResultResponse::unsetfailedCount()
{
    failedCountIsSet_ = false;
}

std::vector<DbObjectFilteringResult>& ShowDataFilteringResultResponse::getDbObjectFilteringResult()
{
    return dbObjectFilteringResult_;
}

void ShowDataFilteringResultResponse::setDbObjectFilteringResult(const std::vector<DbObjectFilteringResult>& value)
{
    dbObjectFilteringResult_ = value;
    dbObjectFilteringResultIsSet_ = true;
}

bool ShowDataFilteringResultResponse::dbObjectFilteringResultIsSet() const
{
    return dbObjectFilteringResultIsSet_;
}

void ShowDataFilteringResultResponse::unsetdbObjectFilteringResult()
{
    dbObjectFilteringResultIsSet_ = false;
}

}
}
}
}
}


