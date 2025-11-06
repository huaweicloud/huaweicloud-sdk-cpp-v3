

#include "huaweicloud/codeartsrepo/v4/model/CreateCommitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateCommitResponse::CreateCommitResponse()
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

CreateCommitResponse::~CreateCommitResponse() = default;

void CreateCommitResponse::validate()
{
}

web::json::value CreateCommitResponse::toJson() const
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
bool CreateCommitResponse::fromJson(const web::json::value& val)
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


std::string CreateCommitResponse::getId() const
{
    return id_;
}

void CreateCommitResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateCommitResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateCommitResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreateCommitResponse::getMessage() const
{
    return message_;
}

void CreateCommitResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CreateCommitResponse::messageIsSet() const
{
    return messageIsSet_;
}

void CreateCommitResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<std::string>& CreateCommitResponse::getParentIds()
{
    return parentIds_;
}

void CreateCommitResponse::setParentIds(const std::vector<std::string>& value)
{
    parentIds_ = value;
    parentIdsIsSet_ = true;
}

bool CreateCommitResponse::parentIdsIsSet() const
{
    return parentIdsIsSet_;
}

void CreateCommitResponse::unsetparentIds()
{
    parentIdsIsSet_ = false;
}

std::string CreateCommitResponse::getAuthoredDate() const
{
    return authoredDate_;
}

void CreateCommitResponse::setAuthoredDate(const std::string& value)
{
    authoredDate_ = value;
    authoredDateIsSet_ = true;
}

bool CreateCommitResponse::authoredDateIsSet() const
{
    return authoredDateIsSet_;
}

void CreateCommitResponse::unsetauthoredDate()
{
    authoredDateIsSet_ = false;
}

std::string CreateCommitResponse::getAuthorName() const
{
    return authorName_;
}

void CreateCommitResponse::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool CreateCommitResponse::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void CreateCommitResponse::unsetauthorName()
{
    authorNameIsSet_ = false;
}

std::string CreateCommitResponse::getAuthorEmail() const
{
    return authorEmail_;
}

void CreateCommitResponse::setAuthorEmail(const std::string& value)
{
    authorEmail_ = value;
    authorEmailIsSet_ = true;
}

bool CreateCommitResponse::authorEmailIsSet() const
{
    return authorEmailIsSet_;
}

void CreateCommitResponse::unsetauthorEmail()
{
    authorEmailIsSet_ = false;
}

std::string CreateCommitResponse::getCommittedDate() const
{
    return committedDate_;
}

void CreateCommitResponse::setCommittedDate(const std::string& value)
{
    committedDate_ = value;
    committedDateIsSet_ = true;
}

bool CreateCommitResponse::committedDateIsSet() const
{
    return committedDateIsSet_;
}

void CreateCommitResponse::unsetcommittedDate()
{
    committedDateIsSet_ = false;
}

std::string CreateCommitResponse::getCommitterName() const
{
    return committerName_;
}

void CreateCommitResponse::setCommitterName(const std::string& value)
{
    committerName_ = value;
    committerNameIsSet_ = true;
}

bool CreateCommitResponse::committerNameIsSet() const
{
    return committerNameIsSet_;
}

void CreateCommitResponse::unsetcommitterName()
{
    committerNameIsSet_ = false;
}

std::string CreateCommitResponse::getCommitterEmail() const
{
    return committerEmail_;
}

void CreateCommitResponse::setCommitterEmail(const std::string& value)
{
    committerEmail_ = value;
    committerEmailIsSet_ = true;
}

bool CreateCommitResponse::committerEmailIsSet() const
{
    return committerEmailIsSet_;
}

void CreateCommitResponse::unsetcommitterEmail()
{
    committerEmailIsSet_ = false;
}

bool CreateCommitResponse::isOpenGpgVerified() const
{
    return openGpgVerified_;
}

void CreateCommitResponse::setOpenGpgVerified(bool value)
{
    openGpgVerified_ = value;
    openGpgVerifiedIsSet_ = true;
}

bool CreateCommitResponse::openGpgVerifiedIsSet() const
{
    return openGpgVerifiedIsSet_;
}

void CreateCommitResponse::unsetopenGpgVerified()
{
    openGpgVerifiedIsSet_ = false;
}

int32_t CreateCommitResponse::getVerificationStatus() const
{
    return verificationStatus_;
}

void CreateCommitResponse::setVerificationStatus(int32_t value)
{
    verificationStatus_ = value;
    verificationStatusIsSet_ = true;
}

bool CreateCommitResponse::verificationStatusIsSet() const
{
    return verificationStatusIsSet_;
}

void CreateCommitResponse::unsetverificationStatus()
{
    verificationStatusIsSet_ = false;
}

std::string CreateCommitResponse::getGpgPrimaryKeyId() const
{
    return gpgPrimaryKeyId_;
}

void CreateCommitResponse::setGpgPrimaryKeyId(const std::string& value)
{
    gpgPrimaryKeyId_ = value;
    gpgPrimaryKeyIdIsSet_ = true;
}

bool CreateCommitResponse::gpgPrimaryKeyIdIsSet() const
{
    return gpgPrimaryKeyIdIsSet_;
}

void CreateCommitResponse::unsetgpgPrimaryKeyId()
{
    gpgPrimaryKeyIdIsSet_ = false;
}

std::string CreateCommitResponse::getName() const
{
    return name_;
}

void CreateCommitResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateCommitResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateCommitResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateCommitResponse::getGpgNickName() const
{
    return gpgNickName_;
}

void CreateCommitResponse::setGpgNickName(const std::string& value)
{
    gpgNickName_ = value;
    gpgNickNameIsSet_ = true;
}

bool CreateCommitResponse::gpgNickNameIsSet() const
{
    return gpgNickNameIsSet_;
}

void CreateCommitResponse::unsetgpgNickName()
{
    gpgNickNameIsSet_ = false;
}

std::string CreateCommitResponse::getGpgTenantName() const
{
    return gpgTenantName_;
}

void CreateCommitResponse::setGpgTenantName(const std::string& value)
{
    gpgTenantName_ = value;
    gpgTenantNameIsSet_ = true;
}

bool CreateCommitResponse::gpgTenantNameIsSet() const
{
    return gpgTenantNameIsSet_;
}

void CreateCommitResponse::unsetgpgTenantName()
{
    gpgTenantNameIsSet_ = false;
}

std::string CreateCommitResponse::getGpgUserName() const
{
    return gpgUserName_;
}

void CreateCommitResponse::setGpgUserName(const std::string& value)
{
    gpgUserName_ = value;
    gpgUserNameIsSet_ = true;
}

bool CreateCommitResponse::gpgUserNameIsSet() const
{
    return gpgUserNameIsSet_;
}

void CreateCommitResponse::unsetgpgUserName()
{
    gpgUserNameIsSet_ = false;
}

std::string CreateCommitResponse::getShortId() const
{
    return shortId_;
}

void CreateCommitResponse::setShortId(const std::string& value)
{
    shortId_ = value;
    shortIdIsSet_ = true;
}

bool CreateCommitResponse::shortIdIsSet() const
{
    return shortIdIsSet_;
}

void CreateCommitResponse::unsetshortId()
{
    shortIdIsSet_ = false;
}

std::string CreateCommitResponse::getCreatedAt() const
{
    return createdAt_;
}

void CreateCommitResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CreateCommitResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CreateCommitResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string CreateCommitResponse::getTitle() const
{
    return title_;
}

void CreateCommitResponse::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool CreateCommitResponse::titleIsSet() const
{
    return titleIsSet_;
}

void CreateCommitResponse::unsettitle()
{
    titleIsSet_ = false;
}

std::string CreateCommitResponse::getAuthorAvatarUrl() const
{
    return authorAvatarUrl_;
}

void CreateCommitResponse::setAuthorAvatarUrl(const std::string& value)
{
    authorAvatarUrl_ = value;
    authorAvatarUrlIsSet_ = true;
}

bool CreateCommitResponse::authorAvatarUrlIsSet() const
{
    return authorAvatarUrlIsSet_;
}

void CreateCommitResponse::unsetauthorAvatarUrl()
{
    authorAvatarUrlIsSet_ = false;
}

std::string CreateCommitResponse::getCommitterAvatarUrl() const
{
    return committerAvatarUrl_;
}

void CreateCommitResponse::setCommitterAvatarUrl(const std::string& value)
{
    committerAvatarUrl_ = value;
    committerAvatarUrlIsSet_ = true;
}

bool CreateCommitResponse::committerAvatarUrlIsSet() const
{
    return committerAvatarUrlIsSet_;
}

void CreateCommitResponse::unsetcommitterAvatarUrl()
{
    committerAvatarUrlIsSet_ = false;
}

std::vector<RelatedCommitSimpleDto>& CreateCommitResponse::getRelateUrl()
{
    return relateUrl_;
}

void CreateCommitResponse::setRelateUrl(const std::vector<RelatedCommitSimpleDto>& value)
{
    relateUrl_ = value;
    relateUrlIsSet_ = true;
}

bool CreateCommitResponse::relateUrlIsSet() const
{
    return relateUrlIsSet_;
}

void CreateCommitResponse::unsetrelateUrl()
{
    relateUrlIsSet_ = false;
}

std::string CreateCommitResponse::getNickName() const
{
    return nickName_;
}

void CreateCommitResponse::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool CreateCommitResponse::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void CreateCommitResponse::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string CreateCommitResponse::getTenantName() const
{
    return tenantName_;
}

void CreateCommitResponse::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool CreateCommitResponse::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void CreateCommitResponse::unsettenantName()
{
    tenantNameIsSet_ = false;
}

std::string CreateCommitResponse::getUserName() const
{
    return userName_;
}

void CreateCommitResponse::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool CreateCommitResponse::userNameIsSet() const
{
    return userNameIsSet_;
}

void CreateCommitResponse::unsetuserName()
{
    userNameIsSet_ = false;
}

CommitStatsDto CreateCommitResponse::getStats() const
{
    return stats_;
}

void CreateCommitResponse::setStats(const CommitStatsDto& value)
{
    stats_ = value;
    statsIsSet_ = true;
}

bool CreateCommitResponse::statsIsSet() const
{
    return statsIsSet_;
}

void CreateCommitResponse::unsetstats()
{
    statsIsSet_ = false;
}

std::string CreateCommitResponse::getStatus() const
{
    return status_;
}

void CreateCommitResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateCommitResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateCommitResponse::unsetstatus()
{
    statusIsSet_ = false;
}

PipelineBasicDto CreateCommitResponse::getLastPipeline() const
{
    return lastPipeline_;
}

void CreateCommitResponse::setLastPipeline(const PipelineBasicDto& value)
{
    lastPipeline_ = value;
    lastPipelineIsSet_ = true;
}

bool CreateCommitResponse::lastPipelineIsSet() const
{
    return lastPipelineIsSet_;
}

void CreateCommitResponse::unsetlastPipeline()
{
    lastPipelineIsSet_ = false;
}

int32_t CreateCommitResponse::getProjectId() const
{
    return projectId_;
}

void CreateCommitResponse::setProjectId(int32_t value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateCommitResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateCommitResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

SimpleMergeRequestDetailDto CreateCommitResponse::getMergeRequest() const
{
    return mergeRequest_;
}

void CreateCommitResponse::setMergeRequest(const SimpleMergeRequestDetailDto& value)
{
    mergeRequest_ = value;
    mergeRequestIsSet_ = true;
}

bool CreateCommitResponse::mergeRequestIsSet() const
{
    return mergeRequestIsSet_;
}

void CreateCommitResponse::unsetmergeRequest()
{
    mergeRequestIsSet_ = false;
}

std::vector<SimpleDiffDto>& CreateCommitResponse::getCodeChanges()
{
    return codeChanges_;
}

void CreateCommitResponse::setCodeChanges(const std::vector<SimpleDiffDto>& value)
{
    codeChanges_ = value;
    codeChangesIsSet_ = true;
}

bool CreateCommitResponse::codeChangesIsSet() const
{
    return codeChangesIsSet_;
}

void CreateCommitResponse::unsetcodeChanges()
{
    codeChangesIsSet_ = false;
}

}
}
}
}
}


