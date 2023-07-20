

#include "huaweicloud/gaussdbfornosql/v3/model/ConstructDisasterRecoveryInstance.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ConstructDisasterRecoveryInstance::ConstructDisasterRecoveryInstance()
{
    id_ = "";
    idIsSet_ = false;
    regionCode_ = "";
    regionCodeIsSet_ = false;
    subnetCidrsIsSet_ = false;
    nodeIpsIsSet_ = false;
}

ConstructDisasterRecoveryInstance::~ConstructDisasterRecoveryInstance() = default;

void ConstructDisasterRecoveryInstance::validate()
{
}

web::json::value ConstructDisasterRecoveryInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(regionCodeIsSet_) {
        val[utility::conversions::to_string_t("region_code")] = ModelBase::toJson(regionCode_);
    }
    if(subnetCidrsIsSet_) {
        val[utility::conversions::to_string_t("subnet_cidrs")] = ModelBase::toJson(subnetCidrs_);
    }
    if(nodeIpsIsSet_) {
        val[utility::conversions::to_string_t("node_ips")] = ModelBase::toJson(nodeIps_);
    }

    return val;
}

bool ConstructDisasterRecoveryInstance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_cidrs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_cidrs"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetCidrs(refVal);
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

std::string ConstructDisasterRecoveryInstance::getId() const
{
    return id_;
}

void ConstructDisasterRecoveryInstance::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ConstructDisasterRecoveryInstance::idIsSet() const
{
    return idIsSet_;
}

void ConstructDisasterRecoveryInstance::unsetid()
{
    idIsSet_ = false;
}

std::string ConstructDisasterRecoveryInstance::getRegionCode() const
{
    return regionCode_;
}

void ConstructDisasterRecoveryInstance::setRegionCode(const std::string& value)
{
    regionCode_ = value;
    regionCodeIsSet_ = true;
}

bool ConstructDisasterRecoveryInstance::regionCodeIsSet() const
{
    return regionCodeIsSet_;
}

void ConstructDisasterRecoveryInstance::unsetregionCode()
{
    regionCodeIsSet_ = false;
}

std::vector<std::string>& ConstructDisasterRecoveryInstance::getSubnetCidrs()
{
    return subnetCidrs_;
}

void ConstructDisasterRecoveryInstance::setSubnetCidrs(const std::vector<std::string>& value)
{
    subnetCidrs_ = value;
    subnetCidrsIsSet_ = true;
}

bool ConstructDisasterRecoveryInstance::subnetCidrsIsSet() const
{
    return subnetCidrsIsSet_;
}

void ConstructDisasterRecoveryInstance::unsetsubnetCidrs()
{
    subnetCidrsIsSet_ = false;
}

std::vector<std::string>& ConstructDisasterRecoveryInstance::getNodeIps()
{
    return nodeIps_;
}

void ConstructDisasterRecoveryInstance::setNodeIps(const std::vector<std::string>& value)
{
    nodeIps_ = value;
    nodeIpsIsSet_ = true;
}

bool ConstructDisasterRecoveryInstance::nodeIpsIsSet() const
{
    return nodeIpsIsSet_;
}

void ConstructDisasterRecoveryInstance::unsetnodeIps()
{
    nodeIpsIsSet_ = false;
}

}
}
}
}
}


