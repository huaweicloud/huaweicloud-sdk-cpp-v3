

#include "huaweicloud/functiongraph/v2/model/CreateVpcEndpointResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateVpcEndpointResponse::CreateVpcEndpointResponse()
{
    endpointsIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
}

CreateVpcEndpointResponse::~CreateVpcEndpointResponse() = default;

void CreateVpcEndpointResponse::validate()
{
}

web::json::value CreateVpcEndpointResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointsIsSet_) {
        val[utility::conversions::to_string_t("endpoints")] = ModelBase::toJson(endpoints_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }

    return val;
}
bool CreateVpcEndpointResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endpoints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoints"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& CreateVpcEndpointResponse::getEndpoints()
{
    return endpoints_;
}

void CreateVpcEndpointResponse::setEndpoints(const std::vector<std::string>& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool CreateVpcEndpointResponse::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void CreateVpcEndpointResponse::unsetendpoints()
{
    endpointsIsSet_ = false;
}

std::string CreateVpcEndpointResponse::getAddress() const
{
    return address_;
}

void CreateVpcEndpointResponse::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool CreateVpcEndpointResponse::addressIsSet() const
{
    return addressIsSet_;
}

void CreateVpcEndpointResponse::unsetaddress()
{
    addressIsSet_ = false;
}

}
}
}
}
}


