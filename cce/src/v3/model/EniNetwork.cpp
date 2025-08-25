

#include "huaweicloud/cce/v3/model/EniNetwork.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




EniNetwork::EniNetwork()
{
    eniSubnetId_ = "";
    eniSubnetIdIsSet_ = false;
    eniSubnetCIDR_ = "";
    eniSubnetCIDRIsSet_ = false;
    subnetsIsSet_ = false;
}

EniNetwork::~EniNetwork() = default;

void EniNetwork::validate()
{
}

web::json::value EniNetwork::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eniSubnetIdIsSet_) {
        val[utility::conversions::to_string_t("eniSubnetId")] = ModelBase::toJson(eniSubnetId_);
    }
    if(eniSubnetCIDRIsSet_) {
        val[utility::conversions::to_string_t("eniSubnetCIDR")] = ModelBase::toJson(eniSubnetCIDR_);
    }
    if(subnetsIsSet_) {
        val[utility::conversions::to_string_t("subnets")] = ModelBase::toJson(subnets_);
    }

    return val;
}
bool EniNetwork::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eniSubnetId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eniSubnetId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEniSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eniSubnetCIDR"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eniSubnetCIDR"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEniSubnetCIDR(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnets"));
        if(!fieldValue.is_null())
        {
            std::vector<NetworkSubnet> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnets(refVal);
        }
    }
    return ok;
}


std::string EniNetwork::getEniSubnetId() const
{
    return eniSubnetId_;
}

void EniNetwork::setEniSubnetId(const std::string& value)
{
    eniSubnetId_ = value;
    eniSubnetIdIsSet_ = true;
}

bool EniNetwork::eniSubnetIdIsSet() const
{
    return eniSubnetIdIsSet_;
}

void EniNetwork::unseteniSubnetId()
{
    eniSubnetIdIsSet_ = false;
}

std::string EniNetwork::getEniSubnetCIDR() const
{
    return eniSubnetCIDR_;
}

void EniNetwork::setEniSubnetCIDR(const std::string& value)
{
    eniSubnetCIDR_ = value;
    eniSubnetCIDRIsSet_ = true;
}

bool EniNetwork::eniSubnetCIDRIsSet() const
{
    return eniSubnetCIDRIsSet_;
}

void EniNetwork::unseteniSubnetCIDR()
{
    eniSubnetCIDRIsSet_ = false;
}

std::vector<NetworkSubnet>& EniNetwork::getSubnets()
{
    return subnets_;
}

void EniNetwork::setSubnets(const std::vector<NetworkSubnet>& value)
{
    subnets_ = value;
    subnetsIsSet_ = true;
}

bool EniNetwork::subnetsIsSet() const
{
    return subnetsIsSet_;
}

void EniNetwork::unsetsubnets()
{
    subnetsIsSet_ = false;
}

}
}
}
}
}


