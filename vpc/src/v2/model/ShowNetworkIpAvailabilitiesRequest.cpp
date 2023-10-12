

#include "huaweicloud/vpc/v2/model/ShowNetworkIpAvailabilitiesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowNetworkIpAvailabilitiesRequest::ShowNetworkIpAvailabilitiesRequest()
{
    networkId_ = "";
    networkIdIsSet_ = false;
}

ShowNetworkIpAvailabilitiesRequest::~ShowNetworkIpAvailabilitiesRequest() = default;

void ShowNetworkIpAvailabilitiesRequest::validate()
{
}

web::json::value ShowNetworkIpAvailabilitiesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(networkIdIsSet_) {
        val[utility::conversions::to_string_t("network_id")] = ModelBase::toJson(networkId_);
    }

    return val;
}
bool ShowNetworkIpAvailabilitiesRequest::fromJson(const web::json::value& val)
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


std::string ShowNetworkIpAvailabilitiesRequest::getNetworkId() const
{
    return networkId_;
}

void ShowNetworkIpAvailabilitiesRequest::setNetworkId(const std::string& value)
{
    networkId_ = value;
    networkIdIsSet_ = true;
}

bool ShowNetworkIpAvailabilitiesRequest::networkIdIsSet() const
{
    return networkIdIsSet_;
}

void ShowNetworkIpAvailabilitiesRequest::unsetnetworkId()
{
    networkIdIsSet_ = false;
}

}
}
}
}
}


