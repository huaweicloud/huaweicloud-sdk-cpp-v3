

#include "huaweicloud/cce/v3/model/AutopilotEniNetwork.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AutopilotEniNetwork::AutopilotEniNetwork()
{
    subnetsIsSet_ = false;
}

AutopilotEniNetwork::~AutopilotEniNetwork() = default;

void AutopilotEniNetwork::validate()
{
}

web::json::value AutopilotEniNetwork::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetsIsSet_) {
        val[utility::conversions::to_string_t("subnets")] = ModelBase::toJson(subnets_);
    }

    return val;
}
bool AutopilotEniNetwork::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subnets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnets"));
        if(!fieldValue.is_null())
        {
            std::vector<AutopilotNetworkSubnet> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnets(refVal);
        }
    }
    return ok;
}


std::vector<AutopilotNetworkSubnet>& AutopilotEniNetwork::getSubnets()
{
    return subnets_;
}

void AutopilotEniNetwork::setSubnets(const std::vector<AutopilotNetworkSubnet>& value)
{
    subnets_ = value;
    subnetsIsSet_ = true;
}

bool AutopilotEniNetwork::subnetsIsSet() const
{
    return subnetsIsSet_;
}

void AutopilotEniNetwork::unsetsubnets()
{
    subnetsIsSet_ = false;
}

}
}
}
}
}


