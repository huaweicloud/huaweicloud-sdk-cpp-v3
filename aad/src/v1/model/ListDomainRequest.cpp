

#include "huaweicloud/aad/v1/model/ListDomainRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ListDomainRequest::ListDomainRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListDomainRequest::~ListDomainRequest() = default;

void ListDomainRequest::validate()
{
}

web::json::value ListDomainRequest::toJson() const
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
bool ListDomainRequest::fromJson(const web::json::value& val)
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


int32_t ListDomainRequest::getLimit() const
{
    return limit_;
}

void ListDomainRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDomainRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDomainRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListDomainRequest::getOffset() const
{
    return offset_;
}

void ListDomainRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDomainRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDomainRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


