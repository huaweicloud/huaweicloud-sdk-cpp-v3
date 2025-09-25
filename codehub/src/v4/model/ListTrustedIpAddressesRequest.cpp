

#include "huaweicloud/codehub/v4/model/ListTrustedIpAddressesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListTrustedIpAddressesRequest::ListTrustedIpAddressesRequest()
{
    id_ = 0;
    idIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListTrustedIpAddressesRequest::~ListTrustedIpAddressesRequest() = default;

void ListTrustedIpAddressesRequest::validate()
{
}

web::json::value ListTrustedIpAddressesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListTrustedIpAddressesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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


int32_t ListTrustedIpAddressesRequest::getId() const
{
    return id_;
}

void ListTrustedIpAddressesRequest::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListTrustedIpAddressesRequest::idIsSet() const
{
    return idIsSet_;
}

void ListTrustedIpAddressesRequest::unsetid()
{
    idIsSet_ = false;
}

int32_t ListTrustedIpAddressesRequest::getOffset() const
{
    return offset_;
}

void ListTrustedIpAddressesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTrustedIpAddressesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTrustedIpAddressesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListTrustedIpAddressesRequest::getLimit() const
{
    return limit_;
}

void ListTrustedIpAddressesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTrustedIpAddressesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTrustedIpAddressesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


