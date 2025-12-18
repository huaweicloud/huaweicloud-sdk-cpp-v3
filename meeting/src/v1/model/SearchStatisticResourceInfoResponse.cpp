

#include "huaweicloud/meeting/v1/model/SearchStatisticResourceInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchStatisticResourceInfoResponse::SearchStatisticResourceInfoResponse()
{
    count_ = 0;
    countIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    dataIsSet_ = false;
}

SearchStatisticResourceInfoResponse::~SearchStatisticResourceInfoResponse() = default;

void SearchStatisticResourceInfoResponse::validate()
{
}

web::json::value SearchStatisticResourceInfoResponse::toJson() const
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
bool SearchStatisticResourceInfoResponse::fromJson(const web::json::value& val)
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
            std::vector<StatisticResourceDataItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t SearchStatisticResourceInfoResponse::getCount() const
{
    return count_;
}

void SearchStatisticResourceInfoResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchStatisticResourceInfoResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchStatisticResourceInfoResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t SearchStatisticResourceInfoResponse::getLimit() const
{
    return limit_;
}

void SearchStatisticResourceInfoResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchStatisticResourceInfoResponse::limitIsSet() const
{
    return limitIsSet_;
}

void SearchStatisticResourceInfoResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t SearchStatisticResourceInfoResponse::getOffset() const
{
    return offset_;
}

void SearchStatisticResourceInfoResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchStatisticResourceInfoResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchStatisticResourceInfoResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

std::vector<StatisticResourceDataItem>& SearchStatisticResourceInfoResponse::getData()
{
    return data_;
}

void SearchStatisticResourceInfoResponse::setData(const std::vector<StatisticResourceDataItem>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SearchStatisticResourceInfoResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SearchStatisticResourceInfoResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


