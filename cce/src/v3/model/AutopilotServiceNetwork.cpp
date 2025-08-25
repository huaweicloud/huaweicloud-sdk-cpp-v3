

#include "huaweicloud/cce/v3/model/AutopilotServiceNetwork.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AutopilotServiceNetwork::AutopilotServiceNetwork()
{
    iPv4CIDR_ = "";
    iPv4CIDRIsSet_ = false;
}

AutopilotServiceNetwork::~AutopilotServiceNetwork() = default;

void AutopilotServiceNetwork::validate()
{
}

web::json::value AutopilotServiceNetwork::toJson() const
{
    web::json::value val = web::json::value::object();

    if(iPv4CIDRIsSet_) {
        val[utility::conversions::to_string_t("IPv4CIDR")] = ModelBase::toJson(iPv4CIDR_);
    }

    return val;
}
bool AutopilotServiceNetwork::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("IPv4CIDR"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("IPv4CIDR"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIPv4CIDR(refVal);
        }
    }
    return ok;
}


std::string AutopilotServiceNetwork::getIPv4CIDR() const
{
    return iPv4CIDR_;
}

void AutopilotServiceNetwork::setIPv4CIDR(const std::string& value)
{
    iPv4CIDR_ = value;
    iPv4CIDRIsSet_ = true;
}

bool AutopilotServiceNetwork::iPv4CIDRIsSet() const
{
    return iPv4CIDRIsSet_;
}

void AutopilotServiceNetwork::unsetiPv4CIDR()
{
    iPv4CIDRIsSet_ = false;
}

}
}
}
}
}


