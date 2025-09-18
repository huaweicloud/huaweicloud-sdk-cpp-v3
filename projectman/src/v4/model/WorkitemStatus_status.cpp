

#include "huaweicloud/projectman/v4/model/WorkitemStatus_status.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkitemStatus_status::WorkitemStatus_status()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    parentStatusId_ = "";
    parentStatusIdIsSet_ = false;
}

WorkitemStatus_status::~WorkitemStatus_status() = default;

void WorkitemStatus_status::validate()
{
}

web::json::value WorkitemStatus_status::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(parentStatusIdIsSet_) {
        val[utility::conversions::to_string_t("parent_status_id")] = ModelBase::toJson(parentStatusId_);
    }

    return val;
}
bool WorkitemStatus_status::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parent_status_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_status_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentStatusId(refVal);
        }
    }
    return ok;
}


std::string WorkitemStatus_status::getId() const
{
    return id_;
}

void WorkitemStatus_status::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WorkitemStatus_status::idIsSet() const
{
    return idIsSet_;
}

void WorkitemStatus_status::unsetid()
{
    idIsSet_ = false;
}

std::string WorkitemStatus_status::getName() const
{
    return name_;
}

void WorkitemStatus_status::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WorkitemStatus_status::nameIsSet() const
{
    return nameIsSet_;
}

void WorkitemStatus_status::unsetname()
{
    nameIsSet_ = false;
}

std::string WorkitemStatus_status::getType() const
{
    return type_;
}

void WorkitemStatus_status::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool WorkitemStatus_status::typeIsSet() const
{
    return typeIsSet_;
}

void WorkitemStatus_status::unsettype()
{
    typeIsSet_ = false;
}

std::string WorkitemStatus_status::getDescription() const
{
    return description_;
}

void WorkitemStatus_status::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool WorkitemStatus_status::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void WorkitemStatus_status::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string WorkitemStatus_status::getParentStatusId() const
{
    return parentStatusId_;
}

void WorkitemStatus_status::setParentStatusId(const std::string& value)
{
    parentStatusId_ = value;
    parentStatusIdIsSet_ = true;
}

bool WorkitemStatus_status::parentStatusIdIsSet() const
{
    return parentStatusIdIsSet_;
}

void WorkitemStatus_status::unsetparentStatusId()
{
    parentStatusIdIsSet_ = false;
}

}
}
}
}
}


