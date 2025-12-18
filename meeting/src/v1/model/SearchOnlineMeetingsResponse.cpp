

#include "huaweicloud/meeting/v1/model/SearchOnlineMeetingsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchOnlineMeetingsResponse::SearchOnlineMeetingsResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
}

SearchOnlineMeetingsResponse::~SearchOnlineMeetingsResponse() = default;

void SearchOnlineMeetingsResponse::validate()
{
}

web::json::value SearchOnlineMeetingsResponse::toJson() const
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
bool SearchOnlineMeetingsResponse::fromJson(const web::json::value& val)
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
            std::vector<ConferenceInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t SearchOnlineMeetingsResponse::getOffset() const
{
    return offset_;
}

void SearchOnlineMeetingsResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchOnlineMeetingsResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchOnlineMeetingsResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchOnlineMeetingsResponse::getLimit() const
{
    return limit_;
}

void SearchOnlineMeetingsResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchOnlineMeetingsResponse::limitIsSet() const
{
    return limitIsSet_;
}

void SearchOnlineMeetingsResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t SearchOnlineMeetingsResponse::getCount() const
{
    return count_;
}

void SearchOnlineMeetingsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchOnlineMeetingsResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchOnlineMeetingsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<ConferenceInfo>& SearchOnlineMeetingsResponse::getData()
{
    return data_;
}

void SearchOnlineMeetingsResponse::setData(const std::vector<ConferenceInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SearchOnlineMeetingsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SearchOnlineMeetingsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


