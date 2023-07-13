

#include "huaweicloud/vpc/v2/model/NeutronCreateNetworkResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateNetworkResponse::NeutronCreateNetworkResponse()
{
    networkIsSet_ = false;
}

NeutronCreateNetworkResponse::~NeutronCreateNetworkResponse() = default;

void NeutronCreateNetworkResponse::validate()
{
}

web::json::value NeutronCreateNetworkResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(networkIsSet_) {
        val[utility::conversions::to_string_t("network")] = ModelBase::toJson(network_);
    }

    return val;
}

bool NeutronCreateNetworkResponse::fromJson(const web::json::value& val)
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

NeutronNetwork NeutronCreateNetworkResponse::getNetwork() const
{
    return network_;
}

void NeutronCreateNetworkResponse::setNetwork(const NeutronNetwork& value)
{
    network_ = value;
    networkIsSet_ = true;
}

bool NeutronCreateNetworkResponse::networkIsSet() const
{
    return networkIsSet_;
}

void NeutronCreateNetworkResponse::unsetnetwork()
{
    networkIsSet_ = false;
}

}
}
}
}
}


