

#include "huaweicloud/codeartsbuild/v3/model/ShowJobBuildSuccessRatio_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobBuildSuccessRatio_result::ShowJobBuildSuccessRatio_result()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    branch_ = "";
    branchIsSet_ = false;
    totalSuccessCount_ = 0;
    totalSuccessCountIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    totalSuccessRatioFraction_ = "";
    totalSuccessRatioFractionIsSet_ = false;
    everyDayReportIsSet_ = false;
}

ShowJobBuildSuccessRatio_result::~ShowJobBuildSuccessRatio_result() = default;

void ShowJobBuildSuccessRatio_result::validate()
{
}

web::json::value ShowJobBuildSuccessRatio_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(totalSuccessCountIsSet_) {
        val[utility::conversions::to_string_t("total_success_count")] = ModelBase::toJson(totalSuccessCount_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(totalSuccessRatioFractionIsSet_) {
        val[utility::conversions::to_string_t("total_success_ratio_fraction")] = ModelBase::toJson(totalSuccessRatioFraction_);
    }
    if(everyDayReportIsSet_) {
        val[utility::conversions::to_string_t("every_day_report")] = ModelBase::toJson(everyDayReport_);
    }

    return val;
}
bool ShowJobBuildSuccessRatio_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_success_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_success_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalSuccessCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("total_success_ratio_fraction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_success_ratio_fraction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalSuccessRatioFraction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("every_day_report"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("every_day_report"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowJobBuildSuccessRatio_result_every_day_report> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEveryDayReport(refVal);
        }
    }
    return ok;
}


std::string ShowJobBuildSuccessRatio_result::getJobId() const
{
    return jobId_;
}

void ShowJobBuildSuccessRatio_result::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowJobBuildSuccessRatio_result::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowJobBuildSuccessRatio_result::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowJobBuildSuccessRatio_result::getBranch() const
{
    return branch_;
}

void ShowJobBuildSuccessRatio_result::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool ShowJobBuildSuccessRatio_result::branchIsSet() const
{
    return branchIsSet_;
}

void ShowJobBuildSuccessRatio_result::unsetbranch()
{
    branchIsSet_ = false;
}

int32_t ShowJobBuildSuccessRatio_result::getTotalSuccessCount() const
{
    return totalSuccessCount_;
}

void ShowJobBuildSuccessRatio_result::setTotalSuccessCount(int32_t value)
{
    totalSuccessCount_ = value;
    totalSuccessCountIsSet_ = true;
}

bool ShowJobBuildSuccessRatio_result::totalSuccessCountIsSet() const
{
    return totalSuccessCountIsSet_;
}

void ShowJobBuildSuccessRatio_result::unsettotalSuccessCount()
{
    totalSuccessCountIsSet_ = false;
}

int32_t ShowJobBuildSuccessRatio_result::getTotalCount() const
{
    return totalCount_;
}

void ShowJobBuildSuccessRatio_result::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowJobBuildSuccessRatio_result::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowJobBuildSuccessRatio_result::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::string ShowJobBuildSuccessRatio_result::getTotalSuccessRatioFraction() const
{
    return totalSuccessRatioFraction_;
}

void ShowJobBuildSuccessRatio_result::setTotalSuccessRatioFraction(const std::string& value)
{
    totalSuccessRatioFraction_ = value;
    totalSuccessRatioFractionIsSet_ = true;
}

bool ShowJobBuildSuccessRatio_result::totalSuccessRatioFractionIsSet() const
{
    return totalSuccessRatioFractionIsSet_;
}

void ShowJobBuildSuccessRatio_result::unsettotalSuccessRatioFraction()
{
    totalSuccessRatioFractionIsSet_ = false;
}

std::vector<ShowJobBuildSuccessRatio_result_every_day_report>& ShowJobBuildSuccessRatio_result::getEveryDayReport()
{
    return everyDayReport_;
}

void ShowJobBuildSuccessRatio_result::setEveryDayReport(const std::vector<ShowJobBuildSuccessRatio_result_every_day_report>& value)
{
    everyDayReport_ = value;
    everyDayReportIsSet_ = true;
}

bool ShowJobBuildSuccessRatio_result::everyDayReportIsSet() const
{
    return everyDayReportIsSet_;
}

void ShowJobBuildSuccessRatio_result::unseteveryDayReport()
{
    everyDayReportIsSet_ = false;
}

}
}
}
}
}


