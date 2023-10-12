

#include "huaweicloud/rds/v3/model/ProxyNode.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ProxyNode::ProxyNode()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    role_ = "";
    roleIsSet_ = false;
    azCode_ = "";
    azCodeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    frozenFlag_ = 0;
    frozenFlagIsSet_ = false;
}

ProxyNode::~ProxyNode() = default;

void ProxyNode::validate()
{
}

web::json::value ProxyNode::toJson() const
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
    if(azCodeIsSet_) {
        val[utility::conversions::to_string_t("az_code")] = ModelBase::toJson(azCode_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(frozenFlagIsSet_) {
        val[utility::conversions::to_string_t("frozen_flag")] = ModelBase::toJson(frozenFlag_);
    }

    return val;
}
bool ProxyNode::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("az_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("frozen_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frozen_flag"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrozenFlag(refVal);
        }
    }
    return ok;
}


std::string ProxyNode::getId() const
{
    return id_;
}

void ProxyNode::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProxyNode::idIsSet() const
{
    return idIsSet_;
}

void ProxyNode::unsetid()
{
    idIsSet_ = false;
}

std::string ProxyNode::getName() const
{
    return name_;
}

void ProxyNode::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProxyNode::nameIsSet() const
{
    return nameIsSet_;
}

void ProxyNode::unsetname()
{
    nameIsSet_ = false;
}

std::string ProxyNode::getRole() const
{
    return role_;
}

void ProxyNode::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool ProxyNode::roleIsSet() const
{
    return roleIsSet_;
}

void ProxyNode::unsetrole()
{
    roleIsSet_ = false;
}

std::string ProxyNode::getAzCode() const
{
    return azCode_;
}

void ProxyNode::setAzCode(const std::string& value)
{
    azCode_ = value;
    azCodeIsSet_ = true;
}

bool ProxyNode::azCodeIsSet() const
{
    return azCodeIsSet_;
}

void ProxyNode::unsetazCode()
{
    azCodeIsSet_ = false;
}

std::string ProxyNode::getStatus() const
{
    return status_;
}

void ProxyNode::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ProxyNode::statusIsSet() const
{
    return statusIsSet_;
}

void ProxyNode::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ProxyNode::getFrozenFlag() const
{
    return frozenFlag_;
}

void ProxyNode::setFrozenFlag(int32_t value)
{
    frozenFlag_ = value;
    frozenFlagIsSet_ = true;
}

bool ProxyNode::frozenFlagIsSet() const
{
    return frozenFlagIsSet_;
}

void ProxyNode::unsetfrozenFlag()
{
    frozenFlagIsSet_ = false;
}

}
}
}
}
}


