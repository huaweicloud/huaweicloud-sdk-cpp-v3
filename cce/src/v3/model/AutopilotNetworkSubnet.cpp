

#include "huaweicloud/cce/v3/model/AutopilotNetworkSubnet.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AutopilotNetworkSubnet::AutopilotNetworkSubnet()
{
    subnetID_ = "";
    subnetIDIsSet_ = false;
}

AutopilotNetworkSubnet::~AutopilotNetworkSubnet() = default;

void AutopilotNetworkSubnet::validate()
{
}

web::json::value AutopilotNetworkSubnet::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIDIsSet_) {
        val[utility::conversions::to_string_t("subnetID")] = ModelBase::toJson(subnetID_);
    }

    return val;
}
bool AutopilotNetworkSubnet::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subnetID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnetID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetID(refVal);
        }
    }
    return ok;
}


std::string AutopilotNetworkSubnet::getSubnetID() const
{
    return subnetID_;
}

void AutopilotNetworkSubnet::setSubnetID(const std::string& value)
{
    subnetID_ = value;
    subnetIDIsSet_ = true;
}

bool AutopilotNetworkSubnet::subnetIDIsSet() const
{
    return subnetIDIsSet_;
}

void AutopilotNetworkSubnet::unsetsubnetID()
{
    subnetIDIsSet_ = false;
}

}
}
}
}
}


