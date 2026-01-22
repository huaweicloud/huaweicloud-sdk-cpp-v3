

#include "huaweicloud/cfw/v1/model/ScheduleVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ScheduleVO::ScheduleVO()
{
    scheduleId_ = "";
    scheduleIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    refCount_ = 0;
    refCountIsSet_ = false;
    periodicIsSet_ = false;
    absoluteIsSet_ = false;
}

ScheduleVO::~ScheduleVO() = default;

void ScheduleVO::validate()
{
}

web::json::value ScheduleVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scheduleIdIsSet_) {
        val[utility::conversions::to_string_t("schedule_id")] = ModelBase::toJson(scheduleId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(refCountIsSet_) {
        val[utility::conversions::to_string_t("ref_count")] = ModelBase::toJson(refCount_);
    }
    if(periodicIsSet_) {
        val[utility::conversions::to_string_t("periodic")] = ModelBase::toJson(periodic_);
    }
    if(absoluteIsSet_) {
        val[utility::conversions::to_string_t("absolute")] = ModelBase::toJson(absolute_);
    }

    return val;
}
bool ScheduleVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("schedule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ref_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("periodic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("periodic"));
        if(!fieldValue.is_null())
        {
            std::vector<ScheduleVO_periodic> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("absolute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("absolute"));
        if(!fieldValue.is_null())
        {
            ScheduleVO_absolute refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAbsolute(refVal);
        }
    }
    return ok;
}


std::string ScheduleVO::getScheduleId() const
{
    return scheduleId_;
}

void ScheduleVO::setScheduleId(const std::string& value)
{
    scheduleId_ = value;
    scheduleIdIsSet_ = true;
}

bool ScheduleVO::scheduleIdIsSet() const
{
    return scheduleIdIsSet_;
}

void ScheduleVO::unsetscheduleId()
{
    scheduleIdIsSet_ = false;
}

std::string ScheduleVO::getName() const
{
    return name_;
}

void ScheduleVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ScheduleVO::nameIsSet() const
{
    return nameIsSet_;
}

void ScheduleVO::unsetname()
{
    nameIsSet_ = false;
}

std::string ScheduleVO::getDescription() const
{
    return description_;
}

void ScheduleVO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ScheduleVO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ScheduleVO::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t ScheduleVO::getRefCount() const
{
    return refCount_;
}

void ScheduleVO::setRefCount(int32_t value)
{
    refCount_ = value;
    refCountIsSet_ = true;
}

bool ScheduleVO::refCountIsSet() const
{
    return refCountIsSet_;
}

void ScheduleVO::unsetrefCount()
{
    refCountIsSet_ = false;
}

std::vector<ScheduleVO_periodic>& ScheduleVO::getPeriodic()
{
    return periodic_;
}

void ScheduleVO::setPeriodic(const std::vector<ScheduleVO_periodic>& value)
{
    periodic_ = value;
    periodicIsSet_ = true;
}

bool ScheduleVO::periodicIsSet() const
{
    return periodicIsSet_;
}

void ScheduleVO::unsetperiodic()
{
    periodicIsSet_ = false;
}

ScheduleVO_absolute ScheduleVO::getAbsolute() const
{
    return absolute_;
}

void ScheduleVO::setAbsolute(const ScheduleVO_absolute& value)
{
    absolute_ = value;
    absoluteIsSet_ = true;
}

bool ScheduleVO::absoluteIsSet() const
{
    return absoluteIsSet_;
}

void ScheduleVO::unsetabsolute()
{
    absoluteIsSet_ = false;
}

}
}
}
}
}


