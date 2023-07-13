

#include "huaweicloud/vpc/v2/model/ExternalGatewayInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ExternalGatewayInfo::ExternalGatewayInfo()
{
    enableSnat_ = false;
    enableSnatIsSet_ = false;
    networkId_ = "";
    networkIdIsSet_ = false;
}

ExternalGatewayInfo::~ExternalGatewayInfo() = default;

void ExternalGatewayInfo::validate()
{
}

web::json::value ExternalGatewayInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableSnatIsSet_) {
        val[utility::conversions::to_string_t("enable_snat")] = ModelBase::toJson(enableSnat_);
    }
    if(networkIdIsSet_) {
        val[utility::conversions::to_string_t("network_id")] = ModelBase::toJson(networkId_);
    }

    return val;
}

bool ExternalGatewayInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable_snat"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_snat"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableSnat(refVal);
        }
    }
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

bool ExternalGatewayInfo::isEnableSnat() const
{
    return enableSnat_;
}

void ExternalGatewayInfo::setEnableSnat(bool value)
{
    enableSnat_ = value;
    enableSnatIsSet_ = true;
}

bool ExternalGatewayInfo::enableSnatIsSet() const
{
    return enableSnatIsSet_;
}

void ExternalGatewayInfo::unsetenableSnat()
{
    enableSnatIsSet_ = false;
}

std::string ExternalGatewayInfo::getNetworkId() const
{
    return networkId_;
}

void ExternalGatewayInfo::setNetworkId(const std::string& value)
{
    networkId_ = value;
    networkIdIsSet_ = true;
}

bool ExternalGatewayInfo::networkIdIsSet() const
{
    return networkIdIsSet_;
}

void ExternalGatewayInfo::unsetnetworkId()
{
    networkIdIsSet_ = false;
}

}
}
}
}
}


