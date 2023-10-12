

#include "huaweicloud/gaussdbfornosql/v3/model/ListDedicatedResourcesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListDedicatedResourcesRequest::ListDedicatedResourcesRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListDedicatedResourcesRequest::~ListDedicatedResourcesRequest() = default;

void ListDedicatedResourcesRequest::validate()
{
}

web::json::value ListDedicatedResourcesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListDedicatedResourcesRequest::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t ListDedicatedResourcesRequest::getOffset() const
{
    return offset_;
}

void ListDedicatedResourcesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDedicatedResourcesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDedicatedResourcesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDedicatedResourcesRequest::getLimit() const
{
    return limit_;
}

void ListDedicatedResourcesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDedicatedResourcesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDedicatedResourcesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


