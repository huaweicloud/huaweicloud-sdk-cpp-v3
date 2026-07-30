

#include "huaweicloud/modelarts/v1/model/ShowNetworkAvailableIpResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowNetworkAvailableIpResponse::ShowNetworkAvailableIpResponse()
{
    name_ = "";
    nameIsSet_ = false;
    networkId_ = "";
    networkIdIsSet_ = false;
    subnetIpAvailabilityIsSet_ = false;
}

ShowNetworkAvailableIpResponse::~ShowNetworkAvailableIpResponse() = default;

void ShowNetworkAvailableIpResponse::validate()
{
}

web::json::value ShowNetworkAvailableIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(networkIdIsSet_) {
        val[utility::conversions::to_string_t("networkId")] = ModelBase::toJson(networkId_);
    }
    if(subnetIpAvailabilityIsSet_) {
        val[utility::conversions::to_string_t("subnetIpAvailability")] = ModelBase::toJson(subnetIpAvailability_);
    }

    return val;
}
bool ShowNetworkAvailableIpResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("networkId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("networkId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnetIpAvailability"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnetIpAvailability"));
        if(!fieldValue.is_null())
        {
            std::vector<SubnetIpAvailability> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetIpAvailability(refVal);
        }
    }
    return ok;
}


std::string ShowNetworkAvailableIpResponse::getName() const
{
    return name_;
}

void ShowNetworkAvailableIpResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowNetworkAvailableIpResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowNetworkAvailableIpResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowNetworkAvailableIpResponse::getNetworkId() const
{
    return networkId_;
}

void ShowNetworkAvailableIpResponse::setNetworkId(const std::string& value)
{
    networkId_ = value;
    networkIdIsSet_ = true;
}

bool ShowNetworkAvailableIpResponse::networkIdIsSet() const
{
    return networkIdIsSet_;
}

void ShowNetworkAvailableIpResponse::unsetnetworkId()
{
    networkIdIsSet_ = false;
}

std::vector<SubnetIpAvailability>& ShowNetworkAvailableIpResponse::getSubnetIpAvailability()
{
    return subnetIpAvailability_;
}

void ShowNetworkAvailableIpResponse::setSubnetIpAvailability(const std::vector<SubnetIpAvailability>& value)
{
    subnetIpAvailability_ = value;
    subnetIpAvailabilityIsSet_ = true;
}

bool ShowNetworkAvailableIpResponse::subnetIpAvailabilityIsSet() const
{
    return subnetIpAvailabilityIsSet_;
}

void ShowNetworkAvailableIpResponse::unsetsubnetIpAvailability()
{
    subnetIpAvailabilityIsSet_ = false;
}

}
}
}
}
}


