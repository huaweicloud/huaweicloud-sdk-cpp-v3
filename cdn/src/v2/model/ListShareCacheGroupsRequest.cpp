

#include "huaweicloud/cdn/v2/model/ListShareCacheGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListShareCacheGroupsRequest::ListShareCacheGroupsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListShareCacheGroupsRequest::~ListShareCacheGroupsRequest() = default;

void ListShareCacheGroupsRequest::validate()
{
}

web::json::value ListShareCacheGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListShareCacheGroupsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


int32_t ListShareCacheGroupsRequest::getLimit() const
{
    return limit_;
}

void ListShareCacheGroupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListShareCacheGroupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListShareCacheGroupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListShareCacheGroupsRequest::getOffset() const
{
    return offset_;
}

void ListShareCacheGroupsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListShareCacheGroupsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListShareCacheGroupsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


