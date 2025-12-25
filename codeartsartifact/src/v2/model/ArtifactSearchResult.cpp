

#include "huaweicloud/codeartsartifact/v2/model/ArtifactSearchResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ArtifactSearchResult::ArtifactSearchResult()
{
    name_ = "";
    nameIsSet_ = false;
    relativePath_ = "";
    relativePathIsSet_ = false;
    repo_ = "";
    repoIsSet_ = false;
    repoName_ = "";
    repoNameIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    repoType_ = "";
    repoTypeIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    createdUserName_ = "";
    createdUserNameIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    modified_ = "";
    modifiedIsSet_ = false;
    oldRepoId_ = "";
    oldRepoIdIsSet_ = false;
}

ArtifactSearchResult::~ArtifactSearchResult() = default;

void ArtifactSearchResult::validate()
{
}

web::json::value ArtifactSearchResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(relativePathIsSet_) {
        val[utility::conversions::to_string_t("relativePath")] = ModelBase::toJson(relativePath_);
    }
    if(repoIsSet_) {
        val[utility::conversions::to_string_t("repo")] = ModelBase::toJson(repo_);
    }
    if(repoNameIsSet_) {
        val[utility::conversions::to_string_t("repoName")] = ModelBase::toJson(repoName_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("displayName")] = ModelBase::toJson(displayName_);
    }
    if(repoTypeIsSet_) {
        val[utility::conversions::to_string_t("repoType")] = ModelBase::toJson(repoType_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("createdBy")] = ModelBase::toJson(createdBy_);
    }
    if(createdUserNameIsSet_) {
        val[utility::conversions::to_string_t("createdUserName")] = ModelBase::toJson(createdUserName_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(modifiedIsSet_) {
        val[utility::conversions::to_string_t("modified")] = ModelBase::toJson(modified_);
    }
    if(oldRepoIdIsSet_) {
        val[utility::conversions::to_string_t("oldRepoId")] = ModelBase::toJson(oldRepoId_);
    }

    return val;
}
bool ArtifactSearchResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relativePath"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relativePath"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelativePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repoName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repoName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("displayName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("displayName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repoType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repoType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createdBy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createdBy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createdUserName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createdUserName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedUserName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModified(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("oldRepoId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("oldRepoId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldRepoId(refVal);
        }
    }
    return ok;
}


std::string ArtifactSearchResult::getName() const
{
    return name_;
}

void ArtifactSearchResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ArtifactSearchResult::nameIsSet() const
{
    return nameIsSet_;
}

void ArtifactSearchResult::unsetname()
{
    nameIsSet_ = false;
}

std::string ArtifactSearchResult::getRelativePath() const
{
    return relativePath_;
}

void ArtifactSearchResult::setRelativePath(const std::string& value)
{
    relativePath_ = value;
    relativePathIsSet_ = true;
}

bool ArtifactSearchResult::relativePathIsSet() const
{
    return relativePathIsSet_;
}

void ArtifactSearchResult::unsetrelativePath()
{
    relativePathIsSet_ = false;
}

std::string ArtifactSearchResult::getRepo() const
{
    return repo_;
}

void ArtifactSearchResult::setRepo(const std::string& value)
{
    repo_ = value;
    repoIsSet_ = true;
}

bool ArtifactSearchResult::repoIsSet() const
{
    return repoIsSet_;
}

void ArtifactSearchResult::unsetrepo()
{
    repoIsSet_ = false;
}

std::string ArtifactSearchResult::getRepoName() const
{
    return repoName_;
}

void ArtifactSearchResult::setRepoName(const std::string& value)
{
    repoName_ = value;
    repoNameIsSet_ = true;
}

bool ArtifactSearchResult::repoNameIsSet() const
{
    return repoNameIsSet_;
}

void ArtifactSearchResult::unsetrepoName()
{
    repoNameIsSet_ = false;
}

std::string ArtifactSearchResult::getDisplayName() const
{
    return displayName_;
}

void ArtifactSearchResult::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool ArtifactSearchResult::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void ArtifactSearchResult::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string ArtifactSearchResult::getRepoType() const
{
    return repoType_;
}

void ArtifactSearchResult::setRepoType(const std::string& value)
{
    repoType_ = value;
    repoTypeIsSet_ = true;
}

bool ArtifactSearchResult::repoTypeIsSet() const
{
    return repoTypeIsSet_;
}

void ArtifactSearchResult::unsetrepoType()
{
    repoTypeIsSet_ = false;
}

std::string ArtifactSearchResult::getCreatedBy() const
{
    return createdBy_;
}

void ArtifactSearchResult::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool ArtifactSearchResult::createdByIsSet() const
{
    return createdByIsSet_;
}

void ArtifactSearchResult::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string ArtifactSearchResult::getCreatedUserName() const
{
    return createdUserName_;
}

void ArtifactSearchResult::setCreatedUserName(const std::string& value)
{
    createdUserName_ = value;
    createdUserNameIsSet_ = true;
}

bool ArtifactSearchResult::createdUserNameIsSet() const
{
    return createdUserNameIsSet_;
}

void ArtifactSearchResult::unsetcreatedUserName()
{
    createdUserNameIsSet_ = false;
}

std::string ArtifactSearchResult::getCreated() const
{
    return created_;
}

void ArtifactSearchResult::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ArtifactSearchResult::createdIsSet() const
{
    return createdIsSet_;
}

void ArtifactSearchResult::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ArtifactSearchResult::getModified() const
{
    return modified_;
}

void ArtifactSearchResult::setModified(const std::string& value)
{
    modified_ = value;
    modifiedIsSet_ = true;
}

bool ArtifactSearchResult::modifiedIsSet() const
{
    return modifiedIsSet_;
}

void ArtifactSearchResult::unsetmodified()
{
    modifiedIsSet_ = false;
}

std::string ArtifactSearchResult::getOldRepoId() const
{
    return oldRepoId_;
}

void ArtifactSearchResult::setOldRepoId(const std::string& value)
{
    oldRepoId_ = value;
    oldRepoIdIsSet_ = true;
}

bool ArtifactSearchResult::oldRepoIdIsSet() const
{
    return oldRepoIdIsSet_;
}

void ArtifactSearchResult::unsetoldRepoId()
{
    oldRepoIdIsSet_ = false;
}

}
}
}
}
}


