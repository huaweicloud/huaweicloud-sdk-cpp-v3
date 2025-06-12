

#include "huaweicloud/codeartsbuild/v3/model/ListJunitCoverageSummary_result_unit_summary_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListJunitCoverageSummary_result_unit_summary_list::ListJunitCoverageSummary_result_unit_summary_list()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    buildNo_ = 0;
    buildNoIsSet_ = false;
    stageName_ = "";
    stageNameIsSet_ = false;
    rootId_ = "";
    rootIdIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
}

ListJunitCoverageSummary_result_unit_summary_list::~ListJunitCoverageSummary_result_unit_summary_list() = default;

void ListJunitCoverageSummary_result_unit_summary_list::validate()
{
}

web::json::value ListJunitCoverageSummary_result_unit_summary_list::toJson() const
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
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }

    return val;
}
bool ListJunitCoverageSummary_result_unit_summary_list::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    return ok;
}


std::string ListJunitCoverageSummary_result_unit_summary_list::getJobId() const
{
    return jobId_;
}

void ListJunitCoverageSummary_result_unit_summary_list::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListJunitCoverageSummary_result_unit_summary_list::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListJunitCoverageSummary_result_unit_summary_list::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t ListJunitCoverageSummary_result_unit_summary_list::getBuildNo() const
{
    return buildNo_;
}

void ListJunitCoverageSummary_result_unit_summary_list::setBuildNo(int32_t value)
{
    buildNo_ = value;
    buildNoIsSet_ = true;
}

bool ListJunitCoverageSummary_result_unit_summary_list::buildNoIsSet() const
{
    return buildNoIsSet_;
}

void ListJunitCoverageSummary_result_unit_summary_list::unsetbuildNo()
{
    buildNoIsSet_ = false;
}

std::string ListJunitCoverageSummary_result_unit_summary_list::getStageName() const
{
    return stageName_;
}

void ListJunitCoverageSummary_result_unit_summary_list::setStageName(const std::string& value)
{
    stageName_ = value;
    stageNameIsSet_ = true;
}

bool ListJunitCoverageSummary_result_unit_summary_list::stageNameIsSet() const
{
    return stageNameIsSet_;
}

void ListJunitCoverageSummary_result_unit_summary_list::unsetstageName()
{
    stageNameIsSet_ = false;
}

std::string ListJunitCoverageSummary_result_unit_summary_list::getRootId() const
{
    return rootId_;
}

void ListJunitCoverageSummary_result_unit_summary_list::setRootId(const std::string& value)
{
    rootId_ = value;
    rootIdIsSet_ = true;
}

bool ListJunitCoverageSummary_result_unit_summary_list::rootIdIsSet() const
{
    return rootIdIsSet_;
}

void ListJunitCoverageSummary_result_unit_summary_list::unsetrootId()
{
    rootIdIsSet_ = false;
}

std::string ListJunitCoverageSummary_result_unit_summary_list::getRegion() const
{
    return region_;
}

void ListJunitCoverageSummary_result_unit_summary_list::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ListJunitCoverageSummary_result_unit_summary_list::regionIsSet() const
{
    return regionIsSet_;
}

void ListJunitCoverageSummary_result_unit_summary_list::unsetregion()
{
    regionIsSet_ = false;
}

}
}
}
}
}


