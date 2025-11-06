

#include "huaweicloud/codeartsrepo/v4/model/BaseEventDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




BaseEventDto::BaseEventDto()
{
    actionName_ = "";
    actionNameIsSet_ = false;
    authorIsSet_ = false;
    authorId_ = 0;
    authorIdIsSet_ = false;
    authorUsername_ = "";
    authorUsernameIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    repositoryName_ = "";
    repositoryNameIsSet_ = false;
}

BaseEventDto::~BaseEventDto() = default;

void BaseEventDto::validate()
{
}

web::json::value BaseEventDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionNameIsSet_) {
        val[utility::conversions::to_string_t("action_name")] = ModelBase::toJson(actionName_);
    }
    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(authorIdIsSet_) {
        val[utility::conversions::to_string_t("author_id")] = ModelBase::toJson(authorId_);
    }
    if(authorUsernameIsSet_) {
        val[utility::conversions::to_string_t("author_username")] = ModelBase::toJson(authorUsername_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(repositoryNameIsSet_) {
        val[utility::conversions::to_string_t("repository_name")] = ModelBase::toJson(repositoryName_);
    }

    return val;
}
bool BaseEventDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            RepositoryEventAuthorDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorUsername(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
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
    return ok;
}


std::string BaseEventDto::getActionName() const
{
    return actionName_;
}

void BaseEventDto::setActionName(const std::string& value)
{
    actionName_ = value;
    actionNameIsSet_ = true;
}

bool BaseEventDto::actionNameIsSet() const
{
    return actionNameIsSet_;
}

void BaseEventDto::unsetactionName()
{
    actionNameIsSet_ = false;
}

RepositoryEventAuthorDto BaseEventDto::getAuthor() const
{
    return author_;
}

void BaseEventDto::setAuthor(const RepositoryEventAuthorDto& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool BaseEventDto::authorIsSet() const
{
    return authorIsSet_;
}

void BaseEventDto::unsetauthor()
{
    authorIsSet_ = false;
}

int32_t BaseEventDto::getAuthorId() const
{
    return authorId_;
}

void BaseEventDto::setAuthorId(int32_t value)
{
    authorId_ = value;
    authorIdIsSet_ = true;
}

bool BaseEventDto::authorIdIsSet() const
{
    return authorIdIsSet_;
}

void BaseEventDto::unsetauthorId()
{
    authorIdIsSet_ = false;
}

std::string BaseEventDto::getAuthorUsername() const
{
    return authorUsername_;
}

void BaseEventDto::setAuthorUsername(const std::string& value)
{
    authorUsername_ = value;
    authorUsernameIsSet_ = true;
}

bool BaseEventDto::authorUsernameIsSet() const
{
    return authorUsernameIsSet_;
}

void BaseEventDto::unsetauthorUsername()
{
    authorUsernameIsSet_ = false;
}

std::string BaseEventDto::getCreatedAt() const
{
    return createdAt_;
}

void BaseEventDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool BaseEventDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void BaseEventDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

int32_t BaseEventDto::getRepositoryId() const
{
    return repositoryId_;
}

void BaseEventDto::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool BaseEventDto::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void BaseEventDto::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string BaseEventDto::getRepositoryName() const
{
    return repositoryName_;
}

void BaseEventDto::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool BaseEventDto::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void BaseEventDto::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

}
}
}
}
}


