

#include "huaweicloud/meeting/v1/model/SearchCorpResourcesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchCorpResourcesResponse::SearchCorpResourcesResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
}

SearchCorpResourcesResponse::~SearchCorpResourcesResponse() = default;

void SearchCorpResourcesResponse::validate()
{
}

web::json::value SearchCorpResourcesResponse::toJson() const
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
bool SearchCorpResourcesResponse::fromJson(const web::json::value& val)
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
            std::vector<QueryResourceResultDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t SearchCorpResourcesResponse::getOffset() const
{
    return offset_;
}

void SearchCorpResourcesResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchCorpResourcesResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchCorpResourcesResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchCorpResourcesResponse::getLimit() const
{
    return limit_;
}

void SearchCorpResourcesResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchCorpResourcesResponse::limitIsSet() const
{
    return limitIsSet_;
}

void SearchCorpResourcesResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t SearchCorpResourcesResponse::getCount() const
{
    return count_;
}

void SearchCorpResourcesResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchCorpResourcesResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchCorpResourcesResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<QueryResourceResultDTO>& SearchCorpResourcesResponse::getData()
{
    return data_;
}

void SearchCorpResourcesResponse::setData(const std::vector<QueryResourceResultDTO>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SearchCorpResourcesResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SearchCorpResourcesResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


