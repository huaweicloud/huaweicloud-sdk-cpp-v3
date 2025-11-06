

#include "huaweicloud/codeartsrepo/v4/model/DeleteTrustedIpAddressRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




DeleteTrustedIpAddressRequest::DeleteTrustedIpAddressRequest()
{
    id_ = 0;
    idIsSet_ = false;
    ipId_ = 0;
    ipIdIsSet_ = false;
}

DeleteTrustedIpAddressRequest::~DeleteTrustedIpAddressRequest() = default;

void DeleteTrustedIpAddressRequest::validate()
{
}

web::json::value DeleteTrustedIpAddressRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(ipIdIsSet_) {
        val[utility::conversions::to_string_t("ip_id")] = ModelBase::toJson(ipId_);
    }

    return val;
}
bool DeleteTrustedIpAddressRequest::fromJson(const web::json::value& val)
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


int32_t DeleteTrustedIpAddressRequest::getId() const
{
    return id_;
}

void DeleteTrustedIpAddressRequest::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteTrustedIpAddressRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteTrustedIpAddressRequest::unsetid()
{
    idIsSet_ = false;
}

int32_t DeleteTrustedIpAddressRequest::getIpId() const
{
    return ipId_;
}

void DeleteTrustedIpAddressRequest::setIpId(int32_t value)
{
    ipId_ = value;
    ipIdIsSet_ = true;
}

bool DeleteTrustedIpAddressRequest::ipIdIsSet() const
{
    return ipIdIsSet_;
}

void DeleteTrustedIpAddressRequest::unsetipId()
{
    ipIdIsSet_ = false;
}

}
}
}
}
}


