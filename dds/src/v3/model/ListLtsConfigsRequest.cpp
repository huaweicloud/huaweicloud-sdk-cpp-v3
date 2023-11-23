

#include "huaweicloud/dds/v3/model/ListLtsConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListLtsConfigsRequest::ListLtsConfigsRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListLtsConfigsRequest::~ListLtsConfigsRequest() = default;

void ListLtsConfigsRequest::validate()
{
}

web::json::value ListLtsConfigsRequest::toJson() const
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
bool ListLtsConfigsRequest::fromJson(const web::json::value& val)
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


int32_t ListLtsConfigsRequest::getOffset() const
{
    return offset_;
}

void ListLtsConfigsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListLtsConfigsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListLtsConfigsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListLtsConfigsRequest::getLimit() const
{
    return limit_;
}

void ListLtsConfigsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListLtsConfigsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListLtsConfigsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


