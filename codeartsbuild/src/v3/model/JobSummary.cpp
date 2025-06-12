

#include "huaweicloud/codeartsbuild/v3/model/JobSummary.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




JobSummary::JobSummary()
{
    avgSuccessRatio_ = 0;
    avgSuccessRatioIsSet_ = false;
    buildNo_ = 0;
    buildNoIsSet_ = false;
    jobTotal_ = 0;
    jobTotalIsSet_ = false;
    versionTotal_ = "";
    versionTotalIsSet_ = false;
}

JobSummary::~JobSummary() = default;

void JobSummary::validate()
{
}

web::json::value JobSummary::toJson() const
{
    web::json::value val = web::json::value::object();

    if(avgSuccessRatioIsSet_) {
        val[utility::conversions::to_string_t("avg_success_ratio")] = ModelBase::toJson(avgSuccessRatio_);
    }
    if(buildNoIsSet_) {
        val[utility::conversions::to_string_t("build_no")] = ModelBase::toJson(buildNo_);
    }
    if(jobTotalIsSet_) {
        val[utility::conversions::to_string_t("job_total")] = ModelBase::toJson(jobTotal_);
    }
    if(versionTotalIsSet_) {
        val[utility::conversions::to_string_t("version_total")] = ModelBase::toJson(versionTotal_);
    }

    return val;
}
bool JobSummary::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("avg_success_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_success_ratio"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgSuccessRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionTotal(refVal);
        }
    }
    return ok;
}


int32_t JobSummary::getAvgSuccessRatio() const
{
    return avgSuccessRatio_;
}

void JobSummary::setAvgSuccessRatio(int32_t value)
{
    avgSuccessRatio_ = value;
    avgSuccessRatioIsSet_ = true;
}

bool JobSummary::avgSuccessRatioIsSet() const
{
    return avgSuccessRatioIsSet_;
}

void JobSummary::unsetavgSuccessRatio()
{
    avgSuccessRatioIsSet_ = false;
}

int32_t JobSummary::getBuildNo() const
{
    return buildNo_;
}

void JobSummary::setBuildNo(int32_t value)
{
    buildNo_ = value;
    buildNoIsSet_ = true;
}

bool JobSummary::buildNoIsSet() const
{
    return buildNoIsSet_;
}

void JobSummary::unsetbuildNo()
{
    buildNoIsSet_ = false;
}

int32_t JobSummary::getJobTotal() const
{
    return jobTotal_;
}

void JobSummary::setJobTotal(int32_t value)
{
    jobTotal_ = value;
    jobTotalIsSet_ = true;
}

bool JobSummary::jobTotalIsSet() const
{
    return jobTotalIsSet_;
}

void JobSummary::unsetjobTotal()
{
    jobTotalIsSet_ = false;
}

std::string JobSummary::getVersionTotal() const
{
    return versionTotal_;
}

void JobSummary::setVersionTotal(const std::string& value)
{
    versionTotal_ = value;
    versionTotalIsSet_ = true;
}

bool JobSummary::versionTotalIsSet() const
{
    return versionTotalIsSet_;
}

void JobSummary::unsetversionTotal()
{
    versionTotalIsSet_ = false;
}

}
}
}
}
}


