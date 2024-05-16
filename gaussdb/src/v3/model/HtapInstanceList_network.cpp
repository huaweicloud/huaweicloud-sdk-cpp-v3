

#include "huaweicloud/gaussdb/v3/model/HtapInstanceList_network.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




HtapInstanceList_network::HtapInstanceList_network()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subNetId_ = "";
    subNetIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
}

HtapInstanceList_network::~HtapInstanceList_network() = default;

void HtapInstanceList_network::validate()
{
}

web::json::value HtapInstanceList_network::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(subNetIdIsSet_) {
        val[utility::conversions::to_string_t("sub_net_id")] = ModelBase::toJson(subNetId_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }

    return val;
}
bool HtapInstanceList_network::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sub_net_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_net_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubNetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
        }
    }
    return ok;
}


std::string HtapInstanceList_network::getVpcId() const
{
    return vpcId_;
}

void HtapInstanceList_network::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool HtapInstanceList_network::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void HtapInstanceList_network::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string HtapInstanceList_network::getSubNetId() const
{
    return subNetId_;
}

void HtapInstanceList_network::setSubNetId(const std::string& value)
{
    subNetId_ = value;
    subNetIdIsSet_ = true;
}

bool HtapInstanceList_network::subNetIdIsSet() const
{
    return subNetIdIsSet_;
}

void HtapInstanceList_network::unsetsubNetId()
{
    subNetIdIsSet_ = false;
}

std::string HtapInstanceList_network::getSecurityGroupId() const
{
    return securityGroupId_;
}

void HtapInstanceList_network::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool HtapInstanceList_network::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void HtapInstanceList_network::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

}
}
}
}
}


