

#include "huaweicloud/codeartsrepo/v4/model/RepositoryBriefDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RepositoryBriefDto::RepositoryBriefDto()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    pathWithNamespace_ = "";
    pathWithNamespaceIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
}

RepositoryBriefDto::~RepositoryBriefDto() = default;

void RepositoryBriefDto::validate()
{
}

web::json::value RepositoryBriefDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(pathWithNamespaceIsSet_) {
        val[utility::conversions::to_string_t("path_with_namespace")] = ModelBase::toJson(pathWithNamespace_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }

    return val;
}
bool RepositoryBriefDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
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


int32_t RepositoryBriefDto::getId() const
{
    return id_;
}

void RepositoryBriefDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RepositoryBriefDto::idIsSet() const
{
    return idIsSet_;
}

void RepositoryBriefDto::unsetid()
{
    idIsSet_ = false;
}

std::string RepositoryBriefDto::getName() const
{
    return name_;
}

void RepositoryBriefDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RepositoryBriefDto::nameIsSet() const
{
    return nameIsSet_;
}

void RepositoryBriefDto::unsetname()
{
    nameIsSet_ = false;
}

std::string RepositoryBriefDto::getPath() const
{
    return path_;
}

void RepositoryBriefDto::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool RepositoryBriefDto::pathIsSet() const
{
    return pathIsSet_;
}

void RepositoryBriefDto::unsetpath()
{
    pathIsSet_ = false;
}

std::string RepositoryBriefDto::getPathWithNamespace() const
{
    return pathWithNamespace_;
}

void RepositoryBriefDto::setPathWithNamespace(const std::string& value)
{
    pathWithNamespace_ = value;
    pathWithNamespaceIsSet_ = true;
}

bool RepositoryBriefDto::pathWithNamespaceIsSet() const
{
    return pathWithNamespaceIsSet_;
}

void RepositoryBriefDto::unsetpathWithNamespace()
{
    pathWithNamespaceIsSet_ = false;
}

std::string RepositoryBriefDto::getProjectName() const
{
    return projectName_;
}

void RepositoryBriefDto::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool RepositoryBriefDto::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void RepositoryBriefDto::unsetprojectName()
{
    projectNameIsSet_ = false;
}

}
}
}
}
}


