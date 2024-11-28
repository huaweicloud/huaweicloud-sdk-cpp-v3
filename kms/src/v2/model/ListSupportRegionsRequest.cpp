

#include "huaweicloud/kms/v2/model/ListSupportRegionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListSupportRegionsRequest::ListSupportRegionsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListSupportRegionsRequest::~ListSupportRegionsRequest() = default;

void ListSupportRegionsRequest::validate()
{
}

web::json::value ListSupportRegionsRequest::toJson() const
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
bool ListSupportRegionsRequest::fromJson(const web::json::value& val)
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


int32_t ListSupportRegionsRequest::getLimit() const
{
    return limit_;
}

void ListSupportRegionsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSupportRegionsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSupportRegionsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListSupportRegionsRequest::getOffset() const
{
    return offset_;
}

void ListSupportRegionsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSupportRegionsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSupportRegionsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


