

#include "huaweicloud/iotdm/v5/model/AdditionalParamsResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




AdditionalParamsResp::AdditionalParamsResp()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    cipheringAlgorithm_ = "";
    cipheringAlgorithmIsSet_ = false;
    forwardingInfoIsSet_ = false;
}

AdditionalParamsResp::~AdditionalParamsResp() = default;

void AdditionalParamsResp::validate()
{
}

web::json::value AdditionalParamsResp::toJson() const
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
    if(cipheringAlgorithmIsSet_) {
        val[utility::conversions::to_string_t("ciphering_algorithm")] = ModelBase::toJson(cipheringAlgorithm_);
    }
    if(forwardingInfoIsSet_) {
        val[utility::conversions::to_string_t("forwarding_info")] = ModelBase::toJson(forwardingInfo_);
    }

    return val;
}
bool AdditionalParamsResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ciphering_algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ciphering_algorithm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCipheringAlgorithm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forwarding_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forwarding_info"));
        if(!fieldValue.is_null())
        {
            ForwardingInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForwardingInfo(refVal);
        }
    }
    return ok;
}


std::string AdditionalParamsResp::getVpcId() const
{
    return vpcId_;
}

void AdditionalParamsResp::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool AdditionalParamsResp::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void AdditionalParamsResp::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string AdditionalParamsResp::getSubnetId() const
{
    return subnetId_;
}

void AdditionalParamsResp::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool AdditionalParamsResp::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void AdditionalParamsResp::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string AdditionalParamsResp::getSecurityGroupId() const
{
    return securityGroupId_;
}

void AdditionalParamsResp::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool AdditionalParamsResp::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void AdditionalParamsResp::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string AdditionalParamsResp::getCipheringAlgorithm() const
{
    return cipheringAlgorithm_;
}

void AdditionalParamsResp::setCipheringAlgorithm(const std::string& value)
{
    cipheringAlgorithm_ = value;
    cipheringAlgorithmIsSet_ = true;
}

bool AdditionalParamsResp::cipheringAlgorithmIsSet() const
{
    return cipheringAlgorithmIsSet_;
}

void AdditionalParamsResp::unsetcipheringAlgorithm()
{
    cipheringAlgorithmIsSet_ = false;
}

ForwardingInfo AdditionalParamsResp::getForwardingInfo() const
{
    return forwardingInfo_;
}

void AdditionalParamsResp::setForwardingInfo(const ForwardingInfo& value)
{
    forwardingInfo_ = value;
    forwardingInfoIsSet_ = true;
}

bool AdditionalParamsResp::forwardingInfoIsSet() const
{
    return forwardingInfoIsSet_;
}

void AdditionalParamsResp::unsetforwardingInfo()
{
    forwardingInfoIsSet_ = false;
}

}
}
}
}
}


