

#include "huaweicloud/modelarts/v1/model/ShowPoolMonitorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowPoolMonitorRequest::ShowPoolMonitorRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    timeRange_ = "";
    timeRangeIsSet_ = false;
    statistics_ = "";
    statisticsIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
}

ShowPoolMonitorRequest::~ShowPoolMonitorRequest() = default;

void ShowPoolMonitorRequest::validate()
{
}

web::json::value ShowPoolMonitorRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(poolNameIsSet_) {
        val[utility::conversions::to_string_t("pool_name")] = ModelBase::toJson(poolName_);
    }
    if(timeRangeIsSet_) {
        val[utility::conversions::to_string_t("time_range")] = ModelBase::toJson(timeRange_);
    }
    if(statisticsIsSet_) {
        val[utility::conversions::to_string_t("statistics")] = ModelBase::toJson(statistics_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }

    return val;
}
bool ShowPoolMonitorRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pool_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_range"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeRange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statistics"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatistics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    return ok;
}


std::string ShowPoolMonitorRequest::getPoolName() const
{
    return poolName_;
}

void ShowPoolMonitorRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool ShowPoolMonitorRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void ShowPoolMonitorRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

std::string ShowPoolMonitorRequest::getTimeRange() const
{
    return timeRange_;
}

void ShowPoolMonitorRequest::setTimeRange(const std::string& value)
{
    timeRange_ = value;
    timeRangeIsSet_ = true;
}

bool ShowPoolMonitorRequest::timeRangeIsSet() const
{
    return timeRangeIsSet_;
}

void ShowPoolMonitorRequest::unsettimeRange()
{
    timeRangeIsSet_ = false;
}

std::string ShowPoolMonitorRequest::getStatistics() const
{
    return statistics_;
}

void ShowPoolMonitorRequest::setStatistics(const std::string& value)
{
    statistics_ = value;
    statisticsIsSet_ = true;
}

bool ShowPoolMonitorRequest::statisticsIsSet() const
{
    return statisticsIsSet_;
}

void ShowPoolMonitorRequest::unsetstatistics()
{
    statisticsIsSet_ = false;
}

std::string ShowPoolMonitorRequest::getPeriod() const
{
    return period_;
}

void ShowPoolMonitorRequest::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool ShowPoolMonitorRequest::periodIsSet() const
{
    return periodIsSet_;
}

void ShowPoolMonitorRequest::unsetperiod()
{
    periodIsSet_ = false;
}

}
}
}
}
}


