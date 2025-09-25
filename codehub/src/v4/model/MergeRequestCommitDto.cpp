

#include "huaweicloud/codehub/v4/model/MergeRequestCommitDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




MergeRequestCommitDto::MergeRequestCommitDto()
{
    id_ = "";
    idIsSet_ = false;
    shortId_ = "";
    shortIdIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    authorName_ = "";
    authorNameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    authoredDate_ = "";
    authoredDateIsSet_ = false;
    committedDate_ = "";
    committedDateIsSet_ = false;
    committerName_ = "";
    committerNameIsSet_ = false;
    gpgPrimaryKeyId_ = "";
    gpgPrimaryKeyIdIsSet_ = false;
    openGpgVerified_ = false;
    openGpgVerifiedIsSet_ = false;
    verificationStatus_ = false;
    verificationStatusIsSet_ = false;
    parentIdsIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
}

MergeRequestCommitDto::~MergeRequestCommitDto() = default;

void MergeRequestCommitDto::validate()
{
}

web::json::value MergeRequestCommitDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(shortIdIsSet_) {
        val[utility::conversions::to_string_t("short_id")] = ModelBase::toJson(shortId_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(authorNameIsSet_) {
        val[utility::conversions::to_string_t("author_name")] = ModelBase::toJson(authorName_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(tenantNameIsSet_) {
        val[utility::conversions::to_string_t("tenant_name")] = ModelBase::toJson(tenantName_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(authoredDateIsSet_) {
        val[utility::conversions::to_string_t("authored_date")] = ModelBase::toJson(authoredDate_);
    }
    if(committedDateIsSet_) {
        val[utility::conversions::to_string_t("committed_date")] = ModelBase::toJson(committedDate_);
    }
    if(committerNameIsSet_) {
        val[utility::conversions::to_string_t("committer_name")] = ModelBase::toJson(committerName_);
    }
    if(gpgPrimaryKeyIdIsSet_) {
        val[utility::conversions::to_string_t("gpg_primary_key_id")] = ModelBase::toJson(gpgPrimaryKeyId_);
    }
    if(openGpgVerifiedIsSet_) {
        val[utility::conversions::to_string_t("open_gpg_verified")] = ModelBase::toJson(openGpgVerified_);
    }
    if(verificationStatusIsSet_) {
        val[utility::conversions::to_string_t("verification_status")] = ModelBase::toJson(verificationStatus_);
    }
    if(parentIdsIsSet_) {
        val[utility::conversions::to_string_t("parent_ids")] = ModelBase::toJson(parentIds_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }

    return val;
}
bool MergeRequestCommitDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("short_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("short_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShortId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tenant_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("authored_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authored_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthoredDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("gpg_primary_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpg_primary_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpgPrimaryKeyId(refVal);
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
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerificationStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    return ok;
}


std::string MergeRequestCommitDto::getId() const
{
    return id_;
}

void MergeRequestCommitDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MergeRequestCommitDto::idIsSet() const
{
    return idIsSet_;
}

void MergeRequestCommitDto::unsetid()
{
    idIsSet_ = false;
}

std::string MergeRequestCommitDto::getShortId() const
{
    return shortId_;
}

void MergeRequestCommitDto::setShortId(const std::string& value)
{
    shortId_ = value;
    shortIdIsSet_ = true;
}

bool MergeRequestCommitDto::shortIdIsSet() const
{
    return shortIdIsSet_;
}

void MergeRequestCommitDto::unsetshortId()
{
    shortIdIsSet_ = false;
}

std::string MergeRequestCommitDto::getTitle() const
{
    return title_;
}

void MergeRequestCommitDto::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool MergeRequestCommitDto::titleIsSet() const
{
    return titleIsSet_;
}

void MergeRequestCommitDto::unsettitle()
{
    titleIsSet_ = false;
}

std::string MergeRequestCommitDto::getMessage() const
{
    return message_;
}

void MergeRequestCommitDto::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool MergeRequestCommitDto::messageIsSet() const
{
    return messageIsSet_;
}

void MergeRequestCommitDto::unsetmessage()
{
    messageIsSet_ = false;
}

std::string MergeRequestCommitDto::getAuthorName() const
{
    return authorName_;
}

void MergeRequestCommitDto::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool MergeRequestCommitDto::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void MergeRequestCommitDto::unsetauthorName()
{
    authorNameIsSet_ = false;
}

std::string MergeRequestCommitDto::getName() const
{
    return name_;
}

void MergeRequestCommitDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MergeRequestCommitDto::nameIsSet() const
{
    return nameIsSet_;
}

void MergeRequestCommitDto::unsetname()
{
    nameIsSet_ = false;
}

std::string MergeRequestCommitDto::getUserName() const
{
    return userName_;
}

void MergeRequestCommitDto::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool MergeRequestCommitDto::userNameIsSet() const
{
    return userNameIsSet_;
}

void MergeRequestCommitDto::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string MergeRequestCommitDto::getTenantName() const
{
    return tenantName_;
}

void MergeRequestCommitDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool MergeRequestCommitDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void MergeRequestCommitDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

std::string MergeRequestCommitDto::getNickName() const
{
    return nickName_;
}

void MergeRequestCommitDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool MergeRequestCommitDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void MergeRequestCommitDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string MergeRequestCommitDto::getAuthoredDate() const
{
    return authoredDate_;
}

void MergeRequestCommitDto::setAuthoredDate(const std::string& value)
{
    authoredDate_ = value;
    authoredDateIsSet_ = true;
}

bool MergeRequestCommitDto::authoredDateIsSet() const
{
    return authoredDateIsSet_;
}

void MergeRequestCommitDto::unsetauthoredDate()
{
    authoredDateIsSet_ = false;
}

std::string MergeRequestCommitDto::getCommittedDate() const
{
    return committedDate_;
}

void MergeRequestCommitDto::setCommittedDate(const std::string& value)
{
    committedDate_ = value;
    committedDateIsSet_ = true;
}

bool MergeRequestCommitDto::committedDateIsSet() const
{
    return committedDateIsSet_;
}

void MergeRequestCommitDto::unsetcommittedDate()
{
    committedDateIsSet_ = false;
}

std::string MergeRequestCommitDto::getCommitterName() const
{
    return committerName_;
}

void MergeRequestCommitDto::setCommitterName(const std::string& value)
{
    committerName_ = value;
    committerNameIsSet_ = true;
}

bool MergeRequestCommitDto::committerNameIsSet() const
{
    return committerNameIsSet_;
}

void MergeRequestCommitDto::unsetcommitterName()
{
    committerNameIsSet_ = false;
}

std::string MergeRequestCommitDto::getGpgPrimaryKeyId() const
{
    return gpgPrimaryKeyId_;
}

void MergeRequestCommitDto::setGpgPrimaryKeyId(const std::string& value)
{
    gpgPrimaryKeyId_ = value;
    gpgPrimaryKeyIdIsSet_ = true;
}

bool MergeRequestCommitDto::gpgPrimaryKeyIdIsSet() const
{
    return gpgPrimaryKeyIdIsSet_;
}

void MergeRequestCommitDto::unsetgpgPrimaryKeyId()
{
    gpgPrimaryKeyIdIsSet_ = false;
}

bool MergeRequestCommitDto::isOpenGpgVerified() const
{
    return openGpgVerified_;
}

void MergeRequestCommitDto::setOpenGpgVerified(bool value)
{
    openGpgVerified_ = value;
    openGpgVerifiedIsSet_ = true;
}

bool MergeRequestCommitDto::openGpgVerifiedIsSet() const
{
    return openGpgVerifiedIsSet_;
}

void MergeRequestCommitDto::unsetopenGpgVerified()
{
    openGpgVerifiedIsSet_ = false;
}

bool MergeRequestCommitDto::isVerificationStatus() const
{
    return verificationStatus_;
}

void MergeRequestCommitDto::setVerificationStatus(bool value)
{
    verificationStatus_ = value;
    verificationStatusIsSet_ = true;
}

bool MergeRequestCommitDto::verificationStatusIsSet() const
{
    return verificationStatusIsSet_;
}

void MergeRequestCommitDto::unsetverificationStatus()
{
    verificationStatusIsSet_ = false;
}

std::vector<std::string>& MergeRequestCommitDto::getParentIds()
{
    return parentIds_;
}

void MergeRequestCommitDto::setParentIds(const std::vector<std::string>& value)
{
    parentIds_ = value;
    parentIdsIsSet_ = true;
}

bool MergeRequestCommitDto::parentIdsIsSet() const
{
    return parentIdsIsSet_;
}

void MergeRequestCommitDto::unsetparentIds()
{
    parentIdsIsSet_ = false;
}

std::string MergeRequestCommitDto::getCreatedAt() const
{
    return createdAt_;
}

void MergeRequestCommitDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool MergeRequestCommitDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void MergeRequestCommitDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

}
}
}
}
}


