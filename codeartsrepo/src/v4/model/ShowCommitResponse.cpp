

#include "huaweicloud/codeartsrepo/v4/model/ShowCommitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowCommitResponse::ShowCommitResponse()
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
    statsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    lastPipelineIsSet_ = false;
    projectId_ = 0;
    projectIdIsSet_ = false;
    mergeRequestIsSet_ = false;
    codeChangesIsSet_ = false;
}

ShowCommitResponse::~ShowCommitResponse() = default;

void ShowCommitResponse::validate()
{
}

web::json::value ShowCommitResponse::toJson() const
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
    if(statsIsSet_) {
        val[utility::conversions::to_string_t("stats")] = ModelBase::toJson(stats_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(lastPipelineIsSet_) {
        val[utility::conversions::to_string_t("last_pipeline")] = ModelBase::toJson(lastPipeline_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(mergeRequestIsSet_) {
        val[utility::conversions::to_string_t("merge_request")] = ModelBase::toJson(mergeRequest_);
    }
    if(codeChangesIsSet_) {
        val[utility::conversions::to_string_t("code_changes")] = ModelBase::toJson(codeChanges_);
    }

    return val;
}
bool ShowCommitResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("stats"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stats"));
        if(!fieldValue.is_null())
        {
            CommitStatsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStats(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_pipeline"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_pipeline"));
        if(!fieldValue.is_null())
        {
            PipelineBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastPipeline(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request"));
        if(!fieldValue.is_null())
        {
            SimpleMergeRequestDetailDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequest(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_changes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_changes"));
        if(!fieldValue.is_null())
        {
            std::vector<SimpleDiffDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeChanges(refVal);
        }
    }
    return ok;
}


std::string ShowCommitResponse::getId() const
{
    return id_;
}

void ShowCommitResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowCommitResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowCommitResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowCommitResponse::getMessage() const
{
    return message_;
}

void ShowCommitResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowCommitResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowCommitResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<std::string>& ShowCommitResponse::getParentIds()
{
    return parentIds_;
}

void ShowCommitResponse::setParentIds(const std::vector<std::string>& value)
{
    parentIds_ = value;
    parentIdsIsSet_ = true;
}

bool ShowCommitResponse::parentIdsIsSet() const
{
    return parentIdsIsSet_;
}

void ShowCommitResponse::unsetparentIds()
{
    parentIdsIsSet_ = false;
}

std::string ShowCommitResponse::getAuthoredDate() const
{
    return authoredDate_;
}

void ShowCommitResponse::setAuthoredDate(const std::string& value)
{
    authoredDate_ = value;
    authoredDateIsSet_ = true;
}

bool ShowCommitResponse::authoredDateIsSet() const
{
    return authoredDateIsSet_;
}

void ShowCommitResponse::unsetauthoredDate()
{
    authoredDateIsSet_ = false;
}

std::string ShowCommitResponse::getAuthorName() const
{
    return authorName_;
}

void ShowCommitResponse::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool ShowCommitResponse::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void ShowCommitResponse::unsetauthorName()
{
    authorNameIsSet_ = false;
}

std::string ShowCommitResponse::getAuthorEmail() const
{
    return authorEmail_;
}

void ShowCommitResponse::setAuthorEmail(const std::string& value)
{
    authorEmail_ = value;
    authorEmailIsSet_ = true;
}

bool ShowCommitResponse::authorEmailIsSet() const
{
    return authorEmailIsSet_;
}

void ShowCommitResponse::unsetauthorEmail()
{
    authorEmailIsSet_ = false;
}

std::string ShowCommitResponse::getCommittedDate() const
{
    return committedDate_;
}

void ShowCommitResponse::setCommittedDate(const std::string& value)
{
    committedDate_ = value;
    committedDateIsSet_ = true;
}

bool ShowCommitResponse::committedDateIsSet() const
{
    return committedDateIsSet_;
}

void ShowCommitResponse::unsetcommittedDate()
{
    committedDateIsSet_ = false;
}

std::string ShowCommitResponse::getCommitterName() const
{
    return committerName_;
}

void ShowCommitResponse::setCommitterName(const std::string& value)
{
    committerName_ = value;
    committerNameIsSet_ = true;
}

bool ShowCommitResponse::committerNameIsSet() const
{
    return committerNameIsSet_;
}

void ShowCommitResponse::unsetcommitterName()
{
    committerNameIsSet_ = false;
}

std::string ShowCommitResponse::getCommitterEmail() const
{
    return committerEmail_;
}

void ShowCommitResponse::setCommitterEmail(const std::string& value)
{
    committerEmail_ = value;
    committerEmailIsSet_ = true;
}

bool ShowCommitResponse::committerEmailIsSet() const
{
    return committerEmailIsSet_;
}

void ShowCommitResponse::unsetcommitterEmail()
{
    committerEmailIsSet_ = false;
}

bool ShowCommitResponse::isOpenGpgVerified() const
{
    return openGpgVerified_;
}

void ShowCommitResponse::setOpenGpgVerified(bool value)
{
    openGpgVerified_ = value;
    openGpgVerifiedIsSet_ = true;
}

bool ShowCommitResponse::openGpgVerifiedIsSet() const
{
    return openGpgVerifiedIsSet_;
}

void ShowCommitResponse::unsetopenGpgVerified()
{
    openGpgVerifiedIsSet_ = false;
}

int32_t ShowCommitResponse::getVerificationStatus() const
{
    return verificationStatus_;
}

void ShowCommitResponse::setVerificationStatus(int32_t value)
{
    verificationStatus_ = value;
    verificationStatusIsSet_ = true;
}

bool ShowCommitResponse::verificationStatusIsSet() const
{
    return verificationStatusIsSet_;
}

void ShowCommitResponse::unsetverificationStatus()
{
    verificationStatusIsSet_ = false;
}

std::string ShowCommitResponse::getGpgPrimaryKeyId() const
{
    return gpgPrimaryKeyId_;
}

void ShowCommitResponse::setGpgPrimaryKeyId(const std::string& value)
{
    gpgPrimaryKeyId_ = value;
    gpgPrimaryKeyIdIsSet_ = true;
}

bool ShowCommitResponse::gpgPrimaryKeyIdIsSet() const
{
    return gpgPrimaryKeyIdIsSet_;
}

void ShowCommitResponse::unsetgpgPrimaryKeyId()
{
    gpgPrimaryKeyIdIsSet_ = false;
}

std::string ShowCommitResponse::getName() const
{
    return name_;
}

void ShowCommitResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowCommitResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowCommitResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowCommitResponse::getGpgNickName() const
{
    return gpgNickName_;
}

void ShowCommitResponse::setGpgNickName(const std::string& value)
{
    gpgNickName_ = value;
    gpgNickNameIsSet_ = true;
}

bool ShowCommitResponse::gpgNickNameIsSet() const
{
    return gpgNickNameIsSet_;
}

void ShowCommitResponse::unsetgpgNickName()
{
    gpgNickNameIsSet_ = false;
}

std::string ShowCommitResponse::getGpgTenantName() const
{
    return gpgTenantName_;
}

void ShowCommitResponse::setGpgTenantName(const std::string& value)
{
    gpgTenantName_ = value;
    gpgTenantNameIsSet_ = true;
}

bool ShowCommitResponse::gpgTenantNameIsSet() const
{
    return gpgTenantNameIsSet_;
}

void ShowCommitResponse::unsetgpgTenantName()
{
    gpgTenantNameIsSet_ = false;
}

std::string ShowCommitResponse::getGpgUserName() const
{
    return gpgUserName_;
}

void ShowCommitResponse::setGpgUserName(const std::string& value)
{
    gpgUserName_ = value;
    gpgUserNameIsSet_ = true;
}

bool ShowCommitResponse::gpgUserNameIsSet() const
{
    return gpgUserNameIsSet_;
}

void ShowCommitResponse::unsetgpgUserName()
{
    gpgUserNameIsSet_ = false;
}

std::string ShowCommitResponse::getShortId() const
{
    return shortId_;
}

void ShowCommitResponse::setShortId(const std::string& value)
{
    shortId_ = value;
    shortIdIsSet_ = true;
}

bool ShowCommitResponse::shortIdIsSet() const
{
    return shortIdIsSet_;
}

void ShowCommitResponse::unsetshortId()
{
    shortIdIsSet_ = false;
}

std::string ShowCommitResponse::getCreatedAt() const
{
    return createdAt_;
}

void ShowCommitResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowCommitResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowCommitResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowCommitResponse::getTitle() const
{
    return title_;
}

void ShowCommitResponse::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool ShowCommitResponse::titleIsSet() const
{
    return titleIsSet_;
}

void ShowCommitResponse::unsettitle()
{
    titleIsSet_ = false;
}

std::string ShowCommitResponse::getAuthorAvatarUrl() const
{
    return authorAvatarUrl_;
}

void ShowCommitResponse::setAuthorAvatarUrl(const std::string& value)
{
    authorAvatarUrl_ = value;
    authorAvatarUrlIsSet_ = true;
}

bool ShowCommitResponse::authorAvatarUrlIsSet() const
{
    return authorAvatarUrlIsSet_;
}

void ShowCommitResponse::unsetauthorAvatarUrl()
{
    authorAvatarUrlIsSet_ = false;
}

std::string ShowCommitResponse::getCommitterAvatarUrl() const
{
    return committerAvatarUrl_;
}

void ShowCommitResponse::setCommitterAvatarUrl(const std::string& value)
{
    committerAvatarUrl_ = value;
    committerAvatarUrlIsSet_ = true;
}

bool ShowCommitResponse::committerAvatarUrlIsSet() const
{
    return committerAvatarUrlIsSet_;
}

void ShowCommitResponse::unsetcommitterAvatarUrl()
{
    committerAvatarUrlIsSet_ = false;
}

std::vector<RelatedCommitSimpleDto>& ShowCommitResponse::getRelateUrl()
{
    return relateUrl_;
}

void ShowCommitResponse::setRelateUrl(const std::vector<RelatedCommitSimpleDto>& value)
{
    relateUrl_ = value;
    relateUrlIsSet_ = true;
}

bool ShowCommitResponse::relateUrlIsSet() const
{
    return relateUrlIsSet_;
}

void ShowCommitResponse::unsetrelateUrl()
{
    relateUrlIsSet_ = false;
}

std::string ShowCommitResponse::getNickName() const
{
    return nickName_;
}

void ShowCommitResponse::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool ShowCommitResponse::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void ShowCommitResponse::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string ShowCommitResponse::getTenantName() const
{
    return tenantName_;
}

void ShowCommitResponse::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool ShowCommitResponse::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void ShowCommitResponse::unsettenantName()
{
    tenantNameIsSet_ = false;
}

std::string ShowCommitResponse::getUserName() const
{
    return userName_;
}

void ShowCommitResponse::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ShowCommitResponse::userNameIsSet() const
{
    return userNameIsSet_;
}

void ShowCommitResponse::unsetuserName()
{
    userNameIsSet_ = false;
}

CommitStatsDto ShowCommitResponse::getStats() const
{
    return stats_;
}

void ShowCommitResponse::setStats(const CommitStatsDto& value)
{
    stats_ = value;
    statsIsSet_ = true;
}

bool ShowCommitResponse::statsIsSet() const
{
    return statsIsSet_;
}

void ShowCommitResponse::unsetstats()
{
    statsIsSet_ = false;
}

std::string ShowCommitResponse::getStatus() const
{
    return status_;
}

void ShowCommitResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowCommitResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowCommitResponse::unsetstatus()
{
    statusIsSet_ = false;
}

PipelineBasicDto ShowCommitResponse::getLastPipeline() const
{
    return lastPipeline_;
}

void ShowCommitResponse::setLastPipeline(const PipelineBasicDto& value)
{
    lastPipeline_ = value;
    lastPipelineIsSet_ = true;
}

bool ShowCommitResponse::lastPipelineIsSet() const
{
    return lastPipelineIsSet_;
}

void ShowCommitResponse::unsetlastPipeline()
{
    lastPipelineIsSet_ = false;
}

int32_t ShowCommitResponse::getProjectId() const
{
    return projectId_;
}

void ShowCommitResponse::setProjectId(int32_t value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowCommitResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowCommitResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

SimpleMergeRequestDetailDto ShowCommitResponse::getMergeRequest() const
{
    return mergeRequest_;
}

void ShowCommitResponse::setMergeRequest(const SimpleMergeRequestDetailDto& value)
{
    mergeRequest_ = value;
    mergeRequestIsSet_ = true;
}

bool ShowCommitResponse::mergeRequestIsSet() const
{
    return mergeRequestIsSet_;
}

void ShowCommitResponse::unsetmergeRequest()
{
    mergeRequestIsSet_ = false;
}

std::vector<SimpleDiffDto>& ShowCommitResponse::getCodeChanges()
{
    return codeChanges_;
}

void ShowCommitResponse::setCodeChanges(const std::vector<SimpleDiffDto>& value)
{
    codeChanges_ = value;
    codeChangesIsSet_ = true;
}

bool ShowCommitResponse::codeChangesIsSet() const
{
    return codeChangesIsSet_;
}

void ShowCommitResponse::unsetcodeChanges()
{
    codeChangesIsSet_ = false;
}

}
}
}
}
}


