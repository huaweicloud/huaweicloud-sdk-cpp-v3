

#include "huaweicloud/modelarts/v1/model/ServerRoceNetworkRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServerRoceNetworkRequest::ServerRoceNetworkRequest()
{
    networkType_ = "";
    networkTypeIsSet_ = false;
    physicalNetwork_ = "";
    physicalNetworkIsSet_ = false;
}

ServerRoceNetworkRequest::~ServerRoceNetworkRequest() = default;

void ServerRoceNetworkRequest::validate()
{
}

web::json::value ServerRoceNetworkRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(networkTypeIsSet_) {
        val[utility::conversions::to_string_t("network_type")] = ModelBase::toJson(networkType_);
    }
    if(physicalNetworkIsSet_) {
        val[utility::conversions::to_string_t("physical_network")] = ModelBase::toJson(physicalNetwork_);
    }

    return val;
}
bool ServerRoceNetworkRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("network_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("physical_network"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("physical_network"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhysicalNetwork(refVal);
        }
    }
    return ok;
}


std::string ServerRoceNetworkRequest::getNetworkType() const
{
    return networkType_;
}

void ServerRoceNetworkRequest::setNetworkType(const std::string& value)
{
    networkType_ = value;
    networkTypeIsSet_ = true;
}

bool ServerRoceNetworkRequest::networkTypeIsSet() const
{
    return networkTypeIsSet_;
}

void ServerRoceNetworkRequest::unsetnetworkType()
{
    networkTypeIsSet_ = false;
}

std::string ServerRoceNetworkRequest::getPhysicalNetwork() const
{
    return physicalNetwork_;
}

void ServerRoceNetworkRequest::setPhysicalNetwork(const std::string& value)
{
    physicalNetwork_ = value;
    physicalNetworkIsSet_ = true;
}

bool ServerRoceNetworkRequest::physicalNetworkIsSet() const
{
    return physicalNetworkIsSet_;
}

void ServerRoceNetworkRequest::unsetphysicalNetwork()
{
    physicalNetworkIsSet_ = false;
}

}
}
}
}
}


