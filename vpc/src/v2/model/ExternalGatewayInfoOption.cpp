

#include "huaweicloud/vpc/v2/model/ExternalGatewayInfoOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ExternalGatewayInfoOption::ExternalGatewayInfoOption()
{
    networkId_ = "";
    networkIdIsSet_ = false;
}

ExternalGatewayInfoOption::~ExternalGatewayInfoOption() = default;

void ExternalGatewayInfoOption::validate()
{
}

web::json::value ExternalGatewayInfoOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(networkIdIsSet_) {
        val[utility::conversions::to_string_t("network_id")] = ModelBase::toJson(networkId_);
    }

    return val;
}
bool ExternalGatewayInfoOption::fromJson(const web::json::value& val)
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


std::string ExternalGatewayInfoOption::getNetworkId() const
{
    return networkId_;
}

void ExternalGatewayInfoOption::setNetworkId(const std::string& value)
{
    networkId_ = value;
    networkIdIsSet_ = true;
}

bool ExternalGatewayInfoOption::networkIdIsSet() const
{
    return networkIdIsSet_;
}

void ExternalGatewayInfoOption::unsetnetworkId()
{
    networkIdIsSet_ = false;
}

}
}
}
}
}


