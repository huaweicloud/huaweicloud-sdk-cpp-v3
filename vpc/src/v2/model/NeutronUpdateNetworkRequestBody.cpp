

#include "huaweicloud/vpc/v2/model/NeutronUpdateNetworkRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateNetworkRequestBody::NeutronUpdateNetworkRequestBody()
{
    networkIsSet_ = false;
}

NeutronUpdateNetworkRequestBody::~NeutronUpdateNetworkRequestBody() = default;

void NeutronUpdateNetworkRequestBody::validate()
{
}

web::json::value NeutronUpdateNetworkRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(networkIsSet_) {
        val[utility::conversions::to_string_t("network")] = ModelBase::toJson(network_);
    }

    return val;
}

bool NeutronUpdateNetworkRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("network"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network"));
        if(!fieldValue.is_null())
        {
            NeutronUpdateNetworkOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetwork(refVal);
        }
    }
    return ok;
}

NeutronUpdateNetworkOption NeutronUpdateNetworkRequestBody::getNetwork() const
{
    return network_;
}

void NeutronUpdateNetworkRequestBody::setNetwork(const NeutronUpdateNetworkOption& value)
{
    network_ = value;
    networkIsSet_ = true;
}

bool NeutronUpdateNetworkRequestBody::networkIsSet() const
{
    return networkIsSet_;
}

void NeutronUpdateNetworkRequestBody::unsetnetwork()
{
    networkIsSet_ = false;
}

}
}
}
}
}


