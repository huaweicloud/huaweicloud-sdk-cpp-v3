

#include "huaweicloud/codehub/v4/model/RenameFileBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




RenameFileBodyDto::RenameFileBodyDto()
{
    filePath_ = "";
    filePathIsSet_ = false;
    branchName_ = "";
    branchNameIsSet_ = false;
    commitMessage_ = "";
    commitMessageIsSet_ = false;
    startBranch_ = "";
    startBranchIsSet_ = false;
    authorEmail_ = "";
    authorEmailIsSet_ = false;
    authorName_ = "";
    authorNameIsSet_ = false;
    previousPath_ = "";
    previousPathIsSet_ = false;
    inferContent_ = false;
    inferContentIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    encoding_ = "";
    encodingIsSet_ = false;
    lastCommitId_ = "";
    lastCommitIdIsSet_ = false;
}

RenameFileBodyDto::~RenameFileBodyDto() = default;

void RenameFileBodyDto::validate()
{
}

web::json::value RenameFileBodyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(branchNameIsSet_) {
        val[utility::conversions::to_string_t("branch_name")] = ModelBase::toJson(branchName_);
    }
    if(commitMessageIsSet_) {
        val[utility::conversions::to_string_t("commit_message")] = ModelBase::toJson(commitMessage_);
    }
    if(startBranchIsSet_) {
        val[utility::conversions::to_string_t("start_branch")] = ModelBase::toJson(startBranch_);
    }
    if(authorEmailIsSet_) {
        val[utility::conversions::to_string_t("author_email")] = ModelBase::toJson(authorEmail_);
    }
    if(authorNameIsSet_) {
        val[utility::conversions::to_string_t("author_name")] = ModelBase::toJson(authorName_);
    }
    if(previousPathIsSet_) {
        val[utility::conversions::to_string_t("previous_path")] = ModelBase::toJson(previousPath_);
    }
    if(inferContentIsSet_) {
        val[utility::conversions::to_string_t("infer_content")] = ModelBase::toJson(inferContent_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(encodingIsSet_) {
        val[utility::conversions::to_string_t("encoding")] = ModelBase::toJson(encoding_);
    }
    if(lastCommitIdIsSet_) {
        val[utility::conversions::to_string_t("last_commit_id")] = ModelBase::toJson(lastCommitId_);
    }

    return val;
}
bool RenameFileBodyDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartBranch(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("author_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("previous_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("previous_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreviousPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("infer_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("infer_content"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInferContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encoding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encoding"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncoding(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_commit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_commit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastCommitId(refVal);
        }
    }
    return ok;
}


std::string RenameFileBodyDto::getFilePath() const
{
    return filePath_;
}

void RenameFileBodyDto::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool RenameFileBodyDto::filePathIsSet() const
{
    return filePathIsSet_;
}

void RenameFileBodyDto::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string RenameFileBodyDto::getBranchName() const
{
    return branchName_;
}

void RenameFileBodyDto::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool RenameFileBodyDto::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void RenameFileBodyDto::unsetbranchName()
{
    branchNameIsSet_ = false;
}

std::string RenameFileBodyDto::getCommitMessage() const
{
    return commitMessage_;
}

void RenameFileBodyDto::setCommitMessage(const std::string& value)
{
    commitMessage_ = value;
    commitMessageIsSet_ = true;
}

bool RenameFileBodyDto::commitMessageIsSet() const
{
    return commitMessageIsSet_;
}

void RenameFileBodyDto::unsetcommitMessage()
{
    commitMessageIsSet_ = false;
}

std::string RenameFileBodyDto::getStartBranch() const
{
    return startBranch_;
}

void RenameFileBodyDto::setStartBranch(const std::string& value)
{
    startBranch_ = value;
    startBranchIsSet_ = true;
}

bool RenameFileBodyDto::startBranchIsSet() const
{
    return startBranchIsSet_;
}

void RenameFileBodyDto::unsetstartBranch()
{
    startBranchIsSet_ = false;
}

std::string RenameFileBodyDto::getAuthorEmail() const
{
    return authorEmail_;
}

void RenameFileBodyDto::setAuthorEmail(const std::string& value)
{
    authorEmail_ = value;
    authorEmailIsSet_ = true;
}

bool RenameFileBodyDto::authorEmailIsSet() const
{
    return authorEmailIsSet_;
}

void RenameFileBodyDto::unsetauthorEmail()
{
    authorEmailIsSet_ = false;
}

std::string RenameFileBodyDto::getAuthorName() const
{
    return authorName_;
}

void RenameFileBodyDto::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool RenameFileBodyDto::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void RenameFileBodyDto::unsetauthorName()
{
    authorNameIsSet_ = false;
}

std::string RenameFileBodyDto::getPreviousPath() const
{
    return previousPath_;
}

void RenameFileBodyDto::setPreviousPath(const std::string& value)
{
    previousPath_ = value;
    previousPathIsSet_ = true;
}

bool RenameFileBodyDto::previousPathIsSet() const
{
    return previousPathIsSet_;
}

void RenameFileBodyDto::unsetpreviousPath()
{
    previousPathIsSet_ = false;
}

bool RenameFileBodyDto::isInferContent() const
{
    return inferContent_;
}

void RenameFileBodyDto::setInferContent(bool value)
{
    inferContent_ = value;
    inferContentIsSet_ = true;
}

bool RenameFileBodyDto::inferContentIsSet() const
{
    return inferContentIsSet_;
}

void RenameFileBodyDto::unsetinferContent()
{
    inferContentIsSet_ = false;
}

std::string RenameFileBodyDto::getContent() const
{
    return content_;
}

void RenameFileBodyDto::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool RenameFileBodyDto::contentIsSet() const
{
    return contentIsSet_;
}

void RenameFileBodyDto::unsetcontent()
{
    contentIsSet_ = false;
}

std::string RenameFileBodyDto::getEncoding() const
{
    return encoding_;
}

void RenameFileBodyDto::setEncoding(const std::string& value)
{
    encoding_ = value;
    encodingIsSet_ = true;
}

bool RenameFileBodyDto::encodingIsSet() const
{
    return encodingIsSet_;
}

void RenameFileBodyDto::unsetencoding()
{
    encodingIsSet_ = false;
}

std::string RenameFileBodyDto::getLastCommitId() const
{
    return lastCommitId_;
}

void RenameFileBodyDto::setLastCommitId(const std::string& value)
{
    lastCommitId_ = value;
    lastCommitIdIsSet_ = true;
}

bool RenameFileBodyDto::lastCommitIdIsSet() const
{
    return lastCommitIdIsSet_;
}

void RenameFileBodyDto::unsetlastCommitId()
{
    lastCommitIdIsSet_ = false;
}

}
}
}
}
}


