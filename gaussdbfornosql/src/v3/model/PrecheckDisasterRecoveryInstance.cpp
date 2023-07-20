

#include "huaweicloud/gaussdbfornosql/v3/model/PrecheckDisasterRecoveryInstance.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




PrecheckDisasterRecoveryInstance::PrecheckDisasterRecoveryInstance()
{
    vpcCidr_ = "";
    vpcCidrIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    nodeIpsIsSet_ = false;
}

PrecheckDisasterRecoveryInstance::~PrecheckDisasterRecoveryInstance() = default;

void PrecheckDisasterRecoveryInstance::validate()
{
}

web::json::value PrecheckDisasterRecoveryInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcCidrIsSet_) {
        val[utility::conversions::to_string_t("vpc_cidr")] = ModelBase::toJson(vpcCidr_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(nodeIpsIsSet_) {
        val[utility::conversions::to_string_t("node_ips")] = ModelBase::toJson(nodeIps_);
    }

    return val;
}

bool PrecheckDisasterRecoveryInstance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vpc_cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_cidr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcCidr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeIps(refVal);
        }
    }
    return ok;
}

std::string PrecheckDisasterRecoveryInstance::getVpcCidr() const
{
    return vpcCidr_;
}

void PrecheckDisasterRecoveryInstance::setVpcCidr(const std::string& value)
{
    vpcCidr_ = value;
    vpcCidrIsSet_ = true;
}

bool PrecheckDisasterRecoveryInstance::vpcCidrIsSet() const
{
    return vpcCidrIsSet_;
}

void PrecheckDisasterRecoveryInstance::unsetvpcCidr()
{
    vpcCidrIsSet_ = false;
}

std::string PrecheckDisasterRecoveryInstance::getSpecCode() const
{
    return specCode_;
}

void PrecheckDisasterRecoveryInstance::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool PrecheckDisasterRecoveryInstance::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void PrecheckDisasterRecoveryInstance::unsetspecCode()
{
    specCodeIsSet_ = false;
}

std::vector<std::string>& PrecheckDisasterRecoveryInstance::getNodeIps()
{
    return nodeIps_;
}

void PrecheckDisasterRecoveryInstance::setNodeIps(const std::vector<std::string>& value)
{
    nodeIps_ = value;
    nodeIpsIsSet_ = true;
}

bool PrecheckDisasterRecoveryInstance::nodeIpsIsSet() const
{
    return nodeIpsIsSet_;
}

void PrecheckDisasterRecoveryInstance::unsetnodeIps()
{
    nodeIpsIsSet_ = false;
}

}
}
}
}
}


