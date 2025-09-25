

#include "huaweicloud/codehub/v4/model/ListTenantTrustedIpAddressesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListTenantTrustedIpAddressesRequest::ListTenantTrustedIpAddressesRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListTenantTrustedIpAddressesRequest::~ListTenantTrustedIpAddressesRequest() = default;

void ListTenantTrustedIpAddressesRequest::validate()
{
}

web::json::value ListTenantTrustedIpAddressesRequest::toJson() const
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
bool ListTenantTrustedIpAddressesRequest::fromJson(const web::json::value& val)
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


int32_t ListTenantTrustedIpAddressesRequest::getOffset() const
{
    return offset_;
}

void ListTenantTrustedIpAddressesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTenantTrustedIpAddressesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTenantTrustedIpAddressesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListTenantTrustedIpAddressesRequest::getLimit() const
{
    return limit_;
}

void ListTenantTrustedIpAddressesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTenantTrustedIpAddressesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTenantTrustedIpAddressesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


