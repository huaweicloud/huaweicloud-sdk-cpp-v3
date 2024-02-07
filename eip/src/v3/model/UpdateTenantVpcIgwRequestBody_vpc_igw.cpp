

#include "huaweicloud/eip/v3/model/UpdateTenantVpcIgwRequestBody_vpc_igw.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




UpdateTenantVpcIgwRequestBody_vpc_igw::UpdateTenantVpcIgwRequestBody_vpc_igw()
{
    name_ = "";
    nameIsSet_ = false;
    enableIpv6_ = false;
    enableIpv6IsSet_ = false;
}

UpdateTenantVpcIgwRequestBody_vpc_igw::~UpdateTenantVpcIgwRequestBody_vpc_igw() = default;

void UpdateTenantVpcIgwRequestBody_vpc_igw::validate()
{
}

web::json::value UpdateTenantVpcIgwRequestBody_vpc_igw::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(enableIpv6IsSet_) {
        val[utility::conversions::to_string_t("enable_ipv6")] = ModelBase::toJson(enableIpv6_);
    }

    return val;
}
bool UpdateTenantVpcIgwRequestBody_vpc_igw::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    return ok;
}


std::string UpdateTenantVpcIgwRequestBody_vpc_igw::getName() const
{
    return name_;
}

void UpdateTenantVpcIgwRequestBody_vpc_igw::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateTenantVpcIgwRequestBody_vpc_igw::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateTenantVpcIgwRequestBody_vpc_igw::unsetname()
{
    nameIsSet_ = false;
}

bool UpdateTenantVpcIgwRequestBody_vpc_igw::isEnableIpv6() const
{
    return enableIpv6_;
}

void UpdateTenantVpcIgwRequestBody_vpc_igw::setEnableIpv6(bool value)
{
    enableIpv6_ = value;
    enableIpv6IsSet_ = true;
}

bool UpdateTenantVpcIgwRequestBody_vpc_igw::enableIpv6IsSet() const
{
    return enableIpv6IsSet_;
}

void UpdateTenantVpcIgwRequestBody_vpc_igw::unsetenableIpv6()
{
    enableIpv6IsSet_ = false;
}

}
}
}
}
}


