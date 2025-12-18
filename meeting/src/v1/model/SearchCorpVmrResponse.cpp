

#include "huaweicloud/meeting/v1/model/SearchCorpVmrResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchCorpVmrResponse::SearchCorpVmrResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
}

SearchCorpVmrResponse::~SearchCorpVmrResponse() = default;

void SearchCorpVmrResponse::validate()
{
}

web::json::value SearchCorpVmrResponse::toJson() const
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
bool SearchCorpVmrResponse::fromJson(const web::json::value& val)
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
            std::vector<QueryOrgVmrResultDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t SearchCorpVmrResponse::getOffset() const
{
    return offset_;
}

void SearchCorpVmrResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchCorpVmrResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchCorpVmrResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchCorpVmrResponse::getLimit() const
{
    return limit_;
}

void SearchCorpVmrResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchCorpVmrResponse::limitIsSet() const
{
    return limitIsSet_;
}

void SearchCorpVmrResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t SearchCorpVmrResponse::getCount() const
{
    return count_;
}

void SearchCorpVmrResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchCorpVmrResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchCorpVmrResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<QueryOrgVmrResultDTO>& SearchCorpVmrResponse::getData()
{
    return data_;
}

void SearchCorpVmrResponse::setData(const std::vector<QueryOrgVmrResultDTO>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SearchCorpVmrResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SearchCorpVmrResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


