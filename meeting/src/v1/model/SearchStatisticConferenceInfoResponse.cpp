

#include "huaweicloud/meeting/v1/model/SearchStatisticConferenceInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchStatisticConferenceInfoResponse::SearchStatisticConferenceInfoResponse()
{
    count_ = 0;
    countIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    dataIsSet_ = false;
}

SearchStatisticConferenceInfoResponse::~SearchStatisticConferenceInfoResponse() = default;

void SearchStatisticConferenceInfoResponse::validate()
{
}

web::json::value SearchStatisticConferenceInfoResponse::toJson() const
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
bool SearchStatisticConferenceInfoResponse::fromJson(const web::json::value& val)
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
            std::vector<StatisticConferenceDataItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t SearchStatisticConferenceInfoResponse::getCount() const
{
    return count_;
}

void SearchStatisticConferenceInfoResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchStatisticConferenceInfoResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchStatisticConferenceInfoResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t SearchStatisticConferenceInfoResponse::getLimit() const
{
    return limit_;
}

void SearchStatisticConferenceInfoResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchStatisticConferenceInfoResponse::limitIsSet() const
{
    return limitIsSet_;
}

void SearchStatisticConferenceInfoResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t SearchStatisticConferenceInfoResponse::getOffset() const
{
    return offset_;
}

void SearchStatisticConferenceInfoResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchStatisticConferenceInfoResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchStatisticConferenceInfoResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

std::vector<StatisticConferenceDataItem>& SearchStatisticConferenceInfoResponse::getData()
{
    return data_;
}

void SearchStatisticConferenceInfoResponse::setData(const std::vector<StatisticConferenceDataItem>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SearchStatisticConferenceInfoResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SearchStatisticConferenceInfoResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


