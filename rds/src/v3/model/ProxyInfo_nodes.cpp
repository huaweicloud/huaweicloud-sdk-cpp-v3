

#include "huaweicloud/rds/v3/model/ProxyInfo_nodes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ProxyInfo_nodes::ProxyInfo_nodes()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    role_ = "";
    roleIsSet_ = false;
    azCode_ = "";
    azCodeIsSet_ = false;
    frozenFlag_ = 0;
    frozenFlagIsSet_ = false;
}

ProxyInfo_nodes::~ProxyInfo_nodes() = default;

void ProxyInfo_nodes::validate()
{
}

web::json::value ProxyInfo_nodes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }
    if(azCodeIsSet_) {
        val[utility::conversions::to_string_t("az_code")] = ModelBase::toJson(azCode_);
    }
    if(frozenFlagIsSet_) {
        val[utility::conversions::to_string_t("frozen_flag")] = ModelBase::toJson(frozenFlag_);
    }

    return val;
}
bool ProxyInfo_nodes::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("az_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzCode(refVal);
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


std::string ProxyInfo_nodes::getId() const
{
    return id_;
}

void ProxyInfo_nodes::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProxyInfo_nodes::idIsSet() const
{
    return idIsSet_;
}

void ProxyInfo_nodes::unsetid()
{
    idIsSet_ = false;
}

std::string ProxyInfo_nodes::getStatus() const
{
    return status_;
}

void ProxyInfo_nodes::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ProxyInfo_nodes::statusIsSet() const
{
    return statusIsSet_;
}

void ProxyInfo_nodes::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ProxyInfo_nodes::getRole() const
{
    return role_;
}

void ProxyInfo_nodes::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool ProxyInfo_nodes::roleIsSet() const
{
    return roleIsSet_;
}

void ProxyInfo_nodes::unsetrole()
{
    roleIsSet_ = false;
}

std::string ProxyInfo_nodes::getAzCode() const
{
    return azCode_;
}

void ProxyInfo_nodes::setAzCode(const std::string& value)
{
    azCode_ = value;
    azCodeIsSet_ = true;
}

bool ProxyInfo_nodes::azCodeIsSet() const
{
    return azCodeIsSet_;
}

void ProxyInfo_nodes::unsetazCode()
{
    azCodeIsSet_ = false;
}

int32_t ProxyInfo_nodes::getFrozenFlag() const
{
    return frozenFlag_;
}

void ProxyInfo_nodes::setFrozenFlag(int32_t value)
{
    frozenFlag_ = value;
    frozenFlagIsSet_ = true;
}

bool ProxyInfo_nodes::frozenFlagIsSet() const
{
    return frozenFlagIsSet_;
}

void ProxyInfo_nodes::unsetfrozenFlag()
{
    frozenFlagIsSet_ = false;
}

}
}
}
}
}


