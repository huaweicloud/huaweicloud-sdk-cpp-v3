

#include "huaweicloud/modelarts/v1/model/DeleteNetworkRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteNetworkRequest::DeleteNetworkRequest()
{
    networkName_ = "";
    networkNameIsSet_ = false;
}

DeleteNetworkRequest::~DeleteNetworkRequest() = default;

void DeleteNetworkRequest::validate()
{
}

web::json::value DeleteNetworkRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(networkNameIsSet_) {
        val[utility::conversions::to_string_t("network_name")] = ModelBase::toJson(networkName_);
    }

    return val;
}
bool DeleteNetworkRequest::fromJson(const web::json::value& val)
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


std::string DeleteNetworkRequest::getNetworkName() const
{
    return networkName_;
}

void DeleteNetworkRequest::setNetworkName(const std::string& value)
{
    networkName_ = value;
    networkNameIsSet_ = true;
}

bool DeleteNetworkRequest::networkNameIsSet() const
{
    return networkNameIsSet_;
}

void DeleteNetworkRequest::unsetnetworkName()
{
    networkNameIsSet_ = false;
}

}
}
}
}
}


