

#include "huaweicloud/codeartsartifact/v2/model/CreateNotMavenRepoDO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




CreateNotMavenRepoDO::CreateNotMavenRepoDO()
{
    format_ = "";
    formatIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    repositoryName_ = "";
    repositoryNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    includesPattern_ = "";
    includesPatternIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    shareRight_ = "";
    shareRightIsSet_ = false;
}

CreateNotMavenRepoDO::~CreateNotMavenRepoDO() = default;

void CreateNotMavenRepoDO::validate()
{
}

web::json::value CreateNotMavenRepoDO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(repositoryNameIsSet_) {
        val[utility::conversions::to_string_t("repository_name")] = ModelBase::toJson(repositoryName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(includesPatternIsSet_) {
        val[utility::conversions::to_string_t("includes_pattern")] = ModelBase::toJson(includesPattern_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(shareRightIsSet_) {
        val[utility::conversions::to_string_t("share_right")] = ModelBase::toJson(shareRight_);
    }

    return val;
}
bool CreateNotMavenRepoDO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("repository_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("includes_pattern"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("includes_pattern"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludesPattern(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("share_right"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("share_right"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShareRight(refVal);
        }
    }
    return ok;
}


std::string CreateNotMavenRepoDO::getFormat() const
{
    return format_;
}

void CreateNotMavenRepoDO::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool CreateNotMavenRepoDO::formatIsSet() const
{
    return formatIsSet_;
}

void CreateNotMavenRepoDO::unsetformat()
{
    formatIsSet_ = false;
}

std::string CreateNotMavenRepoDO::getType() const
{
    return type_;
}

void CreateNotMavenRepoDO::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateNotMavenRepoDO::typeIsSet() const
{
    return typeIsSet_;
}

void CreateNotMavenRepoDO::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateNotMavenRepoDO::getRepositoryName() const
{
    return repositoryName_;
}

void CreateNotMavenRepoDO::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool CreateNotMavenRepoDO::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void CreateNotMavenRepoDO::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

std::string CreateNotMavenRepoDO::getDescription() const
{
    return description_;
}

void CreateNotMavenRepoDO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateNotMavenRepoDO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateNotMavenRepoDO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateNotMavenRepoDO::getIncludesPattern() const
{
    return includesPattern_;
}

void CreateNotMavenRepoDO::setIncludesPattern(const std::string& value)
{
    includesPattern_ = value;
    includesPatternIsSet_ = true;
}

bool CreateNotMavenRepoDO::includesPatternIsSet() const
{
    return includesPatternIsSet_;
}

void CreateNotMavenRepoDO::unsetincludesPattern()
{
    includesPatternIsSet_ = false;
}

std::string CreateNotMavenRepoDO::getProjectId() const
{
    return projectId_;
}

void CreateNotMavenRepoDO::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateNotMavenRepoDO::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateNotMavenRepoDO::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CreateNotMavenRepoDO::getShareRight() const
{
    return shareRight_;
}

void CreateNotMavenRepoDO::setShareRight(const std::string& value)
{
    shareRight_ = value;
    shareRightIsSet_ = true;
}

bool CreateNotMavenRepoDO::shareRightIsSet() const
{
    return shareRightIsSet_;
}

void CreateNotMavenRepoDO::unsetshareRight()
{
    shareRightIsSet_ = false;
}

}
}
}
}
}


