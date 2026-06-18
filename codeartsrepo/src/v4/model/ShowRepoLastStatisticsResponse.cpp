

#include "huaweicloud/codeartsrepo/v4/model/ShowRepoLastStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowRepoLastStatisticsResponse::ShowRepoLastStatisticsResponse()
{
    eventIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    statisticsIsSet_ = false;
    codelinesIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    allBranchCommitsCount_ = 0;
    allBranchCommitsCountIsSet_ = false;
}

ShowRepoLastStatisticsResponse::~ShowRepoLastStatisticsResponse() = default;

void ShowRepoLastStatisticsResponse::validate()
{
}

web::json::value ShowRepoLastStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventIsSet_) {
        val[utility::conversions::to_string_t("event")] = ModelBase::toJson(event_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(statisticsIsSet_) {
        val[utility::conversions::to_string_t("statistics")] = ModelBase::toJson(statistics_);
    }
    if(codelinesIsSet_) {
        val[utility::conversions::to_string_t("codelines")] = ModelBase::toJson(codelines_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(allBranchCommitsCountIsSet_) {
        val[utility::conversions::to_string_t("all_branch_commits_count")] = ModelBase::toJson(allBranchCommitsCount_);
    }

    return val;
}
bool ShowRepoLastStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("event"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event"));
        if(!fieldValue.is_null())
        {
            StatisticEventsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvent(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<StatisticDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatistics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("codelines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codelines"));
        if(!fieldValue.is_null())
        {
            std::vector<CodelineDto> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("all_branch_commits_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_branch_commits_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllBranchCommitsCount(refVal);
        }
    }
    return ok;
}


StatisticEventsDto ShowRepoLastStatisticsResponse::getEvent() const
{
    return event_;
}

void ShowRepoLastStatisticsResponse::setEvent(const StatisticEventsDto& value)
{
    event_ = value;
    eventIsSet_ = true;
}

bool ShowRepoLastStatisticsResponse::eventIsSet() const
{
    return eventIsSet_;
}

void ShowRepoLastStatisticsResponse::unsetevent()
{
    eventIsSet_ = false;
}

int32_t ShowRepoLastStatisticsResponse::getTotal() const
{
    return total_;
}

void ShowRepoLastStatisticsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowRepoLastStatisticsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowRepoLastStatisticsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<StatisticDto>& ShowRepoLastStatisticsResponse::getStatistics()
{
    return statistics_;
}

void ShowRepoLastStatisticsResponse::setStatistics(const std::vector<StatisticDto>& value)
{
    statistics_ = value;
    statisticsIsSet_ = true;
}

bool ShowRepoLastStatisticsResponse::statisticsIsSet() const
{
    return statisticsIsSet_;
}

void ShowRepoLastStatisticsResponse::unsetstatistics()
{
    statisticsIsSet_ = false;
}

std::vector<CodelineDto>& ShowRepoLastStatisticsResponse::getCodelines()
{
    return codelines_;
}

void ShowRepoLastStatisticsResponse::setCodelines(const std::vector<CodelineDto>& value)
{
    codelines_ = value;
    codelinesIsSet_ = true;
}

bool ShowRepoLastStatisticsResponse::codelinesIsSet() const
{
    return codelinesIsSet_;
}

void ShowRepoLastStatisticsResponse::unsetcodelines()
{
    codelinesIsSet_ = false;
}

int32_t ShowRepoLastStatisticsResponse::getCount() const
{
    return count_;
}

void ShowRepoLastStatisticsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowRepoLastStatisticsResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowRepoLastStatisticsResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t ShowRepoLastStatisticsResponse::getAllBranchCommitsCount() const
{
    return allBranchCommitsCount_;
}

void ShowRepoLastStatisticsResponse::setAllBranchCommitsCount(int32_t value)
{
    allBranchCommitsCount_ = value;
    allBranchCommitsCountIsSet_ = true;
}

bool ShowRepoLastStatisticsResponse::allBranchCommitsCountIsSet() const
{
    return allBranchCommitsCountIsSet_;
}

void ShowRepoLastStatisticsResponse::unsetallBranchCommitsCount()
{
    allBranchCommitsCountIsSet_ = false;
}

}
}
}
}
}


