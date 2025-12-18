

#include "huaweicloud/meeting/v1/model/BatchSearchAppIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




BatchSearchAppIdResponse::BatchSearchAppIdResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
}

BatchSearchAppIdResponse::~BatchSearchAppIdResponse() = default;

void BatchSearchAppIdResponse::validate()
{
}

web::json::value BatchSearchAppIdResponse::toJson() const
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
bool BatchSearchAppIdResponse::fromJson(const web::json::value& val)
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
            std::vector<AppIdInfoDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t BatchSearchAppIdResponse::getOffset() const
{
    return offset_;
}

void BatchSearchAppIdResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool BatchSearchAppIdResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void BatchSearchAppIdResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t BatchSearchAppIdResponse::getLimit() const
{
    return limit_;
}

void BatchSearchAppIdResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool BatchSearchAppIdResponse::limitIsSet() const
{
    return limitIsSet_;
}

void BatchSearchAppIdResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t BatchSearchAppIdResponse::getCount() const
{
    return count_;
}

void BatchSearchAppIdResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool BatchSearchAppIdResponse::countIsSet() const
{
    return countIsSet_;
}

void BatchSearchAppIdResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<AppIdInfoDTO>& BatchSearchAppIdResponse::getData()
{
    return data_;
}

void BatchSearchAppIdResponse::setData(const std::vector<AppIdInfoDTO>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool BatchSearchAppIdResponse::dataIsSet() const
{
    return dataIsSet_;
}

void BatchSearchAppIdResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


