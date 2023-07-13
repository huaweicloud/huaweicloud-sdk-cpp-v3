

#include "huaweicloud/vpc/v2/model/NeutronSecurityGroupRule.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronSecurityGroupRule::NeutronSecurityGroupRule()
{
    description_ = "";
    descriptionIsSet_ = false;
    direction_ = "";
    directionIsSet_ = false;
    ethertype_ = "";
    ethertypeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    portRangeMax_ = 0;
    portRangeMaxIsSet_ = false;
    portRangeMin_ = 0;
    portRangeMinIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    remoteGroupId_ = "";
    remoteGroupIdIsSet_ = false;
    remoteIpPrefix_ = "";
    remoteIpPrefixIsSet_ = false;
    remoteAddressGroupId_ = "";
    remoteAddressGroupIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

NeutronSecurityGroupRule::~NeutronSecurityGroupRule() = default;

void NeutronSecurityGroupRule::validate()
{
}

web::json::value NeutronSecurityGroupRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(directionIsSet_) {
        val[utility::conversions::to_string_t("direction")] = ModelBase::toJson(direction_);
    }
    if(ethertypeIsSet_) {
        val[utility::conversions::to_string_t("ethertype")] = ModelBase::toJson(ethertype_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(portRangeMaxIsSet_) {
        val[utility::conversions::to_string_t("port_range_max")] = ModelBase::toJson(portRangeMax_);
    }
    if(portRangeMinIsSet_) {
        val[utility::conversions::to_string_t("port_range_min")] = ModelBase::toJson(portRangeMin_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(remoteGroupIdIsSet_) {
        val[utility::conversions::to_string_t("remote_group_id")] = ModelBase::toJson(remoteGroupId_);
    }
    if(remoteIpPrefixIsSet_) {
        val[utility::conversions::to_string_t("remote_ip_prefix")] = ModelBase::toJson(remoteIpPrefix_);
    }
    if(remoteAddressGroupIdIsSet_) {
        val[utility::conversions::to_string_t("remote_address_group_id")] = ModelBase::toJson(remoteAddressGroupId_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}

bool NeutronSecurityGroupRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("direction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ethertype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ethertype"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEthertype(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_range_max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_range_max"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortRangeMax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_range_min"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_range_min"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortRangeMin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote_ip_prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_ip_prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteIpPrefix(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote_address_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_address_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteAddressGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}

std::string NeutronSecurityGroupRule::getDescription() const
{
    return description_;
}

void NeutronSecurityGroupRule::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NeutronSecurityGroupRule::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NeutronSecurityGroupRule::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string NeutronSecurityGroupRule::getDirection() const
{
    return direction_;
}

void NeutronSecurityGroupRule::setDirection(const std::string& value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool NeutronSecurityGroupRule::directionIsSet() const
{
    return directionIsSet_;
}

void NeutronSecurityGroupRule::unsetdirection()
{
    directionIsSet_ = false;
}

std::string NeutronSecurityGroupRule::getEthertype() const
{
    return ethertype_;
}

void NeutronSecurityGroupRule::setEthertype(const std::string& value)
{
    ethertype_ = value;
    ethertypeIsSet_ = true;
}

bool NeutronSecurityGroupRule::ethertypeIsSet() const
{
    return ethertypeIsSet_;
}

void NeutronSecurityGroupRule::unsetethertype()
{
    ethertypeIsSet_ = false;
}

std::string NeutronSecurityGroupRule::getId() const
{
    return id_;
}

void NeutronSecurityGroupRule::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NeutronSecurityGroupRule::idIsSet() const
{
    return idIsSet_;
}

void NeutronSecurityGroupRule::unsetid()
{
    idIsSet_ = false;
}

int32_t NeutronSecurityGroupRule::getPortRangeMax() const
{
    return portRangeMax_;
}

void NeutronSecurityGroupRule::setPortRangeMax(int32_t value)
{
    portRangeMax_ = value;
    portRangeMaxIsSet_ = true;
}

bool NeutronSecurityGroupRule::portRangeMaxIsSet() const
{
    return portRangeMaxIsSet_;
}

void NeutronSecurityGroupRule::unsetportRangeMax()
{
    portRangeMaxIsSet_ = false;
}

int32_t NeutronSecurityGroupRule::getPortRangeMin() const
{
    return portRangeMin_;
}

void NeutronSecurityGroupRule::setPortRangeMin(int32_t value)
{
    portRangeMin_ = value;
    portRangeMinIsSet_ = true;
}

bool NeutronSecurityGroupRule::portRangeMinIsSet() const
{
    return portRangeMinIsSet_;
}

void NeutronSecurityGroupRule::unsetportRangeMin()
{
    portRangeMinIsSet_ = false;
}

std::string NeutronSecurityGroupRule::getProtocol() const
{
    return protocol_;
}

void NeutronSecurityGroupRule::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool NeutronSecurityGroupRule::protocolIsSet() const
{
    return protocolIsSet_;
}

void NeutronSecurityGroupRule::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string NeutronSecurityGroupRule::getRemoteGroupId() const
{
    return remoteGroupId_;
}

void NeutronSecurityGroupRule::setRemoteGroupId(const std::string& value)
{
    remoteGroupId_ = value;
    remoteGroupIdIsSet_ = true;
}

bool NeutronSecurityGroupRule::remoteGroupIdIsSet() const
{
    return remoteGroupIdIsSet_;
}

void NeutronSecurityGroupRule::unsetremoteGroupId()
{
    remoteGroupIdIsSet_ = false;
}

std::string NeutronSecurityGroupRule::getRemoteIpPrefix() const
{
    return remoteIpPrefix_;
}

void NeutronSecurityGroupRule::setRemoteIpPrefix(const std::string& value)
{
    remoteIpPrefix_ = value;
    remoteIpPrefixIsSet_ = true;
}

bool NeutronSecurityGroupRule::remoteIpPrefixIsSet() const
{
    return remoteIpPrefixIsSet_;
}

void NeutronSecurityGroupRule::unsetremoteIpPrefix()
{
    remoteIpPrefixIsSet_ = false;
}

std::string NeutronSecurityGroupRule::getRemoteAddressGroupId() const
{
    return remoteAddressGroupId_;
}

void NeutronSecurityGroupRule::setRemoteAddressGroupId(const std::string& value)
{
    remoteAddressGroupId_ = value;
    remoteAddressGroupIdIsSet_ = true;
}

bool NeutronSecurityGroupRule::remoteAddressGroupIdIsSet() const
{
    return remoteAddressGroupIdIsSet_;
}

void NeutronSecurityGroupRule::unsetremoteAddressGroupId()
{
    remoteAddressGroupIdIsSet_ = false;
}

std::string NeutronSecurityGroupRule::getSecurityGroupId() const
{
    return securityGroupId_;
}

void NeutronSecurityGroupRule::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool NeutronSecurityGroupRule::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void NeutronSecurityGroupRule::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string NeutronSecurityGroupRule::getTenantId() const
{
    return tenantId_;
}

void NeutronSecurityGroupRule::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NeutronSecurityGroupRule::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NeutronSecurityGroupRule::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string NeutronSecurityGroupRule::getProjectId() const
{
    return projectId_;
}

void NeutronSecurityGroupRule::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool NeutronSecurityGroupRule::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void NeutronSecurityGroupRule::unsetprojectId()
{
    projectIdIsSet_ = false;
}

utility::datetime NeutronSecurityGroupRule::getCreatedAt() const
{
    return createdAt_;
}

void NeutronSecurityGroupRule::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool NeutronSecurityGroupRule::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void NeutronSecurityGroupRule::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime NeutronSecurityGroupRule::getUpdatedAt() const
{
    return updatedAt_;
}

void NeutronSecurityGroupRule::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool NeutronSecurityGroupRule::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void NeutronSecurityGroupRule::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


