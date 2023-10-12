

#include "huaweicloud/drs/v5/model/EnterpriseProject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




EnterpriseProject::EnterpriseProject()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
}

EnterpriseProject::~EnterpriseProject() = default;

void EnterpriseProject::validate()
{
}

web::json::value EnterpriseProject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool EnterpriseProject::fromJson(const web::json::value& val)
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
    return ok;
}


std::string EnterpriseProject::getId() const
{
    return id_;
}

void EnterpriseProject::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool EnterpriseProject::idIsSet() const
{
    return idIsSet_;
}

void EnterpriseProject::unsetid()
{
    idIsSet_ = false;
}

std::string EnterpriseProject::getName() const
{
    return name_;
}

void EnterpriseProject::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool EnterpriseProject::nameIsSet() const
{
    return nameIsSet_;
}

void EnterpriseProject::unsetname()
{
    nameIsSet_ = false;
}

std::string EnterpriseProject::getDescription() const
{
    return description_;
}

void EnterpriseProject::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool EnterpriseProject::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void EnterpriseProject::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string EnterpriseProject::getStatus() const
{
    return status_;
}

void EnterpriseProject::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool EnterpriseProject::statusIsSet() const
{
    return statusIsSet_;
}

void EnterpriseProject::unsetstatus()
{
    statusIsSet_ = false;
}

std::string EnterpriseProject::getCreatedAt() const
{
    return createdAt_;
}

void EnterpriseProject::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool EnterpriseProject::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void EnterpriseProject::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string EnterpriseProject::getUpdatedAt() const
{
    return updatedAt_;
}

void EnterpriseProject::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool EnterpriseProject::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void EnterpriseProject::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


