

#include "huaweicloud/codeartsbuild/v3/model/ShowJobBuildTime_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobBuildTime_result::ShowJobBuildTime_result()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    avgBuildTime_ = 0.0;
    avgBuildTimeIsSet_ = false;
    maxBuildTime_ = 0L;
    maxBuildTimeIsSet_ = false;
    minBuildTime_ = 0L;
    minBuildTimeIsSet_ = false;
    chartIsSet_ = false;
}

ShowJobBuildTime_result::~ShowJobBuildTime_result() = default;

void ShowJobBuildTime_result::validate()
{
}

web::json::value ShowJobBuildTime_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(avgBuildTimeIsSet_) {
        val[utility::conversions::to_string_t("avg_build_time")] = ModelBase::toJson(avgBuildTime_);
    }
    if(maxBuildTimeIsSet_) {
        val[utility::conversions::to_string_t("max_build_time")] = ModelBase::toJson(maxBuildTime_);
    }
    if(minBuildTimeIsSet_) {
        val[utility::conversions::to_string_t("min_build_time")] = ModelBase::toJson(minBuildTime_);
    }
    if(chartIsSet_) {
        val[utility::conversions::to_string_t("chart")] = ModelBase::toJson(chart_);
    }

    return val;
}
bool ShowJobBuildTime_result::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("avg_build_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_build_time"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgBuildTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_build_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_build_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxBuildTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_build_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_build_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinBuildTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chart"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chart"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowJobBuildTime_result_chart> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChart(refVal);
        }
    }
    return ok;
}


std::string ShowJobBuildTime_result::getJobId() const
{
    return jobId_;
}

void ShowJobBuildTime_result::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowJobBuildTime_result::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowJobBuildTime_result::unsetjobId()
{
    jobIdIsSet_ = false;
}

double ShowJobBuildTime_result::getAvgBuildTime() const
{
    return avgBuildTime_;
}

void ShowJobBuildTime_result::setAvgBuildTime(double value)
{
    avgBuildTime_ = value;
    avgBuildTimeIsSet_ = true;
}

bool ShowJobBuildTime_result::avgBuildTimeIsSet() const
{
    return avgBuildTimeIsSet_;
}

void ShowJobBuildTime_result::unsetavgBuildTime()
{
    avgBuildTimeIsSet_ = false;
}

int64_t ShowJobBuildTime_result::getMaxBuildTime() const
{
    return maxBuildTime_;
}

void ShowJobBuildTime_result::setMaxBuildTime(int64_t value)
{
    maxBuildTime_ = value;
    maxBuildTimeIsSet_ = true;
}

bool ShowJobBuildTime_result::maxBuildTimeIsSet() const
{
    return maxBuildTimeIsSet_;
}

void ShowJobBuildTime_result::unsetmaxBuildTime()
{
    maxBuildTimeIsSet_ = false;
}

int64_t ShowJobBuildTime_result::getMinBuildTime() const
{
    return minBuildTime_;
}

void ShowJobBuildTime_result::setMinBuildTime(int64_t value)
{
    minBuildTime_ = value;
    minBuildTimeIsSet_ = true;
}

bool ShowJobBuildTime_result::minBuildTimeIsSet() const
{
    return minBuildTimeIsSet_;
}

void ShowJobBuildTime_result::unsetminBuildTime()
{
    minBuildTimeIsSet_ = false;
}

std::vector<ShowJobBuildTime_result_chart>& ShowJobBuildTime_result::getChart()
{
    return chart_;
}

void ShowJobBuildTime_result::setChart(const std::vector<ShowJobBuildTime_result_chart>& value)
{
    chart_ = value;
    chartIsSet_ = true;
}

bool ShowJobBuildTime_result::chartIsSet() const
{
    return chartIsSet_;
}

void ShowJobBuildTime_result::unsetchart()
{
    chartIsSet_ = false;
}

}
}
}
}
}


