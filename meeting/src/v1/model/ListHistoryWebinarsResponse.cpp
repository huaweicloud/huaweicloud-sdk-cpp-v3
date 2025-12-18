

#include "huaweicloud/meeting/v1/model/ListHistoryWebinarsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ListHistoryWebinarsResponse::ListHistoryWebinarsResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
    dataIsSet_ = false;
}

ListHistoryWebinarsResponse::~ListHistoryWebinarsResponse() = default;

void ListHistoryWebinarsResponse::validate()
{
}

web::json::value ListHistoryWebinarsResponse::toJson() const
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
bool ListHistoryWebinarsResponse::fromJson(const web::json::value& val)
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
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<OpenWebinarHistoryInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t ListHistoryWebinarsResponse::getOffset() const
{
    return offset_;
}

void ListHistoryWebinarsResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListHistoryWebinarsResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListHistoryWebinarsResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListHistoryWebinarsResponse::getLimit() const
{
    return limit_;
}

void ListHistoryWebinarsResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListHistoryWebinarsResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListHistoryWebinarsResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int64_t ListHistoryWebinarsResponse::getCount() const
{
    return count_;
}

void ListHistoryWebinarsResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListHistoryWebinarsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListHistoryWebinarsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<OpenWebinarHistoryInfo>& ListHistoryWebinarsResponse::getData()
{
    return data_;
}

void ListHistoryWebinarsResponse::setData(const std::vector<OpenWebinarHistoryInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListHistoryWebinarsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListHistoryWebinarsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


