

#include "huaweicloud/meeting/v1/model/SearchQosOnlineMeetingsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchQosOnlineMeetingsResponse::SearchQosOnlineMeetingsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    dataIsSet_ = false;
}

SearchQosOnlineMeetingsResponse::~SearchQosOnlineMeetingsResponse() = default;

void SearchQosOnlineMeetingsResponse::validate()
{
}

web::json::value SearchQosOnlineMeetingsResponse::toJson() const
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
bool SearchQosOnlineMeetingsResponse::fromJson(const web::json::value& val)
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


int32_t SearchQosOnlineMeetingsResponse::getCount() const
{
    return count_;
}

void SearchQosOnlineMeetingsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchQosOnlineMeetingsResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchQosOnlineMeetingsResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t SearchQosOnlineMeetingsResponse::getLimit() const
{
    return limit_;
}

void SearchQosOnlineMeetingsResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchQosOnlineMeetingsResponse::limitIsSet() const
{
    return limitIsSet_;
}

void SearchQosOnlineMeetingsResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t SearchQosOnlineMeetingsResponse::getOffset() const
{
    return offset_;
}

void SearchQosOnlineMeetingsResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchQosOnlineMeetingsResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchQosOnlineMeetingsResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

std::vector<QosConferenceInfo>& SearchQosOnlineMeetingsResponse::getData()
{
    return data_;
}

void SearchQosOnlineMeetingsResponse::setData(const std::vector<QosConferenceInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SearchQosOnlineMeetingsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SearchQosOnlineMeetingsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


