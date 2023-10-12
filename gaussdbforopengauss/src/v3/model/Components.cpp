

#include "huaweicloud/gaussdbforopengauss/v3/model/Components.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




Components::Components()
{
    id_ = "";
    idIsSet_ = false;
    role_ = "";
    roleIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    distributedId_ = "";
    distributedIdIsSet_ = false;
}

Components::~Components() = default;

void Components::validate()
{
}

web::json::value Components::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(distributedIdIsSet_) {
        val[utility::conversions::to_string_t("distributed_id")] = ModelBase::toJson(distributedId_);
    }

    return val;
}
bool Components::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("distributed_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("distributed_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDistributedId(refVal);
        }
    }
    return ok;
}


std::string Components::getId() const
{
    return id_;
}

void Components::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Components::idIsSet() const
{
    return idIsSet_;
}

void Components::unsetid()
{
    idIsSet_ = false;
}

std::string Components::getRole() const
{
    return role_;
}

void Components::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool Components::roleIsSet() const
{
    return roleIsSet_;
}

void Components::unsetrole()
{
    roleIsSet_ = false;
}

std::string Components::getStatus() const
{
    return status_;
}

void Components::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Components::statusIsSet() const
{
    return statusIsSet_;
}

void Components::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Components::getDistributedId() const
{
    return distributedId_;
}

void Components::setDistributedId(const std::string& value)
{
    distributedId_ = value;
    distributedIdIsSet_ = true;
}

bool Components::distributedIdIsSet() const
{
    return distributedIdIsSet_;
}

void Components::unsetdistributedId()
{
    distributedIdIsSet_ = false;
}

}
}
}
}
}


