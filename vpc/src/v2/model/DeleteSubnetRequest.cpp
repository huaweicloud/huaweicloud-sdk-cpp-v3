

#include "huaweicloud/vpc/v2/model/DeleteSubnetRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




DeleteSubnetRequest::DeleteSubnetRequest()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
}

DeleteSubnetRequest::~DeleteSubnetRequest() = default;

void DeleteSubnetRequest::validate()
{
}

web::json::value DeleteSubnetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }

    return val;
}

bool DeleteSubnetRequest::fromJson(const web::json::value& val)
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
    return ok;
}

std::string DeleteSubnetRequest::getVpcId() const
{
    return vpcId_;
}

void DeleteSubnetRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool DeleteSubnetRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void DeleteSubnetRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string DeleteSubnetRequest::getSubnetId() const
{
    return subnetId_;
}

void DeleteSubnetRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool DeleteSubnetRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void DeleteSubnetRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

}
}
}
}
}


