

#include "huaweicloud/projectman/v4/model/ShowProjectSummaryV4Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowProjectSummaryV4Response::ShowProjectSummaryV4Response()
{
    bugStatisticsIsSet_ = false;
    demandStatisticsIsSet_ = false;
    issueCompletionRatesIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowProjectSummaryV4Response::~ShowProjectSummaryV4Response() = default;

void ShowProjectSummaryV4Response::validate()
{
}

web::json::value ShowProjectSummaryV4Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bugStatisticsIsSet_) {
        val[utility::conversions::to_string_t("bug_statistics")] = ModelBase::toJson(bugStatistics_);
    }
    if(demandStatisticsIsSet_) {
        val[utility::conversions::to_string_t("demand_statistics")] = ModelBase::toJson(demandStatistics_);
    }
    if(issueCompletionRatesIsSet_) {
        val[utility::conversions::to_string_t("issue_completion_rates")] = ModelBase::toJson(issueCompletionRates_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowProjectSummaryV4Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bug_statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bug_statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<BugStatisticResponseV4> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBugStatistics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("demand_statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("demand_statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<DemandStatisticResponseV4> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDemandStatistics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_completion_rates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_completion_rates"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueCompletionRateResponseV4> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueCompletionRates(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    return ok;
}


std::vector<BugStatisticResponseV4>& ShowProjectSummaryV4Response::getBugStatistics()
{
    return bugStatistics_;
}

void ShowProjectSummaryV4Response::setBugStatistics(const std::vector<BugStatisticResponseV4>& value)
{
    bugStatistics_ = value;
    bugStatisticsIsSet_ = true;
}

bool ShowProjectSummaryV4Response::bugStatisticsIsSet() const
{
    return bugStatisticsIsSet_;
}

void ShowProjectSummaryV4Response::unsetbugStatistics()
{
    bugStatisticsIsSet_ = false;
}

std::vector<DemandStatisticResponseV4>& ShowProjectSummaryV4Response::getDemandStatistics()
{
    return demandStatistics_;
}

void ShowProjectSummaryV4Response::setDemandStatistics(const std::vector<DemandStatisticResponseV4>& value)
{
    demandStatistics_ = value;
    demandStatisticsIsSet_ = true;
}

bool ShowProjectSummaryV4Response::demandStatisticsIsSet() const
{
    return demandStatisticsIsSet_;
}

void ShowProjectSummaryV4Response::unsetdemandStatistics()
{
    demandStatisticsIsSet_ = false;
}

std::vector<IssueCompletionRateResponseV4>& ShowProjectSummaryV4Response::getIssueCompletionRates()
{
    return issueCompletionRates_;
}

void ShowProjectSummaryV4Response::setIssueCompletionRates(const std::vector<IssueCompletionRateResponseV4>& value)
{
    issueCompletionRates_ = value;
    issueCompletionRatesIsSet_ = true;
}

bool ShowProjectSummaryV4Response::issueCompletionRatesIsSet() const
{
    return issueCompletionRatesIsSet_;
}

void ShowProjectSummaryV4Response::unsetissueCompletionRates()
{
    issueCompletionRatesIsSet_ = false;
}

std::string ShowProjectSummaryV4Response::getProjectId() const
{
    return projectId_;
}

void ShowProjectSummaryV4Response::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowProjectSummaryV4Response::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowProjectSummaryV4Response::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


