

#include "huaweicloud/sdrs/v1/model/ListRpoStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ListRpoStatisticsRequest::ListRpoStatisticsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
}

ListRpoStatisticsRequest::~ListRpoStatisticsRequest() = default;

void ListRpoStatisticsRequest::validate()
{
}

web::json::value ListRpoStatisticsRequest::toJson() const
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
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }

    return val;
}
bool ListRpoStatisticsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    return ok;
}


int32_t ListRpoStatisticsRequest::getLimit() const
{
    return limit_;
}

void ListRpoStatisticsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRpoStatisticsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRpoStatisticsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListRpoStatisticsRequest::getOffset() const
{
    return offset_;
}

void ListRpoStatisticsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRpoStatisticsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRpoStatisticsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListRpoStatisticsRequest::getStartTime() const
{
    return startTime_;
}

void ListRpoStatisticsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListRpoStatisticsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListRpoStatisticsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListRpoStatisticsRequest::getEndTime() const
{
    return endTime_;
}

void ListRpoStatisticsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListRpoStatisticsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListRpoStatisticsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListRpoStatisticsRequest::getResourceType() const
{
    return resourceType_;
}

void ListRpoStatisticsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListRpoStatisticsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListRpoStatisticsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

}
}
}
}
}


