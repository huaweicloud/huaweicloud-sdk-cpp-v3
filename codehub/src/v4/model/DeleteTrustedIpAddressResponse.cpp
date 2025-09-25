

#include "huaweicloud/codehub/v4/model/DeleteTrustedIpAddressResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




DeleteTrustedIpAddressResponse::DeleteTrustedIpAddressResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

DeleteTrustedIpAddressResponse::~DeleteTrustedIpAddressResponse() = default;

void DeleteTrustedIpAddressResponse::validate()
{
}

web::json::value DeleteTrustedIpAddressResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DeleteTrustedIpAddressResponse::fromJson(const web::json::value& val)
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


std::string DeleteTrustedIpAddressResponse::getStatus() const
{
    return status_;
}

void DeleteTrustedIpAddressResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteTrustedIpAddressResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteTrustedIpAddressResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


