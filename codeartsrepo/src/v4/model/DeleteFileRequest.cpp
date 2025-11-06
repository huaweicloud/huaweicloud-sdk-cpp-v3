

#include "huaweicloud/codeartsrepo/v4/model/DeleteFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




DeleteFileRequest::DeleteFileRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    authorName_ = "";
    authorNameIsSet_ = false;
    branch_ = "";
    branchIsSet_ = false;
    commitMessage_ = "";
    commitMessageIsSet_ = false;
    authorEmail_ = "";
    authorEmailIsSet_ = false;
}

DeleteFileRequest::~DeleteFileRequest() = default;

void DeleteFileRequest::validate()
{
}

web::json::value DeleteFileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(authorNameIsSet_) {
        val[utility::conversions::to_string_t("author_name")] = ModelBase::toJson(authorName_);
    }
    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(commitMessageIsSet_) {
        val[utility::conversions::to_string_t("commit_message")] = ModelBase::toJson(commitMessage_);
    }
    if(authorEmailIsSet_) {
        val[utility::conversions::to_string_t("author_email")] = ModelBase::toJson(authorEmail_);
    }

    return val;
}
bool DeleteFileRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitMessage(refVal);
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
    return ok;
}


int32_t DeleteFileRequest::getRepositoryId() const
{
    return repositoryId_;
}

void DeleteFileRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool DeleteFileRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void DeleteFileRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string DeleteFileRequest::getFilePath() const
{
    return filePath_;
}

void DeleteFileRequest::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool DeleteFileRequest::filePathIsSet() const
{
    return filePathIsSet_;
}

void DeleteFileRequest::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string DeleteFileRequest::getAuthorName() const
{
    return authorName_;
}

void DeleteFileRequest::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool DeleteFileRequest::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void DeleteFileRequest::unsetauthorName()
{
    authorNameIsSet_ = false;
}

std::string DeleteFileRequest::getBranch() const
{
    return branch_;
}

void DeleteFileRequest::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool DeleteFileRequest::branchIsSet() const
{
    return branchIsSet_;
}

void DeleteFileRequest::unsetbranch()
{
    branchIsSet_ = false;
}

std::string DeleteFileRequest::getCommitMessage() const
{
    return commitMessage_;
}

void DeleteFileRequest::setCommitMessage(const std::string& value)
{
    commitMessage_ = value;
    commitMessageIsSet_ = true;
}

bool DeleteFileRequest::commitMessageIsSet() const
{
    return commitMessageIsSet_;
}

void DeleteFileRequest::unsetcommitMessage()
{
    commitMessageIsSet_ = false;
}

std::string DeleteFileRequest::getAuthorEmail() const
{
    return authorEmail_;
}

void DeleteFileRequest::setAuthorEmail(const std::string& value)
{
    authorEmail_ = value;
    authorEmailIsSet_ = true;
}

bool DeleteFileRequest::authorEmailIsSet() const
{
    return authorEmailIsSet_;
}

void DeleteFileRequest::unsetauthorEmail()
{
    authorEmailIsSet_ = false;
}

}
}
}
}
}


