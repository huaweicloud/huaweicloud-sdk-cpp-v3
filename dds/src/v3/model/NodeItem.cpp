

#include "huaweicloud/dds/v3/model/NodeItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




NodeItem::NodeItem()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    role_ = "";
    roleIsSet_ = false;
    privateIp_ = "";
    privateIpIsSet_ = false;
    publicIp_ = "";
    publicIpIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
}

NodeItem::~NodeItem() = default;

void NodeItem::validate()
{
}

web::json::value NodeItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }
    if(privateIpIsSet_) {
        val[utility::conversions::to_string_t("private_ip")] = ModelBase::toJson(privateIp_);
    }
    if(publicIpIsSet_) {
        val[utility::conversions::to_string_t("public_ip")] = ModelBase::toJson(publicIp_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }

    return val;
}
bool NodeItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
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
    return ok;
}


std::string NodeItem::getId() const
{
    return id_;
}

void NodeItem::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NodeItem::idIsSet() const
{
    return idIsSet_;
}

void NodeItem::unsetid()
{
    idIsSet_ = false;
}

std::string NodeItem::getName() const
{
    return name_;
}

void NodeItem::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NodeItem::nameIsSet() const
{
    return nameIsSet_;
}

void NodeItem::unsetname()
{
    nameIsSet_ = false;
}

std::string NodeItem::getStatus() const
{
    return status_;
}

void NodeItem::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NodeItem::statusIsSet() const
{
    return statusIsSet_;
}

void NodeItem::unsetstatus()
{
    statusIsSet_ = false;
}

std::string NodeItem::getRole() const
{
    return role_;
}

void NodeItem::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool NodeItem::roleIsSet() const
{
    return roleIsSet_;
}

void NodeItem::unsetrole()
{
    roleIsSet_ = false;
}

std::string NodeItem::getPrivateIp() const
{
    return privateIp_;
}

void NodeItem::setPrivateIp(const std::string& value)
{
    privateIp_ = value;
    privateIpIsSet_ = true;
}

bool NodeItem::privateIpIsSet() const
{
    return privateIpIsSet_;
}

void NodeItem::unsetprivateIp()
{
    privateIpIsSet_ = false;
}

std::string NodeItem::getPublicIp() const
{
    return publicIp_;
}

void NodeItem::setPublicIp(const std::string& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool NodeItem::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void NodeItem::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

std::string NodeItem::getSpecCode() const
{
    return specCode_;
}

void NodeItem::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool NodeItem::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void NodeItem::unsetspecCode()
{
    specCodeIsSet_ = false;
}

std::string NodeItem::getAvailabilityZone() const
{
    return availabilityZone_;
}

void NodeItem::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool NodeItem::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void NodeItem::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

}
}
}
}
}


