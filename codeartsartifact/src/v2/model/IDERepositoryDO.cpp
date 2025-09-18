

#include "huaweicloud/codeartsartifact/v2/model/IDERepositoryDO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




IDERepositoryDO::IDERepositoryDO()
{
    repositoryName_ = "";
    repositoryNameIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    release_ = "";
    releaseIsSet_ = false;
    snapshot_ = "";
    snapshotIsSet_ = false;
    includesPattern_ = "";
    includesPatternIsSet_ = false;
    shareRight_ = "";
    shareRightIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

IDERepositoryDO::~IDERepositoryDO() = default;

void IDERepositoryDO::validate()
{
}

web::json::value IDERepositoryDO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryNameIsSet_) {
        val[utility::conversions::to_string_t("repository_name")] = ModelBase::toJson(repositoryName_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(releaseIsSet_) {
        val[utility::conversions::to_string_t("release")] = ModelBase::toJson(release_);
    }
    if(snapshotIsSet_) {
        val[utility::conversions::to_string_t("snapshot")] = ModelBase::toJson(snapshot_);
    }
    if(includesPatternIsSet_) {
        val[utility::conversions::to_string_t("includes_pattern")] = ModelBase::toJson(includesPattern_);
    }
    if(shareRightIsSet_) {
        val[utility::conversions::to_string_t("share_right")] = ModelBase::toJson(shareRight_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool IDERepositoryDO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("release"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelease(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshot(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("share_right"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("share_right"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShareRight(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string IDERepositoryDO::getRepositoryName() const
{
    return repositoryName_;
}

void IDERepositoryDO::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool IDERepositoryDO::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void IDERepositoryDO::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

std::string IDERepositoryDO::getFormat() const
{
    return format_;
}

void IDERepositoryDO::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool IDERepositoryDO::formatIsSet() const
{
    return formatIsSet_;
}

void IDERepositoryDO::unsetformat()
{
    formatIsSet_ = false;
}

std::string IDERepositoryDO::getDescription() const
{
    return description_;
}

void IDERepositoryDO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool IDERepositoryDO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void IDERepositoryDO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string IDERepositoryDO::getRelease() const
{
    return release_;
}

void IDERepositoryDO::setRelease(const std::string& value)
{
    release_ = value;
    releaseIsSet_ = true;
}

bool IDERepositoryDO::releaseIsSet() const
{
    return releaseIsSet_;
}

void IDERepositoryDO::unsetrelease()
{
    releaseIsSet_ = false;
}

std::string IDERepositoryDO::getSnapshot() const
{
    return snapshot_;
}

void IDERepositoryDO::setSnapshot(const std::string& value)
{
    snapshot_ = value;
    snapshotIsSet_ = true;
}

bool IDERepositoryDO::snapshotIsSet() const
{
    return snapshotIsSet_;
}

void IDERepositoryDO::unsetsnapshot()
{
    snapshotIsSet_ = false;
}

std::string IDERepositoryDO::getIncludesPattern() const
{
    return includesPattern_;
}

void IDERepositoryDO::setIncludesPattern(const std::string& value)
{
    includesPattern_ = value;
    includesPatternIsSet_ = true;
}

bool IDERepositoryDO::includesPatternIsSet() const
{
    return includesPatternIsSet_;
}

void IDERepositoryDO::unsetincludesPattern()
{
    includesPatternIsSet_ = false;
}

std::string IDERepositoryDO::getShareRight() const
{
    return shareRight_;
}

void IDERepositoryDO::setShareRight(const std::string& value)
{
    shareRight_ = value;
    shareRightIsSet_ = true;
}

bool IDERepositoryDO::shareRightIsSet() const
{
    return shareRightIsSet_;
}

void IDERepositoryDO::unsetshareRight()
{
    shareRightIsSet_ = false;
}

std::string IDERepositoryDO::getProjectId() const
{
    return projectId_;
}

void IDERepositoryDO::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool IDERepositoryDO::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void IDERepositoryDO::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string IDERepositoryDO::getType() const
{
    return type_;
}

void IDERepositoryDO::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool IDERepositoryDO::typeIsSet() const
{
    return typeIsSet_;
}

void IDERepositoryDO::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


