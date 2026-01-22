

#include "huaweicloud/cfw/v1/model/PrivateNetworkSegmentVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




PrivateNetworkSegmentVO::PrivateNetworkSegmentVO()
{
    confId_ = "";
    confIdIsSet_ = false;
    protectNetwork_ = "";
    protectNetworkIsSet_ = false;
    azInfo_ = "";
    azInfoIsSet_ = false;
    subnetName_ = "";
    subnetNameIsSet_ = false;
}

PrivateNetworkSegmentVO::~PrivateNetworkSegmentVO() = default;

void PrivateNetworkSegmentVO::validate()
{
}

web::json::value PrivateNetworkSegmentVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(confIdIsSet_) {
        val[utility::conversions::to_string_t("conf_id")] = ModelBase::toJson(confId_);
    }
    if(protectNetworkIsSet_) {
        val[utility::conversions::to_string_t("protect_network")] = ModelBase::toJson(protectNetwork_);
    }
    if(azInfoIsSet_) {
        val[utility::conversions::to_string_t("az_info")] = ModelBase::toJson(azInfo_);
    }
    if(subnetNameIsSet_) {
        val[utility::conversions::to_string_t("subnet_name")] = ModelBase::toJson(subnetName_);
    }

    return val;
}
bool PrivateNetworkSegmentVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("conf_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conf_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protect_network"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protect_network"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectNetwork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetName(refVal);
        }
    }
    return ok;
}


std::string PrivateNetworkSegmentVO::getConfId() const
{
    return confId_;
}

void PrivateNetworkSegmentVO::setConfId(const std::string& value)
{
    confId_ = value;
    confIdIsSet_ = true;
}

bool PrivateNetworkSegmentVO::confIdIsSet() const
{
    return confIdIsSet_;
}

void PrivateNetworkSegmentVO::unsetconfId()
{
    confIdIsSet_ = false;
}

std::string PrivateNetworkSegmentVO::getProtectNetwork() const
{
    return protectNetwork_;
}

void PrivateNetworkSegmentVO::setProtectNetwork(const std::string& value)
{
    protectNetwork_ = value;
    protectNetworkIsSet_ = true;
}

bool PrivateNetworkSegmentVO::protectNetworkIsSet() const
{
    return protectNetworkIsSet_;
}

void PrivateNetworkSegmentVO::unsetprotectNetwork()
{
    protectNetworkIsSet_ = false;
}

std::string PrivateNetworkSegmentVO::getAzInfo() const
{
    return azInfo_;
}

void PrivateNetworkSegmentVO::setAzInfo(const std::string& value)
{
    azInfo_ = value;
    azInfoIsSet_ = true;
}

bool PrivateNetworkSegmentVO::azInfoIsSet() const
{
    return azInfoIsSet_;
}

void PrivateNetworkSegmentVO::unsetazInfo()
{
    azInfoIsSet_ = false;
}

std::string PrivateNetworkSegmentVO::getSubnetName() const
{
    return subnetName_;
}

void PrivateNetworkSegmentVO::setSubnetName(const std::string& value)
{
    subnetName_ = value;
    subnetNameIsSet_ = true;
}

bool PrivateNetworkSegmentVO::subnetNameIsSet() const
{
    return subnetNameIsSet_;
}

void PrivateNetworkSegmentVO::unsetsubnetName()
{
    subnetNameIsSet_ = false;
}

}
}
}
}
}


