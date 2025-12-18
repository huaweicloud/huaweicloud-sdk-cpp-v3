

#include "huaweicloud/meeting/v1/model/SearchVisionActiveCodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchVisionActiveCodeResponse::SearchVisionActiveCodeResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
}

SearchVisionActiveCodeResponse::~SearchVisionActiveCodeResponse() = default;

void SearchVisionActiveCodeResponse::validate()
{
}

web::json::value SearchVisionActiveCodeResponse::toJson() const
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
bool SearchVisionActiveCodeResponse::fromJson(const web::json::value& val)
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
            std::vector<QueryVisionActiveCodeResultDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t SearchVisionActiveCodeResponse::getOffset() const
{
    return offset_;
}

void SearchVisionActiveCodeResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchVisionActiveCodeResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchVisionActiveCodeResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchVisionActiveCodeResponse::getLimit() const
{
    return limit_;
}

void SearchVisionActiveCodeResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchVisionActiveCodeResponse::limitIsSet() const
{
    return limitIsSet_;
}

void SearchVisionActiveCodeResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t SearchVisionActiveCodeResponse::getCount() const
{
    return count_;
}

void SearchVisionActiveCodeResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchVisionActiveCodeResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchVisionActiveCodeResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<QueryVisionActiveCodeResultDTO>& SearchVisionActiveCodeResponse::getData()
{
    return data_;
}

void SearchVisionActiveCodeResponse::setData(const std::vector<QueryVisionActiveCodeResultDTO>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SearchVisionActiveCodeResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SearchVisionActiveCodeResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


