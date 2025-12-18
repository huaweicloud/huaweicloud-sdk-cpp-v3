

#include "huaweicloud/meeting/v1/model/SearchStatisticUserInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchStatisticUserInfoResponse::SearchStatisticUserInfoResponse()
{
    count_ = 0;
    countIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    dataIsSet_ = false;
}

SearchStatisticUserInfoResponse::~SearchStatisticUserInfoResponse() = default;

void SearchStatisticUserInfoResponse::validate()
{
}

web::json::value SearchStatisticUserInfoResponse::toJson() const
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
bool SearchStatisticUserInfoResponse::fromJson(const web::json::value& val)
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
            std::vector<StatisticUserDataItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t SearchStatisticUserInfoResponse::getCount() const
{
    return count_;
}

void SearchStatisticUserInfoResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchStatisticUserInfoResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchStatisticUserInfoResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t SearchStatisticUserInfoResponse::getLimit() const
{
    return limit_;
}

void SearchStatisticUserInfoResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchStatisticUserInfoResponse::limitIsSet() const
{
    return limitIsSet_;
}

void SearchStatisticUserInfoResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t SearchStatisticUserInfoResponse::getOffset() const
{
    return offset_;
}

void SearchStatisticUserInfoResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchStatisticUserInfoResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchStatisticUserInfoResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

std::vector<StatisticUserDataItem>& SearchStatisticUserInfoResponse::getData()
{
    return data_;
}

void SearchStatisticUserInfoResponse::setData(const std::vector<StatisticUserDataItem>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SearchStatisticUserInfoResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SearchStatisticUserInfoResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


