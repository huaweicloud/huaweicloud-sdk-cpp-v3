

#include "huaweicloud/eps/v1/model/ListMigrationRecordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




ListMigrationRecordRequest::ListMigrationRecordRequest()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
}

ListMigrationRecordRequest::~ListMigrationRecordRequest() = default;

void ListMigrationRecordRequest::validate()
{
}

web::json::value ListMigrationRecordRequest::toJson() const
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
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }

    return val;
}
bool ListMigrationRecordRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    return ok;
}


std::string ListMigrationRecordRequest::getStartTime() const
{
    return startTime_;
}

void ListMigrationRecordRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListMigrationRecordRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListMigrationRecordRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListMigrationRecordRequest::getEndTime() const
{
    return endTime_;
}

void ListMigrationRecordRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListMigrationRecordRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListMigrationRecordRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListMigrationRecordRequest::getOffset() const
{
    return offset_;
}

void ListMigrationRecordRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListMigrationRecordRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListMigrationRecordRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListMigrationRecordRequest::getLimit() const
{
    return limit_;
}

void ListMigrationRecordRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListMigrationRecordRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListMigrationRecordRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListMigrationRecordRequest::getResourceId() const
{
    return resourceId_;
}

void ListMigrationRecordRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ListMigrationRecordRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ListMigrationRecordRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

}
}
}
}
}


