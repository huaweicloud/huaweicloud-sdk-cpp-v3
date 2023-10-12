

#include "huaweicloud/vpc/v2/model/VpcRoute.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




VpcRoute::VpcRoute()
{
    id_ = "";
    idIsSet_ = false;
    destination_ = "";
    destinationIsSet_ = false;
    nexthop_ = "";
    nexthopIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
}

VpcRoute::~VpcRoute() = default;

void VpcRoute::validate()
{
}

web::json::value VpcRoute::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
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
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }

    return val;
}
bool VpcRoute::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    return ok;
}


std::string VpcRoute::getId() const
{
    return id_;
}

void VpcRoute::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool VpcRoute::idIsSet() const
{
    return idIsSet_;
}

void VpcRoute::unsetid()
{
    idIsSet_ = false;
}

std::string VpcRoute::getDestination() const
{
    return destination_;
}

void VpcRoute::setDestination(const std::string& value)
{
    destination_ = value;
    destinationIsSet_ = true;
}

bool VpcRoute::destinationIsSet() const
{
    return destinationIsSet_;
}

void VpcRoute::unsetdestination()
{
    destinationIsSet_ = false;
}

std::string VpcRoute::getNexthop() const
{
    return nexthop_;
}

void VpcRoute::setNexthop(const std::string& value)
{
    nexthop_ = value;
    nexthopIsSet_ = true;
}

bool VpcRoute::nexthopIsSet() const
{
    return nexthopIsSet_;
}

void VpcRoute::unsetnexthop()
{
    nexthopIsSet_ = false;
}

std::string VpcRoute::getType() const
{
    return type_;
}

void VpcRoute::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool VpcRoute::typeIsSet() const
{
    return typeIsSet_;
}

void VpcRoute::unsettype()
{
    typeIsSet_ = false;
}

std::string VpcRoute::getVpcId() const
{
    return vpcId_;
}

void VpcRoute::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool VpcRoute::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void VpcRoute::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string VpcRoute::getTenantId() const
{
    return tenantId_;
}

void VpcRoute::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool VpcRoute::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void VpcRoute::unsettenantId()
{
    tenantIdIsSet_ = false;
}

}
}
}
}
}


