

#include "huaweicloud/modelarts/v1/model/ShowNetworkRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowNetworkRequest::ShowNetworkRequest()
{
    networkName_ = "";
    networkNameIsSet_ = false;
}

ShowNetworkRequest::~ShowNetworkRequest() = default;

void ShowNetworkRequest::validate()
{
}

web::json::value ShowNetworkRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(networkNameIsSet_) {
        val[utility::conversions::to_string_t("network_name")] = ModelBase::toJson(networkName_);
    }

    return val;
}
bool ShowNetworkRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowNetworkRequest::getNetworkName() const
{
    return networkName_;
}

void ShowNetworkRequest::setNetworkName(const std::string& value)
{
    networkName_ = value;
    networkNameIsSet_ = true;
}

bool ShowNetworkRequest::networkNameIsSet() const
{
    return networkNameIsSet_;
}

void ShowNetworkRequest::unsetnetworkName()
{
    networkNameIsSet_ = false;
}

}
}
}
}
}


