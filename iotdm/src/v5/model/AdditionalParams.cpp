

#include "huaweicloud/iotdm/v5/model/AdditionalParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




AdditionalParams::AdditionalParams()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    smnTopicUrn_ = "";
    smnTopicUrnIsSet_ = false;
    cipheringAlgorithm_ = "";
    cipheringAlgorithmIsSet_ = false;
    portInfoIsSet_ = false;
}

AdditionalParams::~AdditionalParams() = default;

void AdditionalParams::validate()
{
}

web::json::value AdditionalParams::toJson() const
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
    if(smnTopicUrnIsSet_) {
        val[utility::conversions::to_string_t("smn_topic_urn")] = ModelBase::toJson(smnTopicUrn_);
    }
    if(cipheringAlgorithmIsSet_) {
        val[utility::conversions::to_string_t("ciphering_algorithm")] = ModelBase::toJson(cipheringAlgorithm_);
    }
    if(portInfoIsSet_) {
        val[utility::conversions::to_string_t("port_info")] = ModelBase::toJson(portInfo_);
    }

    return val;
}
bool AdditionalParams::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("smn_topic_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smn_topic_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmnTopicUrn(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("port_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_info"));
        if(!fieldValue.is_null())
        {
            Port refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortInfo(refVal);
        }
    }
    return ok;
}


std::string AdditionalParams::getVpcId() const
{
    return vpcId_;
}

void AdditionalParams::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool AdditionalParams::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void AdditionalParams::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string AdditionalParams::getSubnetId() const
{
    return subnetId_;
}

void AdditionalParams::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool AdditionalParams::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void AdditionalParams::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string AdditionalParams::getSecurityGroupId() const
{
    return securityGroupId_;
}

void AdditionalParams::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool AdditionalParams::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void AdditionalParams::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string AdditionalParams::getSmnTopicUrn() const
{
    return smnTopicUrn_;
}

void AdditionalParams::setSmnTopicUrn(const std::string& value)
{
    smnTopicUrn_ = value;
    smnTopicUrnIsSet_ = true;
}

bool AdditionalParams::smnTopicUrnIsSet() const
{
    return smnTopicUrnIsSet_;
}

void AdditionalParams::unsetsmnTopicUrn()
{
    smnTopicUrnIsSet_ = false;
}

std::string AdditionalParams::getCipheringAlgorithm() const
{
    return cipheringAlgorithm_;
}

void AdditionalParams::setCipheringAlgorithm(const std::string& value)
{
    cipheringAlgorithm_ = value;
    cipheringAlgorithmIsSet_ = true;
}

bool AdditionalParams::cipheringAlgorithmIsSet() const
{
    return cipheringAlgorithmIsSet_;
}

void AdditionalParams::unsetcipheringAlgorithm()
{
    cipheringAlgorithmIsSet_ = false;
}

Port AdditionalParams::getPortInfo() const
{
    return portInfo_;
}

void AdditionalParams::setPortInfo(const Port& value)
{
    portInfo_ = value;
    portInfoIsSet_ = true;
}

bool AdditionalParams::portInfoIsSet() const
{
    return portInfoIsSet_;
}

void AdditionalParams::unsetportInfo()
{
    portInfoIsSet_ = false;
}

}
}
}
}
}


