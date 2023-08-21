

#include "huaweicloud/kms/v2/model/ListKeyStoresRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListKeyStoresRequest::ListKeyStoresRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListKeyStoresRequest::~ListKeyStoresRequest() = default;

void ListKeyStoresRequest::validate()
{
}

web::json::value ListKeyStoresRequest::toJson() const
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

bool ListKeyStoresRequest::fromJson(const web::json::value& val)
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

int32_t ListKeyStoresRequest::getLimit() const
{
    return limit_;
}

void ListKeyStoresRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListKeyStoresRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListKeyStoresRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListKeyStoresRequest::getOffset() const
{
    return offset_;
}

void ListKeyStoresRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListKeyStoresRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListKeyStoresRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


