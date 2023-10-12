

#include "huaweicloud/rds/v3/model/NodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




NodeResponse::NodeResponse()
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
}

NodeResponse::~NodeResponse() = default;

void NodeResponse::validate()
{
}

web::json::value NodeResponse::toJson() const
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

    return val;
}
bool NodeResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string NodeResponse::getId() const
{
    return id_;
}

void NodeResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NodeResponse::idIsSet() const
{
    return idIsSet_;
}

void NodeResponse::unsetid()
{
    idIsSet_ = false;
}

std::string NodeResponse::getName() const
{
    return name_;
}

void NodeResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NodeResponse::nameIsSet() const
{
    return nameIsSet_;
}

void NodeResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string NodeResponse::getRole() const
{
    return role_;
}

void NodeResponse::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool NodeResponse::roleIsSet() const
{
    return roleIsSet_;
}

void NodeResponse::unsetrole()
{
    roleIsSet_ = false;
}

std::string NodeResponse::getStatus() const
{
    return status_;
}

void NodeResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NodeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void NodeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string NodeResponse::getAvailabilityZone() const
{
    return availabilityZone_;
}

void NodeResponse::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool NodeResponse::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void NodeResponse::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

}
}
}
}
}


