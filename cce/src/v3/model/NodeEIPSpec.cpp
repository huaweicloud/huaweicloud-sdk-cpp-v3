

#include "huaweicloud/cce/v3/model/NodeEIPSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeEIPSpec::NodeEIPSpec()
{
    iptype_ = "";
    iptypeIsSet_ = false;
    bandwidthIsSet_ = false;
}

NodeEIPSpec::~NodeEIPSpec() = default;

void NodeEIPSpec::validate()
{
}

web::json::value NodeEIPSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(iptypeIsSet_) {
        val[utility::conversions::to_string_t("iptype")] = ModelBase::toJson(iptype_);
    }
    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }

    return val;
}
bool NodeEIPSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string NodeEIPSpec::getIptype() const
{
    return iptype_;
}

void NodeEIPSpec::setIptype(const std::string& value)
{
    iptype_ = value;
    iptypeIsSet_ = true;
}

bool NodeEIPSpec::iptypeIsSet() const
{
    return iptypeIsSet_;
}

void NodeEIPSpec::unsetiptype()
{
    iptypeIsSet_ = false;
}

NodeBandwidth NodeEIPSpec::getBandwidth() const
{
    return bandwidth_;
}

void NodeEIPSpec::setBandwidth(const NodeBandwidth& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool NodeEIPSpec::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void NodeEIPSpec::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

}
}
}
}
}


