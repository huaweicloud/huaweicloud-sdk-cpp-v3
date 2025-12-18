

#include "huaweicloud/meeting/v1/model/SearchStatisticConferenceParticipantResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchStatisticConferenceParticipantResponse::SearchStatisticConferenceParticipantResponse()
{
    count_ = 0;
    countIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    dataIsSet_ = false;
}

SearchStatisticConferenceParticipantResponse::~SearchStatisticConferenceParticipantResponse() = default;

void SearchStatisticConferenceParticipantResponse::validate()
{
}

web::json::value SearchStatisticConferenceParticipantResponse::toJson() const
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
bool SearchStatisticConferenceParticipantResponse::fromJson(const web::json::value& val)
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
            std::vector<StatisticParticipateDataItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t SearchStatisticConferenceParticipantResponse::getCount() const
{
    return count_;
}

void SearchStatisticConferenceParticipantResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchStatisticConferenceParticipantResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchStatisticConferenceParticipantResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t SearchStatisticConferenceParticipantResponse::getLimit() const
{
    return limit_;
}

void SearchStatisticConferenceParticipantResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchStatisticConferenceParticipantResponse::limitIsSet() const
{
    return limitIsSet_;
}

void SearchStatisticConferenceParticipantResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t SearchStatisticConferenceParticipantResponse::getOffset() const
{
    return offset_;
}

void SearchStatisticConferenceParticipantResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchStatisticConferenceParticipantResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchStatisticConferenceParticipantResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

std::vector<StatisticParticipateDataItem>& SearchStatisticConferenceParticipantResponse::getData()
{
    return data_;
}

void SearchStatisticConferenceParticipantResponse::setData(const std::vector<StatisticParticipateDataItem>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SearchStatisticConferenceParticipantResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SearchStatisticConferenceParticipantResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


