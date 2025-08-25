

#include "huaweicloud/cce/v3/model/NetworkSubnet.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NetworkSubnet::NetworkSubnet()
{
    subnetID_ = "";
    subnetIDIsSet_ = false;
}

NetworkSubnet::~NetworkSubnet() = default;

void NetworkSubnet::validate()
{
}

web::json::value NetworkSubnet::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIDIsSet_) {
        val[utility::conversions::to_string_t("subnetID")] = ModelBase::toJson(subnetID_);
    }

    return val;
}
bool NetworkSubnet::fromJson(const web::json::value& val)
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


std::string NetworkSubnet::getSubnetID() const
{
    return subnetID_;
}

void NetworkSubnet::setSubnetID(const std::string& value)
{
    subnetID_ = value;
    subnetIDIsSet_ = true;
}

bool NetworkSubnet::subnetIDIsSet() const
{
    return subnetIDIsSet_;
}

void NetworkSubnet::unsetsubnetID()
{
    subnetIDIsSet_ = false;
}

}
}
}
}
}


