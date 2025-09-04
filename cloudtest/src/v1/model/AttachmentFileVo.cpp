

#include "huaweicloud/cloudtest/v1/model/AttachmentFileVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AttachmentFileVo::AttachmentFileVo()
{
    uri_ = "";
    uriIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
    docName_ = "";
    docNameIsSet_ = false;
    storeName_ = "";
    storeNameIsSet_ = false;
    docId_ = 0;
    docIdIsSet_ = false;
    docSize_ = "";
    docSizeIsSet_ = false;
    relatedType_ = "";
    relatedTypeIsSet_ = false;
}

AttachmentFileVo::~AttachmentFileVo() = default;

void AttachmentFileVo::validate()
{
}

web::json::value AttachmentFileVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }
    if(docNameIsSet_) {
        val[utility::conversions::to_string_t("doc_name")] = ModelBase::toJson(docName_);
    }
    if(storeNameIsSet_) {
        val[utility::conversions::to_string_t("store_name")] = ModelBase::toJson(storeName_);
    }
    if(docIdIsSet_) {
        val[utility::conversions::to_string_t("doc_id")] = ModelBase::toJson(docId_);
    }
    if(docSizeIsSet_) {
        val[utility::conversions::to_string_t("doc_size")] = ModelBase::toJson(docSize_);
    }
    if(relatedTypeIsSet_) {
        val[utility::conversions::to_string_t("related_type")] = ModelBase::toJson(relatedType_);
    }

    return val;
}
bool AttachmentFileVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("file_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("doc_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("doc_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("store_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("store_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStoreName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("doc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("doc_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("doc_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("doc_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("related_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("related_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelatedType(refVal);
        }
    }
    return ok;
}


std::string AttachmentFileVo::getUri() const
{
    return uri_;
}

void AttachmentFileVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool AttachmentFileVo::uriIsSet() const
{
    return uriIsSet_;
}

void AttachmentFileVo::unseturi()
{
    uriIsSet_ = false;
}

std::string AttachmentFileVo::getPath() const
{
    return path_;
}

void AttachmentFileVo::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool AttachmentFileVo::pathIsSet() const
{
    return pathIsSet_;
}

void AttachmentFileVo::unsetpath()
{
    pathIsSet_ = false;
}

std::string AttachmentFileVo::getProjectId() const
{
    return projectId_;
}

void AttachmentFileVo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AttachmentFileVo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AttachmentFileVo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string AttachmentFileVo::getFilePath() const
{
    return filePath_;
}

void AttachmentFileVo::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool AttachmentFileVo::filePathIsSet() const
{
    return filePathIsSet_;
}

void AttachmentFileVo::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string AttachmentFileVo::getFileType() const
{
    return fileType_;
}

void AttachmentFileVo::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool AttachmentFileVo::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void AttachmentFileVo::unsetfileType()
{
    fileTypeIsSet_ = false;
}

std::string AttachmentFileVo::getDocName() const
{
    return docName_;
}

void AttachmentFileVo::setDocName(const std::string& value)
{
    docName_ = value;
    docNameIsSet_ = true;
}

bool AttachmentFileVo::docNameIsSet() const
{
    return docNameIsSet_;
}

void AttachmentFileVo::unsetdocName()
{
    docNameIsSet_ = false;
}

std::string AttachmentFileVo::getStoreName() const
{
    return storeName_;
}

void AttachmentFileVo::setStoreName(const std::string& value)
{
    storeName_ = value;
    storeNameIsSet_ = true;
}

bool AttachmentFileVo::storeNameIsSet() const
{
    return storeNameIsSet_;
}

void AttachmentFileVo::unsetstoreName()
{
    storeNameIsSet_ = false;
}

int32_t AttachmentFileVo::getDocId() const
{
    return docId_;
}

void AttachmentFileVo::setDocId(int32_t value)
{
    docId_ = value;
    docIdIsSet_ = true;
}

bool AttachmentFileVo::docIdIsSet() const
{
    return docIdIsSet_;
}

void AttachmentFileVo::unsetdocId()
{
    docIdIsSet_ = false;
}

std::string AttachmentFileVo::getDocSize() const
{
    return docSize_;
}

void AttachmentFileVo::setDocSize(const std::string& value)
{
    docSize_ = value;
    docSizeIsSet_ = true;
}

bool AttachmentFileVo::docSizeIsSet() const
{
    return docSizeIsSet_;
}

void AttachmentFileVo::unsetdocSize()
{
    docSizeIsSet_ = false;
}

std::string AttachmentFileVo::getRelatedType() const
{
    return relatedType_;
}

void AttachmentFileVo::setRelatedType(const std::string& value)
{
    relatedType_ = value;
    relatedTypeIsSet_ = true;
}

bool AttachmentFileVo::relatedTypeIsSet() const
{
    return relatedTypeIsSet_;
}

void AttachmentFileVo::unsetrelatedType()
{
    relatedTypeIsSet_ = false;
}

}
}
}
}
}


