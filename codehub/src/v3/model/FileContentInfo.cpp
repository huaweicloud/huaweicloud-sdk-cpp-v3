

#include "huaweicloud/codehub/v3/model/FileContentInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




FileContentInfo::FileContentInfo()
{
    fileName_ = "";
    fileNameIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    encoding_ = "";
    encodingIsSet_ = false;
    contentSha256_ = "";
    contentSha256IsSet_ = false;
    ref_ = "";
    refIsSet_ = false;
    blobId_ = "";
    blobIdIsSet_ = false;
    commitId_ = "";
    commitIdIsSet_ = false;
    lastCommitId_ = "";
    lastCommitIdIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
}

FileContentInfo::~FileContentInfo() = default;

void FileContentInfo::validate()
{
}

web::json::value FileContentInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(encodingIsSet_) {
        val[utility::conversions::to_string_t("encoding")] = ModelBase::toJson(encoding_);
    }
    if(contentSha256IsSet_) {
        val[utility::conversions::to_string_t("content_sha256")] = ModelBase::toJson(contentSha256_);
    }
    if(refIsSet_) {
        val[utility::conversions::to_string_t("ref")] = ModelBase::toJson(ref_);
    }
    if(blobIdIsSet_) {
        val[utility::conversions::to_string_t("blob_id")] = ModelBase::toJson(blobId_);
    }
    if(commitIdIsSet_) {
        val[utility::conversions::to_string_t("commit_id")] = ModelBase::toJson(commitId_);
    }
    if(lastCommitIdIsSet_) {
        val[utility::conversions::to_string_t("last_commit_id")] = ModelBase::toJson(lastCommitId_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }

    return val;
}
bool FileContentInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("content_sha256"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_sha256"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentSha256(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blob_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blob_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    return ok;
}


std::string FileContentInfo::getFileName() const
{
    return fileName_;
}

void FileContentInfo::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool FileContentInfo::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void FileContentInfo::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string FileContentInfo::getFilePath() const
{
    return filePath_;
}

void FileContentInfo::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool FileContentInfo::filePathIsSet() const
{
    return filePathIsSet_;
}

void FileContentInfo::unsetfilePath()
{
    filePathIsSet_ = false;
}

int32_t FileContentInfo::getSize() const
{
    return size_;
}

void FileContentInfo::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool FileContentInfo::sizeIsSet() const
{
    return sizeIsSet_;
}

void FileContentInfo::unsetsize()
{
    sizeIsSet_ = false;
}

std::string FileContentInfo::getEncoding() const
{
    return encoding_;
}

void FileContentInfo::setEncoding(const std::string& value)
{
    encoding_ = value;
    encodingIsSet_ = true;
}

bool FileContentInfo::encodingIsSet() const
{
    return encodingIsSet_;
}

void FileContentInfo::unsetencoding()
{
    encodingIsSet_ = false;
}

std::string FileContentInfo::getContentSha256() const
{
    return contentSha256_;
}

void FileContentInfo::setContentSha256(const std::string& value)
{
    contentSha256_ = value;
    contentSha256IsSet_ = true;
}

bool FileContentInfo::contentSha256IsSet() const
{
    return contentSha256IsSet_;
}

void FileContentInfo::unsetcontentSha256()
{
    contentSha256IsSet_ = false;
}

std::string FileContentInfo::getRef() const
{
    return ref_;
}

void FileContentInfo::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool FileContentInfo::refIsSet() const
{
    return refIsSet_;
}

void FileContentInfo::unsetref()
{
    refIsSet_ = false;
}

std::string FileContentInfo::getBlobId() const
{
    return blobId_;
}

void FileContentInfo::setBlobId(const std::string& value)
{
    blobId_ = value;
    blobIdIsSet_ = true;
}

bool FileContentInfo::blobIdIsSet() const
{
    return blobIdIsSet_;
}

void FileContentInfo::unsetblobId()
{
    blobIdIsSet_ = false;
}

std::string FileContentInfo::getCommitId() const
{
    return commitId_;
}

void FileContentInfo::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool FileContentInfo::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void FileContentInfo::unsetcommitId()
{
    commitIdIsSet_ = false;
}

std::string FileContentInfo::getLastCommitId() const
{
    return lastCommitId_;
}

void FileContentInfo::setLastCommitId(const std::string& value)
{
    lastCommitId_ = value;
    lastCommitIdIsSet_ = true;
}

bool FileContentInfo::lastCommitIdIsSet() const
{
    return lastCommitIdIsSet_;
}

void FileContentInfo::unsetlastCommitId()
{
    lastCommitIdIsSet_ = false;
}

std::string FileContentInfo::getContent() const
{
    return content_;
}

void FileContentInfo::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool FileContentInfo::contentIsSet() const
{
    return contentIsSet_;
}

void FileContentInfo::unsetcontent()
{
    contentIsSet_ = false;
}

}
}
}
}
}


