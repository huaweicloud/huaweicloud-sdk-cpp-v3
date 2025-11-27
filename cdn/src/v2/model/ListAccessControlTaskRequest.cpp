

#include "huaweicloud/cdn/v2/model/ListAccessControlTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListAccessControlTaskRequest::ListAccessControlTaskRequest()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListAccessControlTaskRequest::~ListAccessControlTaskRequest() = default;

void ListAccessControlTaskRequest::validate()
{
}

web::json::value ListAccessControlTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ListAccessControlTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


int64_t ListAccessControlTaskRequest::getStartTime() const
{
    return startTime_;
}

void ListAccessControlTaskRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListAccessControlTaskRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListAccessControlTaskRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListAccessControlTaskRequest::getEndTime() const
{
    return endTime_;
}

void ListAccessControlTaskRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListAccessControlTaskRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListAccessControlTaskRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListAccessControlTaskRequest::getOffset() const
{
    return offset_;
}

void ListAccessControlTaskRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAccessControlTaskRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAccessControlTaskRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListAccessControlTaskRequest::getLimit() const
{
    return limit_;
}

void ListAccessControlTaskRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAccessControlTaskRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAccessControlTaskRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListAccessControlTaskRequest::getStatus() const
{
    return status_;
}

void ListAccessControlTaskRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAccessControlTaskRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListAccessControlTaskRequest::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


