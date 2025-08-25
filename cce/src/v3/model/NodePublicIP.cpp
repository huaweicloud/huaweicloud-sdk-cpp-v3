

#include "huaweicloud/cce/v3/model/NodePublicIP.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodePublicIP::NodePublicIP()
{
    idsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    eipIsSet_ = false;
    iptype_ = "";
    iptypeIsSet_ = false;
    bandwidthIsSet_ = false;
}

NodePublicIP::~NodePublicIP() = default;

void NodePublicIP::validate()
{
}

web::json::value NodePublicIP::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(eipIsSet_) {
        val[utility::conversions::to_string_t("eip")] = ModelBase::toJson(eip_);
    }
    if(iptypeIsSet_) {
        val[utility::conversions::to_string_t("iptype")] = ModelBase::toJson(iptype_);
    }
    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }

    return val;
}
bool NodePublicIP::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip"));
        if(!fieldValue.is_null())
        {
            NodeEIPSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iptype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iptype"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIptype(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            NodeBandwidth refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& NodePublicIP::getIds()
{
    return ids_;
}

void NodePublicIP::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool NodePublicIP::idsIsSet() const
{
    return idsIsSet_;
}

void NodePublicIP::unsetids()
{
    idsIsSet_ = false;
}

int32_t NodePublicIP::getCount() const
{
    return count_;
}

void NodePublicIP::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool NodePublicIP::countIsSet() const
{
    return countIsSet_;
}

void NodePublicIP::unsetcount()
{
    countIsSet_ = false;
}

NodeEIPSpec NodePublicIP::getEip() const
{
    return eip_;
}

void NodePublicIP::setEip(const NodeEIPSpec& value)
{
    eip_ = value;
    eipIsSet_ = true;
}

bool NodePublicIP::eipIsSet() const
{
    return eipIsSet_;
}

void NodePublicIP::unseteip()
{
    eipIsSet_ = false;
}

std::string NodePublicIP::getIptype() const
{
    return iptype_;
}

void NodePublicIP::setIptype(const std::string& value)
{
    iptype_ = value;
    iptypeIsSet_ = true;
}

bool NodePublicIP::iptypeIsSet() const
{
    return iptypeIsSet_;
}

void NodePublicIP::unsetiptype()
{
    iptypeIsSet_ = false;
}

NodeBandwidth NodePublicIP::getBandwidth() const
{
    return bandwidth_;
}

void NodePublicIP::setBandwidth(const NodeBandwidth& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool NodePublicIP::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void NodePublicIP::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

}
}
}
}
}


