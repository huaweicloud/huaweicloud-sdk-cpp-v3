

#include "huaweicloud/meeting/v1/model/SearchMaterialsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchMaterialsResponse::SearchMaterialsResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
}

SearchMaterialsResponse::~SearchMaterialsResponse() = default;

void SearchMaterialsResponse::validate()
{
}

web::json::value SearchMaterialsResponse::toJson() const
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
bool SearchMaterialsResponse::fromJson(const web::json::value& val)
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
            std::vector<Material> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t SearchMaterialsResponse::getOffset() const
{
    return offset_;
}

void SearchMaterialsResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchMaterialsResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchMaterialsResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchMaterialsResponse::getLimit() const
{
    return limit_;
}

void SearchMaterialsResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchMaterialsResponse::limitIsSet() const
{
    return limitIsSet_;
}

void SearchMaterialsResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t SearchMaterialsResponse::getCount() const
{
    return count_;
}

void SearchMaterialsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchMaterialsResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchMaterialsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<Material>& SearchMaterialsResponse::getData()
{
    return data_;
}

void SearchMaterialsResponse::setData(const std::vector<Material>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SearchMaterialsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SearchMaterialsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


