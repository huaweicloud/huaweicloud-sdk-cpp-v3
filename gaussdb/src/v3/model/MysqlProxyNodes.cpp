

#include "huaweicloud/gaussdb/v3/model/MysqlProxyNodes.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlProxyNodes::MysqlProxyNodes()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    role_ = "";
    roleIsSet_ = false;
    azCode_ = "";
    azCodeIsSet_ = false;
    frozenFlag_ = 0;
    frozenFlagIsSet_ = false;
}

MysqlProxyNodes::~MysqlProxyNodes() = default;

void MysqlProxyNodes::validate()
{
}

web::json::value MysqlProxyNodes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
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
    if(frozenFlagIsSet_) {
        val[utility::conversions::to_string_t("frozen_flag")] = ModelBase::toJson(frozenFlag_);
    }

    return val;
}

bool MysqlProxyNodes::fromJson(const web::json::value& val)
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

std::string MysqlProxyNodes::getId() const
{
    return id_;
}

void MysqlProxyNodes::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MysqlProxyNodes::idIsSet() const
{
    return idIsSet_;
}

void MysqlProxyNodes::unsetid()
{
    idIsSet_ = false;
}

std::string MysqlProxyNodes::getStatus() const
{
    return status_;
}

void MysqlProxyNodes::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool MysqlProxyNodes::statusIsSet() const
{
    return statusIsSet_;
}

void MysqlProxyNodes::unsetstatus()
{
    statusIsSet_ = false;
}

std::string MysqlProxyNodes::getName() const
{
    return name_;
}

void MysqlProxyNodes::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MysqlProxyNodes::nameIsSet() const
{
    return nameIsSet_;
}

void MysqlProxyNodes::unsetname()
{
    nameIsSet_ = false;
}

std::string MysqlProxyNodes::getRole() const
{
    return role_;
}

void MysqlProxyNodes::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool MysqlProxyNodes::roleIsSet() const
{
    return roleIsSet_;
}

void MysqlProxyNodes::unsetrole()
{
    roleIsSet_ = false;
}

std::string MysqlProxyNodes::getAzCode() const
{
    return azCode_;
}

void MysqlProxyNodes::setAzCode(const std::string& value)
{
    azCode_ = value;
    azCodeIsSet_ = true;
}

bool MysqlProxyNodes::azCodeIsSet() const
{
    return azCodeIsSet_;
}

void MysqlProxyNodes::unsetazCode()
{
    azCodeIsSet_ = false;
}

int32_t MysqlProxyNodes::getFrozenFlag() const
{
    return frozenFlag_;
}

void MysqlProxyNodes::setFrozenFlag(int32_t value)
{
    frozenFlag_ = value;
    frozenFlagIsSet_ = true;
}

bool MysqlProxyNodes::frozenFlagIsSet() const
{
    return frozenFlagIsSet_;
}

void MysqlProxyNodes::unsetfrozenFlag()
{
    frozenFlagIsSet_ = false;
}

}
}
}
}
}


