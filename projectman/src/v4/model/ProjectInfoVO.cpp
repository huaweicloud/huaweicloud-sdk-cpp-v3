

#include "huaweicloud/projectman/v4/model/ProjectInfoVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ProjectInfoVO::ProjectInfoVO()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    projectType_ = "";
    projectTypeIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    modelId_ = "";
    modelIdIsSet_ = false;
    acceptRr_ = 0;
    acceptRrIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    createdByName_ = "";
    createdByNameIsSet_ = false;
}

ProjectInfoVO::~ProjectInfoVO() = default;

void ProjectInfoVO::validate()
{
}

web::json::value ProjectInfoVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(projectTypeIsSet_) {
        val[utility::conversions::to_string_t("project_type")] = ModelBase::toJson(projectType_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(modelIdIsSet_) {
        val[utility::conversions::to_string_t("model_id")] = ModelBase::toJson(modelId_);
    }
    if(acceptRrIsSet_) {
        val[utility::conversions::to_string_t("accept_rr")] = ModelBase::toJson(acceptRr_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(createdByNameIsSet_) {
        val[utility::conversions::to_string_t("created_by_name")] = ModelBase::toJson(createdByName_);
    }

    return val;
}
bool ProjectInfoVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("accept_rr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accept_rr"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptRr(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_by_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedByName(refVal);
        }
    }
    return ok;
}


std::string ProjectInfoVO::getId() const
{
    return id_;
}

void ProjectInfoVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProjectInfoVO::idIsSet() const
{
    return idIsSet_;
}

void ProjectInfoVO::unsetid()
{
    idIsSet_ = false;
}

std::string ProjectInfoVO::getName() const
{
    return name_;
}

void ProjectInfoVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProjectInfoVO::nameIsSet() const
{
    return nameIsSet_;
}

void ProjectInfoVO::unsetname()
{
    nameIsSet_ = false;
}

std::string ProjectInfoVO::getProjectType() const
{
    return projectType_;
}

void ProjectInfoVO::setProjectType(const std::string& value)
{
    projectType_ = value;
    projectTypeIsSet_ = true;
}

bool ProjectInfoVO::projectTypeIsSet() const
{
    return projectTypeIsSet_;
}

void ProjectInfoVO::unsetprojectType()
{
    projectTypeIsSet_ = false;
}

std::string ProjectInfoVO::getDomainId() const
{
    return domainId_;
}

void ProjectInfoVO::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ProjectInfoVO::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ProjectInfoVO::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ProjectInfoVO::getModelId() const
{
    return modelId_;
}

void ProjectInfoVO::setModelId(const std::string& value)
{
    modelId_ = value;
    modelIdIsSet_ = true;
}

bool ProjectInfoVO::modelIdIsSet() const
{
    return modelIdIsSet_;
}

void ProjectInfoVO::unsetmodelId()
{
    modelIdIsSet_ = false;
}

int32_t ProjectInfoVO::getAcceptRr() const
{
    return acceptRr_;
}

void ProjectInfoVO::setAcceptRr(int32_t value)
{
    acceptRr_ = value;
    acceptRrIsSet_ = true;
}

bool ProjectInfoVO::acceptRrIsSet() const
{
    return acceptRrIsSet_;
}

void ProjectInfoVO::unsetacceptRr()
{
    acceptRrIsSet_ = false;
}

std::string ProjectInfoVO::getCategory() const
{
    return category_;
}

void ProjectInfoVO::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ProjectInfoVO::categoryIsSet() const
{
    return categoryIsSet_;
}

void ProjectInfoVO::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string ProjectInfoVO::getCreatedByName() const
{
    return createdByName_;
}

void ProjectInfoVO::setCreatedByName(const std::string& value)
{
    createdByName_ = value;
    createdByNameIsSet_ = true;
}

bool ProjectInfoVO::createdByNameIsSet() const
{
    return createdByNameIsSet_;
}

void ProjectInfoVO::unsetcreatedByName()
{
    createdByNameIsSet_ = false;
}

}
}
}
}
}


