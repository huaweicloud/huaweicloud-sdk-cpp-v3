

#include "huaweicloud/cfw/v1/model/ExportLogsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ExportLogsRequestBody::ExportLogsRequestBody()
{
    filtersIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    logType_ = "";
    logTypeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    timeZone_ = "";
    timeZoneIsSet_ = false;
}

ExportLogsRequestBody::~ExportLogsRequestBody() = default;

void ExportLogsRequestBody::validate()
{
}

web::json::value ExportLogsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filtersIsSet_) {
        val[utility::conversions::to_string_t("filters")] = ModelBase::toJson(filters_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(logTypeIsSet_) {
        val[utility::conversions::to_string_t("log_type")] = ModelBase::toJson(logType_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(timeZoneIsSet_) {
        val[utility::conversions::to_string_t("time_zone")] = ModelBase::toJson(timeZone_);
    }

    return val;
}
bool ExportLogsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("filters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filters"));
        if(!fieldValue.is_null())
        {
            std::vector<Filter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilters(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("log_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogType(refVal);
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


std::vector<Filter>& ExportLogsRequestBody::getFilters()
{
    return filters_;
}

void ExportLogsRequestBody::setFilters(const std::vector<Filter>& value)
{
    filters_ = value;
    filtersIsSet_ = true;
}

bool ExportLogsRequestBody::filtersIsSet() const
{
    return filtersIsSet_;
}

void ExportLogsRequestBody::unsetfilters()
{
    filtersIsSet_ = false;
}

int64_t ExportLogsRequestBody::getStartTime() const
{
    return startTime_;
}

void ExportLogsRequestBody::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ExportLogsRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ExportLogsRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ExportLogsRequestBody::getEndTime() const
{
    return endTime_;
}

void ExportLogsRequestBody::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ExportLogsRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ExportLogsRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ExportLogsRequestBody::getLogType() const
{
    return logType_;
}

void ExportLogsRequestBody::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool ExportLogsRequestBody::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void ExportLogsRequestBody::unsetlogType()
{
    logTypeIsSet_ = false;
}

std::string ExportLogsRequestBody::getType() const
{
    return type_;
}

void ExportLogsRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ExportLogsRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void ExportLogsRequestBody::unsettype()
{
    typeIsSet_ = false;
}

std::string ExportLogsRequestBody::getTimeZone() const
{
    return timeZone_;
}

void ExportLogsRequestBody::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool ExportLogsRequestBody::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void ExportLogsRequestBody::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

}
}
}
}
}


