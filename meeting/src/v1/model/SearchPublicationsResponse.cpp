

#include "huaweicloud/meeting/v1/model/SearchPublicationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchPublicationsResponse::SearchPublicationsResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
}

SearchPublicationsResponse::~SearchPublicationsResponse() = default;

void SearchPublicationsResponse::validate()
{
}

web::json::value SearchPublicationsResponse::toJson() const
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
bool SearchPublicationsResponse::fromJson(const web::json::value& val)
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
            std::vector<PublicationResponseBase> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t SearchPublicationsResponse::getOffset() const
{
    return offset_;
}

void SearchPublicationsResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchPublicationsResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchPublicationsResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchPublicationsResponse::getLimit() const
{
    return limit_;
}

void SearchPublicationsResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchPublicationsResponse::limitIsSet() const
{
    return limitIsSet_;
}

void SearchPublicationsResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t SearchPublicationsResponse::getCount() const
{
    return count_;
}

void SearchPublicationsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchPublicationsResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchPublicationsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<PublicationResponseBase>& SearchPublicationsResponse::getData()
{
    return data_;
}

void SearchPublicationsResponse::setData(const std::vector<PublicationResponseBase>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SearchPublicationsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SearchPublicationsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


