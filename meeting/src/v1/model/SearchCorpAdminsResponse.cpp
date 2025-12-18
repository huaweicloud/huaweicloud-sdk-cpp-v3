

#include "huaweicloud/meeting/v1/model/SearchCorpAdminsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchCorpAdminsResponse::SearchCorpAdminsResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
}

SearchCorpAdminsResponse::~SearchCorpAdminsResponse() = default;

void SearchCorpAdminsResponse::validate()
{
}

web::json::value SearchCorpAdminsResponse::toJson() const
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
bool SearchCorpAdminsResponse::fromJson(const web::json::value& val)
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
            std::vector<QueryCorpAdminResultDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t SearchCorpAdminsResponse::getOffset() const
{
    return offset_;
}

void SearchCorpAdminsResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchCorpAdminsResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchCorpAdminsResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchCorpAdminsResponse::getLimit() const
{
    return limit_;
}

void SearchCorpAdminsResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchCorpAdminsResponse::limitIsSet() const
{
    return limitIsSet_;
}

void SearchCorpAdminsResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t SearchCorpAdminsResponse::getCount() const
{
    return count_;
}

void SearchCorpAdminsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchCorpAdminsResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchCorpAdminsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<QueryCorpAdminResultDTO>& SearchCorpAdminsResponse::getData()
{
    return data_;
}

void SearchCorpAdminsResponse::setData(const std::vector<QueryCorpAdminResultDTO>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SearchCorpAdminsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SearchCorpAdminsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


