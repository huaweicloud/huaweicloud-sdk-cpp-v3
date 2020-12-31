

#include "huaweicloud/vpc/model/UpdateSubnetRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdateSubnetRequest::UpdateSubnetRequest()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateSubnetRequest::~UpdateSubnetRequest() = default;

void UpdateSubnetRequest::validate()
{
}

web::json::value UpdateSubnetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateSubnetRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateSubnetRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateSubnetRequest::getVpcId() const
{
    return vpcId_;
}

void UpdateSubnetRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool UpdateSubnetRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void UpdateSubnetRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string UpdateSubnetRequest::getSubnetId() const
{
    return subnetId_;
}

void UpdateSubnetRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool UpdateSubnetRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void UpdateSubnetRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

UpdateSubnetRequestBody UpdateSubnetRequest::getBody() const
{
    return body_;
}

void UpdateSubnetRequest::setBody(const UpdateSubnetRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSubnetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSubnetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


