

#include "huaweicloud/codeartspipeline/v2/model/ListPublisherResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPublisherResponse::ListPublisherResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
    dataIsSet_ = false;
}

ListPublisherResponse::~ListPublisherResponse() = default;

void ListPublisherResponse::validate()
{
}

web::json::value ListPublisherResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListPublisherResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<PublisherVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t ListPublisherResponse::getOffset() const
{
    return offset_;
}

void ListPublisherResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPublisherResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPublisherResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPublisherResponse::getLimit() const
{
    return limit_;
}

void ListPublisherResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPublisherResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListPublisherResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int64_t ListPublisherResponse::getTotal() const
{
    return total_;
}

void ListPublisherResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListPublisherResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListPublisherResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<PublisherVO>& ListPublisherResponse::getData()
{
    return data_;
}

void ListPublisherResponse::setData(const std::vector<PublisherVO>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListPublisherResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListPublisherResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


