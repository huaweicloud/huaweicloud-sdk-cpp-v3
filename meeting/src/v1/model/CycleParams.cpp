

#include "huaweicloud/meeting/v1/model/CycleParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CycleParams::CycleParams()
{
    startDate_ = "";
    startDateIsSet_ = false;
    endDate_ = "";
    endDateIsSet_ = false;
    cycle_ = "";
    cycleIsSet_ = false;
    interval_ = 0;
    intervalIsSet_ = false;
    pointIsSet_ = false;
    preRemindDays_ = 0;
    preRemindDaysIsSet_ = false;
}

CycleParams::~CycleParams() = default;

void CycleParams::validate()
{
}

web::json::value CycleParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("startDate")] = ModelBase::toJson(startDate_);
    }
    if(endDateIsSet_) {
        val[utility::conversions::to_string_t("endDate")] = ModelBase::toJson(endDate_);
    }
    if(cycleIsSet_) {
        val[utility::conversions::to_string_t("cycle")] = ModelBase::toJson(cycle_);
    }
    if(intervalIsSet_) {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(interval_);
    }
    if(pointIsSet_) {
        val[utility::conversions::to_string_t("point")] = ModelBase::toJson(point_);
    }
    if(preRemindDaysIsSet_) {
        val[utility::conversions::to_string_t("preRemindDays")] = ModelBase::toJson(preRemindDays_);
    }

    return val;
}
bool CycleParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("startDate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startDate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endDate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endDate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cycle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cycle"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCycle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("point"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("point"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("preRemindDays"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preRemindDays"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreRemindDays(refVal);
        }
    }
    return ok;
}


std::string CycleParams::getStartDate() const
{
    return startDate_;
}

void CycleParams::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool CycleParams::startDateIsSet() const
{
    return startDateIsSet_;
}

void CycleParams::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string CycleParams::getEndDate() const
{
    return endDate_;
}

void CycleParams::setEndDate(const std::string& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool CycleParams::endDateIsSet() const
{
    return endDateIsSet_;
}

void CycleParams::unsetendDate()
{
    endDateIsSet_ = false;
}

std::string CycleParams::getCycle() const
{
    return cycle_;
}

void CycleParams::setCycle(const std::string& value)
{
    cycle_ = value;
    cycleIsSet_ = true;
}

bool CycleParams::cycleIsSet() const
{
    return cycleIsSet_;
}

void CycleParams::unsetcycle()
{
    cycleIsSet_ = false;
}

int32_t CycleParams::getInterval() const
{
    return interval_;
}

void CycleParams::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool CycleParams::intervalIsSet() const
{
    return intervalIsSet_;
}

void CycleParams::unsetinterval()
{
    intervalIsSet_ = false;
}

std::vector<int32_t>& CycleParams::getPoint()
{
    return point_;
}

void CycleParams::setPoint(std::vector<int32_t> value)
{
    point_ = value;
    pointIsSet_ = true;
}

bool CycleParams::pointIsSet() const
{
    return pointIsSet_;
}

void CycleParams::unsetpoint()
{
    pointIsSet_ = false;
}

int32_t CycleParams::getPreRemindDays() const
{
    return preRemindDays_;
}

void CycleParams::setPreRemindDays(int32_t value)
{
    preRemindDays_ = value;
    preRemindDaysIsSet_ = true;
}

bool CycleParams::preRemindDaysIsSet() const
{
    return preRemindDaysIsSet_;
}

void CycleParams::unsetpreRemindDays()
{
    preRemindDaysIsSet_ = false;
}

}
}
}
}
}


