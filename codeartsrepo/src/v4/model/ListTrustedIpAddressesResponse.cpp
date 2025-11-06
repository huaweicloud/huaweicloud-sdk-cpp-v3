

#include "huaweicloud/codeartsrepo/v4/model/ListTrustedIpAddressesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListTrustedIpAddressesResponse::ListTrustedIpAddressesResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListTrustedIpAddressesResponse::~ListTrustedIpAddressesResponse() = default;

void ListTrustedIpAddressesResponse::validate()
{
}

web::json::value ListTrustedIpAddressesResponse::toJson() const
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
bool ListTrustedIpAddressesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<TrustedIpAddressDto> refVal;
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


std::vector<TrustedIpAddressDto>& ListTrustedIpAddressesResponse::getBody()
{
    return body_;
}

void ListTrustedIpAddressesResponse::setBody(const std::vector<TrustedIpAddressDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTrustedIpAddressesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTrustedIpAddressesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListTrustedIpAddressesResponse::getXTotal() const
{
    return xTotal_;
}

void ListTrustedIpAddressesResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListTrustedIpAddressesResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListTrustedIpAddressesResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


