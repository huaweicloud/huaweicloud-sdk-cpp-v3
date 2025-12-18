

#include "huaweicloud/meeting/v1/model/SearchQosHistoryMeetingsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchQosHistoryMeetingsResponse::SearchQosHistoryMeetingsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    dataIsSet_ = false;
}

SearchQosHistoryMeetingsResponse::~SearchQosHistoryMeetingsResponse() = default;

void SearchQosHistoryMeetingsResponse::validate()
{
}

web::json::value SearchQosHistoryMeetingsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool SearchQosHistoryMeetingsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<QosConferenceInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t SearchQosHistoryMeetingsResponse::getCount() const
{
    return count_;
}

void SearchQosHistoryMeetingsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchQosHistoryMeetingsResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchQosHistoryMeetingsResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t SearchQosHistoryMeetingsResponse::getLimit() const
{
    return limit_;
}

void SearchQosHistoryMeetingsResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchQosHistoryMeetingsResponse::limitIsSet() const
{
    return limitIsSet_;
}

void SearchQosHistoryMeetingsResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t SearchQosHistoryMeetingsResponse::getOffset() const
{
    return offset_;
}

void SearchQosHistoryMeetingsResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchQosHistoryMeetingsResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchQosHistoryMeetingsResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

std::vector<QosConferenceInfo>& SearchQosHistoryMeetingsResponse::getData()
{
    return data_;
}

void SearchQosHistoryMeetingsResponse::setData(const std::vector<QosConferenceInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SearchQosHistoryMeetingsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SearchQosHistoryMeetingsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


