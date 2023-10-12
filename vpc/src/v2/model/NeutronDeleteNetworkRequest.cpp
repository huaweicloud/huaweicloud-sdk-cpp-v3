

#include "huaweicloud/vpc/v2/model/NeutronDeleteNetworkRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronDeleteNetworkRequest::NeutronDeleteNetworkRequest()
{
    networkId_ = "";
    networkIdIsSet_ = false;
}

NeutronDeleteNetworkRequest::~NeutronDeleteNetworkRequest() = default;

void NeutronDeleteNetworkRequest::validate()
{
}

web::json::value NeutronDeleteNetworkRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(networkIdIsSet_) {
        val[utility::conversions::to_string_t("network_id")] = ModelBase::toJson(networkId_);
    }

    return val;
}
bool NeutronDeleteNetworkRequest::fromJson(const web::json::value& val)
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


std::string NeutronDeleteNetworkRequest::getNetworkId() const
{
    return networkId_;
}

void NeutronDeleteNetworkRequest::setNetworkId(const std::string& value)
{
    networkId_ = value;
    networkIdIsSet_ = true;
}

bool NeutronDeleteNetworkRequest::networkIdIsSet() const
{
    return networkIdIsSet_;
}

void NeutronDeleteNetworkRequest::unsetnetworkId()
{
    networkIdIsSet_ = false;
}

}
}
}
}
}


