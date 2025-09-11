

#include "huaweicloud/dbss/v1/model/Nic.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




Nic::Nic()
{
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
}

Nic::~Nic() = default;

void Nic::validate()
{
}

web::json::value Nic::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }

    return val;
}
bool Nic::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    return ok;
}


std::string Nic::getIpAddress() const
{
    return ipAddress_;
}

void Nic::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool Nic::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void Nic::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

std::string Nic::getSubnetId() const
{
    return subnetId_;
}

void Nic::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool Nic::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void Nic::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

}
}
}
}
}


