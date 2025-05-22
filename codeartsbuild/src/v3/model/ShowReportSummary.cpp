

#include "huaweicloud/codeartsbuild/v3/model/ShowReportSummary.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowReportSummary::ShowReportSummary()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    buildNo_ = 0;
    buildNoIsSet_ = false;
    stageName_ = "";
    stageNameIsSet_ = false;
    rootId_ = "";
    rootIdIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    success_ = 0;
    successIsSet_ = false;
    failures_ = 0;
    failuresIsSet_ = false;
    errors_ = 0;
    errorsIsSet_ = false;
    others_ = 0;
    othersIsSet_ = false;
    executionTime_ = 0;
    executionTimeIsSet_ = false;
    genrateTime_ = "";
    genrateTimeIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    isSuccess_ = false;
    isSuccessIsSet_ = false;
}

ShowReportSummary::~ShowReportSummary() = default;

void ShowReportSummary::validate()
{
}

web::json::value ShowReportSummary::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(buildNoIsSet_) {
        val[utility::conversions::to_string_t("build_no")] = ModelBase::toJson(buildNo_);
    }
    if(stageNameIsSet_) {
        val[utility::conversions::to_string_t("stage_name")] = ModelBase::toJson(stageName_);
    }
    if(rootIdIsSet_) {
        val[utility::conversions::to_string_t("root_id")] = ModelBase::toJson(rootId_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }
    if(failuresIsSet_) {
        val[utility::conversions::to_string_t("failures")] = ModelBase::toJson(failures_);
    }
    if(errorsIsSet_) {
        val[utility::conversions::to_string_t("errors")] = ModelBase::toJson(errors_);
    }
    if(othersIsSet_) {
        val[utility::conversions::to_string_t("others")] = ModelBase::toJson(others_);
    }
    if(executionTimeIsSet_) {
        val[utility::conversions::to_string_t("execution_time")] = ModelBase::toJson(executionTime_);
    }
    if(genrateTimeIsSet_) {
        val[utility::conversions::to_string_t("genrate_time")] = ModelBase::toJson(genrateTime_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(isSuccessIsSet_) {
        val[utility::conversions::to_string_t("is_success")] = ModelBase::toJson(isSuccess_);
    }

    return val;
}
bool ShowReportSummary::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("build_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stage_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stage_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStageName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("root_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("root_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failures"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failures"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailures(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("errors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errors"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrors(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("others"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("others"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOthers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execution_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("genrate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("genrate_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGenrateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_success"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSuccess(refVal);
        }
    }
    return ok;
}


std::string ShowReportSummary::getJobId() const
{
    return jobId_;
}

void ShowReportSummary::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowReportSummary::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowReportSummary::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t ShowReportSummary::getBuildNo() const
{
    return buildNo_;
}

void ShowReportSummary::setBuildNo(int32_t value)
{
    buildNo_ = value;
    buildNoIsSet_ = true;
}

bool ShowReportSummary::buildNoIsSet() const
{
    return buildNoIsSet_;
}

void ShowReportSummary::unsetbuildNo()
{
    buildNoIsSet_ = false;
}

std::string ShowReportSummary::getStageName() const
{
    return stageName_;
}

void ShowReportSummary::setStageName(const std::string& value)
{
    stageName_ = value;
    stageNameIsSet_ = true;
}

bool ShowReportSummary::stageNameIsSet() const
{
    return stageNameIsSet_;
}

void ShowReportSummary::unsetstageName()
{
    stageNameIsSet_ = false;
}

std::string ShowReportSummary::getRootId() const
{
    return rootId_;
}

void ShowReportSummary::setRootId(const std::string& value)
{
    rootId_ = value;
    rootIdIsSet_ = true;
}

bool ShowReportSummary::rootIdIsSet() const
{
    return rootIdIsSet_;
}

void ShowReportSummary::unsetrootId()
{
    rootIdIsSet_ = false;
}

int32_t ShowReportSummary::getTotal() const
{
    return total_;
}

void ShowReportSummary::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowReportSummary::totalIsSet() const
{
    return totalIsSet_;
}

void ShowReportSummary::unsettotal()
{
    totalIsSet_ = false;
}

int32_t ShowReportSummary::getSuccess() const
{
    return success_;
}

void ShowReportSummary::setSuccess(int32_t value)
{
    success_ = value;
    successIsSet_ = true;
}

bool ShowReportSummary::successIsSet() const
{
    return successIsSet_;
}

void ShowReportSummary::unsetsuccess()
{
    successIsSet_ = false;
}

int32_t ShowReportSummary::getFailures() const
{
    return failures_;
}

void ShowReportSummary::setFailures(int32_t value)
{
    failures_ = value;
    failuresIsSet_ = true;
}

bool ShowReportSummary::failuresIsSet() const
{
    return failuresIsSet_;
}

void ShowReportSummary::unsetfailures()
{
    failuresIsSet_ = false;
}

int32_t ShowReportSummary::getErrors() const
{
    return errors_;
}

void ShowReportSummary::setErrors(int32_t value)
{
    errors_ = value;
    errorsIsSet_ = true;
}

bool ShowReportSummary::errorsIsSet() const
{
    return errorsIsSet_;
}

void ShowReportSummary::unseterrors()
{
    errorsIsSet_ = false;
}

int32_t ShowReportSummary::getOthers() const
{
    return others_;
}

void ShowReportSummary::setOthers(int32_t value)
{
    others_ = value;
    othersIsSet_ = true;
}

bool ShowReportSummary::othersIsSet() const
{
    return othersIsSet_;
}

void ShowReportSummary::unsetothers()
{
    othersIsSet_ = false;
}

int32_t ShowReportSummary::getExecutionTime() const
{
    return executionTime_;
}

void ShowReportSummary::setExecutionTime(int32_t value)
{
    executionTime_ = value;
    executionTimeIsSet_ = true;
}

bool ShowReportSummary::executionTimeIsSet() const
{
    return executionTimeIsSet_;
}

void ShowReportSummary::unsetexecutionTime()
{
    executionTimeIsSet_ = false;
}

std::string ShowReportSummary::getGenrateTime() const
{
    return genrateTime_;
}

void ShowReportSummary::setGenrateTime(const std::string& value)
{
    genrateTime_ = value;
    genrateTimeIsSet_ = true;
}

bool ShowReportSummary::genrateTimeIsSet() const
{
    return genrateTimeIsSet_;
}

void ShowReportSummary::unsetgenrateTime()
{
    genrateTimeIsSet_ = false;
}

std::string ShowReportSummary::getRegion() const
{
    return region_;
}

void ShowReportSummary::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ShowReportSummary::regionIsSet() const
{
    return regionIsSet_;
}

void ShowReportSummary::unsetregion()
{
    regionIsSet_ = false;
}

bool ShowReportSummary::isIsSuccess() const
{
    return isSuccess_;
}

void ShowReportSummary::setIsSuccess(bool value)
{
    isSuccess_ = value;
    isSuccessIsSet_ = true;
}

bool ShowReportSummary::isSuccessIsSet() const
{
    return isSuccessIsSet_;
}

void ShowReportSummary::unsetisSuccess()
{
    isSuccessIsSet_ = false;
}

}
}
}
}
}


