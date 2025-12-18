

#include "huaweicloud/meeting/v1/model/SearchCorpDirResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchCorpDirResponse::SearchCorpDirResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
}

SearchCorpDirResponse::~SearchCorpDirResponse() = default;

void SearchCorpDirResponse::validate()
{
}

web::json::value SearchCorpDirResponse::toJson() const
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
bool SearchCorpDirResponse::fromJson(const web::json::value& val)
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
            std::vector<UserDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t SearchCorpDirResponse::getOffset() const
{
    return offset_;
}

void SearchCorpDirResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchCorpDirResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchCorpDirResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchCorpDirResponse::getLimit() const
{
    return limit_;
}

void SearchCorpDirResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchCorpDirResponse::limitIsSet() const
{
    return limitIsSet_;
}

void SearchCorpDirResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t SearchCorpDirResponse::getCount() const
{
    return count_;
}

void SearchCorpDirResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchCorpDirResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchCorpDirResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<UserDTO>& SearchCorpDirResponse::getData()
{
    return data_;
}

void SearchCorpDirResponse::setData(const std::vector<UserDTO>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SearchCorpDirResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SearchCorpDirResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


