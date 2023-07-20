

#include "huaweicloud/gaussdbforopengauss/v3/model/NodeResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




NodeResult::NodeResult()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    role_ = "";
    roleIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    privateIp_ = "";
    privateIpIsSet_ = false;
    publicIp_ = "";
    publicIpIsSet_ = false;
    componentNames_ = "";
    componentNamesIsSet_ = false;
}

NodeResult::~NodeResult() = default;

void NodeResult::validate()
{
}

web::json::value NodeResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(privateIpIsSet_) {
        val[utility::conversions::to_string_t("private_ip")] = ModelBase::toJson(privateIp_);
    }
    if(publicIpIsSet_) {
        val[utility::conversions::to_string_t("public_ip")] = ModelBase::toJson(publicIp_);
    }
    if(componentNamesIsSet_) {
        val[utility::conversions::to_string_t("component_names")] = ModelBase::toJson(componentNames_);
    }

    return val;
}

bool NodeResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("private_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("component_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_names"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentNames(refVal);
        }
    }
    return ok;
}

std::string NodeResult::getId() const
{
    return id_;
}

void NodeResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NodeResult::idIsSet() const
{
    return idIsSet_;
}

void NodeResult::unsetid()
{
    idIsSet_ = false;
}

std::string NodeResult::getName() const
{
    return name_;
}

void NodeResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NodeResult::nameIsSet() const
{
    return nameIsSet_;
}

void NodeResult::unsetname()
{
    nameIsSet_ = false;
}

std::string NodeResult::getRole() const
{
    return role_;
}

void NodeResult::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool NodeResult::roleIsSet() const
{
    return roleIsSet_;
}

void NodeResult::unsetrole()
{
    roleIsSet_ = false;
}

std::string NodeResult::getStatus() const
{
    return status_;
}

void NodeResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NodeResult::statusIsSet() const
{
    return statusIsSet_;
}

void NodeResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string NodeResult::getAvailabilityZone() const
{
    return availabilityZone_;
}

void NodeResult::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool NodeResult::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void NodeResult::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string NodeResult::getPrivateIp() const
{
    return privateIp_;
}

void NodeResult::setPrivateIp(const std::string& value)
{
    privateIp_ = value;
    privateIpIsSet_ = true;
}

bool NodeResult::privateIpIsSet() const
{
    return privateIpIsSet_;
}

void NodeResult::unsetprivateIp()
{
    privateIpIsSet_ = false;
}

std::string NodeResult::getPublicIp() const
{
    return publicIp_;
}

void NodeResult::setPublicIp(const std::string& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool NodeResult::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void NodeResult::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

std::string NodeResult::getComponentNames() const
{
    return componentNames_;
}

void NodeResult::setComponentNames(const std::string& value)
{
    componentNames_ = value;
    componentNamesIsSet_ = true;
}

bool NodeResult::componentNamesIsSet() const
{
    return componentNamesIsSet_;
}

void NodeResult::unsetcomponentNames()
{
    componentNamesIsSet_ = false;
}

}
}
}
}
}


