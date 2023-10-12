

#include "huaweicloud/drs/v5/model/CloudVpcInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CloudVpcInfo::CloudVpcInfo()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
}

CloudVpcInfo::~CloudVpcInfo() = default;

void CloudVpcInfo::validate()
{
}

web::json::value CloudVpcInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }

    return val;
}
bool CloudVpcInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
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


std::string CloudVpcInfo::getVpcId() const
{
    return vpcId_;
}

void CloudVpcInfo::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool CloudVpcInfo::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void CloudVpcInfo::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string CloudVpcInfo::getSubnetId() const
{
    return subnetId_;
}

void CloudVpcInfo::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool CloudVpcInfo::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void CloudVpcInfo::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string CloudVpcInfo::getSecurityGroupId() const
{
    return securityGroupId_;
}

void CloudVpcInfo::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool CloudVpcInfo::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void CloudVpcInfo::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

}
}
}
}
}


