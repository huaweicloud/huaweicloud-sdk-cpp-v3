

#include "huaweicloud/cpcs/v1/model/ShowAuditLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowAuditLogRequest::ShowAuditLogRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
}

ShowAuditLogRequest::~ShowAuditLogRequest() = default;

void ShowAuditLogRequest::validate()
{
}

web::json::value ShowAuditLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ShowAuditLogRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


int32_t ShowAuditLogRequest::getLimit() const
{
    return limit_;
}

void ShowAuditLogRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowAuditLogRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowAuditLogRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowAuditLogRequest::getOffset() const
{
    return offset_;
}

void ShowAuditLogRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowAuditLogRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowAuditLogRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int64_t ShowAuditLogRequest::getStartTime() const
{
    return startTime_;
}

void ShowAuditLogRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowAuditLogRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowAuditLogRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowAuditLogRequest::getEndTime() const
{
    return endTime_;
}

void ShowAuditLogRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowAuditLogRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowAuditLogRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


