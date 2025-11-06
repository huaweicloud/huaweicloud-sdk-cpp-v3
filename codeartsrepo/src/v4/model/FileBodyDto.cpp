

#include "huaweicloud/codeartsrepo/v4/model/FileBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




FileBodyDto::FileBodyDto()
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
}

FileBodyDto::~FileBodyDto() = default;

void FileBodyDto::validate()
{
}

web::json::value FileBodyDto::toJson() const
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

    return val;
}
bool FileBodyDto::fromJson(const web::json::value& val)
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
    return ok;
}


std::string FileBodyDto::getName() const
{
    return name_;
}

void FileBodyDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool FileBodyDto::nameIsSet() const
{
    return nameIsSet_;
}

void FileBodyDto::unsetname()
{
    nameIsSet_ = false;
}

std::string FileBodyDto::getFilePath() const
{
    return filePath_;
}

void FileBodyDto::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool FileBodyDto::filePathIsSet() const
{
    return filePathIsSet_;
}

void FileBodyDto::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string FileBodyDto::getBranch() const
{
    return branch_;
}

void FileBodyDto::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool FileBodyDto::branchIsSet() const
{
    return branchIsSet_;
}

void FileBodyDto::unsetbranch()
{
    branchIsSet_ = false;
}

std::string FileBodyDto::getCommitMessage() const
{
    return commitMessage_;
}

void FileBodyDto::setCommitMessage(const std::string& value)
{
    commitMessage_ = value;
    commitMessageIsSet_ = true;
}

bool FileBodyDto::commitMessageIsSet() const
{
    return commitMessageIsSet_;
}

void FileBodyDto::unsetcommitMessage()
{
    commitMessageIsSet_ = false;
}

std::string FileBodyDto::getAuthorEmail() const
{
    return authorEmail_;
}

void FileBodyDto::setAuthorEmail(const std::string& value)
{
    authorEmail_ = value;
    authorEmailIsSet_ = true;
}

bool FileBodyDto::authorEmailIsSet() const
{
    return authorEmailIsSet_;
}

void FileBodyDto::unsetauthorEmail()
{
    authorEmailIsSet_ = false;
}

std::string FileBodyDto::getAuthorName() const
{
    return authorName_;
}

void FileBodyDto::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool FileBodyDto::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void FileBodyDto::unsetauthorName()
{
    authorNameIsSet_ = false;
}

std::string FileBodyDto::getContent() const
{
    return content_;
}

void FileBodyDto::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool FileBodyDto::contentIsSet() const
{
    return contentIsSet_;
}

void FileBodyDto::unsetcontent()
{
    contentIsSet_ = false;
}

std::string FileBodyDto::getEncoding() const
{
    return encoding_;
}

void FileBodyDto::setEncoding(const std::string& value)
{
    encoding_ = value;
    encodingIsSet_ = true;
}

bool FileBodyDto::encodingIsSet() const
{
    return encodingIsSet_;
}

void FileBodyDto::unsetencoding()
{
    encodingIsSet_ = false;
}

}
}
}
}
}


