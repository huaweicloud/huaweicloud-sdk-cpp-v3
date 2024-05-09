

#include "huaweicloud/drs/v5/model/ModifyComparePolicyReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ModifyComparePolicyReq::ModifyComparePolicyReq()
{
    action_ = "";
    actionIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    compareTypeIsSet_ = false;
    comparePolicy_ = "";
    comparePolicyIsSet_ = false;
    intervalHour_ = 0;
    intervalHourIsSet_ = false;
}

ModifyComparePolicyReq::~ModifyComparePolicyReq() = default;

void ModifyComparePolicyReq::validate()
{
}

web::json::value ModifyComparePolicyReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
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
    if(comparePolicyIsSet_) {
        val[utility::conversions::to_string_t("compare_policy")] = ModelBase::toJson(comparePolicy_);
    }
    if(intervalHourIsSet_) {
        val[utility::conversions::to_string_t("interval_hour")] = ModelBase::toJson(intervalHour_);
    }

    return val;
}
bool ModifyComparePolicyReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
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


std::string ModifyComparePolicyReq::getAction() const
{
    return action_;
}

void ModifyComparePolicyReq::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ModifyComparePolicyReq::actionIsSet() const
{
    return actionIsSet_;
}

void ModifyComparePolicyReq::unsetaction()
{
    actionIsSet_ = false;
}

std::string ModifyComparePolicyReq::getPeriod() const
{
    return period_;
}

void ModifyComparePolicyReq::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool ModifyComparePolicyReq::periodIsSet() const
{
    return periodIsSet_;
}

void ModifyComparePolicyReq::unsetperiod()
{
    periodIsSet_ = false;
}

std::string ModifyComparePolicyReq::getBeginTime() const
{
    return beginTime_;
}

void ModifyComparePolicyReq::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ModifyComparePolicyReq::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ModifyComparePolicyReq::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ModifyComparePolicyReq::getEndTime() const
{
    return endTime_;
}

void ModifyComparePolicyReq::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ModifyComparePolicyReq::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ModifyComparePolicyReq::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<std::string>& ModifyComparePolicyReq::getCompareType()
{
    return compareType_;
}

void ModifyComparePolicyReq::setCompareType(const std::vector<std::string>& value)
{
    compareType_ = value;
    compareTypeIsSet_ = true;
}

bool ModifyComparePolicyReq::compareTypeIsSet() const
{
    return compareTypeIsSet_;
}

void ModifyComparePolicyReq::unsetcompareType()
{
    compareTypeIsSet_ = false;
}

std::string ModifyComparePolicyReq::getComparePolicy() const
{
    return comparePolicy_;
}

void ModifyComparePolicyReq::setComparePolicy(const std::string& value)
{
    comparePolicy_ = value;
    comparePolicyIsSet_ = true;
}

bool ModifyComparePolicyReq::comparePolicyIsSet() const
{
    return comparePolicyIsSet_;
}

void ModifyComparePolicyReq::unsetcomparePolicy()
{
    comparePolicyIsSet_ = false;
}

int32_t ModifyComparePolicyReq::getIntervalHour() const
{
    return intervalHour_;
}

void ModifyComparePolicyReq::setIntervalHour(int32_t value)
{
    intervalHour_ = value;
    intervalHourIsSet_ = true;
}

bool ModifyComparePolicyReq::intervalHourIsSet() const
{
    return intervalHourIsSet_;
}

void ModifyComparePolicyReq::unsetintervalHour()
{
    intervalHourIsSet_ = false;
}

}
}
}
}
}


