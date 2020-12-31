

#include "huaweicloud/vpc/model/CreateVpcRouteOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateVpcRouteOption::CreateVpcRouteOption()
{
    destination_ = "";
    destinationIsSet_ = false;
    nexthop_ = "";
    nexthopIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
}

CreateVpcRouteOption::~CreateVpcRouteOption() = default;

void CreateVpcRouteOption::validate()
{
}

web::json::value CreateVpcRouteOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(destinationIsSet_) {
        val[utility::conversions::to_string_t("destination")] = ModelBase::toJson(destination_);
    }
    if(nexthopIsSet_) {
        val[utility::conversions::to_string_t("nexthop")] = ModelBase::toJson(nexthop_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }

    return val;
}

bool CreateVpcRouteOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("destination"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestination(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nexthop"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nexthop"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNexthop(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    return ok;
}


std::string CreateVpcRouteOption::getDestination() const
{
    return destination_;
}

void CreateVpcRouteOption::setDestination(const std::string& value)
{
    destination_ = value;
    destinationIsSet_ = true;
}

bool CreateVpcRouteOption::destinationIsSet() const
{
    return destinationIsSet_;
}

void CreateVpcRouteOption::unsetdestination()
{
    destinationIsSet_ = false;
}

std::string CreateVpcRouteOption::getNexthop() const
{
    return nexthop_;
}

void CreateVpcRouteOption::setNexthop(const std::string& value)
{
    nexthop_ = value;
    nexthopIsSet_ = true;
}

bool CreateVpcRouteOption::nexthopIsSet() const
{
    return nexthopIsSet_;
}

void CreateVpcRouteOption::unsetnexthop()
{
    nexthopIsSet_ = false;
}

std::string CreateVpcRouteOption::getType() const
{
    return type_;
}

void CreateVpcRouteOption::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateVpcRouteOption::typeIsSet() const
{
    return typeIsSet_;
}

void CreateVpcRouteOption::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateVpcRouteOption::getVpcId() const
{
    return vpcId_;
}

void CreateVpcRouteOption::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool CreateVpcRouteOption::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void CreateVpcRouteOption::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

}
}
}
}
}


