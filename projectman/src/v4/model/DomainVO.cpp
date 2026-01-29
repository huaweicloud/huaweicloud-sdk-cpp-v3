

#include "huaweicloud/projectman/v4/model/DomainVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DomainVO::DomainVO()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    modelId_ = "";
    modelIdIsSet_ = false;
}

DomainVO::~DomainVO() = default;

void DomainVO::validate()
{
}

web::json::value DomainVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(modelIdIsSet_) {
        val[utility::conversions::to_string_t("model_id")] = ModelBase::toJson(modelId_);
    }

    return val;
}
bool DomainVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelId(refVal);
        }
    }
    return ok;
}


std::string DomainVO::getId() const
{
    return id_;
}

void DomainVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DomainVO::idIsSet() const
{
    return idIsSet_;
}

void DomainVO::unsetid()
{
    idIsSet_ = false;
}

std::string DomainVO::getName() const
{
    return name_;
}

void DomainVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DomainVO::nameIsSet() const
{
    return nameIsSet_;
}

void DomainVO::unsetname()
{
    nameIsSet_ = false;
}

std::string DomainVO::getTitle() const
{
    return title_;
}

void DomainVO::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool DomainVO::titleIsSet() const
{
    return titleIsSet_;
}

void DomainVO::unsettitle()
{
    titleIsSet_ = false;
}

std::string DomainVO::getProjectId() const
{
    return projectId_;
}

void DomainVO::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DomainVO::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DomainVO::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DomainVO::getParentId() const
{
    return parentId_;
}

void DomainVO::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool DomainVO::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void DomainVO::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string DomainVO::getCategory() const
{
    return category_;
}

void DomainVO::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool DomainVO::categoryIsSet() const
{
    return categoryIsSet_;
}

void DomainVO::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string DomainVO::getCreatedBy() const
{
    return createdBy_;
}

void DomainVO::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool DomainVO::createdByIsSet() const
{
    return createdByIsSet_;
}

void DomainVO::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string DomainVO::getModelId() const
{
    return modelId_;
}

void DomainVO::setModelId(const std::string& value)
{
    modelId_ = value;
    modelIdIsSet_ = true;
}

bool DomainVO::modelIdIsSet() const
{
    return modelIdIsSet_;
}

void DomainVO::unsetmodelId()
{
    modelIdIsSet_ = false;
}

}
}
}
}
}


