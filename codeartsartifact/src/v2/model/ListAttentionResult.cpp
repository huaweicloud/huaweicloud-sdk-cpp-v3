

#include "huaweicloud/codeartsartifact/v2/model/ListAttentionResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListAttentionResult::ListAttentionResult()
{
    id_ = "";
    idIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    repositoryId_ = "";
    repositoryIdIsSet_ = false;
    repositoryName_ = "";
    repositoryNameIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
    policy_ = "";
    policyIsSet_ = false;
    artifactId_ = "";
    artifactIdIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    modifiedUserName_ = "";
    modifiedUserNameIsSet_ = false;
    modifiedUserId_ = "";
    modifiedUserIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    modifiedTime_ = "";
    modifiedTimeIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
}

ListAttentionResult::~ListAttentionResult() = default;

void ListAttentionResult::validate()
{
}

web::json::value ListAttentionResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domainId")] = ModelBase::toJson(domainId_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repositoryId")] = ModelBase::toJson(repositoryId_);
    }
    if(repositoryNameIsSet_) {
        val[utility::conversions::to_string_t("repositoryName")] = ModelBase::toJson(repositoryName_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }
    if(artifactIdIsSet_) {
        val[utility::conversions::to_string_t("artifactId")] = ModelBase::toJson(artifactId_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(modifiedUserNameIsSet_) {
        val[utility::conversions::to_string_t("modifiedUserName")] = ModelBase::toJson(modifiedUserName_);
    }
    if(modifiedUserIdIsSet_) {
        val[utility::conversions::to_string_t("modifiedUserId")] = ModelBase::toJson(modifiedUserId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(userId_);
    }
    if(modifiedTimeIsSet_) {
        val[utility::conversions::to_string_t("modifiedTime")] = ModelBase::toJson(modifiedTime_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }

    return val;
}
bool ListAttentionResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("domainId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domainId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repositoryId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repositoryId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repositoryName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repositoryName"));
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
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("artifactId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("artifactId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArtifactId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("modifiedUserName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modifiedUserName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modifiedUserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modifiedUserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modifiedTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modifiedTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    return ok;
}


std::string ListAttentionResult::getId() const
{
    return id_;
}

void ListAttentionResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListAttentionResult::idIsSet() const
{
    return idIsSet_;
}

void ListAttentionResult::unsetid()
{
    idIsSet_ = false;
}

std::string ListAttentionResult::getDomainId() const
{
    return domainId_;
}

void ListAttentionResult::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListAttentionResult::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListAttentionResult::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ListAttentionResult::getRepositoryId() const
{
    return repositoryId_;
}

void ListAttentionResult::setRepositoryId(const std::string& value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListAttentionResult::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListAttentionResult::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListAttentionResult::getRepositoryName() const
{
    return repositoryName_;
}

void ListAttentionResult::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool ListAttentionResult::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void ListAttentionResult::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

std::string ListAttentionResult::getFormat() const
{
    return format_;
}

void ListAttentionResult::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool ListAttentionResult::formatIsSet() const
{
    return formatIsSet_;
}

void ListAttentionResult::unsetformat()
{
    formatIsSet_ = false;
}

std::string ListAttentionResult::getPolicy() const
{
    return policy_;
}

void ListAttentionResult::setPolicy(const std::string& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool ListAttentionResult::policyIsSet() const
{
    return policyIsSet_;
}

void ListAttentionResult::unsetpolicy()
{
    policyIsSet_ = false;
}

std::string ListAttentionResult::getArtifactId() const
{
    return artifactId_;
}

void ListAttentionResult::setArtifactId(const std::string& value)
{
    artifactId_ = value;
    artifactIdIsSet_ = true;
}

bool ListAttentionResult::artifactIdIsSet() const
{
    return artifactIdIsSet_;
}

void ListAttentionResult::unsetartifactId()
{
    artifactIdIsSet_ = false;
}

std::string ListAttentionResult::getPath() const
{
    return path_;
}

void ListAttentionResult::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool ListAttentionResult::pathIsSet() const
{
    return pathIsSet_;
}

void ListAttentionResult::unsetpath()
{
    pathIsSet_ = false;
}

std::string ListAttentionResult::getModifiedUserName() const
{
    return modifiedUserName_;
}

void ListAttentionResult::setModifiedUserName(const std::string& value)
{
    modifiedUserName_ = value;
    modifiedUserNameIsSet_ = true;
}

bool ListAttentionResult::modifiedUserNameIsSet() const
{
    return modifiedUserNameIsSet_;
}

void ListAttentionResult::unsetmodifiedUserName()
{
    modifiedUserNameIsSet_ = false;
}

std::string ListAttentionResult::getModifiedUserId() const
{
    return modifiedUserId_;
}

void ListAttentionResult::setModifiedUserId(const std::string& value)
{
    modifiedUserId_ = value;
    modifiedUserIdIsSet_ = true;
}

bool ListAttentionResult::modifiedUserIdIsSet() const
{
    return modifiedUserIdIsSet_;
}

void ListAttentionResult::unsetmodifiedUserId()
{
    modifiedUserIdIsSet_ = false;
}

std::string ListAttentionResult::getUserId() const
{
    return userId_;
}

void ListAttentionResult::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ListAttentionResult::userIdIsSet() const
{
    return userIdIsSet_;
}

void ListAttentionResult::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string ListAttentionResult::getModifiedTime() const
{
    return modifiedTime_;
}

void ListAttentionResult::setModifiedTime(const std::string& value)
{
    modifiedTime_ = value;
    modifiedTimeIsSet_ = true;
}

bool ListAttentionResult::modifiedTimeIsSet() const
{
    return modifiedTimeIsSet_;
}

void ListAttentionResult::unsetmodifiedTime()
{
    modifiedTimeIsSet_ = false;
}

std::string ListAttentionResult::getRegion() const
{
    return region_;
}

void ListAttentionResult::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ListAttentionResult::regionIsSet() const
{
    return regionIsSet_;
}

void ListAttentionResult::unsetregion()
{
    regionIsSet_ = false;
}

}
}
}
}
}


