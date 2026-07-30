

#include "huaweicloud/modelarts/v1/model/ScheduleConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ScheduleConfigResponse::ScheduleConfigResponse()
{
    dueTime_ = 0L;
    dueTimeIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
    timeUnit_ = "";
    timeUnitIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    processed_ = false;
    processedIsSet_ = false;
}

ScheduleConfigResponse::~ScheduleConfigResponse() = default;

void ScheduleConfigResponse::validate()
{
}

web::json::value ScheduleConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dueTimeIsSet_) {
        val[utility::conversions::to_string_t("due_time")] = ModelBase::toJson(dueTime_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(timeUnitIsSet_) {
        val[utility::conversions::to_string_t("time_unit")] = ModelBase::toJson(timeUnit_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(processedIsSet_) {
        val[utility::conversions::to_string_t("processed")] = ModelBase::toJson(processed_);
    }

    return val;
}
bool ScheduleConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("due_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("due_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDueTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeUnit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("processed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("processed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessed(refVal);
        }
    }
    return ok;
}


int64_t ScheduleConfigResponse::getDueTime() const
{
    return dueTime_;
}

void ScheduleConfigResponse::setDueTime(int64_t value)
{
    dueTime_ = value;
    dueTimeIsSet_ = true;
}

bool ScheduleConfigResponse::dueTimeIsSet() const
{
    return dueTimeIsSet_;
}

void ScheduleConfigResponse::unsetdueTime()
{
    dueTimeIsSet_ = false;
}

int32_t ScheduleConfigResponse::getDuration() const
{
    return duration_;
}

void ScheduleConfigResponse::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool ScheduleConfigResponse::durationIsSet() const
{
    return durationIsSet_;
}

void ScheduleConfigResponse::unsetduration()
{
    durationIsSet_ = false;
}

std::string ScheduleConfigResponse::getTimeUnit() const
{
    return timeUnit_;
}

void ScheduleConfigResponse::setTimeUnit(const std::string& value)
{
    timeUnit_ = value;
    timeUnitIsSet_ = true;
}

bool ScheduleConfigResponse::timeUnitIsSet() const
{
    return timeUnitIsSet_;
}

void ScheduleConfigResponse::unsettimeUnit()
{
    timeUnitIsSet_ = false;
}

std::string ScheduleConfigResponse::getType() const
{
    return type_;
}

void ScheduleConfigResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ScheduleConfigResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ScheduleConfigResponse::unsettype()
{
    typeIsSet_ = false;
}

bool ScheduleConfigResponse::isProcessed() const
{
    return processed_;
}

void ScheduleConfigResponse::setProcessed(bool value)
{
    processed_ = value;
    processedIsSet_ = true;
}

bool ScheduleConfigResponse::processedIsSet() const
{
    return processedIsSet_;
}

void ScheduleConfigResponse::unsetprocessed()
{
    processedIsSet_ = false;
}

}
}
}
}
}


