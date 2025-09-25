

#include "huaweicloud/codehub/v4/model/UpdateFileBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateFileBodyDto::UpdateFileBodyDto()
{
    name_ = "";
    nameIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    branch_ = "";
    branchIsSet_ = false;
    commitMessage_ = "";
    commitMessageIsSet_ = false;
    authorEmail_ = "";
    authorEmailIsSet_ = false;
    authorName_ = "";
    authorNameIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    encoding_ = "";
    encodingIsSet_ = false;
    lastCommitId_ = "";
    lastCommitIdIsSet_ = false;
}

UpdateFileBodyDto::~UpdateFileBodyDto() = default;

void UpdateFileBodyDto::validate()
{
}

web::json::value UpdateFileBodyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
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
    if(authorNameIsSet_) {
        val[utility::conversions::to_string_t("author_name")] = ModelBase::toJson(authorName_);
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
bool UpdateFileBodyDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("author_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorName(refVal);
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


std::string UpdateFileBodyDto::getName() const
{
    return name_;
}

void UpdateFileBodyDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateFileBodyDto::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateFileBodyDto::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateFileBodyDto::getFilePath() const
{
    return filePath_;
}

void UpdateFileBodyDto::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool UpdateFileBodyDto::filePathIsSet() const
{
    return filePathIsSet_;
}

void UpdateFileBodyDto::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string UpdateFileBodyDto::getBranch() const
{
    return branch_;
}

void UpdateFileBodyDto::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool UpdateFileBodyDto::branchIsSet() const
{
    return branchIsSet_;
}

void UpdateFileBodyDto::unsetbranch()
{
    branchIsSet_ = false;
}

std::string UpdateFileBodyDto::getCommitMessage() const
{
    return commitMessage_;
}

void UpdateFileBodyDto::setCommitMessage(const std::string& value)
{
    commitMessage_ = value;
    commitMessageIsSet_ = true;
}

bool UpdateFileBodyDto::commitMessageIsSet() const
{
    return commitMessageIsSet_;
}

void UpdateFileBodyDto::unsetcommitMessage()
{
    commitMessageIsSet_ = false;
}

std::string UpdateFileBodyDto::getAuthorEmail() const
{
    return authorEmail_;
}

void UpdateFileBodyDto::setAuthorEmail(const std::string& value)
{
    authorEmail_ = value;
    authorEmailIsSet_ = true;
}

bool UpdateFileBodyDto::authorEmailIsSet() const
{
    return authorEmailIsSet_;
}

void UpdateFileBodyDto::unsetauthorEmail()
{
    authorEmailIsSet_ = false;
}

std::string UpdateFileBodyDto::getAuthorName() const
{
    return authorName_;
}

void UpdateFileBodyDto::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool UpdateFileBodyDto::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void UpdateFileBodyDto::unsetauthorName()
{
    authorNameIsSet_ = false;
}

std::string UpdateFileBodyDto::getContent() const
{
    return content_;
}

void UpdateFileBodyDto::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool UpdateFileBodyDto::contentIsSet() const
{
    return contentIsSet_;
}

void UpdateFileBodyDto::unsetcontent()
{
    contentIsSet_ = false;
}

std::string UpdateFileBodyDto::getEncoding() const
{
    return encoding_;
}

void UpdateFileBodyDto::setEncoding(const std::string& value)
{
    encoding_ = value;
    encodingIsSet_ = true;
}

bool UpdateFileBodyDto::encodingIsSet() const
{
    return encodingIsSet_;
}

void UpdateFileBodyDto::unsetencoding()
{
    encodingIsSet_ = false;
}

std::string UpdateFileBodyDto::getLastCommitId() const
{
    return lastCommitId_;
}

void UpdateFileBodyDto::setLastCommitId(const std::string& value)
{
    lastCommitId_ = value;
    lastCommitIdIsSet_ = true;
}

bool UpdateFileBodyDto::lastCommitIdIsSet() const
{
    return lastCommitIdIsSet_;
}

void UpdateFileBodyDto::unsetlastCommitId()
{
    lastCommitIdIsSet_ = false;
}

}
}
}
}
}


