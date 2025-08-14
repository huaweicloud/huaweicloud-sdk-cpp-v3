

#include "huaweicloud/metastudio/v1/model/SearchTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SearchTaskResponse::SearchTaskResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
}

SearchTaskResponse::~SearchTaskResponse() = default;

void SearchTaskResponse::validate()
{
}

web::json::value SearchTaskResponse::toJson() const
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
bool SearchTaskResponse::fromJson(const web::json::value& val)
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
            std::vector<QueryTaskResultDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t SearchTaskResponse::getOffset() const
{
    return offset_;
}

void SearchTaskResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchTaskResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchTaskResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchTaskResponse::getLimit() const
{
    return limit_;
}

void SearchTaskResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchTaskResponse::limitIsSet() const
{
    return limitIsSet_;
}

void SearchTaskResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t SearchTaskResponse::getCount() const
{
    return count_;
}

void SearchTaskResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchTaskResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchTaskResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<QueryTaskResultDTO>& SearchTaskResponse::getData()
{
    return data_;
}

void SearchTaskResponse::setData(const std::vector<QueryTaskResultDTO>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SearchTaskResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SearchTaskResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


