

#include "huaweicloud/modelarts/v1/model/PeerConnectionStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PeerConnectionStatus::PeerConnectionStatus()
{
    peerVpcId_ = "";
    peerVpcIdIsSet_ = false;
    peerSubnetId_ = "";
    peerSubnetIdIsSet_ = false;
    defaultGateWay_ = false;
    defaultGateWayIsSet_ = false;
    phase_ = "";
    phaseIsSet_ = false;
}

PeerConnectionStatus::~PeerConnectionStatus() = default;

void PeerConnectionStatus::validate()
{
}

web::json::value PeerConnectionStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(peerVpcIdIsSet_) {
        val[utility::conversions::to_string_t("peerVpcId")] = ModelBase::toJson(peerVpcId_);
    }
    if(peerSubnetIdIsSet_) {
        val[utility::conversions::to_string_t("peerSubnetId")] = ModelBase::toJson(peerSubnetId_);
    }
    if(defaultGateWayIsSet_) {
        val[utility::conversions::to_string_t("defaultGateWay")] = ModelBase::toJson(defaultGateWay_);
    }
    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }

    return val;
}
bool PeerConnectionStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("peerVpcId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("peerVpcId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeerVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("peerSubnetId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("peerSubnetId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeerSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defaultGateWay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultGateWay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultGateWay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phase"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhase(refVal);
        }
    }
    return ok;
}


std::string PeerConnectionStatus::getPeerVpcId() const
{
    return peerVpcId_;
}

void PeerConnectionStatus::setPeerVpcId(const std::string& value)
{
    peerVpcId_ = value;
    peerVpcIdIsSet_ = true;
}

bool PeerConnectionStatus::peerVpcIdIsSet() const
{
    return peerVpcIdIsSet_;
}

void PeerConnectionStatus::unsetpeerVpcId()
{
    peerVpcIdIsSet_ = false;
}

std::string PeerConnectionStatus::getPeerSubnetId() const
{
    return peerSubnetId_;
}

void PeerConnectionStatus::setPeerSubnetId(const std::string& value)
{
    peerSubnetId_ = value;
    peerSubnetIdIsSet_ = true;
}

bool PeerConnectionStatus::peerSubnetIdIsSet() const
{
    return peerSubnetIdIsSet_;
}

void PeerConnectionStatus::unsetpeerSubnetId()
{
    peerSubnetIdIsSet_ = false;
}

bool PeerConnectionStatus::isDefaultGateWay() const
{
    return defaultGateWay_;
}

void PeerConnectionStatus::setDefaultGateWay(bool value)
{
    defaultGateWay_ = value;
    defaultGateWayIsSet_ = true;
}

bool PeerConnectionStatus::defaultGateWayIsSet() const
{
    return defaultGateWayIsSet_;
}

void PeerConnectionStatus::unsetdefaultGateWay()
{
    defaultGateWayIsSet_ = false;
}

std::string PeerConnectionStatus::getPhase() const
{
    return phase_;
}

void PeerConnectionStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool PeerConnectionStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void PeerConnectionStatus::unsetphase()
{
    phaseIsSet_ = false;
}

}
}
}
}
}


