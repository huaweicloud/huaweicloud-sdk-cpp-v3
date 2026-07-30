

#include "huaweicloud/modelarts/v1/model/ShowNetworkAvailableIpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowNetworkAvailableIpRequest::ShowNetworkAvailableIpRequest()
{
    networkName_ = "";
    networkNameIsSet_ = false;
    networkId_ = "";
    networkIdIsSet_ = false;
}

ShowNetworkAvailableIpRequest::~ShowNetworkAvailableIpRequest() = default;

void ShowNetworkAvailableIpRequest::validate()
{
}

web::json::value ShowNetworkAvailableIpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(networkNameIsSet_) {
        val[utility::conversions::to_string_t("network_name")] = ModelBase::toJson(networkName_);
    }
    if(networkIdIsSet_) {
        val[utility::conversions::to_string_t("network_id")] = ModelBase::toJson(networkId_);
    }

    return val;
}
bool ShowNetworkAvailableIpRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("network_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkName(refVal);
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


std::string ShowNetworkAvailableIpRequest::getNetworkName() const
{
    return networkName_;
}

void ShowNetworkAvailableIpRequest::setNetworkName(const std::string& value)
{
    networkName_ = value;
    networkNameIsSet_ = true;
}

bool ShowNetworkAvailableIpRequest::networkNameIsSet() const
{
    return networkNameIsSet_;
}

void ShowNetworkAvailableIpRequest::unsetnetworkName()
{
    networkNameIsSet_ = false;
}

std::string ShowNetworkAvailableIpRequest::getNetworkId() const
{
    return networkId_;
}

void ShowNetworkAvailableIpRequest::setNetworkId(const std::string& value)
{
    networkId_ = value;
    networkIdIsSet_ = true;
}

bool ShowNetworkAvailableIpRequest::networkIdIsSet() const
{
    return networkIdIsSet_;
}

void ShowNetworkAvailableIpRequest::unsetnetworkId()
{
    networkIdIsSet_ = false;
}

}
}
}
}
}


