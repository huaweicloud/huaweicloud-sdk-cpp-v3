

#include "huaweicloud/meeting/v1/model/ListUpComingWebinarsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ListUpComingWebinarsResponse::ListUpComingWebinarsResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
    dataIsSet_ = false;
}

ListUpComingWebinarsResponse::~ListUpComingWebinarsResponse() = default;

void ListUpComingWebinarsResponse::validate()
{
}

web::json::value ListUpComingWebinarsResponse::toJson() const
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
bool ListUpComingWebinarsResponse::fromJson(const web::json::value& val)
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
            std::vector<OpenWebinarUpcomingInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t ListUpComingWebinarsResponse::getOffset() const
{
    return offset_;
}

void ListUpComingWebinarsResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListUpComingWebinarsResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListUpComingWebinarsResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListUpComingWebinarsResponse::getLimit() const
{
    return limit_;
}

void ListUpComingWebinarsResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListUpComingWebinarsResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListUpComingWebinarsResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int64_t ListUpComingWebinarsResponse::getCount() const
{
    return count_;
}

void ListUpComingWebinarsResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListUpComingWebinarsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListUpComingWebinarsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<OpenWebinarUpcomingInfo>& ListUpComingWebinarsResponse::getData()
{
    return data_;
}

void ListUpComingWebinarsResponse::setData(const std::vector<OpenWebinarUpcomingInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListUpComingWebinarsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListUpComingWebinarsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


