

#include "huaweicloud/live/v1/model/RecordRequestArgs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




RecordRequestArgs::RecordRequestArgs()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
}

RecordRequestArgs::~RecordRequestArgs() = default;

void RecordRequestArgs::validate()
{
}

web::json::value RecordRequestArgs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }

    return val;
}
bool RecordRequestArgs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnit(refVal);
        }
    }
    return ok;
}


std::string RecordRequestArgs::getStartTime() const
{
    return startTime_;
}

void RecordRequestArgs::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool RecordRequestArgs::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void RecordRequestArgs::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string RecordRequestArgs::getEndTime() const
{
    return endTime_;
}

void RecordRequestArgs::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool RecordRequestArgs::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void RecordRequestArgs::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string RecordRequestArgs::getFormat() const
{
    return format_;
}

void RecordRequestArgs::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool RecordRequestArgs::formatIsSet() const
{
    return formatIsSet_;
}

void RecordRequestArgs::unsetformat()
{
    formatIsSet_ = false;
}

std::string RecordRequestArgs::getUnit() const
{
    return unit_;
}

void RecordRequestArgs::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool RecordRequestArgs::unitIsSet() const
{
    return unitIsSet_;
}

void RecordRequestArgs::unsetunit()
{
    unitIsSet_ = false;
}

}
}
}
}
}


