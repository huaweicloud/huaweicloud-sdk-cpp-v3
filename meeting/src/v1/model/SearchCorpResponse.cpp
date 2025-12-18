

#include "huaweicloud/meeting/v1/model/SearchCorpResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchCorpResponse::SearchCorpResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
}

SearchCorpResponse::~SearchCorpResponse() = default;

void SearchCorpResponse::validate()
{
}

web::json::value SearchCorpResponse::toJson() const
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
bool SearchCorpResponse::fromJson(const web::json::value& val)
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
            std::vector<QueryCorpResultDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t SearchCorpResponse::getOffset() const
{
    return offset_;
}

void SearchCorpResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchCorpResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchCorpResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchCorpResponse::getLimit() const
{
    return limit_;
}

void SearchCorpResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchCorpResponse::limitIsSet() const
{
    return limitIsSet_;
}

void SearchCorpResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t SearchCorpResponse::getCount() const
{
    return count_;
}

void SearchCorpResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchCorpResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchCorpResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<QueryCorpResultDTO>& SearchCorpResponse::getData()
{
    return data_;
}

void SearchCorpResponse::setData(const std::vector<QueryCorpResultDTO>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SearchCorpResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SearchCorpResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


