

#include "huaweicloud/codeartsbuild/v3/model/ListBuildInfoRecordBody_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListBuildInfoRecordBody_result::ListBuildInfoRecordBody_result()
{
    healthScore_ = "";
    healthScoreIsSet_ = false;
    pageIndex_ = "";
    pageIndexIsSet_ = false;
    totalPage_ = "";
    totalPageIsSet_ = false;
    totalRecord_ = "";
    totalRecordIsSet_ = false;
    jobBuildStatesIsSet_ = false;
}

ListBuildInfoRecordBody_result::~ListBuildInfoRecordBody_result() = default;

void ListBuildInfoRecordBody_result::validate()
{
}

web::json::value ListBuildInfoRecordBody_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(healthScoreIsSet_) {
        val[utility::conversions::to_string_t("health_score")] = ModelBase::toJson(healthScore_);
    }
    if(pageIndexIsSet_) {
        val[utility::conversions::to_string_t("page_index")] = ModelBase::toJson(pageIndex_);
    }
    if(totalPageIsSet_) {
        val[utility::conversions::to_string_t("total_page")] = ModelBase::toJson(totalPage_);
    }
    if(totalRecordIsSet_) {
        val[utility::conversions::to_string_t("total_record")] = ModelBase::toJson(totalRecord_);
    }
    if(jobBuildStatesIsSet_) {
        val[utility::conversions::to_string_t("job_build_states")] = ModelBase::toJson(jobBuildStates_);
    }

    return val;
}
bool ListBuildInfoRecordBody_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("health_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("health_score"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHealthScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_index"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_page"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_record"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_record"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalRecord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_build_states"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_build_states"));
        if(!fieldValue.is_null())
        {
            std::vector<BuildInfoRecord> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobBuildStates(refVal);
        }
    }
    return ok;
}


std::string ListBuildInfoRecordBody_result::getHealthScore() const
{
    return healthScore_;
}

void ListBuildInfoRecordBody_result::setHealthScore(const std::string& value)
{
    healthScore_ = value;
    healthScoreIsSet_ = true;
}

bool ListBuildInfoRecordBody_result::healthScoreIsSet() const
{
    return healthScoreIsSet_;
}

void ListBuildInfoRecordBody_result::unsethealthScore()
{
    healthScoreIsSet_ = false;
}

std::string ListBuildInfoRecordBody_result::getPageIndex() const
{
    return pageIndex_;
}

void ListBuildInfoRecordBody_result::setPageIndex(const std::string& value)
{
    pageIndex_ = value;
    pageIndexIsSet_ = true;
}

bool ListBuildInfoRecordBody_result::pageIndexIsSet() const
{
    return pageIndexIsSet_;
}

void ListBuildInfoRecordBody_result::unsetpageIndex()
{
    pageIndexIsSet_ = false;
}

std::string ListBuildInfoRecordBody_result::getTotalPage() const
{
    return totalPage_;
}

void ListBuildInfoRecordBody_result::setTotalPage(const std::string& value)
{
    totalPage_ = value;
    totalPageIsSet_ = true;
}

bool ListBuildInfoRecordBody_result::totalPageIsSet() const
{
    return totalPageIsSet_;
}

void ListBuildInfoRecordBody_result::unsettotalPage()
{
    totalPageIsSet_ = false;
}

std::string ListBuildInfoRecordBody_result::getTotalRecord() const
{
    return totalRecord_;
}

void ListBuildInfoRecordBody_result::setTotalRecord(const std::string& value)
{
    totalRecord_ = value;
    totalRecordIsSet_ = true;
}

bool ListBuildInfoRecordBody_result::totalRecordIsSet() const
{
    return totalRecordIsSet_;
}

void ListBuildInfoRecordBody_result::unsettotalRecord()
{
    totalRecordIsSet_ = false;
}

std::vector<BuildInfoRecord>& ListBuildInfoRecordBody_result::getJobBuildStates()
{
    return jobBuildStates_;
}

void ListBuildInfoRecordBody_result::setJobBuildStates(const std::vector<BuildInfoRecord>& value)
{
    jobBuildStates_ = value;
    jobBuildStatesIsSet_ = true;
}

bool ListBuildInfoRecordBody_result::jobBuildStatesIsSet() const
{
    return jobBuildStatesIsSet_;
}

void ListBuildInfoRecordBody_result::unsetjobBuildStates()
{
    jobBuildStatesIsSet_ = false;
}

}
}
}
}
}


