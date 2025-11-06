

#include "huaweicloud/codeartsrepo/v4/model/CommitDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CommitDto::CommitDto()
{
    id_ = "";
    idIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    parentIdsIsSet_ = false;
    authoredDate_ = "";
    authoredDateIsSet_ = false;
    authorName_ = "";
    authorNameIsSet_ = false;
    authorEmail_ = "";
    authorEmailIsSet_ = false;
    committedDate_ = "";
    committedDateIsSet_ = false;
    committerName_ = "";
    committerNameIsSet_ = false;
    committerEmail_ = "";
    committerEmailIsSet_ = false;
    openGpgVerified_ = false;
    openGpgVerifiedIsSet_ = false;
    verificationStatus_ = 0;
    verificationStatusIsSet_ = false;
    gpgPrimaryKeyId_ = "";
    gpgPrimaryKeyIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    gpgNickName_ = "";
    gpgNickNameIsSet_ = false;
    gpgTenantName_ = "";
    gpgTenantNameIsSet_ = false;
    gpgUserName_ = "";
    gpgUserNameIsSet_ = false;
    shortId_ = "";
    shortIdIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    authorAvatarUrl_ = "";
    authorAvatarUrlIsSet_ = false;
    committerAvatarUrl_ = "";
    committerAvatarUrlIsSet_ = false;
    relateUrlIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

CommitDto::~CommitDto() = default;

void CommitDto::validate()
{
}

web::json::value CommitDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(parentIdsIsSet_) {
        val[utility::conversions::to_string_t("parent_ids")] = ModelBase::toJson(parentIds_);
    }
    if(authoredDateIsSet_) {
        val[utility::conversions::to_string_t("authored_date")] = ModelBase::toJson(authoredDate_);
    }
    if(authorNameIsSet_) {
        val[utility::conversions::to_string_t("author_name")] = ModelBase::toJson(authorName_);
    }
    if(authorEmailIsSet_) {
        val[utility::conversions::to_string_t("author_email")] = ModelBase::toJson(authorEmail_);
    }
    if(committedDateIsSet_) {
        val[utility::conversions::to_string_t("committed_date")] = ModelBase::toJson(committedDate_);
    }
    if(committerNameIsSet_) {
        val[utility::conversions::to_string_t("committer_name")] = ModelBase::toJson(committerName_);
    }
    if(committerEmailIsSet_) {
        val[utility::conversions::to_string_t("committer_email")] = ModelBase::toJson(committerEmail_);
    }
    if(openGpgVerifiedIsSet_) {
        val[utility::conversions::to_string_t("open_gpg_verified")] = ModelBase::toJson(openGpgVerified_);
    }
    if(verificationStatusIsSet_) {
        val[utility::conversions::to_string_t("verification_status")] = ModelBase::toJson(verificationStatus_);
    }
    if(gpgPrimaryKeyIdIsSet_) {
        val[utility::conversions::to_string_t("gpg_primary_key_id")] = ModelBase::toJson(gpgPrimaryKeyId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(gpgNickNameIsSet_) {
        val[utility::conversions::to_string_t("gpg_nick_name")] = ModelBase::toJson(gpgNickName_);
    }
    if(gpgTenantNameIsSet_) {
        val[utility::conversions::to_string_t("gpg_tenant_name")] = ModelBase::toJson(gpgTenantName_);
    }
    if(gpgUserNameIsSet_) {
        val[utility::conversions::to_string_t("gpg_user_name")] = ModelBase::toJson(gpgUserName_);
    }
    if(shortIdIsSet_) {
        val[utility::conversions::to_string_t("short_id")] = ModelBase::toJson(shortId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(authorAvatarUrlIsSet_) {
        val[utility::conversions::to_string_t("author_avatar_url")] = ModelBase::toJson(authorAvatarUrl_);
    }
    if(committerAvatarUrlIsSet_) {
        val[utility::conversions::to_string_t("committer_avatar_url")] = ModelBase::toJson(committerAvatarUrl_);
    }
    if(relateUrlIsSet_) {
        val[utility::conversions::to_string_t("relate_url")] = ModelBase::toJson(relateUrl_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(tenantNameIsSet_) {
        val[utility::conversions::to_string_t("tenant_name")] = ModelBase::toJson(tenantName_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }

    return val;
}
bool CommitDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authored_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authored_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthoredDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("author_email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("committed_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("committed_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommittedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("committer_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("committer_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitterName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("committer_email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("committer_email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitterEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("open_gpg_verified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("open_gpg_verified"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpenGpgVerified(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("verification_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verification_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerificationStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gpg_primary_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpg_primary_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpgPrimaryKeyId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("gpg_nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpg_nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpgNickName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gpg_tenant_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpg_tenant_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpgTenantName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gpg_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpg_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpgUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("short_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("short_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShortId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_avatar_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_avatar_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorAvatarUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("committer_avatar_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("committer_avatar_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitterAvatarUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relate_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relate_url"));
        if(!fieldValue.is_null())
        {
            std::vector<RelatedCommitSimpleDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelateUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    return ok;
}


std::string CommitDto::getId() const
{
    return id_;
}

void CommitDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CommitDto::idIsSet() const
{
    return idIsSet_;
}

void CommitDto::unsetid()
{
    idIsSet_ = false;
}

std::string CommitDto::getMessage() const
{
    return message_;
}

void CommitDto::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CommitDto::messageIsSet() const
{
    return messageIsSet_;
}

void CommitDto::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<std::string>& CommitDto::getParentIds()
{
    return parentIds_;
}

void CommitDto::setParentIds(const std::vector<std::string>& value)
{
    parentIds_ = value;
    parentIdsIsSet_ = true;
}

bool CommitDto::parentIdsIsSet() const
{
    return parentIdsIsSet_;
}

void CommitDto::unsetparentIds()
{
    parentIdsIsSet_ = false;
}

std::string CommitDto::getAuthoredDate() const
{
    return authoredDate_;
}

void CommitDto::setAuthoredDate(const std::string& value)
{
    authoredDate_ = value;
    authoredDateIsSet_ = true;
}

bool CommitDto::authoredDateIsSet() const
{
    return authoredDateIsSet_;
}

void CommitDto::unsetauthoredDate()
{
    authoredDateIsSet_ = false;
}

std::string CommitDto::getAuthorName() const
{
    return authorName_;
}

void CommitDto::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool CommitDto::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void CommitDto::unsetauthorName()
{
    authorNameIsSet_ = false;
}

std::string CommitDto::getAuthorEmail() const
{
    return authorEmail_;
}

void CommitDto::setAuthorEmail(const std::string& value)
{
    authorEmail_ = value;
    authorEmailIsSet_ = true;
}

bool CommitDto::authorEmailIsSet() const
{
    return authorEmailIsSet_;
}

void CommitDto::unsetauthorEmail()
{
    authorEmailIsSet_ = false;
}

std::string CommitDto::getCommittedDate() const
{
    return committedDate_;
}

void CommitDto::setCommittedDate(const std::string& value)
{
    committedDate_ = value;
    committedDateIsSet_ = true;
}

bool CommitDto::committedDateIsSet() const
{
    return committedDateIsSet_;
}

void CommitDto::unsetcommittedDate()
{
    committedDateIsSet_ = false;
}

std::string CommitDto::getCommitterName() const
{
    return committerName_;
}

void CommitDto::setCommitterName(const std::string& value)
{
    committerName_ = value;
    committerNameIsSet_ = true;
}

bool CommitDto::committerNameIsSet() const
{
    return committerNameIsSet_;
}

void CommitDto::unsetcommitterName()
{
    committerNameIsSet_ = false;
}

std::string CommitDto::getCommitterEmail() const
{
    return committerEmail_;
}

void CommitDto::setCommitterEmail(const std::string& value)
{
    committerEmail_ = value;
    committerEmailIsSet_ = true;
}

bool CommitDto::committerEmailIsSet() const
{
    return committerEmailIsSet_;
}

void CommitDto::unsetcommitterEmail()
{
    committerEmailIsSet_ = false;
}

bool CommitDto::isOpenGpgVerified() const
{
    return openGpgVerified_;
}

void CommitDto::setOpenGpgVerified(bool value)
{
    openGpgVerified_ = value;
    openGpgVerifiedIsSet_ = true;
}

bool CommitDto::openGpgVerifiedIsSet() const
{
    return openGpgVerifiedIsSet_;
}

void CommitDto::unsetopenGpgVerified()
{
    openGpgVerifiedIsSet_ = false;
}

int32_t CommitDto::getVerificationStatus() const
{
    return verificationStatus_;
}

void CommitDto::setVerificationStatus(int32_t value)
{
    verificationStatus_ = value;
    verificationStatusIsSet_ = true;
}

bool CommitDto::verificationStatusIsSet() const
{
    return verificationStatusIsSet_;
}

void CommitDto::unsetverificationStatus()
{
    verificationStatusIsSet_ = false;
}

std::string CommitDto::getGpgPrimaryKeyId() const
{
    return gpgPrimaryKeyId_;
}

void CommitDto::setGpgPrimaryKeyId(const std::string& value)
{
    gpgPrimaryKeyId_ = value;
    gpgPrimaryKeyIdIsSet_ = true;
}

bool CommitDto::gpgPrimaryKeyIdIsSet() const
{
    return gpgPrimaryKeyIdIsSet_;
}

void CommitDto::unsetgpgPrimaryKeyId()
{
    gpgPrimaryKeyIdIsSet_ = false;
}

std::string CommitDto::getName() const
{
    return name_;
}

void CommitDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CommitDto::nameIsSet() const
{
    return nameIsSet_;
}

void CommitDto::unsetname()
{
    nameIsSet_ = false;
}

std::string CommitDto::getGpgNickName() const
{
    return gpgNickName_;
}

void CommitDto::setGpgNickName(const std::string& value)
{
    gpgNickName_ = value;
    gpgNickNameIsSet_ = true;
}

bool CommitDto::gpgNickNameIsSet() const
{
    return gpgNickNameIsSet_;
}

void CommitDto::unsetgpgNickName()
{
    gpgNickNameIsSet_ = false;
}

std::string CommitDto::getGpgTenantName() const
{
    return gpgTenantName_;
}

void CommitDto::setGpgTenantName(const std::string& value)
{
    gpgTenantName_ = value;
    gpgTenantNameIsSet_ = true;
}

bool CommitDto::gpgTenantNameIsSet() const
{
    return gpgTenantNameIsSet_;
}

void CommitDto::unsetgpgTenantName()
{
    gpgTenantNameIsSet_ = false;
}

std::string CommitDto::getGpgUserName() const
{
    return gpgUserName_;
}

void CommitDto::setGpgUserName(const std::string& value)
{
    gpgUserName_ = value;
    gpgUserNameIsSet_ = true;
}

bool CommitDto::gpgUserNameIsSet() const
{
    return gpgUserNameIsSet_;
}

void CommitDto::unsetgpgUserName()
{
    gpgUserNameIsSet_ = false;
}

std::string CommitDto::getShortId() const
{
    return shortId_;
}

void CommitDto::setShortId(const std::string& value)
{
    shortId_ = value;
    shortIdIsSet_ = true;
}

bool CommitDto::shortIdIsSet() const
{
    return shortIdIsSet_;
}

void CommitDto::unsetshortId()
{
    shortIdIsSet_ = false;
}

std::string CommitDto::getCreatedAt() const
{
    return createdAt_;
}

void CommitDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CommitDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CommitDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string CommitDto::getTitle() const
{
    return title_;
}

void CommitDto::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool CommitDto::titleIsSet() const
{
    return titleIsSet_;
}

void CommitDto::unsettitle()
{
    titleIsSet_ = false;
}

std::string CommitDto::getAuthorAvatarUrl() const
{
    return authorAvatarUrl_;
}

void CommitDto::setAuthorAvatarUrl(const std::string& value)
{
    authorAvatarUrl_ = value;
    authorAvatarUrlIsSet_ = true;
}

bool CommitDto::authorAvatarUrlIsSet() const
{
    return authorAvatarUrlIsSet_;
}

void CommitDto::unsetauthorAvatarUrl()
{
    authorAvatarUrlIsSet_ = false;
}

std::string CommitDto::getCommitterAvatarUrl() const
{
    return committerAvatarUrl_;
}

void CommitDto::setCommitterAvatarUrl(const std::string& value)
{
    committerAvatarUrl_ = value;
    committerAvatarUrlIsSet_ = true;
}

bool CommitDto::committerAvatarUrlIsSet() const
{
    return committerAvatarUrlIsSet_;
}

void CommitDto::unsetcommitterAvatarUrl()
{
    committerAvatarUrlIsSet_ = false;
}

std::vector<RelatedCommitSimpleDto>& CommitDto::getRelateUrl()
{
    return relateUrl_;
}

void CommitDto::setRelateUrl(const std::vector<RelatedCommitSimpleDto>& value)
{
    relateUrl_ = value;
    relateUrlIsSet_ = true;
}

bool CommitDto::relateUrlIsSet() const
{
    return relateUrlIsSet_;
}

void CommitDto::unsetrelateUrl()
{
    relateUrlIsSet_ = false;
}

std::string CommitDto::getNickName() const
{
    return nickName_;
}

void CommitDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool CommitDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void CommitDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string CommitDto::getTenantName() const
{
    return tenantName_;
}

void CommitDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool CommitDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void CommitDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

std::string CommitDto::getUserName() const
{
    return userName_;
}

void CommitDto::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool CommitDto::userNameIsSet() const
{
    return userNameIsSet_;
}

void CommitDto::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


