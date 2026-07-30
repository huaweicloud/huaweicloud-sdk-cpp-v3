

#include "huaweicloud/modelarts/v1/model/PeerConnectionItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PeerConnectionItem::PeerConnectionItem()
{
    peerVpcId_ = "";
    peerVpcIdIsSet_ = false;
    peerSubnetId_ = "";
    peerSubnetIdIsSet_ = false;
    defaultGateWay_ = false;
    defaultGateWayIsSet_ = false;
}

PeerConnectionItem::~PeerConnectionItem() = default;

void PeerConnectionItem::validate()
{
}

web::json::value PeerConnectionItem::toJson() const
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

    return val;
}
bool PeerConnectionItem::fromJson(const web::json::value& val)
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
    return ok;
}


std::string PeerConnectionItem::getPeerVpcId() const
{
    return peerVpcId_;
}

void PeerConnectionItem::setPeerVpcId(const std::string& value)
{
    peerVpcId_ = value;
    peerVpcIdIsSet_ = true;
}

bool PeerConnectionItem::peerVpcIdIsSet() const
{
    return peerVpcIdIsSet_;
}

void PeerConnectionItem::unsetpeerVpcId()
{
    peerVpcIdIsSet_ = false;
}

std::string PeerConnectionItem::getPeerSubnetId() const
{
    return peerSubnetId_;
}

void PeerConnectionItem::setPeerSubnetId(const std::string& value)
{
    peerSubnetId_ = value;
    peerSubnetIdIsSet_ = true;
}

bool PeerConnectionItem::peerSubnetIdIsSet() const
{
    return peerSubnetIdIsSet_;
}

void PeerConnectionItem::unsetpeerSubnetId()
{
    peerSubnetIdIsSet_ = false;
}

bool PeerConnectionItem::isDefaultGateWay() const
{
    return defaultGateWay_;
}

void PeerConnectionItem::setDefaultGateWay(bool value)
{
    defaultGateWay_ = value;
    defaultGateWayIsSet_ = true;
}

bool PeerConnectionItem::defaultGateWayIsSet() const
{
    return defaultGateWayIsSet_;
}

void PeerConnectionItem::unsetdefaultGateWay()
{
    defaultGateWayIsSet_ = false;
}

}
}
}
}
}


