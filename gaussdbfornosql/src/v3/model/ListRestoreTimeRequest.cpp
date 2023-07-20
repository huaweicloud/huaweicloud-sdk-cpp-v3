

#include "huaweicloud/gaussdbfornosql/v3/model/ListRestoreTimeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListRestoreTimeRequest::ListRestoreTimeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListRestoreTimeRequest::~ListRestoreTimeRequest() = default;

void ListRestoreTimeRequest::validate()
{
}

web::json::value ListRestoreTimeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
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

    return val;
}

bool ListRestoreTimeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
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

std::string ListRestoreTimeRequest::getInstanceId() const
{
    return instanceId_;
}

void ListRestoreTimeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListRestoreTimeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListRestoreTimeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListRestoreTimeRequest::getStartTime() const
{
    return startTime_;
}

void ListRestoreTimeRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListRestoreTimeRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListRestoreTimeRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListRestoreTimeRequest::getEndTime() const
{
    return endTime_;
}

void ListRestoreTimeRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListRestoreTimeRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListRestoreTimeRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListRestoreTimeRequest::getOffset() const
{
    return offset_;
}

void ListRestoreTimeRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRestoreTimeRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRestoreTimeRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRestoreTimeRequest::getLimit() const
{
    return limit_;
}

void ListRestoreTimeRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRestoreTimeRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRestoreTimeRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


