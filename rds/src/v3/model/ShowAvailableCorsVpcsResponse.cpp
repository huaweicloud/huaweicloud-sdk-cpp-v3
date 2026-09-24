

#include "huaweicloud/rds/v3/model/ShowAvailableCorsVpcsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowAvailableCorsVpcsResponse::ShowAvailableCorsVpcsResponse()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
}

ShowAvailableCorsVpcsResponse::~ShowAvailableCorsVpcsResponse() = default;

void ShowAvailableCorsVpcsResponse::validate()
{
}

web::json::value ShowAvailableCorsVpcsResponse::toJson() const
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
bool ShowAvailableCorsVpcsResponse::fromJson(const web::json::value& val)
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


std::string ShowAvailableCorsVpcsResponse::getVpcId() const
{
    return vpcId_;
}

void ShowAvailableCorsVpcsResponse::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ShowAvailableCorsVpcsResponse::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ShowAvailableCorsVpcsResponse::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string ShowAvailableCorsVpcsResponse::getSubnetId() const
{
    return subnetId_;
}

void ShowAvailableCorsVpcsResponse::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ShowAvailableCorsVpcsResponse::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ShowAvailableCorsVpcsResponse::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string ShowAvailableCorsVpcsResponse::getSecurityGroupId() const
{
    return securityGroupId_;
}

void ShowAvailableCorsVpcsResponse::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool ShowAvailableCorsVpcsResponse::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void ShowAvailableCorsVpcsResponse::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

}
}
}
}
}


