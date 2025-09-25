

#include "huaweicloud/codehub/v4/model/UpdateTenantTrustedIpAddressRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateTenantTrustedIpAddressRequest::UpdateTenantTrustedIpAddressRequest()
{
    ipId_ = 0;
    ipIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTenantTrustedIpAddressRequest::~UpdateTenantTrustedIpAddressRequest() = default;

void UpdateTenantTrustedIpAddressRequest::validate()
{
}

web::json::value UpdateTenantTrustedIpAddressRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipIdIsSet_) {
        val[utility::conversions::to_string_t("ip_id")] = ModelBase::toJson(ipId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateTenantTrustedIpAddressRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AddTrustedIpAddressRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateTenantTrustedIpAddressRequest::getIpId() const
{
    return ipId_;
}

void UpdateTenantTrustedIpAddressRequest::setIpId(int32_t value)
{
    ipId_ = value;
    ipIdIsSet_ = true;
}

bool UpdateTenantTrustedIpAddressRequest::ipIdIsSet() const
{
    return ipIdIsSet_;
}

void UpdateTenantTrustedIpAddressRequest::unsetipId()
{
    ipIdIsSet_ = false;
}

AddTrustedIpAddressRequestBody UpdateTenantTrustedIpAddressRequest::getBody() const
{
    return body_;
}

void UpdateTenantTrustedIpAddressRequest::setBody(const AddTrustedIpAddressRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTenantTrustedIpAddressRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTenantTrustedIpAddressRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


