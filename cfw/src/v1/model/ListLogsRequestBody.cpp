

#include "huaweicloud/cfw/v1/model/ListLogsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListLogsRequestBody::ListLogsRequestBody()
{
    filtersIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    logId_ = "";
    logIdIsSet_ = false;
    nextDate_ = 0L;
    nextDateIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    logType_ = "";
    logTypeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ListLogsRequestBody::~ListLogsRequestBody() = default;

void ListLogsRequestBody::validate()
{
}

web::json::value ListLogsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filtersIsSet_) {
        val[utility::conversions::to_string_t("filters")] = ModelBase::toJson(filters_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(logIdIsSet_) {
        val[utility::conversions::to_string_t("log_id")] = ModelBase::toJson(logId_);
    }
    if(nextDateIsSet_) {
        val[utility::conversions::to_string_t("next_date")] = ModelBase::toJson(nextDate_);
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

    return val;
}
bool ListLogsRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_date"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextDate(refVal);
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
    return ok;
}


std::vector<Filter>& ListLogsRequestBody::getFilters()
{
    return filters_;
}

void ListLogsRequestBody::setFilters(const std::vector<Filter>& value)
{
    filters_ = value;
    filtersIsSet_ = true;
}

bool ListLogsRequestBody::filtersIsSet() const
{
    return filtersIsSet_;
}

void ListLogsRequestBody::unsetfilters()
{
    filtersIsSet_ = false;
}

int32_t ListLogsRequestBody::getLimit() const
{
    return limit_;
}

void ListLogsRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListLogsRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListLogsRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListLogsRequestBody::getOffset() const
{
    return offset_;
}

void ListLogsRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListLogsRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListLogsRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListLogsRequestBody::getLogId() const
{
    return logId_;
}

void ListLogsRequestBody::setLogId(const std::string& value)
{
    logId_ = value;
    logIdIsSet_ = true;
}

bool ListLogsRequestBody::logIdIsSet() const
{
    return logIdIsSet_;
}

void ListLogsRequestBody::unsetlogId()
{
    logIdIsSet_ = false;
}

int64_t ListLogsRequestBody::getNextDate() const
{
    return nextDate_;
}

void ListLogsRequestBody::setNextDate(int64_t value)
{
    nextDate_ = value;
    nextDateIsSet_ = true;
}

bool ListLogsRequestBody::nextDateIsSet() const
{
    return nextDateIsSet_;
}

void ListLogsRequestBody::unsetnextDate()
{
    nextDateIsSet_ = false;
}

int64_t ListLogsRequestBody::getStartTime() const
{
    return startTime_;
}

void ListLogsRequestBody::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListLogsRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListLogsRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListLogsRequestBody::getEndTime() const
{
    return endTime_;
}

void ListLogsRequestBody::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListLogsRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListLogsRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListLogsRequestBody::getLogType() const
{
    return logType_;
}

void ListLogsRequestBody::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool ListLogsRequestBody::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void ListLogsRequestBody::unsetlogType()
{
    logTypeIsSet_ = false;
}

std::string ListLogsRequestBody::getType() const
{
    return type_;
}

void ListLogsRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListLogsRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void ListLogsRequestBody::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


