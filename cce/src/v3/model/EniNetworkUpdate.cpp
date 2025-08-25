

#include "huaweicloud/cce/v3/model/EniNetworkUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




EniNetworkUpdate::EniNetworkUpdate()
{
    subnetsIsSet_ = false;
}

EniNetworkUpdate::~EniNetworkUpdate() = default;

void EniNetworkUpdate::validate()
{
}

web::json::value EniNetworkUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetsIsSet_) {
        val[utility::conversions::to_string_t("subnets")] = ModelBase::toJson(subnets_);
    }

    return val;
}
bool EniNetworkUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subnets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnets"));
        if(!fieldValue.is_null())
        {
            std::vector<NetworkSubnet> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnets(refVal);
        }
    }
    return ok;
}


std::vector<NetworkSubnet>& EniNetworkUpdate::getSubnets()
{
    return subnets_;
}

void EniNetworkUpdate::setSubnets(const std::vector<NetworkSubnet>& value)
{
    subnets_ = value;
    subnetsIsSet_ = true;
}

bool EniNetworkUpdate::subnetsIsSet() const
{
    return subnetsIsSet_;
}

void EniNetworkUpdate::unsetsubnets()
{
    subnetsIsSet_ = false;
}

}
}
}
}
}


