

#include "huaweicloud/codeartsrepo/v4/model/RepositoryPushEventDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RepositoryPushEventDto::RepositoryPushEventDto()
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
    pushDataIsSet_ = false;
}

RepositoryPushEventDto::~RepositoryPushEventDto() = default;

void RepositoryPushEventDto::validate()
{
}

web::json::value RepositoryPushEventDto::toJson() const
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
    if(pushDataIsSet_) {
        val[utility::conversions::to_string_t("push_data")] = ModelBase::toJson(pushData_);
    }

    return val;
}
bool RepositoryPushEventDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("push_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("push_data"));
        if(!fieldValue.is_null())
        {
            PushEventPayloadDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPushData(refVal);
        }
    }
    return ok;
}


std::string RepositoryPushEventDto::getActionName() const
{
    return actionName_;
}

void RepositoryPushEventDto::setActionName(const std::string& value)
{
    actionName_ = value;
    actionNameIsSet_ = true;
}

bool RepositoryPushEventDto::actionNameIsSet() const
{
    return actionNameIsSet_;
}

void RepositoryPushEventDto::unsetactionName()
{
    actionNameIsSet_ = false;
}

RepositoryEventAuthorDto RepositoryPushEventDto::getAuthor() const
{
    return author_;
}

void RepositoryPushEventDto::setAuthor(const RepositoryEventAuthorDto& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool RepositoryPushEventDto::authorIsSet() const
{
    return authorIsSet_;
}

void RepositoryPushEventDto::unsetauthor()
{
    authorIsSet_ = false;
}

int32_t RepositoryPushEventDto::getAuthorId() const
{
    return authorId_;
}

void RepositoryPushEventDto::setAuthorId(int32_t value)
{
    authorId_ = value;
    authorIdIsSet_ = true;
}

bool RepositoryPushEventDto::authorIdIsSet() const
{
    return authorIdIsSet_;
}

void RepositoryPushEventDto::unsetauthorId()
{
    authorIdIsSet_ = false;
}

std::string RepositoryPushEventDto::getAuthorUsername() const
{
    return authorUsername_;
}

void RepositoryPushEventDto::setAuthorUsername(const std::string& value)
{
    authorUsername_ = value;
    authorUsernameIsSet_ = true;
}

bool RepositoryPushEventDto::authorUsernameIsSet() const
{
    return authorUsernameIsSet_;
}

void RepositoryPushEventDto::unsetauthorUsername()
{
    authorUsernameIsSet_ = false;
}

std::string RepositoryPushEventDto::getCreatedAt() const
{
    return createdAt_;
}

void RepositoryPushEventDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool RepositoryPushEventDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void RepositoryPushEventDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

int32_t RepositoryPushEventDto::getRepositoryId() const
{
    return repositoryId_;
}

void RepositoryPushEventDto::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool RepositoryPushEventDto::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void RepositoryPushEventDto::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string RepositoryPushEventDto::getRepositoryName() const
{
    return repositoryName_;
}

void RepositoryPushEventDto::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool RepositoryPushEventDto::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void RepositoryPushEventDto::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

PushEventPayloadDto RepositoryPushEventDto::getPushData() const
{
    return pushData_;
}

void RepositoryPushEventDto::setPushData(const PushEventPayloadDto& value)
{
    pushData_ = value;
    pushDataIsSet_ = true;
}

bool RepositoryPushEventDto::pushDataIsSet() const
{
    return pushDataIsSet_;
}

void RepositoryPushEventDto::unsetpushData()
{
    pushDataIsSet_ = false;
}

}
}
}
}
}


