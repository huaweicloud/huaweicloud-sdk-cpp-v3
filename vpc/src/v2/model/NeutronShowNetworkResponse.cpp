

#include "huaweicloud/vpc/v2/model/NeutronShowNetworkResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronShowNetworkResponse::NeutronShowNetworkResponse()
{
    networkIsSet_ = false;
}

NeutronShowNetworkResponse::~NeutronShowNetworkResponse() = default;

void NeutronShowNetworkResponse::validate()
{
}

web::json::value NeutronShowNetworkResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(networkIsSet_) {
        val[utility::conversions::to_string_t("network")] = ModelBase::toJson(network_);
    }

    return val;
}

bool NeutronShowNetworkResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("network"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network"));
        if(!fieldValue.is_null())
        {
            NeutronNetwork refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetwork(refVal);
        }
    }
    return ok;
}

NeutronNetwork NeutronShowNetworkResponse::getNetwork() const
{
    return network_;
}

void NeutronShowNetworkResponse::setNetwork(const NeutronNetwork& value)
{
    network_ = value;
    networkIsSet_ = true;
}

bool NeutronShowNetworkResponse::networkIsSet() const
{
    return networkIsSet_;
}

void NeutronShowNetworkResponse::unsetnetwork()
{
    networkIsSet_ = false;
}

}
}
}
}
}


