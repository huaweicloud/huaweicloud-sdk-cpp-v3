

#include "huaweicloud/meeting/v1/model/ListOnlineConfAttendeeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ListOnlineConfAttendeeResponse::ListOnlineConfAttendeeResponse()
{
    dataIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

ListOnlineConfAttendeeResponse::~ListOnlineConfAttendeeResponse() = default;

void ListOnlineConfAttendeeResponse::validate()
{
}

web::json::value ListOnlineConfAttendeeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ListOnlineConfAttendeeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<OnlineAttendeeRecordInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::vector<OnlineAttendeeRecordInfo>& ListOnlineConfAttendeeResponse::getData()
{
    return data_;
}

void ListOnlineConfAttendeeResponse::setData(const std::vector<OnlineAttendeeRecordInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListOnlineConfAttendeeResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListOnlineConfAttendeeResponse::unsetdata()
{
    dataIsSet_ = false;
}

int32_t ListOnlineConfAttendeeResponse::getOffset() const
{
    return offset_;
}

void ListOnlineConfAttendeeResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListOnlineConfAttendeeResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListOnlineConfAttendeeResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListOnlineConfAttendeeResponse::getLimit() const
{
    return limit_;
}

void ListOnlineConfAttendeeResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListOnlineConfAttendeeResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListOnlineConfAttendeeResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListOnlineConfAttendeeResponse::getCount() const
{
    return count_;
}

void ListOnlineConfAttendeeResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListOnlineConfAttendeeResponse::countIsSet() const
{
    return countIsSet_;
}

void ListOnlineConfAttendeeResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


