

#include "huaweicloud/eip/v3/model/VpcIgwsTenantResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




VpcIgwsTenantResp::VpcIgwsTenantResp()
{
    id_ = "";
    idIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    networkId_ = "";
    networkIdIsSet_ = false;
    enableIpv6_ = false;
    enableIpv6IsSet_ = false;
}

VpcIgwsTenantResp::~VpcIgwsTenantResp() = default;

void VpcIgwsTenantResp::validate()
{
}

web::json::value VpcIgwsTenantResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(networkIdIsSet_) {
        val[utility::conversions::to_string_t("network_id")] = ModelBase::toJson(networkId_);
    }
    if(enableIpv6IsSet_) {
        val[utility::conversions::to_string_t("enable_ipv6")] = ModelBase::toJson(enableIpv6_);
    }

    return val;
}
bool VpcIgwsTenantResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_ipv6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_ipv6"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableIpv6(refVal);
        }
    }
    return ok;
}


std::string VpcIgwsTenantResp::getId() const
{
    return id_;
}

void VpcIgwsTenantResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool VpcIgwsTenantResp::idIsSet() const
{
    return idIsSet_;
}

void VpcIgwsTenantResp::unsetid()
{
    idIsSet_ = false;
}

std::string VpcIgwsTenantResp::getProjectId() const
{
    return projectId_;
}

void VpcIgwsTenantResp::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool VpcIgwsTenantResp::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void VpcIgwsTenantResp::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string VpcIgwsTenantResp::getVpcId() const
{
    return vpcId_;
}

void VpcIgwsTenantResp::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool VpcIgwsTenantResp::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void VpcIgwsTenantResp::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string VpcIgwsTenantResp::getName() const
{
    return name_;
}

void VpcIgwsTenantResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VpcIgwsTenantResp::nameIsSet() const
{
    return nameIsSet_;
}

void VpcIgwsTenantResp::unsetname()
{
    nameIsSet_ = false;
}

std::string VpcIgwsTenantResp::getCreatedAt() const
{
    return createdAt_;
}

void VpcIgwsTenantResp::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool VpcIgwsTenantResp::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void VpcIgwsTenantResp::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string VpcIgwsTenantResp::getUpdatedAt() const
{
    return updatedAt_;
}

void VpcIgwsTenantResp::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool VpcIgwsTenantResp::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void VpcIgwsTenantResp::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string VpcIgwsTenantResp::getNetworkId() const
{
    return networkId_;
}

void VpcIgwsTenantResp::setNetworkId(const std::string& value)
{
    networkId_ = value;
    networkIdIsSet_ = true;
}

bool VpcIgwsTenantResp::networkIdIsSet() const
{
    return networkIdIsSet_;
}

void VpcIgwsTenantResp::unsetnetworkId()
{
    networkIdIsSet_ = false;
}

bool VpcIgwsTenantResp::isEnableIpv6() const
{
    return enableIpv6_;
}

void VpcIgwsTenantResp::setEnableIpv6(bool value)
{
    enableIpv6_ = value;
    enableIpv6IsSet_ = true;
}

bool VpcIgwsTenantResp::enableIpv6IsSet() const
{
    return enableIpv6IsSet_;
}

void VpcIgwsTenantResp::unsetenableIpv6()
{
    enableIpv6IsSet_ = false;
}

}
}
}
}
}


