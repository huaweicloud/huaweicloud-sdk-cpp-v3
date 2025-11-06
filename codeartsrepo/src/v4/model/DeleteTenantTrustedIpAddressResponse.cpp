

#include "huaweicloud/codeartsrepo/v4/model/DeleteTenantTrustedIpAddressResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




DeleteTenantTrustedIpAddressResponse::DeleteTenantTrustedIpAddressResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

DeleteTenantTrustedIpAddressResponse::~DeleteTenantTrustedIpAddressResponse() = default;

void DeleteTenantTrustedIpAddressResponse::validate()
{
}

web::json::value DeleteTenantTrustedIpAddressResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DeleteTenantTrustedIpAddressResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string DeleteTenantTrustedIpAddressResponse::getStatus() const
{
    return status_;
}

void DeleteTenantTrustedIpAddressResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteTenantTrustedIpAddressResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteTenantTrustedIpAddressResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


