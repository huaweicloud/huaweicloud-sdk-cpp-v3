

#include "huaweicloud/gaussdbforopengauss/v3/model/Nodes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




Nodes::Nodes()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    availabilityZoneId_ = "";
    availabilityZoneIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    componentsIsSet_ = false;
}

Nodes::~Nodes() = default;

void Nodes::validate()
{
}

web::json::value Nodes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(availabilityZoneIdIsSet_) {
        val[utility::conversions::to_string_t("availability_zone_id")] = ModelBase::toJson(availabilityZoneId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(componentsIsSet_) {
        val[utility::conversions::to_string_t("components")] = ModelBase::toJson(components_);
    }

    return val;
}
bool Nodes::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("availability_zone_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZoneId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("components"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("components"));
        if(!fieldValue.is_null())
        {
            std::vector<Components> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponents(refVal);
        }
    }
    return ok;
}


std::string Nodes::getId() const
{
    return id_;
}

void Nodes::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Nodes::idIsSet() const
{
    return idIsSet_;
}

void Nodes::unsetid()
{
    idIsSet_ = false;
}

std::string Nodes::getName() const
{
    return name_;
}

void Nodes::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Nodes::nameIsSet() const
{
    return nameIsSet_;
}

void Nodes::unsetname()
{
    nameIsSet_ = false;
}

std::string Nodes::getAvailabilityZoneId() const
{
    return availabilityZoneId_;
}

void Nodes::setAvailabilityZoneId(const std::string& value)
{
    availabilityZoneId_ = value;
    availabilityZoneIdIsSet_ = true;
}

bool Nodes::availabilityZoneIdIsSet() const
{
    return availabilityZoneIdIsSet_;
}

void Nodes::unsetavailabilityZoneId()
{
    availabilityZoneIdIsSet_ = false;
}

std::string Nodes::getDescription() const
{
    return description_;
}

void Nodes::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Nodes::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Nodes::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string Nodes::getStatus() const
{
    return status_;
}

void Nodes::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Nodes::statusIsSet() const
{
    return statusIsSet_;
}

void Nodes::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<Components>& Nodes::getComponents()
{
    return components_;
}

void Nodes::setComponents(const std::vector<Components>& value)
{
    components_ = value;
    componentsIsSet_ = true;
}

bool Nodes::componentsIsSet() const
{
    return componentsIsSet_;
}

void Nodes::unsetcomponents()
{
    componentsIsSet_ = false;
}

}
}
}
}
}


