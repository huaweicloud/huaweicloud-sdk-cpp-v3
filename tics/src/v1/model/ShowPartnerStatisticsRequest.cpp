

#include "huaweicloud/tics/v1/model/ShowPartnerStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ShowPartnerStatisticsRequest::ShowPartnerStatisticsRequest()
{
    leagueId_ = "";
    leagueIdIsSet_ = false;
    startDate_ = "";
    startDateIsSet_ = false;
    endDate_ = "";
    endDateIsSet_ = false;
}

ShowPartnerStatisticsRequest::~ShowPartnerStatisticsRequest() = default;

void ShowPartnerStatisticsRequest::validate()
{
}

web::json::value ShowPartnerStatisticsRequest::toJson() const
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
bool ShowPartnerStatisticsRequest::fromJson(const web::json::value& val)
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


std::string ShowPartnerStatisticsRequest::getLeagueId() const
{
    return leagueId_;
}

void ShowPartnerStatisticsRequest::setLeagueId(const std::string& value)
{
    leagueId_ = value;
    leagueIdIsSet_ = true;
}

bool ShowPartnerStatisticsRequest::leagueIdIsSet() const
{
    return leagueIdIsSet_;
}

void ShowPartnerStatisticsRequest::unsetleagueId()
{
    leagueIdIsSet_ = false;
}

std::string ShowPartnerStatisticsRequest::getStartDate() const
{
    return startDate_;
}

void ShowPartnerStatisticsRequest::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool ShowPartnerStatisticsRequest::startDateIsSet() const
{
    return startDateIsSet_;
}

void ShowPartnerStatisticsRequest::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string ShowPartnerStatisticsRequest::getEndDate() const
{
    return endDate_;
}

void ShowPartnerStatisticsRequest::setEndDate(const std::string& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool ShowPartnerStatisticsRequest::endDateIsSet() const
{
    return endDateIsSet_;
}

void ShowPartnerStatisticsRequest::unsetendDate()
{
    endDateIsSet_ = false;
}

}
}
}
}
}


