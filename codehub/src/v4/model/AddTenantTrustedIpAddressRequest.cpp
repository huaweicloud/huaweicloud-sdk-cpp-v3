

#include "huaweicloud/codehub/v4/model/AddTenantTrustedIpAddressRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




AddTenantTrustedIpAddressRequest::AddTenantTrustedIpAddressRequest()
{
    bodyIsSet_ = false;
}

AddTenantTrustedIpAddressRequest::~AddTenantTrustedIpAddressRequest() = default;

void AddTenantTrustedIpAddressRequest::validate()
{
}

web::json::value AddTenantTrustedIpAddressRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddTenantTrustedIpAddressRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


AddTrustedIpAddressRequestBody AddTenantTrustedIpAddressRequest::getBody() const
{
    return body_;
}

void AddTenantTrustedIpAddressRequest::setBody(const AddTrustedIpAddressRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddTenantTrustedIpAddressRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddTenantTrustedIpAddressRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


