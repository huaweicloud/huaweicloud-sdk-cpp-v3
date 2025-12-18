

#include "huaweicloud/meeting/v1/model/SearchAttendanceRecordsOfHisMeetingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchAttendanceRecordsOfHisMeetingResponse::SearchAttendanceRecordsOfHisMeetingResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
}

SearchAttendanceRecordsOfHisMeetingResponse::~SearchAttendanceRecordsOfHisMeetingResponse() = default;

void SearchAttendanceRecordsOfHisMeetingResponse::validate()
{
}

web::json::value SearchAttendanceRecordsOfHisMeetingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool SearchAttendanceRecordsOfHisMeetingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<ConfAttendeeRecordInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t SearchAttendanceRecordsOfHisMeetingResponse::getOffset() const
{
    return offset_;
}

void SearchAttendanceRecordsOfHisMeetingResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchAttendanceRecordsOfHisMeetingResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchAttendanceRecordsOfHisMeetingResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchAttendanceRecordsOfHisMeetingResponse::getLimit() const
{
    return limit_;
}

void SearchAttendanceRecordsOfHisMeetingResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchAttendanceRecordsOfHisMeetingResponse::limitIsSet() const
{
    return limitIsSet_;
}

void SearchAttendanceRecordsOfHisMeetingResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t SearchAttendanceRecordsOfHisMeetingResponse::getCount() const
{
    return count_;
}

void SearchAttendanceRecordsOfHisMeetingResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchAttendanceRecordsOfHisMeetingResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchAttendanceRecordsOfHisMeetingResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<ConfAttendeeRecordInfo>& SearchAttendanceRecordsOfHisMeetingResponse::getData()
{
    return data_;
}

void SearchAttendanceRecordsOfHisMeetingResponse::setData(const std::vector<ConfAttendeeRecordInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SearchAttendanceRecordsOfHisMeetingResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SearchAttendanceRecordsOfHisMeetingResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


