

#include "huaweicloud/functiongraph/v2/model/CreateVpcEndpointRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateVpcEndpointRequestBody::CreateVpcEndpointRequestBody()
{
    flavor_ = "";
    flavorIsSet_ = false;
    xrole_ = "";
    xroleIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
}

CreateVpcEndpointRequestBody::~CreateVpcEndpointRequestBody() = default;

void CreateVpcEndpointRequestBody::validate()
{
}

web::json::value CreateVpcEndpointRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(xroleIsSet_) {
        val[utility::conversions::to_string_t("xrole")] = ModelBase::toJson(xrole_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }

    return val;
}
bool CreateVpcEndpointRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("xrole"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("xrole"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXrole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    return ok;
}


std::string CreateVpcEndpointRequestBody::getFlavor() const
{
    return flavor_;
}

void CreateVpcEndpointRequestBody::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool CreateVpcEndpointRequestBody::flavorIsSet() const
{
    return flavorIsSet_;
}

void CreateVpcEndpointRequestBody::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string CreateVpcEndpointRequestBody::getXrole() const
{
    return xrole_;
}

void CreateVpcEndpointRequestBody::setXrole(const std::string& value)
{
    xrole_ = value;
    xroleIsSet_ = true;
}

bool CreateVpcEndpointRequestBody::xroleIsSet() const
{
    return xroleIsSet_;
}

void CreateVpcEndpointRequestBody::unsetxrole()
{
    xroleIsSet_ = false;
}

std::string CreateVpcEndpointRequestBody::getVpcId() const
{
    return vpcId_;
}

void CreateVpcEndpointRequestBody::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool CreateVpcEndpointRequestBody::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void CreateVpcEndpointRequestBody::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string CreateVpcEndpointRequestBody::getSubnetId() const
{
    return subnetId_;
}

void CreateVpcEndpointRequestBody::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool CreateVpcEndpointRequestBody::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void CreateVpcEndpointRequestBody::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

}
}
}
}
}


