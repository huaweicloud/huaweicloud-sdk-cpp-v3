

#include "huaweicloud/codeartsrepo/v3/model/RepoCommitStatistics.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




RepoCommitStatistics::RepoCommitStatistics()
{
    allBranchCommitsCount_ = 0;
    allBranchCommitsCountIsSet_ = false;
    codelinesIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    eventIsSet_ = false;
    statisticsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

RepoCommitStatistics::~RepoCommitStatistics() = default;

void RepoCommitStatistics::validate()
{
}

web::json::value RepoCommitStatistics::toJson() const
{
    web::json::value val = web::json::value::object();

    if(allBranchCommitsCountIsSet_) {
        val[utility::conversions::to_string_t("all_branch_commits_count")] = ModelBase::toJson(allBranchCommitsCount_);
    }
    if(codelinesIsSet_) {
        val[utility::conversions::to_string_t("codelines")] = ModelBase::toJson(codelines_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(eventIsSet_) {
        val[utility::conversions::to_string_t("event")] = ModelBase::toJson(event_);
    }
    if(statisticsIsSet_) {
        val[utility::conversions::to_string_t("statistics")] = ModelBase::toJson(statistics_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool RepoCommitStatistics::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("all_branch_commits_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_branch_commits_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllBranchCommitsCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("codelines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codelines"));
        if(!fieldValue.is_null())
        {
            std::vector<RepoDailyCodeline> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodelines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event"));
        if(!fieldValue.is_null())
        {
            RepoStatisticsEvent refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<RepoStatistics> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatistics(refVal);
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
    return ok;
}


int32_t RepoCommitStatistics::getAllBranchCommitsCount() const
{
    return allBranchCommitsCount_;
}

void RepoCommitStatistics::setAllBranchCommitsCount(int32_t value)
{
    allBranchCommitsCount_ = value;
    allBranchCommitsCountIsSet_ = true;
}

bool RepoCommitStatistics::allBranchCommitsCountIsSet() const
{
    return allBranchCommitsCountIsSet_;
}

void RepoCommitStatistics::unsetallBranchCommitsCount()
{
    allBranchCommitsCountIsSet_ = false;
}

std::vector<RepoDailyCodeline>& RepoCommitStatistics::getCodelines()
{
    return codelines_;
}

void RepoCommitStatistics::setCodelines(const std::vector<RepoDailyCodeline>& value)
{
    codelines_ = value;
    codelinesIsSet_ = true;
}

bool RepoCommitStatistics::codelinesIsSet() const
{
    return codelinesIsSet_;
}

void RepoCommitStatistics::unsetcodelines()
{
    codelinesIsSet_ = false;
}

int32_t RepoCommitStatistics::getCount() const
{
    return count_;
}

void RepoCommitStatistics::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool RepoCommitStatistics::countIsSet() const
{
    return countIsSet_;
}

void RepoCommitStatistics::unsetcount()
{
    countIsSet_ = false;
}

RepoStatisticsEvent RepoCommitStatistics::getEvent() const
{
    return event_;
}

void RepoCommitStatistics::setEvent(const RepoStatisticsEvent& value)
{
    event_ = value;
    eventIsSet_ = true;
}

bool RepoCommitStatistics::eventIsSet() const
{
    return eventIsSet_;
}

void RepoCommitStatistics::unsetevent()
{
    eventIsSet_ = false;
}

std::vector<RepoStatistics>& RepoCommitStatistics::getStatistics()
{
    return statistics_;
}

void RepoCommitStatistics::setStatistics(const std::vector<RepoStatistics>& value)
{
    statistics_ = value;
    statisticsIsSet_ = true;
}

bool RepoCommitStatistics::statisticsIsSet() const
{
    return statisticsIsSet_;
}

void RepoCommitStatistics::unsetstatistics()
{
    statisticsIsSet_ = false;
}

int32_t RepoCommitStatistics::getTotal() const
{
    return total_;
}

void RepoCommitStatistics::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool RepoCommitStatistics::totalIsSet() const
{
    return totalIsSet_;
}

void RepoCommitStatistics::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


