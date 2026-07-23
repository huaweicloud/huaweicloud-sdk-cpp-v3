

#include "huaweicloud/rds/v3/model/ListJobSchedulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListJobSchedulesRequest::ListJobSchedulesRequest()
{
    scheduleType_ = "";
    scheduleTypeIsSet_ = false;
    scheduleId_ = "";
    scheduleIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListJobSchedulesRequest::~ListJobSchedulesRequest() = default;

void ListJobSchedulesRequest::validate()
{
}

web::json::value ListJobSchedulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scheduleTypeIsSet_) {
        val[utility::conversions::to_string_t("schedule_type")] = ModelBase::toJson(scheduleType_);
    }
    if(scheduleIdIsSet_) {
        val[utility::conversions::to_string_t("schedule_id")] = ModelBase::toJson(scheduleId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListJobSchedulesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("schedule_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduleType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schedule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduleId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListJobSchedulesRequest::getScheduleType() const
{
    return scheduleType_;
}

void ListJobSchedulesRequest::setScheduleType(const std::string& value)
{
    scheduleType_ = value;
    scheduleTypeIsSet_ = true;
}

bool ListJobSchedulesRequest::scheduleTypeIsSet() const
{
    return scheduleTypeIsSet_;
}

void ListJobSchedulesRequest::unsetscheduleType()
{
    scheduleTypeIsSet_ = false;
}

std::string ListJobSchedulesRequest::getScheduleId() const
{
    return scheduleId_;
}

void ListJobSchedulesRequest::setScheduleId(const std::string& value)
{
    scheduleId_ = value;
    scheduleIdIsSet_ = true;
}

bool ListJobSchedulesRequest::scheduleIdIsSet() const
{
    return scheduleIdIsSet_;
}

void ListJobSchedulesRequest::unsetscheduleId()
{
    scheduleIdIsSet_ = false;
}

int32_t ListJobSchedulesRequest::getOffset() const
{
    return offset_;
}

void ListJobSchedulesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListJobSchedulesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListJobSchedulesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListJobSchedulesRequest::getLimit() const
{
    return limit_;
}

void ListJobSchedulesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListJobSchedulesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListJobSchedulesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


