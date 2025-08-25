

#include "huaweicloud/cce/v3/model/AutopilotEniNetworkUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AutopilotEniNetworkUpdate::AutopilotEniNetworkUpdate()
{
    subnetsIsSet_ = false;
}

AutopilotEniNetworkUpdate::~AutopilotEniNetworkUpdate() = default;

void AutopilotEniNetworkUpdate::validate()
{
}

web::json::value AutopilotEniNetworkUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetsIsSet_) {
        val[utility::conversions::to_string_t("subnets")] = ModelBase::toJson(subnets_);
    }

    return val;
}
bool AutopilotEniNetworkUpdate::fromJson(const web::json::value& val)
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


std::vector<AutopilotNetworkSubnet>& AutopilotEniNetworkUpdate::getSubnets()
{
    return subnets_;
}

void AutopilotEniNetworkUpdate::setSubnets(const std::vector<AutopilotNetworkSubnet>& value)
{
    subnets_ = value;
    subnetsIsSet_ = true;
}

bool AutopilotEniNetworkUpdate::subnetsIsSet() const
{
    return subnetsIsSet_;
}

void AutopilotEniNetworkUpdate::unsetsubnets()
{
    subnetsIsSet_ = false;
}

}
}
}
}
}


