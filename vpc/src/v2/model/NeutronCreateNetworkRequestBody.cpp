

#include "huaweicloud/vpc/v2/model/NeutronCreateNetworkRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateNetworkRequestBody::NeutronCreateNetworkRequestBody()
{
    networkIsSet_ = false;
}

NeutronCreateNetworkRequestBody::~NeutronCreateNetworkRequestBody() = default;

void NeutronCreateNetworkRequestBody::validate()
{
}

web::json::value NeutronCreateNetworkRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(networkIsSet_) {
        val[utility::conversions::to_string_t("network")] = ModelBase::toJson(network_);
    }

    return val;
}
bool NeutronCreateNetworkRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("network"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network"));
        if(!fieldValue.is_null())
        {
            NeutronCreateNetworkOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetwork(refVal);
        }
    }
    return ok;
}


NeutronCreateNetworkOption NeutronCreateNetworkRequestBody::getNetwork() const
{
    return network_;
}

void NeutronCreateNetworkRequestBody::setNetwork(const NeutronCreateNetworkOption& value)
{
    network_ = value;
    networkIsSet_ = true;
}

bool NeutronCreateNetworkRequestBody::networkIsSet() const
{
    return networkIsSet_;
}

void NeutronCreateNetworkRequestBody::unsetnetwork()
{
    networkIsSet_ = false;
}

}
}
}
}
}


