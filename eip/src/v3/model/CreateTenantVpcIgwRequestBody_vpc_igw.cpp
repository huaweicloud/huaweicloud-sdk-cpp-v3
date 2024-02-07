

#include "huaweicloud/eip/v3/model/CreateTenantVpcIgwRequestBody_vpc_igw.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




CreateTenantVpcIgwRequestBody_vpc_igw::CreateTenantVpcIgwRequestBody_vpc_igw()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
    networkId_ = "";
    networkIdIsSet_ = false;
    addRoute_ = false;
    addRouteIsSet_ = false;
    enableIpv6_ = false;
    enableIpv6IsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

CreateTenantVpcIgwRequestBody_vpc_igw::~CreateTenantVpcIgwRequestBody_vpc_igw() = default;

void CreateTenantVpcIgwRequestBody_vpc_igw::validate()
{
}

web::json::value CreateTenantVpcIgwRequestBody_vpc_igw::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(networkIdIsSet_) {
        val[utility::conversions::to_string_t("network_id")] = ModelBase::toJson(networkId_);
    }
    if(addRouteIsSet_) {
        val[utility::conversions::to_string_t("add_route")] = ModelBase::toJson(addRoute_);
    }
    if(enableIpv6IsSet_) {
        val[utility::conversions::to_string_t("enable_ipv6")] = ModelBase::toJson(enableIpv6_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool CreateTenantVpcIgwRequestBody_vpc_igw::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("add_route"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("add_route"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddRoute(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_ipv6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_ipv6"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableIpv6(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string CreateTenantVpcIgwRequestBody_vpc_igw::getVpcId() const
{
    return vpcId_;
}

void CreateTenantVpcIgwRequestBody_vpc_igw::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool CreateTenantVpcIgwRequestBody_vpc_igw::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void CreateTenantVpcIgwRequestBody_vpc_igw::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string CreateTenantVpcIgwRequestBody_vpc_igw::getNetworkId() const
{
    return networkId_;
}

void CreateTenantVpcIgwRequestBody_vpc_igw::setNetworkId(const std::string& value)
{
    networkId_ = value;
    networkIdIsSet_ = true;
}

bool CreateTenantVpcIgwRequestBody_vpc_igw::networkIdIsSet() const
{
    return networkIdIsSet_;
}

void CreateTenantVpcIgwRequestBody_vpc_igw::unsetnetworkId()
{
    networkIdIsSet_ = false;
}

bool CreateTenantVpcIgwRequestBody_vpc_igw::isAddRoute() const
{
    return addRoute_;
}

void CreateTenantVpcIgwRequestBody_vpc_igw::setAddRoute(bool value)
{
    addRoute_ = value;
    addRouteIsSet_ = true;
}

bool CreateTenantVpcIgwRequestBody_vpc_igw::addRouteIsSet() const
{
    return addRouteIsSet_;
}

void CreateTenantVpcIgwRequestBody_vpc_igw::unsetaddRoute()
{
    addRouteIsSet_ = false;
}

bool CreateTenantVpcIgwRequestBody_vpc_igw::isEnableIpv6() const
{
    return enableIpv6_;
}

void CreateTenantVpcIgwRequestBody_vpc_igw::setEnableIpv6(bool value)
{
    enableIpv6_ = value;
    enableIpv6IsSet_ = true;
}

bool CreateTenantVpcIgwRequestBody_vpc_igw::enableIpv6IsSet() const
{
    return enableIpv6IsSet_;
}

void CreateTenantVpcIgwRequestBody_vpc_igw::unsetenableIpv6()
{
    enableIpv6IsSet_ = false;
}

std::string CreateTenantVpcIgwRequestBody_vpc_igw::getName() const
{
    return name_;
}

void CreateTenantVpcIgwRequestBody_vpc_igw::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateTenantVpcIgwRequestBody_vpc_igw::nameIsSet() const
{
    return nameIsSet_;
}

void CreateTenantVpcIgwRequestBody_vpc_igw::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


