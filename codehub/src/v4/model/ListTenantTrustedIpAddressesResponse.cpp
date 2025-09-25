

#include "huaweicloud/codehub/v4/model/ListTenantTrustedIpAddressesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListTenantTrustedIpAddressesResponse::ListTenantTrustedIpAddressesResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListTenantTrustedIpAddressesResponse::~ListTenantTrustedIpAddressesResponse() = default;

void ListTenantTrustedIpAddressesResponse::validate()
{
}

web::json::value ListTenantTrustedIpAddressesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }
    if(xTotalIsSet_) {
        val[utility::conversions::to_string_t("X-Total")] = ModelBase::toJson(xTotal_);
    }

    return val;
}
bool ListTenantTrustedIpAddressesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<TenantTrustedIpAddressDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXTotal(refVal);
        }
    }
    return ok;
}


std::vector<TenantTrustedIpAddressDto>& ListTenantTrustedIpAddressesResponse::getBody()
{
    return body_;
}

void ListTenantTrustedIpAddressesResponse::setBody(const std::vector<TenantTrustedIpAddressDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTenantTrustedIpAddressesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTenantTrustedIpAddressesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListTenantTrustedIpAddressesResponse::getXTotal() const
{
    return xTotal_;
}

void ListTenantTrustedIpAddressesResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListTenantTrustedIpAddressesResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListTenantTrustedIpAddressesResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


