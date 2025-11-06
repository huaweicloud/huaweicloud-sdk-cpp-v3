

#include "huaweicloud/codeartsrepo/v3/model/LogsTree.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




LogsTree::LogsTree()
{
    blobId_ = "";
    blobIdIsSet_ = false;
    commitIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    md5_ = "";
    md5IsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

LogsTree::~LogsTree() = default;

void LogsTree::validate()
{
}

web::json::value LogsTree::toJson() const
{
    web::json::value val = web::json::value::object();

    if(blobIdIsSet_) {
        val[utility::conversions::to_string_t("blob_id")] = ModelBase::toJson(blobId_);
    }
    if(commitIsSet_) {
        val[utility::conversions::to_string_t("commit")] = ModelBase::toJson(commit_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(md5IsSet_) {
        val[utility::conversions::to_string_t("md5")] = ModelBase::toJson(md5_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool LogsTree::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("blob_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blob_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit"));
        if(!fieldValue.is_null())
        {
            Commit refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommit(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("md5"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("md5"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMd5(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string LogsTree::getBlobId() const
{
    return blobId_;
}

void LogsTree::setBlobId(const std::string& value)
{
    blobId_ = value;
    blobIdIsSet_ = true;
}

bool LogsTree::blobIdIsSet() const
{
    return blobIdIsSet_;
}

void LogsTree::unsetblobId()
{
    blobIdIsSet_ = false;
}

Commit LogsTree::getCommit() const
{
    return commit_;
}

void LogsTree::setCommit(const Commit& value)
{
    commit_ = value;
    commitIsSet_ = true;
}

bool LogsTree::commitIsSet() const
{
    return commitIsSet_;
}

void LogsTree::unsetcommit()
{
    commitIsSet_ = false;
}

std::string LogsTree::getFileName() const
{
    return fileName_;
}

void LogsTree::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool LogsTree::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void LogsTree::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string LogsTree::getFilePath() const
{
    return filePath_;
}

void LogsTree::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool LogsTree::filePathIsSet() const
{
    return filePathIsSet_;
}

void LogsTree::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string LogsTree::getMd5() const
{
    return md5_;
}

void LogsTree::setMd5(const std::string& value)
{
    md5_ = value;
    md5IsSet_ = true;
}

bool LogsTree::md5IsSet() const
{
    return md5IsSet_;
}

void LogsTree::unsetmd5()
{
    md5IsSet_ = false;
}

std::string LogsTree::getType() const
{
    return type_;
}

void LogsTree::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool LogsTree::typeIsSet() const
{
    return typeIsSet_;
}

void LogsTree::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


