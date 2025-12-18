

#include "huaweicloud/meeting/v1/model/SearchMemberVmrResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchMemberVmrResponse::SearchMemberVmrResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
}

SearchMemberVmrResponse::~SearchMemberVmrResponse() = default;

void SearchMemberVmrResponse::validate()
{
}

web::json::value SearchMemberVmrResponse::toJson() const
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
bool SearchMemberVmrResponse::fromJson(const web::json::value& val)
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
            std::vector<QueryVmrResultDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t SearchMemberVmrResponse::getOffset() const
{
    return offset_;
}

void SearchMemberVmrResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchMemberVmrResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchMemberVmrResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchMemberVmrResponse::getLimit() const
{
    return limit_;
}

void SearchMemberVmrResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchMemberVmrResponse::limitIsSet() const
{
    return limitIsSet_;
}

void SearchMemberVmrResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t SearchMemberVmrResponse::getCount() const
{
    return count_;
}

void SearchMemberVmrResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchMemberVmrResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchMemberVmrResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<QueryVmrResultDTO>& SearchMemberVmrResponse::getData()
{
    return data_;
}

void SearchMemberVmrResponse::setData(const std::vector<QueryVmrResultDTO>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SearchMemberVmrResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SearchMemberVmrResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


