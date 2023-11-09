

#include "huaweicloud/tics/v1/model/ShowJobStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ShowJobStatisticsRequest::ShowJobStatisticsRequest()
{
    leagueId_ = "";
    leagueIdIsSet_ = false;
    startDate_ = "";
    startDateIsSet_ = false;
    endDate_ = "";
    endDateIsSet_ = false;
}

ShowJobStatisticsRequest::~ShowJobStatisticsRequest() = default;

void ShowJobStatisticsRequest::validate()
{
}

web::json::value ShowJobStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(leagueIdIsSet_) {
        val[utility::conversions::to_string_t("league_id")] = ModelBase::toJson(leagueId_);
    }
    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(endDateIsSet_) {
        val[utility::conversions::to_string_t("end_date")] = ModelBase::toJson(endDate_);
    }

    return val;
}
bool ShowJobStatisticsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("league_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("league_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeagueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndDate(refVal);
        }
    }
    return ok;
}


std::string ShowJobStatisticsRequest::getLeagueId() const
{
    return leagueId_;
}

void ShowJobStatisticsRequest::setLeagueId(const std::string& value)
{
    leagueId_ = value;
    leagueIdIsSet_ = true;
}

bool ShowJobStatisticsRequest::leagueIdIsSet() const
{
    return leagueIdIsSet_;
}

void ShowJobStatisticsRequest::unsetleagueId()
{
    leagueIdIsSet_ = false;
}

std::string ShowJobStatisticsRequest::getStartDate() const
{
    return startDate_;
}

void ShowJobStatisticsRequest::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool ShowJobStatisticsRequest::startDateIsSet() const
{
    return startDateIsSet_;
}

void ShowJobStatisticsRequest::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string ShowJobStatisticsRequest::getEndDate() const
{
    return endDate_;
}

void ShowJobStatisticsRequest::setEndDate(const std::string& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool ShowJobStatisticsRequest::endDateIsSet() const
{
    return endDateIsSet_;
}

void ShowJobStatisticsRequest::unsetendDate()
{
    endDateIsSet_ = false;
}

}
}
}
}
}


