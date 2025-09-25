

#include "huaweicloud/codehub/v4/model/IssuableTimeStatsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




IssuableTimeStatsDto::IssuableTimeStatsDto()
{
    timeEstimate_ = 0;
    timeEstimateIsSet_ = false;
    totalTimeSpent_ = 0;
    totalTimeSpentIsSet_ = false;
    humanTimeEstimate_ = "";
    humanTimeEstimateIsSet_ = false;
    humanTotalTimeSpent_ = "";
    humanTotalTimeSpentIsSet_ = false;
}

IssuableTimeStatsDto::~IssuableTimeStatsDto() = default;

void IssuableTimeStatsDto::validate()
{
}

web::json::value IssuableTimeStatsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeEstimateIsSet_) {
        val[utility::conversions::to_string_t("time_estimate")] = ModelBase::toJson(timeEstimate_);
    }
    if(totalTimeSpentIsSet_) {
        val[utility::conversions::to_string_t("total_time_spent")] = ModelBase::toJson(totalTimeSpent_);
    }
    if(humanTimeEstimateIsSet_) {
        val[utility::conversions::to_string_t("human_time_estimate")] = ModelBase::toJson(humanTimeEstimate_);
    }
    if(humanTotalTimeSpentIsSet_) {
        val[utility::conversions::to_string_t("human_total_time_spent")] = ModelBase::toJson(humanTotalTimeSpent_);
    }

    return val;
}
bool IssuableTimeStatsDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time_estimate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_estimate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeEstimate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_time_spent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_time_spent"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalTimeSpent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("human_time_estimate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("human_time_estimate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHumanTimeEstimate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("human_total_time_spent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("human_total_time_spent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHumanTotalTimeSpent(refVal);
        }
    }
    return ok;
}


int32_t IssuableTimeStatsDto::getTimeEstimate() const
{
    return timeEstimate_;
}

void IssuableTimeStatsDto::setTimeEstimate(int32_t value)
{
    timeEstimate_ = value;
    timeEstimateIsSet_ = true;
}

bool IssuableTimeStatsDto::timeEstimateIsSet() const
{
    return timeEstimateIsSet_;
}

void IssuableTimeStatsDto::unsettimeEstimate()
{
    timeEstimateIsSet_ = false;
}

int32_t IssuableTimeStatsDto::getTotalTimeSpent() const
{
    return totalTimeSpent_;
}

void IssuableTimeStatsDto::setTotalTimeSpent(int32_t value)
{
    totalTimeSpent_ = value;
    totalTimeSpentIsSet_ = true;
}

bool IssuableTimeStatsDto::totalTimeSpentIsSet() const
{
    return totalTimeSpentIsSet_;
}

void IssuableTimeStatsDto::unsettotalTimeSpent()
{
    totalTimeSpentIsSet_ = false;
}

std::string IssuableTimeStatsDto::getHumanTimeEstimate() const
{
    return humanTimeEstimate_;
}

void IssuableTimeStatsDto::setHumanTimeEstimate(const std::string& value)
{
    humanTimeEstimate_ = value;
    humanTimeEstimateIsSet_ = true;
}

bool IssuableTimeStatsDto::humanTimeEstimateIsSet() const
{
    return humanTimeEstimateIsSet_;
}

void IssuableTimeStatsDto::unsethumanTimeEstimate()
{
    humanTimeEstimateIsSet_ = false;
}

std::string IssuableTimeStatsDto::getHumanTotalTimeSpent() const
{
    return humanTotalTimeSpent_;
}

void IssuableTimeStatsDto::setHumanTotalTimeSpent(const std::string& value)
{
    humanTotalTimeSpent_ = value;
    humanTotalTimeSpentIsSet_ = true;
}

bool IssuableTimeStatsDto::humanTotalTimeSpentIsSet() const
{
    return humanTotalTimeSpentIsSet_;
}

void IssuableTimeStatsDto::unsethumanTotalTimeSpent()
{
    humanTotalTimeSpentIsSet_ = false;
}

}
}
}
}
}


