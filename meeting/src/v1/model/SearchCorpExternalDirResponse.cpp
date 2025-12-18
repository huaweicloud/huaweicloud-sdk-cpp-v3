

#include "huaweicloud/meeting/v1/model/SearchCorpExternalDirResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchCorpExternalDirResponse::SearchCorpExternalDirResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
}

SearchCorpExternalDirResponse::~SearchCorpExternalDirResponse() = default;

void SearchCorpExternalDirResponse::validate()
{
}

web::json::value SearchCorpExternalDirResponse::toJson() const
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
bool SearchCorpExternalDirResponse::fromJson(const web::json::value& val)
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
            std::vector<ExternalContactDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t SearchCorpExternalDirResponse::getOffset() const
{
    return offset_;
}

void SearchCorpExternalDirResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchCorpExternalDirResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchCorpExternalDirResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchCorpExternalDirResponse::getLimit() const
{
    return limit_;
}

void SearchCorpExternalDirResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchCorpExternalDirResponse::limitIsSet() const
{
    return limitIsSet_;
}

void SearchCorpExternalDirResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t SearchCorpExternalDirResponse::getCount() const
{
    return count_;
}

void SearchCorpExternalDirResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchCorpExternalDirResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchCorpExternalDirResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<ExternalContactDTO>& SearchCorpExternalDirResponse::getData()
{
    return data_;
}

void SearchCorpExternalDirResponse::setData(const std::vector<ExternalContactDTO>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SearchCorpExternalDirResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SearchCorpExternalDirResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


