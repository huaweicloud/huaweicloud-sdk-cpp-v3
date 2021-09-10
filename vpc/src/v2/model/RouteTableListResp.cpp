

#include "huaweicloud/vpc/v2/model/RouteTableListResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




RouteTableListResp::RouteTableListResp()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    default_ = false;
    defaultIsSet_ = false;
    subnetsIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

RouteTableListResp::~RouteTableListResp() = default;

void RouteTableListResp::validate()
{
}

web::json::value RouteTableListResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(defaultIsSet_) {
        val[utility::conversions::to_string_t("default")] = ModelBase::toJson(default_);
    }
    if(subnetsIsSet_) {
        val[utility::conversions::to_string_t("subnets")] = ModelBase::toJson(subnets_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool RouteTableListResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnets"));
        if(!fieldValue.is_null())
        {
            std::vector<SubnetList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnets(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string RouteTableListResp::getId() const
{
    return id_;
}

void RouteTableListResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RouteTableListResp::idIsSet() const
{
    return idIsSet_;
}

void RouteTableListResp::unsetid()
{
    idIsSet_ = false;
}

std::string RouteTableListResp::getName() const
{
    return name_;
}

void RouteTableListResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RouteTableListResp::nameIsSet() const
{
    return nameIsSet_;
}

void RouteTableListResp::unsetname()
{
    nameIsSet_ = false;
}

bool RouteTableListResp::isDefault() const
{
    return default_;
}

void RouteTableListResp::setDefault(bool value)
{
    default_ = value;
    defaultIsSet_ = true;
}

bool RouteTableListResp::defaultIsSet() const
{
    return defaultIsSet_;
}

void RouteTableListResp::unsetdefault()
{
    defaultIsSet_ = false;
}

std::vector<SubnetList>& RouteTableListResp::getSubnets()
{
    return subnets_;
}

void RouteTableListResp::setSubnets(const std::vector<SubnetList>& value)
{
    subnets_ = value;
    subnetsIsSet_ = true;
}

bool RouteTableListResp::subnetsIsSet() const
{
    return subnetsIsSet_;
}

void RouteTableListResp::unsetsubnets()
{
    subnetsIsSet_ = false;
}

std::string RouteTableListResp::getTenantId() const
{
    return tenantId_;
}

void RouteTableListResp::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool RouteTableListResp::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void RouteTableListResp::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string RouteTableListResp::getVpcId() const
{
    return vpcId_;
}

void RouteTableListResp::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool RouteTableListResp::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void RouteTableListResp::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string RouteTableListResp::getDescription() const
{
    return description_;
}

void RouteTableListResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool RouteTableListResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void RouteTableListResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


