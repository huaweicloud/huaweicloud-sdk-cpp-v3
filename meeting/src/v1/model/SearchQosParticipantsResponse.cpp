

#include "huaweicloud/meeting/v1/model/SearchQosParticipantsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchQosParticipantsResponse::SearchQosParticipantsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    dataIsSet_ = false;
}

SearchQosParticipantsResponse::~SearchQosParticipantsResponse() = default;

void SearchQosParticipantsResponse::validate()
{
}

web::json::value SearchQosParticipantsResponse::toJson() const
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
bool SearchQosParticipantsResponse::fromJson(const web::json::value& val)
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
            std::vector<QosParticipantInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t SearchQosParticipantsResponse::getCount() const
{
    return count_;
}

void SearchQosParticipantsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchQosParticipantsResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchQosParticipantsResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t SearchQosParticipantsResponse::getLimit() const
{
    return limit_;
}

void SearchQosParticipantsResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchQosParticipantsResponse::limitIsSet() const
{
    return limitIsSet_;
}

void SearchQosParticipantsResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t SearchQosParticipantsResponse::getOffset() const
{
    return offset_;
}

void SearchQosParticipantsResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchQosParticipantsResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchQosParticipantsResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

std::vector<QosParticipantInfo>& SearchQosParticipantsResponse::getData()
{
    return data_;
}

void SearchQosParticipantsResponse::setData(const std::vector<QosParticipantInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SearchQosParticipantsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SearchQosParticipantsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


