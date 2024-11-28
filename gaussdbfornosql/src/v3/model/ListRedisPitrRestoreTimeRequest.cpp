

#include "huaweicloud/gaussdbfornosql/v3/model/ListRedisPitrRestoreTimeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListRedisPitrRestoreTimeRequest::ListRedisPitrRestoreTimeRequest()
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

ListRedisPitrRestoreTimeRequest::~ListRedisPitrRestoreTimeRequest() = default;

void ListRedisPitrRestoreTimeRequest::validate()
{
}

web::json::value ListRedisPitrRestoreTimeRequest::toJson() const
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
bool ListRedisPitrRestoreTimeRequest::fromJson(const web::json::value& val)
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


std::string ListRedisPitrRestoreTimeRequest::getInstanceId() const
{
    return instanceId_;
}

void ListRedisPitrRestoreTimeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListRedisPitrRestoreTimeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListRedisPitrRestoreTimeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListRedisPitrRestoreTimeRequest::getStartTime() const
{
    return startTime_;
}

void ListRedisPitrRestoreTimeRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListRedisPitrRestoreTimeRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListRedisPitrRestoreTimeRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListRedisPitrRestoreTimeRequest::getEndTime() const
{
    return endTime_;
}

void ListRedisPitrRestoreTimeRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListRedisPitrRestoreTimeRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListRedisPitrRestoreTimeRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListRedisPitrRestoreTimeRequest::getOffset() const
{
    return offset_;
}

void ListRedisPitrRestoreTimeRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRedisPitrRestoreTimeRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRedisPitrRestoreTimeRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRedisPitrRestoreTimeRequest::getLimit() const
{
    return limit_;
}

void ListRedisPitrRestoreTimeRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRedisPitrRestoreTimeRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRedisPitrRestoreTimeRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


