

#include "huaweicloud/functiongraph/v2/model/DeleteVpcEndpointRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




DeleteVpcEndpointRequest::DeleteVpcEndpointRequest()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

DeleteVpcEndpointRequest::~DeleteVpcEndpointRequest() = default;

void DeleteVpcEndpointRequest::validate()
{
}

web::json::value DeleteVpcEndpointRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool DeleteVpcEndpointRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string DeleteVpcEndpointRequest::getVpcId() const
{
    return vpcId_;
}

void DeleteVpcEndpointRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool DeleteVpcEndpointRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void DeleteVpcEndpointRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string DeleteVpcEndpointRequest::getSubnetId() const
{
    return subnetId_;
}

void DeleteVpcEndpointRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool DeleteVpcEndpointRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void DeleteVpcEndpointRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string DeleteVpcEndpointRequest::getContentType() const
{
    return contentType_;
}

void DeleteVpcEndpointRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DeleteVpcEndpointRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DeleteVpcEndpointRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


