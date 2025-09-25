

#include "huaweicloud/codeartspipeline/v2/model/PipelineSchedule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineSchedule::PipelineSchedule()
{
    uuid_ = "";
    uuidIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    enable_ = false;
    enableIsSet_ = false;
    daysOfWeekIsSet_ = false;
    timeZone_ = "";
    timeZoneIsSet_ = false;
}

PipelineSchedule::~PipelineSchedule() = default;

void PipelineSchedule::validate()
{
}

web::json::value PipelineSchedule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(daysOfWeekIsSet_) {
        val[utility::conversions::to_string_t("days_of_week")] = ModelBase::toJson(daysOfWeek_);
    }
    if(timeZoneIsSet_) {
        val[utility::conversions::to_string_t("time_zone")] = ModelBase::toJson(timeZone_);
    }

    return val;
}
bool PipelineSchedule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUuid(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("days_of_week"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("days_of_week"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDaysOfWeek(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeZone(refVal);
        }
    }
    return ok;
}


std::string PipelineSchedule::getUuid() const
{
    return uuid_;
}

void PipelineSchedule::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool PipelineSchedule::uuidIsSet() const
{
    return uuidIsSet_;
}

void PipelineSchedule::unsetuuid()
{
    uuidIsSet_ = false;
}

std::string PipelineSchedule::getType() const
{
    return type_;
}

void PipelineSchedule::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PipelineSchedule::typeIsSet() const
{
    return typeIsSet_;
}

void PipelineSchedule::unsettype()
{
    typeIsSet_ = false;
}

std::string PipelineSchedule::getName() const
{
    return name_;
}

void PipelineSchedule::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PipelineSchedule::nameIsSet() const
{
    return nameIsSet_;
}

void PipelineSchedule::unsetname()
{
    nameIsSet_ = false;
}

bool PipelineSchedule::isEnable() const
{
    return enable_;
}

void PipelineSchedule::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool PipelineSchedule::enableIsSet() const
{
    return enableIsSet_;
}

void PipelineSchedule::unsetenable()
{
    enableIsSet_ = false;
}

std::vector<int32_t>& PipelineSchedule::getDaysOfWeek()
{
    return daysOfWeek_;
}

void PipelineSchedule::setDaysOfWeek(std::vector<int32_t> value)
{
    daysOfWeek_ = value;
    daysOfWeekIsSet_ = true;
}

bool PipelineSchedule::daysOfWeekIsSet() const
{
    return daysOfWeekIsSet_;
}

void PipelineSchedule::unsetdaysOfWeek()
{
    daysOfWeekIsSet_ = false;
}

std::string PipelineSchedule::getTimeZone() const
{
    return timeZone_;
}

void PipelineSchedule::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool PipelineSchedule::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void PipelineSchedule::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

}
}
}
}
}


