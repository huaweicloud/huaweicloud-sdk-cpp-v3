

#include "huaweicloud/vpc/v2/model/NeutronShowNetworkRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronShowNetworkRequest::NeutronShowNetworkRequest()
{
    networkId_ = "";
    networkIdIsSet_ = false;
}

NeutronShowNetworkRequest::~NeutronShowNetworkRequest() = default;

void NeutronShowNetworkRequest::validate()
{
}

web::json::value NeutronShowNetworkRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(networkIdIsSet_) {
        val[utility::conversions::to_string_t("network_id")] = ModelBase::toJson(networkId_);
    }

    return val;
}
bool NeutronShowNetworkRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("network_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkId(refVal);
        }
    }
    return ok;
}


std::string NeutronShowNetworkRequest::getNetworkId() const
{
    return networkId_;
}

void NeutronShowNetworkRequest::setNetworkId(const std::string& value)
{
    networkId_ = value;
    networkIdIsSet_ = true;
}

bool NeutronShowNetworkRequest::networkIdIsSet() const
{
    return networkIdIsSet_;
}

void NeutronShowNetworkRequest::unsetnetworkId()
{
    networkIdIsSet_ = false;
}

}
}
}
}
}


