

#include "huaweicloud/codehub/v4/model/DeleteTenantTrustedIpAddressRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




DeleteTenantTrustedIpAddressRequest::DeleteTenantTrustedIpAddressRequest()
{
    ipId_ = 0;
    ipIdIsSet_ = false;
}

DeleteTenantTrustedIpAddressRequest::~DeleteTenantTrustedIpAddressRequest() = default;

void DeleteTenantTrustedIpAddressRequest::validate()
{
}

web::json::value DeleteTenantTrustedIpAddressRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipIdIsSet_) {
        val[utility::conversions::to_string_t("ip_id")] = ModelBase::toJson(ipId_);
    }

    return val;
}
bool DeleteTenantTrustedIpAddressRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpId(refVal);
        }
    }
    return ok;
}


int32_t DeleteTenantTrustedIpAddressRequest::getIpId() const
{
    return ipId_;
}

void DeleteTenantTrustedIpAddressRequest::setIpId(int32_t value)
{
    ipId_ = value;
    ipIdIsSet_ = true;
}

bool DeleteTenantTrustedIpAddressRequest::ipIdIsSet() const
{
    return ipIdIsSet_;
}

void DeleteTenantTrustedIpAddressRequest::unsetipId()
{
    ipIdIsSet_ = false;
}

}
}
}
}
}


