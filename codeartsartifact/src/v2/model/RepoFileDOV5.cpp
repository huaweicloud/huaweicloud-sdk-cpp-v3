

#include "huaweicloud/codeartsartifact/v2/model/RepoFileDOV5.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




RepoFileDOV5::RepoFileDOV5()
{
    id_ = "";
    idIsSet_ = false;
    fileId_ = "";
    fileIdIsSet_ = false;
    repoName_ = "";
    repoNameIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    extension_ = "";
    extensionIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    fullPath_ = "";
    fullPathIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    md5_ = "";
    md5IsSet_ = false;
    sha256_ = "";
    sha256IsSet_ = false;
    downloadUrl_ = "";
    downloadUrlIsSet_ = false;
    downloadUrlWithId_ = "";
    downloadUrlWithIdIsSet_ = false;
    webUrl_ = "";
    webUrlIsSet_ = false;
    versionEnable_ = false;
    versionEnableIsSet_ = false;
    migratedState_ = 0;
    migratedStateIsSet_ = false;
    uploadId_ = "";
    uploadIdIsSet_ = false;
}

RepoFileDOV5::~RepoFileDOV5() = default;

void RepoFileDOV5::validate()
{
}

web::json::value RepoFileDOV5::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(fileIdIsSet_) {
        val[utility::conversions::to_string_t("file_id")] = ModelBase::toJson(fileId_);
    }
    if(repoNameIsSet_) {
        val[utility::conversions::to_string_t("repo_name")] = ModelBase::toJson(repoName_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(extensionIsSet_) {
        val[utility::conversions::to_string_t("extension")] = ModelBase::toJson(extension_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(fullPathIsSet_) {
        val[utility::conversions::to_string_t("full_path")] = ModelBase::toJson(fullPath_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(md5IsSet_) {
        val[utility::conversions::to_string_t("md5")] = ModelBase::toJson(md5_);
    }
    if(sha256IsSet_) {
        val[utility::conversions::to_string_t("sha256")] = ModelBase::toJson(sha256_);
    }
    if(downloadUrlIsSet_) {
        val[utility::conversions::to_string_t("download_url")] = ModelBase::toJson(downloadUrl_);
    }
    if(downloadUrlWithIdIsSet_) {
        val[utility::conversions::to_string_t("download_url_with_id")] = ModelBase::toJson(downloadUrlWithId_);
    }
    if(webUrlIsSet_) {
        val[utility::conversions::to_string_t("web_url")] = ModelBase::toJson(webUrl_);
    }
    if(versionEnableIsSet_) {
        val[utility::conversions::to_string_t("version_enable")] = ModelBase::toJson(versionEnable_);
    }
    if(migratedStateIsSet_) {
        val[utility::conversions::to_string_t("migrated_state")] = ModelBase::toJson(migratedState_);
    }
    if(uploadIdIsSet_) {
        val[utility::conversions::to_string_t("upload_id")] = ModelBase::toJson(uploadId_);
    }

    return val;
}
bool RepoFileDOV5::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("file_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extension"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extension"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtension(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("full_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sha256"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sha256"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSha256(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownloadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("download_url_with_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("download_url_with_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownloadUrlWithId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("web_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("web_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("migrated_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("migrated_state"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMigratedState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upload_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upload_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUploadId(refVal);
        }
    }
    return ok;
}


std::string RepoFileDOV5::getId() const
{
    return id_;
}

void RepoFileDOV5::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RepoFileDOV5::idIsSet() const
{
    return idIsSet_;
}

void RepoFileDOV5::unsetid()
{
    idIsSet_ = false;
}

std::string RepoFileDOV5::getFileId() const
{
    return fileId_;
}

void RepoFileDOV5::setFileId(const std::string& value)
{
    fileId_ = value;
    fileIdIsSet_ = true;
}

bool RepoFileDOV5::fileIdIsSet() const
{
    return fileIdIsSet_;
}

void RepoFileDOV5::unsetfileId()
{
    fileIdIsSet_ = false;
}

std::string RepoFileDOV5::getRepoName() const
{
    return repoName_;
}

void RepoFileDOV5::setRepoName(const std::string& value)
{
    repoName_ = value;
    repoNameIsSet_ = true;
}

bool RepoFileDOV5::repoNameIsSet() const
{
    return repoNameIsSet_;
}

void RepoFileDOV5::unsetrepoName()
{
    repoNameIsSet_ = false;
}

std::string RepoFileDOV5::getProjectName() const
{
    return projectName_;
}

void RepoFileDOV5::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool RepoFileDOV5::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void RepoFileDOV5::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string RepoFileDOV5::getParentId() const
{
    return parentId_;
}

void RepoFileDOV5::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool RepoFileDOV5::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void RepoFileDOV5::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string RepoFileDOV5::getName() const
{
    return name_;
}

void RepoFileDOV5::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RepoFileDOV5::nameIsSet() const
{
    return nameIsSet_;
}

void RepoFileDOV5::unsetname()
{
    nameIsSet_ = false;
}

std::string RepoFileDOV5::getFileName() const
{
    return fileName_;
}

void RepoFileDOV5::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool RepoFileDOV5::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void RepoFileDOV5::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string RepoFileDOV5::getType() const
{
    return type_;
}

void RepoFileDOV5::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RepoFileDOV5::typeIsSet() const
{
    return typeIsSet_;
}

void RepoFileDOV5::unsettype()
{
    typeIsSet_ = false;
}

std::string RepoFileDOV5::getCategory() const
{
    return category_;
}

void RepoFileDOV5::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool RepoFileDOV5::categoryIsSet() const
{
    return categoryIsSet_;
}

void RepoFileDOV5::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string RepoFileDOV5::getExtension() const
{
    return extension_;
}

void RepoFileDOV5::setExtension(const std::string& value)
{
    extension_ = value;
    extensionIsSet_ = true;
}

bool RepoFileDOV5::extensionIsSet() const
{
    return extensionIsSet_;
}

void RepoFileDOV5::unsetextension()
{
    extensionIsSet_ = false;
}

std::string RepoFileDOV5::getPath() const
{
    return path_;
}

void RepoFileDOV5::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool RepoFileDOV5::pathIsSet() const
{
    return pathIsSet_;
}

void RepoFileDOV5::unsetpath()
{
    pathIsSet_ = false;
}

std::string RepoFileDOV5::getFullPath() const
{
    return fullPath_;
}

void RepoFileDOV5::setFullPath(const std::string& value)
{
    fullPath_ = value;
    fullPathIsSet_ = true;
}

bool RepoFileDOV5::fullPathIsSet() const
{
    return fullPathIsSet_;
}

void RepoFileDOV5::unsetfullPath()
{
    fullPathIsSet_ = false;
}

int64_t RepoFileDOV5::getSize() const
{
    return size_;
}

void RepoFileDOV5::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool RepoFileDOV5::sizeIsSet() const
{
    return sizeIsSet_;
}

void RepoFileDOV5::unsetsize()
{
    sizeIsSet_ = false;
}

std::string RepoFileDOV5::getMd5() const
{
    return md5_;
}

void RepoFileDOV5::setMd5(const std::string& value)
{
    md5_ = value;
    md5IsSet_ = true;
}

bool RepoFileDOV5::md5IsSet() const
{
    return md5IsSet_;
}

void RepoFileDOV5::unsetmd5()
{
    md5IsSet_ = false;
}

std::string RepoFileDOV5::getSha256() const
{
    return sha256_;
}

void RepoFileDOV5::setSha256(const std::string& value)
{
    sha256_ = value;
    sha256IsSet_ = true;
}

bool RepoFileDOV5::sha256IsSet() const
{
    return sha256IsSet_;
}

void RepoFileDOV5::unsetsha256()
{
    sha256IsSet_ = false;
}

std::string RepoFileDOV5::getDownloadUrl() const
{
    return downloadUrl_;
}

void RepoFileDOV5::setDownloadUrl(const std::string& value)
{
    downloadUrl_ = value;
    downloadUrlIsSet_ = true;
}

bool RepoFileDOV5::downloadUrlIsSet() const
{
    return downloadUrlIsSet_;
}

void RepoFileDOV5::unsetdownloadUrl()
{
    downloadUrlIsSet_ = false;
}

std::string RepoFileDOV5::getDownloadUrlWithId() const
{
    return downloadUrlWithId_;
}

void RepoFileDOV5::setDownloadUrlWithId(const std::string& value)
{
    downloadUrlWithId_ = value;
    downloadUrlWithIdIsSet_ = true;
}

bool RepoFileDOV5::downloadUrlWithIdIsSet() const
{
    return downloadUrlWithIdIsSet_;
}

void RepoFileDOV5::unsetdownloadUrlWithId()
{
    downloadUrlWithIdIsSet_ = false;
}

std::string RepoFileDOV5::getWebUrl() const
{
    return webUrl_;
}

void RepoFileDOV5::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool RepoFileDOV5::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void RepoFileDOV5::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

bool RepoFileDOV5::isVersionEnable() const
{
    return versionEnable_;
}

void RepoFileDOV5::setVersionEnable(bool value)
{
    versionEnable_ = value;
    versionEnableIsSet_ = true;
}

bool RepoFileDOV5::versionEnableIsSet() const
{
    return versionEnableIsSet_;
}

void RepoFileDOV5::unsetversionEnable()
{
    versionEnableIsSet_ = false;
}

int32_t RepoFileDOV5::getMigratedState() const
{
    return migratedState_;
}

void RepoFileDOV5::setMigratedState(int32_t value)
{
    migratedState_ = value;
    migratedStateIsSet_ = true;
}

bool RepoFileDOV5::migratedStateIsSet() const
{
    return migratedStateIsSet_;
}

void RepoFileDOV5::unsetmigratedState()
{
    migratedStateIsSet_ = false;
}

std::string RepoFileDOV5::getUploadId() const
{
    return uploadId_;
}

void RepoFileDOV5::setUploadId(const std::string& value)
{
    uploadId_ = value;
    uploadIdIsSet_ = true;
}

bool RepoFileDOV5::uploadIdIsSet() const
{
    return uploadIdIsSet_;
}

void RepoFileDOV5::unsetuploadId()
{
    uploadIdIsSet_ = false;
}

}
}
}
}
}


