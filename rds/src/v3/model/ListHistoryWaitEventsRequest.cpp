

#include "huaweicloud/rds/v3/model/ListHistoryWaitEventsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListHistoryWaitEventsRequest::ListHistoryWaitEventsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListHistoryWaitEventsRequest::~ListHistoryWaitEventsRequest() = default;

void ListHistoryWaitEventsRequest::validate()
{
}

web::json::value ListHistoryWaitEventsRequest::toJson() const
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
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListHistoryWaitEventsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string ListHistoryWaitEventsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListHistoryWaitEventsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListHistoryWaitEventsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListHistoryWaitEventsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int64_t ListHistoryWaitEventsRequest::getStartTime() const
{
    return startTime_;
}

void ListHistoryWaitEventsRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListHistoryWaitEventsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListHistoryWaitEventsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListHistoryWaitEventsRequest::getEndTime() const
{
    return endTime_;
}

void ListHistoryWaitEventsRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListHistoryWaitEventsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListHistoryWaitEventsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListHistoryWaitEventsRequest::getOffset() const
{
    return offset_;
}

void ListHistoryWaitEventsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListHistoryWaitEventsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListHistoryWaitEventsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListHistoryWaitEventsRequest::getLimit() const
{
    return limit_;
}

void ListHistoryWaitEventsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListHistoryWaitEventsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListHistoryWaitEventsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListHistoryWaitEventsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListHistoryWaitEventsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListHistoryWaitEventsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListHistoryWaitEventsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


