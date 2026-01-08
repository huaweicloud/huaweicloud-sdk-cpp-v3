

#include "huaweicloud/cdn/v2/model/ShowDomainStatsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowDomainStatsResponse::ShowDomainStatsResponse()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    statType_ = "";
    statTypeIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    interval_ = 0L;
    intervalIsSet_ = false;
    resultIsSet_ = false;
}

ShowDomainStatsResponse::~ShowDomainStatsResponse() = default;

void ShowDomainStatsResponse::validate()
{
}

web::json::value ShowDomainStatsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(statTypeIsSet_) {
        val[utility::conversions::to_string_t("stat_type")] = ModelBase::toJson(statType_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(intervalIsSet_) {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(interval_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowDomainStatsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stat_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stat_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interval"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


int64_t ShowDomainStatsResponse::getStartTime() const
{
    return startTime_;
}

void ShowDomainStatsResponse::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowDomainStatsResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowDomainStatsResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowDomainStatsResponse::getEndTime() const
{
    return endTime_;
}

void ShowDomainStatsResponse::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowDomainStatsResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowDomainStatsResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowDomainStatsResponse::getStatType() const
{
    return statType_;
}

void ShowDomainStatsResponse::setStatType(const std::string& value)
{
    statType_ = value;
    statTypeIsSet_ = true;
}

bool ShowDomainStatsResponse::statTypeIsSet() const
{
    return statTypeIsSet_;
}

void ShowDomainStatsResponse::unsetstatType()
{
    statTypeIsSet_ = false;
}

std::string ShowDomainStatsResponse::getAction() const
{
    return action_;
}

void ShowDomainStatsResponse::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ShowDomainStatsResponse::actionIsSet() const
{
    return actionIsSet_;
}

void ShowDomainStatsResponse::unsetaction()
{
    actionIsSet_ = false;
}

int64_t ShowDomainStatsResponse::getInterval() const
{
    return interval_;
}

void ShowDomainStatsResponse::setInterval(int64_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ShowDomainStatsResponse::intervalIsSet() const
{
    return intervalIsSet_;
}

void ShowDomainStatsResponse::unsetinterval()
{
    intervalIsSet_ = false;
}

std::map<std::string, Object>& ShowDomainStatsResponse::getResult()
{
    return result_;
}

void ShowDomainStatsResponse::setResult(const std::map<std::string, Object>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowDomainStatsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowDomainStatsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


