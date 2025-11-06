

#include "huaweicloud/codeartsrepo/v4/model/CreateCommitRevertResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateCommitRevertResponse::CreateCommitRevertResponse()
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
    state_ = "";
    stateIsSet_ = false;
    cherryPickBranchName_ = "";
    cherryPickBranchNameIsSet_ = false;
    revertBranchName_ = "";
    revertBranchNameIsSet_ = false;
    iid_ = 0;
    iidIsSet_ = false;
}

CreateCommitRevertResponse::~CreateCommitRevertResponse() = default;

void CreateCommitRevertResponse::validate()
{
}

web::json::value CreateCommitRevertResponse::toJson() const
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
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(cherryPickBranchNameIsSet_) {
        val[utility::conversions::to_string_t("cherry_pick_branch_name")] = ModelBase::toJson(cherryPickBranchName_);
    }
    if(revertBranchNameIsSet_) {
        val[utility::conversions::to_string_t("revert_branch_name")] = ModelBase::toJson(revertBranchName_);
    }
    if(iidIsSet_) {
        val[utility::conversions::to_string_t("iid")] = ModelBase::toJson(iid_);
    }

    return val;
}
bool CreateCommitRevertResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cherry_pick_branch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cherry_pick_branch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCherryPickBranchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("revert_branch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("revert_branch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRevertBranchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIid(refVal);
        }
    }
    return ok;
}


std::string CreateCommitRevertResponse::getId() const
{
    return id_;
}

void CreateCommitRevertResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateCommitRevertResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateCommitRevertResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreateCommitRevertResponse::getMessage() const
{
    return message_;
}

void CreateCommitRevertResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CreateCommitRevertResponse::messageIsSet() const
{
    return messageIsSet_;
}

void CreateCommitRevertResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<std::string>& CreateCommitRevertResponse::getParentIds()
{
    return parentIds_;
}

void CreateCommitRevertResponse::setParentIds(const std::vector<std::string>& value)
{
    parentIds_ = value;
    parentIdsIsSet_ = true;
}

bool CreateCommitRevertResponse::parentIdsIsSet() const
{
    return parentIdsIsSet_;
}

void CreateCommitRevertResponse::unsetparentIds()
{
    parentIdsIsSet_ = false;
}

std::string CreateCommitRevertResponse::getAuthoredDate() const
{
    return authoredDate_;
}

void CreateCommitRevertResponse::setAuthoredDate(const std::string& value)
{
    authoredDate_ = value;
    authoredDateIsSet_ = true;
}

bool CreateCommitRevertResponse::authoredDateIsSet() const
{
    return authoredDateIsSet_;
}

void CreateCommitRevertResponse::unsetauthoredDate()
{
    authoredDateIsSet_ = false;
}

std::string CreateCommitRevertResponse::getAuthorName() const
{
    return authorName_;
}

void CreateCommitRevertResponse::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool CreateCommitRevertResponse::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void CreateCommitRevertResponse::unsetauthorName()
{
    authorNameIsSet_ = false;
}

std::string CreateCommitRevertResponse::getAuthorEmail() const
{
    return authorEmail_;
}

void CreateCommitRevertResponse::setAuthorEmail(const std::string& value)
{
    authorEmail_ = value;
    authorEmailIsSet_ = true;
}

bool CreateCommitRevertResponse::authorEmailIsSet() const
{
    return authorEmailIsSet_;
}

void CreateCommitRevertResponse::unsetauthorEmail()
{
    authorEmailIsSet_ = false;
}

std::string CreateCommitRevertResponse::getCommittedDate() const
{
    return committedDate_;
}

void CreateCommitRevertResponse::setCommittedDate(const std::string& value)
{
    committedDate_ = value;
    committedDateIsSet_ = true;
}

bool CreateCommitRevertResponse::committedDateIsSet() const
{
    return committedDateIsSet_;
}

void CreateCommitRevertResponse::unsetcommittedDate()
{
    committedDateIsSet_ = false;
}

std::string CreateCommitRevertResponse::getCommitterName() const
{
    return committerName_;
}

void CreateCommitRevertResponse::setCommitterName(const std::string& value)
{
    committerName_ = value;
    committerNameIsSet_ = true;
}

bool CreateCommitRevertResponse::committerNameIsSet() const
{
    return committerNameIsSet_;
}

void CreateCommitRevertResponse::unsetcommitterName()
{
    committerNameIsSet_ = false;
}

std::string CreateCommitRevertResponse::getCommitterEmail() const
{
    return committerEmail_;
}

void CreateCommitRevertResponse::setCommitterEmail(const std::string& value)
{
    committerEmail_ = value;
    committerEmailIsSet_ = true;
}

bool CreateCommitRevertResponse::committerEmailIsSet() const
{
    return committerEmailIsSet_;
}

void CreateCommitRevertResponse::unsetcommitterEmail()
{
    committerEmailIsSet_ = false;
}

bool CreateCommitRevertResponse::isOpenGpgVerified() const
{
    return openGpgVerified_;
}

void CreateCommitRevertResponse::setOpenGpgVerified(bool value)
{
    openGpgVerified_ = value;
    openGpgVerifiedIsSet_ = true;
}

bool CreateCommitRevertResponse::openGpgVerifiedIsSet() const
{
    return openGpgVerifiedIsSet_;
}

void CreateCommitRevertResponse::unsetopenGpgVerified()
{
    openGpgVerifiedIsSet_ = false;
}

int32_t CreateCommitRevertResponse::getVerificationStatus() const
{
    return verificationStatus_;
}

void CreateCommitRevertResponse::setVerificationStatus(int32_t value)
{
    verificationStatus_ = value;
    verificationStatusIsSet_ = true;
}

bool CreateCommitRevertResponse::verificationStatusIsSet() const
{
    return verificationStatusIsSet_;
}

void CreateCommitRevertResponse::unsetverificationStatus()
{
    verificationStatusIsSet_ = false;
}

std::string CreateCommitRevertResponse::getGpgPrimaryKeyId() const
{
    return gpgPrimaryKeyId_;
}

void CreateCommitRevertResponse::setGpgPrimaryKeyId(const std::string& value)
{
    gpgPrimaryKeyId_ = value;
    gpgPrimaryKeyIdIsSet_ = true;
}

bool CreateCommitRevertResponse::gpgPrimaryKeyIdIsSet() const
{
    return gpgPrimaryKeyIdIsSet_;
}

void CreateCommitRevertResponse::unsetgpgPrimaryKeyId()
{
    gpgPrimaryKeyIdIsSet_ = false;
}

std::string CreateCommitRevertResponse::getName() const
{
    return name_;
}

void CreateCommitRevertResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateCommitRevertResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateCommitRevertResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateCommitRevertResponse::getGpgNickName() const
{
    return gpgNickName_;
}

void CreateCommitRevertResponse::setGpgNickName(const std::string& value)
{
    gpgNickName_ = value;
    gpgNickNameIsSet_ = true;
}

bool CreateCommitRevertResponse::gpgNickNameIsSet() const
{
    return gpgNickNameIsSet_;
}

void CreateCommitRevertResponse::unsetgpgNickName()
{
    gpgNickNameIsSet_ = false;
}

std::string CreateCommitRevertResponse::getGpgTenantName() const
{
    return gpgTenantName_;
}

void CreateCommitRevertResponse::setGpgTenantName(const std::string& value)
{
    gpgTenantName_ = value;
    gpgTenantNameIsSet_ = true;
}

bool CreateCommitRevertResponse::gpgTenantNameIsSet() const
{
    return gpgTenantNameIsSet_;
}

void CreateCommitRevertResponse::unsetgpgTenantName()
{
    gpgTenantNameIsSet_ = false;
}

std::string CreateCommitRevertResponse::getGpgUserName() const
{
    return gpgUserName_;
}

void CreateCommitRevertResponse::setGpgUserName(const std::string& value)
{
    gpgUserName_ = value;
    gpgUserNameIsSet_ = true;
}

bool CreateCommitRevertResponse::gpgUserNameIsSet() const
{
    return gpgUserNameIsSet_;
}

void CreateCommitRevertResponse::unsetgpgUserName()
{
    gpgUserNameIsSet_ = false;
}

std::string CreateCommitRevertResponse::getShortId() const
{
    return shortId_;
}

void CreateCommitRevertResponse::setShortId(const std::string& value)
{
    shortId_ = value;
    shortIdIsSet_ = true;
}

bool CreateCommitRevertResponse::shortIdIsSet() const
{
    return shortIdIsSet_;
}

void CreateCommitRevertResponse::unsetshortId()
{
    shortIdIsSet_ = false;
}

std::string CreateCommitRevertResponse::getCreatedAt() const
{
    return createdAt_;
}

void CreateCommitRevertResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CreateCommitRevertResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CreateCommitRevertResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string CreateCommitRevertResponse::getTitle() const
{
    return title_;
}

void CreateCommitRevertResponse::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool CreateCommitRevertResponse::titleIsSet() const
{
    return titleIsSet_;
}

void CreateCommitRevertResponse::unsettitle()
{
    titleIsSet_ = false;
}

std::string CreateCommitRevertResponse::getAuthorAvatarUrl() const
{
    return authorAvatarUrl_;
}

void CreateCommitRevertResponse::setAuthorAvatarUrl(const std::string& value)
{
    authorAvatarUrl_ = value;
    authorAvatarUrlIsSet_ = true;
}

bool CreateCommitRevertResponse::authorAvatarUrlIsSet() const
{
    return authorAvatarUrlIsSet_;
}

void CreateCommitRevertResponse::unsetauthorAvatarUrl()
{
    authorAvatarUrlIsSet_ = false;
}

std::string CreateCommitRevertResponse::getCommitterAvatarUrl() const
{
    return committerAvatarUrl_;
}

void CreateCommitRevertResponse::setCommitterAvatarUrl(const std::string& value)
{
    committerAvatarUrl_ = value;
    committerAvatarUrlIsSet_ = true;
}

bool CreateCommitRevertResponse::committerAvatarUrlIsSet() const
{
    return committerAvatarUrlIsSet_;
}

void CreateCommitRevertResponse::unsetcommitterAvatarUrl()
{
    committerAvatarUrlIsSet_ = false;
}

std::string CreateCommitRevertResponse::getState() const
{
    return state_;
}

void CreateCommitRevertResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool CreateCommitRevertResponse::stateIsSet() const
{
    return stateIsSet_;
}

void CreateCommitRevertResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string CreateCommitRevertResponse::getCherryPickBranchName() const
{
    return cherryPickBranchName_;
}

void CreateCommitRevertResponse::setCherryPickBranchName(const std::string& value)
{
    cherryPickBranchName_ = value;
    cherryPickBranchNameIsSet_ = true;
}

bool CreateCommitRevertResponse::cherryPickBranchNameIsSet() const
{
    return cherryPickBranchNameIsSet_;
}

void CreateCommitRevertResponse::unsetcherryPickBranchName()
{
    cherryPickBranchNameIsSet_ = false;
}

std::string CreateCommitRevertResponse::getRevertBranchName() const
{
    return revertBranchName_;
}

void CreateCommitRevertResponse::setRevertBranchName(const std::string& value)
{
    revertBranchName_ = value;
    revertBranchNameIsSet_ = true;
}

bool CreateCommitRevertResponse::revertBranchNameIsSet() const
{
    return revertBranchNameIsSet_;
}

void CreateCommitRevertResponse::unsetrevertBranchName()
{
    revertBranchNameIsSet_ = false;
}

int32_t CreateCommitRevertResponse::getIid() const
{
    return iid_;
}

void CreateCommitRevertResponse::setIid(int32_t value)
{
    iid_ = value;
    iidIsSet_ = true;
}

bool CreateCommitRevertResponse::iidIsSet() const
{
    return iidIsSet_;
}

void CreateCommitRevertResponse::unsetiid()
{
    iidIsSet_ = false;
}

}
}
}
}
}


