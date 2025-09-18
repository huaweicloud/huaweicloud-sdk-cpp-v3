

#include "huaweicloud/codeartsartifact/v2/model/IDERepositoryPair.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




IDERepositoryPair::IDERepositoryPair()
{
    repoName_ = "";
    repoNameIsSet_ = false;
    includesPattern_ = "";
    includesPatternIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    snapshot_ = "";
    snapshotIsSet_ = false;
    release_ = "";
    releaseIsSet_ = false;
}

IDERepositoryPair::~IDERepositoryPair() = default;

void IDERepositoryPair::validate()
{
}

web::json::value IDERepositoryPair::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repoNameIsSet_) {
        val[utility::conversions::to_string_t("repo_name")] = ModelBase::toJson(repoName_);
    }
    if(includesPatternIsSet_) {
        val[utility::conversions::to_string_t("includes_pattern")] = ModelBase::toJson(includesPattern_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(snapshotIsSet_) {
        val[utility::conversions::to_string_t("snapshot")] = ModelBase::toJson(snapshot_);
    }
    if(releaseIsSet_) {
        val[utility::conversions::to_string_t("release")] = ModelBase::toJson(release_);
    }

    return val;
}
bool IDERepositoryPair::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repo_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("release"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelease(refVal);
        }
    }
    return ok;
}


std::string IDERepositoryPair::getRepoName() const
{
    return repoName_;
}

void IDERepositoryPair::setRepoName(const std::string& value)
{
    repoName_ = value;
    repoNameIsSet_ = true;
}

bool IDERepositoryPair::repoNameIsSet() const
{
    return repoNameIsSet_;
}

void IDERepositoryPair::unsetrepoName()
{
    repoNameIsSet_ = false;
}

std::string IDERepositoryPair::getIncludesPattern() const
{
    return includesPattern_;
}

void IDERepositoryPair::setIncludesPattern(const std::string& value)
{
    includesPattern_ = value;
    includesPatternIsSet_ = true;
}

bool IDERepositoryPair::includesPatternIsSet() const
{
    return includesPatternIsSet_;
}

void IDERepositoryPair::unsetincludesPattern()
{
    includesPatternIsSet_ = false;
}

std::string IDERepositoryPair::getProjectId() const
{
    return projectId_;
}

void IDERepositoryPair::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool IDERepositoryPair::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void IDERepositoryPair::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string IDERepositoryPair::getDescription() const
{
    return description_;
}

void IDERepositoryPair::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool IDERepositoryPair::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void IDERepositoryPair::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string IDERepositoryPair::getSnapshot() const
{
    return snapshot_;
}

void IDERepositoryPair::setSnapshot(const std::string& value)
{
    snapshot_ = value;
    snapshotIsSet_ = true;
}

bool IDERepositoryPair::snapshotIsSet() const
{
    return snapshotIsSet_;
}

void IDERepositoryPair::unsetsnapshot()
{
    snapshotIsSet_ = false;
}

std::string IDERepositoryPair::getRelease() const
{
    return release_;
}

void IDERepositoryPair::setRelease(const std::string& value)
{
    release_ = value;
    releaseIsSet_ = true;
}

bool IDERepositoryPair::releaseIsSet() const
{
    return releaseIsSet_;
}

void IDERepositoryPair::unsetrelease()
{
    releaseIsSet_ = false;
}

}
}
}
}
}


