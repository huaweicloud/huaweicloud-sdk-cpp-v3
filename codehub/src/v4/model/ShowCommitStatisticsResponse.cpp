

#include "huaweicloud/codehub/v4/model/ShowCommitStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowCommitStatisticsResponse::ShowCommitStatisticsResponse()
{
    commitsIsSet_ = false;
    statisticsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ShowCommitStatisticsResponse::~ShowCommitStatisticsResponse() = default;

void ShowCommitStatisticsResponse::validate()
{
}

web::json::value ShowCommitStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commitsIsSet_) {
        val[utility::conversions::to_string_t("commits")] = ModelBase::toJson(commits_);
    }
    if(statisticsIsSet_) {
        val[utility::conversions::to_string_t("statistics")] = ModelBase::toJson(statistics_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(xTotalIsSet_) {
        val[utility::conversions::to_string_t("X-Total")] = ModelBase::toJson(xTotal_);
    }

    return val;
}
bool ShowCommitStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("commits"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commits"));
        if(!fieldValue.is_null())
        {
            std::vector<CommitStatisticsResultCommitDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommits(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXTotal(refVal);
        }
    }
    return ok;
}


std::vector<CommitStatisticsResultCommitDto>& ShowCommitStatisticsResponse::getCommits()
{
    return commits_;
}

void ShowCommitStatisticsResponse::setCommits(const std::vector<CommitStatisticsResultCommitDto>& value)
{
    commits_ = value;
    commitsIsSet_ = true;
}

bool ShowCommitStatisticsResponse::commitsIsSet() const
{
    return commitsIsSet_;
}

void ShowCommitStatisticsResponse::unsetcommits()
{
    commitsIsSet_ = false;
}

std::vector<StatisticDto>& ShowCommitStatisticsResponse::getStatistics()
{
    return statistics_;
}

void ShowCommitStatisticsResponse::setStatistics(const std::vector<StatisticDto>& value)
{
    statistics_ = value;
    statisticsIsSet_ = true;
}

bool ShowCommitStatisticsResponse::statisticsIsSet() const
{
    return statisticsIsSet_;
}

void ShowCommitStatisticsResponse::unsetstatistics()
{
    statisticsIsSet_ = false;
}

int32_t ShowCommitStatisticsResponse::getTotal() const
{
    return total_;
}

void ShowCommitStatisticsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowCommitStatisticsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowCommitStatisticsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::string ShowCommitStatisticsResponse::getXTotal() const
{
    return xTotal_;
}

void ShowCommitStatisticsResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ShowCommitStatisticsResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ShowCommitStatisticsResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


