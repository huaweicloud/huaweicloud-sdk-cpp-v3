

#include "huaweicloud/drs/v5/model/ShowComparePolicyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowComparePolicyResponse::ShowComparePolicyResponse()
{
    period_ = "";
    periodIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    compareTypeIsSet_ = false;
    nextCompareTime_ = "";
    nextCompareTimeIsSet_ = false;
    comparePolicy_ = "";
    comparePolicyIsSet_ = false;
    intervalHour_ = 0;
    intervalHourIsSet_ = false;
}

ShowComparePolicyResponse::~ShowComparePolicyResponse() = default;

void ShowComparePolicyResponse::validate()
{
}

web::json::value ShowComparePolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(compareTypeIsSet_) {
        val[utility::conversions::to_string_t("compare_type")] = ModelBase::toJson(compareType_);
    }
    if(nextCompareTimeIsSet_) {
        val[utility::conversions::to_string_t("next_compare_time")] = ModelBase::toJson(nextCompareTime_);
    }
    if(comparePolicyIsSet_) {
        val[utility::conversions::to_string_t("compare_policy")] = ModelBase::toJson(comparePolicy_);
    }
    if(intervalHourIsSet_) {
        val[utility::conversions::to_string_t("interval_hour")] = ModelBase::toJson(intervalHour_);
    }

    return val;
}

bool ShowComparePolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next_compare_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_compare_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextCompareTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComparePolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interval_hour"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interval_hour"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntervalHour(refVal);
        }
    }
    return ok;
}

std::string ShowComparePolicyResponse::getPeriod() const
{
    return period_;
}

void ShowComparePolicyResponse::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool ShowComparePolicyResponse::periodIsSet() const
{
    return periodIsSet_;
}

void ShowComparePolicyResponse::unsetperiod()
{
    periodIsSet_ = false;
}

std::string ShowComparePolicyResponse::getStatus() const
{
    return status_;
}

void ShowComparePolicyResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowComparePolicyResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowComparePolicyResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowComparePolicyResponse::getBeginTime() const
{
    return beginTime_;
}

void ShowComparePolicyResponse::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ShowComparePolicyResponse::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ShowComparePolicyResponse::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ShowComparePolicyResponse::getEndTime() const
{
    return endTime_;
}

void ShowComparePolicyResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowComparePolicyResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowComparePolicyResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<std::string>& ShowComparePolicyResponse::getCompareType()
{
    return compareType_;
}

void ShowComparePolicyResponse::setCompareType(const std::vector<std::string>& value)
{
    compareType_ = value;
    compareTypeIsSet_ = true;
}

bool ShowComparePolicyResponse::compareTypeIsSet() const
{
    return compareTypeIsSet_;
}

void ShowComparePolicyResponse::unsetcompareType()
{
    compareTypeIsSet_ = false;
}

std::string ShowComparePolicyResponse::getNextCompareTime() const
{
    return nextCompareTime_;
}

void ShowComparePolicyResponse::setNextCompareTime(const std::string& value)
{
    nextCompareTime_ = value;
    nextCompareTimeIsSet_ = true;
}

bool ShowComparePolicyResponse::nextCompareTimeIsSet() const
{
    return nextCompareTimeIsSet_;
}

void ShowComparePolicyResponse::unsetnextCompareTime()
{
    nextCompareTimeIsSet_ = false;
}

std::string ShowComparePolicyResponse::getComparePolicy() const
{
    return comparePolicy_;
}

void ShowComparePolicyResponse::setComparePolicy(const std::string& value)
{
    comparePolicy_ = value;
    comparePolicyIsSet_ = true;
}

bool ShowComparePolicyResponse::comparePolicyIsSet() const
{
    return comparePolicyIsSet_;
}

void ShowComparePolicyResponse::unsetcomparePolicy()
{
    comparePolicyIsSet_ = false;
}

int32_t ShowComparePolicyResponse::getIntervalHour() const
{
    return intervalHour_;
}

void ShowComparePolicyResponse::setIntervalHour(int32_t value)
{
    intervalHour_ = value;
    intervalHourIsSet_ = true;
}

bool ShowComparePolicyResponse::intervalHourIsSet() const
{
    return intervalHourIsSet_;
}

void ShowComparePolicyResponse::unsetintervalHour()
{
    intervalHourIsSet_ = false;
}

}
}
}
}
}


