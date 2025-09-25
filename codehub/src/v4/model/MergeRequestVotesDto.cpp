

#include "huaweicloud/codehub/v4/model/MergeRequestVotesDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




MergeRequestVotesDto::MergeRequestVotesDto()
{
    id_ = 0;
    idIsSet_ = false;
    score_ = 0;
    scoreIsSet_ = false;
    authorName_ = "";
    authorNameIsSet_ = false;
    authorUsername_ = "";
    authorUsernameIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    lastCommittedId_ = "";
    lastCommittedIdIsSet_ = false;
    authorId_ = 0;
    authorIdIsSet_ = false;
    avatarUrl_ = "";
    avatarUrlIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
}

MergeRequestVotesDto::~MergeRequestVotesDto() = default;

void MergeRequestVotesDto::validate()
{
}

web::json::value MergeRequestVotesDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(scoreIsSet_) {
        val[utility::conversions::to_string_t("score")] = ModelBase::toJson(score_);
    }
    if(authorNameIsSet_) {
        val[utility::conversions::to_string_t("author_name")] = ModelBase::toJson(authorName_);
    }
    if(authorUsernameIsSet_) {
        val[utility::conversions::to_string_t("author_username")] = ModelBase::toJson(authorUsername_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(lastCommittedIdIsSet_) {
        val[utility::conversions::to_string_t("last_committed_id")] = ModelBase::toJson(lastCommittedId_);
    }
    if(authorIdIsSet_) {
        val[utility::conversions::to_string_t("author_id")] = ModelBase::toJson(authorId_);
    }
    if(avatarUrlIsSet_) {
        val[utility::conversions::to_string_t("avatar_url")] = ModelBase::toJson(avatarUrl_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(tenantNameIsSet_) {
        val[utility::conversions::to_string_t("tenant_name")] = ModelBase::toJson(tenantName_);
    }

    return val;
}
bool MergeRequestVotesDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("score"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_committed_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_committed_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastCommittedId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("avatar_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avatar_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvatarUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantName(refVal);
        }
    }
    return ok;
}


int32_t MergeRequestVotesDto::getId() const
{
    return id_;
}

void MergeRequestVotesDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MergeRequestVotesDto::idIsSet() const
{
    return idIsSet_;
}

void MergeRequestVotesDto::unsetid()
{
    idIsSet_ = false;
}

int32_t MergeRequestVotesDto::getScore() const
{
    return score_;
}

void MergeRequestVotesDto::setScore(int32_t value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool MergeRequestVotesDto::scoreIsSet() const
{
    return scoreIsSet_;
}

void MergeRequestVotesDto::unsetscore()
{
    scoreIsSet_ = false;
}

std::string MergeRequestVotesDto::getAuthorName() const
{
    return authorName_;
}

void MergeRequestVotesDto::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool MergeRequestVotesDto::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void MergeRequestVotesDto::unsetauthorName()
{
    authorNameIsSet_ = false;
}

std::string MergeRequestVotesDto::getAuthorUsername() const
{
    return authorUsername_;
}

void MergeRequestVotesDto::setAuthorUsername(const std::string& value)
{
    authorUsername_ = value;
    authorUsernameIsSet_ = true;
}

bool MergeRequestVotesDto::authorUsernameIsSet() const
{
    return authorUsernameIsSet_;
}

void MergeRequestVotesDto::unsetauthorUsername()
{
    authorUsernameIsSet_ = false;
}

std::string MergeRequestVotesDto::getCreatedAt() const
{
    return createdAt_;
}

void MergeRequestVotesDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool MergeRequestVotesDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void MergeRequestVotesDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string MergeRequestVotesDto::getUpdatedAt() const
{
    return updatedAt_;
}

void MergeRequestVotesDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool MergeRequestVotesDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void MergeRequestVotesDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string MergeRequestVotesDto::getLastCommittedId() const
{
    return lastCommittedId_;
}

void MergeRequestVotesDto::setLastCommittedId(const std::string& value)
{
    lastCommittedId_ = value;
    lastCommittedIdIsSet_ = true;
}

bool MergeRequestVotesDto::lastCommittedIdIsSet() const
{
    return lastCommittedIdIsSet_;
}

void MergeRequestVotesDto::unsetlastCommittedId()
{
    lastCommittedIdIsSet_ = false;
}

int32_t MergeRequestVotesDto::getAuthorId() const
{
    return authorId_;
}

void MergeRequestVotesDto::setAuthorId(int32_t value)
{
    authorId_ = value;
    authorIdIsSet_ = true;
}

bool MergeRequestVotesDto::authorIdIsSet() const
{
    return authorIdIsSet_;
}

void MergeRequestVotesDto::unsetauthorId()
{
    authorIdIsSet_ = false;
}

std::string MergeRequestVotesDto::getAvatarUrl() const
{
    return avatarUrl_;
}

void MergeRequestVotesDto::setAvatarUrl(const std::string& value)
{
    avatarUrl_ = value;
    avatarUrlIsSet_ = true;
}

bool MergeRequestVotesDto::avatarUrlIsSet() const
{
    return avatarUrlIsSet_;
}

void MergeRequestVotesDto::unsetavatarUrl()
{
    avatarUrlIsSet_ = false;
}

std::string MergeRequestVotesDto::getNickName() const
{
    return nickName_;
}

void MergeRequestVotesDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool MergeRequestVotesDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void MergeRequestVotesDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string MergeRequestVotesDto::getTenantName() const
{
    return tenantName_;
}

void MergeRequestVotesDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool MergeRequestVotesDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void MergeRequestVotesDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

}
}
}
}
}


