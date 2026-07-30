

#include "huaweicloud/modelarts/v1/model/CreateRoceNetworkResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateRoceNetworkResponse::CreateRoceNetworkResponse()
{
    networkIsSet_ = false;
}

CreateRoceNetworkResponse::~CreateRoceNetworkResponse() = default;

void CreateRoceNetworkResponse::validate()
{
}

web::json::value CreateRoceNetworkResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(networkIsSet_) {
        val[utility::conversions::to_string_t("network")] = ModelBase::toJson(network_);
    }

    return val;
}
bool CreateRoceNetworkResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("network"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network"));
        if(!fieldValue.is_null())
        {
            ServerRoceNetwork refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetwork(refVal);
        }
    }
    return ok;
}


ServerRoceNetwork CreateRoceNetworkResponse::getNetwork() const
{
    return network_;
}

void CreateRoceNetworkResponse::setNetwork(const ServerRoceNetwork& value)
{
    network_ = value;
    networkIsSet_ = true;
}

bool CreateRoceNetworkResponse::networkIsSet() const
{
    return networkIsSet_;
}

void CreateRoceNetworkResponse::unsetnetwork()
{
    networkIsSet_ = false;
}

}
}
}
}
}


