

#include "huaweicloud/gaussdb/v3/model/EnterpriseProjectItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




EnterpriseProjectItem::EnterpriseProjectItem()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
}

EnterpriseProjectItem::~EnterpriseProjectItem() = default;

void EnterpriseProjectItem::validate()
{
}

web::json::value EnterpriseProjectItem::toJson() const
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
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }

    return val;
}
bool EnterpriseProjectItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdated(refVal);
        }
    }
    return ok;
}


std::string EnterpriseProjectItem::getId() const
{
    return id_;
}

void EnterpriseProjectItem::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool EnterpriseProjectItem::idIsSet() const
{
    return idIsSet_;
}

void EnterpriseProjectItem::unsetid()
{
    idIsSet_ = false;
}

std::string EnterpriseProjectItem::getName() const
{
    return name_;
}

void EnterpriseProjectItem::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool EnterpriseProjectItem::nameIsSet() const
{
    return nameIsSet_;
}

void EnterpriseProjectItem::unsetname()
{
    nameIsSet_ = false;
}

std::string EnterpriseProjectItem::getDescription() const
{
    return description_;
}

void EnterpriseProjectItem::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool EnterpriseProjectItem::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void EnterpriseProjectItem::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string EnterpriseProjectItem::getStatus() const
{
    return status_;
}

void EnterpriseProjectItem::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool EnterpriseProjectItem::statusIsSet() const
{
    return statusIsSet_;
}

void EnterpriseProjectItem::unsetstatus()
{
    statusIsSet_ = false;
}

std::string EnterpriseProjectItem::getCreated() const
{
    return created_;
}

void EnterpriseProjectItem::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool EnterpriseProjectItem::createdIsSet() const
{
    return createdIsSet_;
}

void EnterpriseProjectItem::unsetcreated()
{
    createdIsSet_ = false;
}

std::string EnterpriseProjectItem::getUpdated() const
{
    return updated_;
}

void EnterpriseProjectItem::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool EnterpriseProjectItem::updatedIsSet() const
{
    return updatedIsSet_;
}

void EnterpriseProjectItem::unsetupdated()
{
    updatedIsSet_ = false;
}

}
}
}
}
}


