

#include "huaweicloud/aad/v1/model/ListUnboundProtectedIpResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ListUnboundProtectedIpResponse::ListUnboundProtectedIpResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    ipsIsSet_ = false;
}

ListUnboundProtectedIpResponse::~ListUnboundProtectedIpResponse() = default;

void ListUnboundProtectedIpResponse::validate()
{
}

web::json::value ListUnboundProtectedIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(ipsIsSet_) {
        val[utility::conversions::to_string_t("ips")] = ModelBase::toJson(ips_);
    }

    return val;
}
bool ListUnboundProtectedIpResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips"));
        if(!fieldValue.is_null())
        {
            std::vector<ProtectedIpResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIps(refVal);
        }
    }
    return ok;
}


int32_t ListUnboundProtectedIpResponse::getTotal() const
{
    return total_;
}

void ListUnboundProtectedIpResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListUnboundProtectedIpResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListUnboundProtectedIpResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ProtectedIpResponse>& ListUnboundProtectedIpResponse::getIps()
{
    return ips_;
}

void ListUnboundProtectedIpResponse::setIps(const std::vector<ProtectedIpResponse>& value)
{
    ips_ = value;
    ipsIsSet_ = true;
}

bool ListUnboundProtectedIpResponse::ipsIsSet() const
{
    return ipsIsSet_;
}

void ListUnboundProtectedIpResponse::unsetips()
{
    ipsIsSet_ = false;
}

}
}
}
}
}


