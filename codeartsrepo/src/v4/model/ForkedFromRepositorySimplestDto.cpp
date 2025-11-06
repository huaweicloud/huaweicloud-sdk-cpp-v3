

#include "huaweicloud/codeartsrepo/v4/model/ForkedFromRepositorySimplestDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ForkedFromRepositorySimplestDto::ForkedFromRepositorySimplestDto()
{
    nameWithNamespace_ = "";
    nameWithNamespaceIsSet_ = false;
    pathWithNamespace_ = "";
    pathWithNamespaceIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
}

ForkedFromRepositorySimplestDto::~ForkedFromRepositorySimplestDto() = default;

void ForkedFromRepositorySimplestDto::validate()
{
}

web::json::value ForkedFromRepositorySimplestDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameWithNamespaceIsSet_) {
        val[utility::conversions::to_string_t("name_with_namespace")] = ModelBase::toJson(nameWithNamespace_);
    }
    if(pathWithNamespaceIsSet_) {
        val[utility::conversions::to_string_t("path_with_namespace")] = ModelBase::toJson(pathWithNamespace_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }

    return val;
}
bool ForkedFromRepositorySimplestDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name_with_namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_with_namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameWithNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path_with_namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path_with_namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPathWithNamespace(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    return ok;
}


std::string ForkedFromRepositorySimplestDto::getNameWithNamespace() const
{
    return nameWithNamespace_;
}

void ForkedFromRepositorySimplestDto::setNameWithNamespace(const std::string& value)
{
    nameWithNamespace_ = value;
    nameWithNamespaceIsSet_ = true;
}

bool ForkedFromRepositorySimplestDto::nameWithNamespaceIsSet() const
{
    return nameWithNamespaceIsSet_;
}

void ForkedFromRepositorySimplestDto::unsetnameWithNamespace()
{
    nameWithNamespaceIsSet_ = false;
}

std::string ForkedFromRepositorySimplestDto::getPathWithNamespace() const
{
    return pathWithNamespace_;
}

void ForkedFromRepositorySimplestDto::setPathWithNamespace(const std::string& value)
{
    pathWithNamespace_ = value;
    pathWithNamespaceIsSet_ = true;
}

bool ForkedFromRepositorySimplestDto::pathWithNamespaceIsSet() const
{
    return pathWithNamespaceIsSet_;
}

void ForkedFromRepositorySimplestDto::unsetpathWithNamespace()
{
    pathWithNamespaceIsSet_ = false;
}

std::string ForkedFromRepositorySimplestDto::getName() const
{
    return name_;
}

void ForkedFromRepositorySimplestDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ForkedFromRepositorySimplestDto::nameIsSet() const
{
    return nameIsSet_;
}

void ForkedFromRepositorySimplestDto::unsetname()
{
    nameIsSet_ = false;
}

std::string ForkedFromRepositorySimplestDto::getNamespace() const
{
    return namespace_;
}

void ForkedFromRepositorySimplestDto::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ForkedFromRepositorySimplestDto::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ForkedFromRepositorySimplestDto::unsetnamespace()
{
    namespaceIsSet_ = false;
}

int32_t ForkedFromRepositorySimplestDto::getId() const
{
    return id_;
}

void ForkedFromRepositorySimplestDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ForkedFromRepositorySimplestDto::idIsSet() const
{
    return idIsSet_;
}

void ForkedFromRepositorySimplestDto::unsetid()
{
    idIsSet_ = false;
}

std::string ForkedFromRepositorySimplestDto::getProjectId() const
{
    return projectId_;
}

void ForkedFromRepositorySimplestDto::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ForkedFromRepositorySimplestDto::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ForkedFromRepositorySimplestDto::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ForkedFromRepositorySimplestDto::getProjectName() const
{
    return projectName_;
}

void ForkedFromRepositorySimplestDto::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ForkedFromRepositorySimplestDto::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ForkedFromRepositorySimplestDto::unsetprojectName()
{
    projectNameIsSet_ = false;
}

}
}
}
}
}


