

#include "huaweicloud/codehub/v4/model/RepositoryCommitDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




RepositoryCommitDto::RepositoryCommitDto()
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
}

RepositoryCommitDto::~RepositoryCommitDto() = default;

void RepositoryCommitDto::validate()
{
}

web::json::value RepositoryCommitDto::toJson() const
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

    return val;
}
bool RepositoryCommitDto::fromJson(const web::json::value& val)
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
    return ok;
}


std::string RepositoryCommitDto::getId() const
{
    return id_;
}

void RepositoryCommitDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RepositoryCommitDto::idIsSet() const
{
    return idIsSet_;
}

void RepositoryCommitDto::unsetid()
{
    idIsSet_ = false;
}

std::string RepositoryCommitDto::getMessage() const
{
    return message_;
}

void RepositoryCommitDto::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool RepositoryCommitDto::messageIsSet() const
{
    return messageIsSet_;
}

void RepositoryCommitDto::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<std::string>& RepositoryCommitDto::getParentIds()
{
    return parentIds_;
}

void RepositoryCommitDto::setParentIds(const std::vector<std::string>& value)
{
    parentIds_ = value;
    parentIdsIsSet_ = true;
}

bool RepositoryCommitDto::parentIdsIsSet() const
{
    return parentIdsIsSet_;
}

void RepositoryCommitDto::unsetparentIds()
{
    parentIdsIsSet_ = false;
}

std::string RepositoryCommitDto::getAuthoredDate() const
{
    return authoredDate_;
}

void RepositoryCommitDto::setAuthoredDate(const std::string& value)
{
    authoredDate_ = value;
    authoredDateIsSet_ = true;
}

bool RepositoryCommitDto::authoredDateIsSet() const
{
    return authoredDateIsSet_;
}

void RepositoryCommitDto::unsetauthoredDate()
{
    authoredDateIsSet_ = false;
}

std::string RepositoryCommitDto::getAuthorName() const
{
    return authorName_;
}

void RepositoryCommitDto::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool RepositoryCommitDto::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void RepositoryCommitDto::unsetauthorName()
{
    authorNameIsSet_ = false;
}

std::string RepositoryCommitDto::getAuthorEmail() const
{
    return authorEmail_;
}

void RepositoryCommitDto::setAuthorEmail(const std::string& value)
{
    authorEmail_ = value;
    authorEmailIsSet_ = true;
}

bool RepositoryCommitDto::authorEmailIsSet() const
{
    return authorEmailIsSet_;
}

void RepositoryCommitDto::unsetauthorEmail()
{
    authorEmailIsSet_ = false;
}

std::string RepositoryCommitDto::getCommittedDate() const
{
    return committedDate_;
}

void RepositoryCommitDto::setCommittedDate(const std::string& value)
{
    committedDate_ = value;
    committedDateIsSet_ = true;
}

bool RepositoryCommitDto::committedDateIsSet() const
{
    return committedDateIsSet_;
}

void RepositoryCommitDto::unsetcommittedDate()
{
    committedDateIsSet_ = false;
}

std::string RepositoryCommitDto::getCommitterName() const
{
    return committerName_;
}

void RepositoryCommitDto::setCommitterName(const std::string& value)
{
    committerName_ = value;
    committerNameIsSet_ = true;
}

bool RepositoryCommitDto::committerNameIsSet() const
{
    return committerNameIsSet_;
}

void RepositoryCommitDto::unsetcommitterName()
{
    committerNameIsSet_ = false;
}

std::string RepositoryCommitDto::getCommitterEmail() const
{
    return committerEmail_;
}

void RepositoryCommitDto::setCommitterEmail(const std::string& value)
{
    committerEmail_ = value;
    committerEmailIsSet_ = true;
}

bool RepositoryCommitDto::committerEmailIsSet() const
{
    return committerEmailIsSet_;
}

void RepositoryCommitDto::unsetcommitterEmail()
{
    committerEmailIsSet_ = false;
}

bool RepositoryCommitDto::isOpenGpgVerified() const
{
    return openGpgVerified_;
}

void RepositoryCommitDto::setOpenGpgVerified(bool value)
{
    openGpgVerified_ = value;
    openGpgVerifiedIsSet_ = true;
}

bool RepositoryCommitDto::openGpgVerifiedIsSet() const
{
    return openGpgVerifiedIsSet_;
}

void RepositoryCommitDto::unsetopenGpgVerified()
{
    openGpgVerifiedIsSet_ = false;
}

int32_t RepositoryCommitDto::getVerificationStatus() const
{
    return verificationStatus_;
}

void RepositoryCommitDto::setVerificationStatus(int32_t value)
{
    verificationStatus_ = value;
    verificationStatusIsSet_ = true;
}

bool RepositoryCommitDto::verificationStatusIsSet() const
{
    return verificationStatusIsSet_;
}

void RepositoryCommitDto::unsetverificationStatus()
{
    verificationStatusIsSet_ = false;
}

std::string RepositoryCommitDto::getGpgPrimaryKeyId() const
{
    return gpgPrimaryKeyId_;
}

void RepositoryCommitDto::setGpgPrimaryKeyId(const std::string& value)
{
    gpgPrimaryKeyId_ = value;
    gpgPrimaryKeyIdIsSet_ = true;
}

bool RepositoryCommitDto::gpgPrimaryKeyIdIsSet() const
{
    return gpgPrimaryKeyIdIsSet_;
}

void RepositoryCommitDto::unsetgpgPrimaryKeyId()
{
    gpgPrimaryKeyIdIsSet_ = false;
}

std::string RepositoryCommitDto::getName() const
{
    return name_;
}

void RepositoryCommitDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RepositoryCommitDto::nameIsSet() const
{
    return nameIsSet_;
}

void RepositoryCommitDto::unsetname()
{
    nameIsSet_ = false;
}

std::string RepositoryCommitDto::getGpgNickName() const
{
    return gpgNickName_;
}

void RepositoryCommitDto::setGpgNickName(const std::string& value)
{
    gpgNickName_ = value;
    gpgNickNameIsSet_ = true;
}

bool RepositoryCommitDto::gpgNickNameIsSet() const
{
    return gpgNickNameIsSet_;
}

void RepositoryCommitDto::unsetgpgNickName()
{
    gpgNickNameIsSet_ = false;
}

std::string RepositoryCommitDto::getGpgTenantName() const
{
    return gpgTenantName_;
}

void RepositoryCommitDto::setGpgTenantName(const std::string& value)
{
    gpgTenantName_ = value;
    gpgTenantNameIsSet_ = true;
}

bool RepositoryCommitDto::gpgTenantNameIsSet() const
{
    return gpgTenantNameIsSet_;
}

void RepositoryCommitDto::unsetgpgTenantName()
{
    gpgTenantNameIsSet_ = false;
}

std::string RepositoryCommitDto::getGpgUserName() const
{
    return gpgUserName_;
}

void RepositoryCommitDto::setGpgUserName(const std::string& value)
{
    gpgUserName_ = value;
    gpgUserNameIsSet_ = true;
}

bool RepositoryCommitDto::gpgUserNameIsSet() const
{
    return gpgUserNameIsSet_;
}

void RepositoryCommitDto::unsetgpgUserName()
{
    gpgUserNameIsSet_ = false;
}

}
}
}
}
}


