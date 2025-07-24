

#include "huaweicloud/cloudtest/v1/model/TestCaseAttachmentInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestCaseAttachmentInfo::TestCaseAttachmentInfo()
{
    override_ = false;
    overrideIsSet_ = false;
    docId_ = "";
    docIdIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
    fileSize_ = "";
    fileSizeIsSet_ = false;
    overrideId_ = "";
    overrideIdIsSet_ = false;
    relatedType_ = "";
    relatedTypeIsSet_ = false;
    storeFileName_ = "";
    storeFileNameIsSet_ = false;
    systemType_ = "";
    systemTypeIsSet_ = false;
    storageSystem_ = "";
    storageSystemIsSet_ = false;
}

TestCaseAttachmentInfo::~TestCaseAttachmentInfo() = default;

void TestCaseAttachmentInfo::validate()
{
}

web::json::value TestCaseAttachmentInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(overrideIsSet_) {
        val[utility::conversions::to_string_t("override")] = ModelBase::toJson(override_);
    }
    if(docIdIsSet_) {
        val[utility::conversions::to_string_t("doc_id")] = ModelBase::toJson(docId_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }
    if(fileSizeIsSet_) {
        val[utility::conversions::to_string_t("file_size")] = ModelBase::toJson(fileSize_);
    }
    if(overrideIdIsSet_) {
        val[utility::conversions::to_string_t("override_id")] = ModelBase::toJson(overrideId_);
    }
    if(relatedTypeIsSet_) {
        val[utility::conversions::to_string_t("related_type")] = ModelBase::toJson(relatedType_);
    }
    if(storeFileNameIsSet_) {
        val[utility::conversions::to_string_t("store_file_name")] = ModelBase::toJson(storeFileName_);
    }
    if(systemTypeIsSet_) {
        val[utility::conversions::to_string_t("system_type")] = ModelBase::toJson(systemType_);
    }
    if(storageSystemIsSet_) {
        val[utility::conversions::to_string_t("storage_system")] = ModelBase::toJson(storageSystem_);
    }

    return val;
}
bool TestCaseAttachmentInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("override"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("override"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOverride(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("doc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("doc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("file_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("override_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("override_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOverrideId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("store_file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("store_file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStoreFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("system_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("system_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage_system"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_system"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageSystem(refVal);
        }
    }
    return ok;
}


bool TestCaseAttachmentInfo::isOverride() const
{
    return override_;
}

void TestCaseAttachmentInfo::setOverride(bool value)
{
    override_ = value;
    overrideIsSet_ = true;
}

bool TestCaseAttachmentInfo::overrideIsSet() const
{
    return overrideIsSet_;
}

void TestCaseAttachmentInfo::unsetoverride()
{
    overrideIsSet_ = false;
}

std::string TestCaseAttachmentInfo::getDocId() const
{
    return docId_;
}

void TestCaseAttachmentInfo::setDocId(const std::string& value)
{
    docId_ = value;
    docIdIsSet_ = true;
}

bool TestCaseAttachmentInfo::docIdIsSet() const
{
    return docIdIsSet_;
}

void TestCaseAttachmentInfo::unsetdocId()
{
    docIdIsSet_ = false;
}

std::string TestCaseAttachmentInfo::getFileName() const
{
    return fileName_;
}

void TestCaseAttachmentInfo::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool TestCaseAttachmentInfo::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void TestCaseAttachmentInfo::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string TestCaseAttachmentInfo::getFilePath() const
{
    return filePath_;
}

void TestCaseAttachmentInfo::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool TestCaseAttachmentInfo::filePathIsSet() const
{
    return filePathIsSet_;
}

void TestCaseAttachmentInfo::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string TestCaseAttachmentInfo::getFileType() const
{
    return fileType_;
}

void TestCaseAttachmentInfo::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool TestCaseAttachmentInfo::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void TestCaseAttachmentInfo::unsetfileType()
{
    fileTypeIsSet_ = false;
}

std::string TestCaseAttachmentInfo::getFileSize() const
{
    return fileSize_;
}

void TestCaseAttachmentInfo::setFileSize(const std::string& value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool TestCaseAttachmentInfo::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void TestCaseAttachmentInfo::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string TestCaseAttachmentInfo::getOverrideId() const
{
    return overrideId_;
}

void TestCaseAttachmentInfo::setOverrideId(const std::string& value)
{
    overrideId_ = value;
    overrideIdIsSet_ = true;
}

bool TestCaseAttachmentInfo::overrideIdIsSet() const
{
    return overrideIdIsSet_;
}

void TestCaseAttachmentInfo::unsetoverrideId()
{
    overrideIdIsSet_ = false;
}

std::string TestCaseAttachmentInfo::getRelatedType() const
{
    return relatedType_;
}

void TestCaseAttachmentInfo::setRelatedType(const std::string& value)
{
    relatedType_ = value;
    relatedTypeIsSet_ = true;
}

bool TestCaseAttachmentInfo::relatedTypeIsSet() const
{
    return relatedTypeIsSet_;
}

void TestCaseAttachmentInfo::unsetrelatedType()
{
    relatedTypeIsSet_ = false;
}

std::string TestCaseAttachmentInfo::getStoreFileName() const
{
    return storeFileName_;
}

void TestCaseAttachmentInfo::setStoreFileName(const std::string& value)
{
    storeFileName_ = value;
    storeFileNameIsSet_ = true;
}

bool TestCaseAttachmentInfo::storeFileNameIsSet() const
{
    return storeFileNameIsSet_;
}

void TestCaseAttachmentInfo::unsetstoreFileName()
{
    storeFileNameIsSet_ = false;
}

std::string TestCaseAttachmentInfo::getSystemType() const
{
    return systemType_;
}

void TestCaseAttachmentInfo::setSystemType(const std::string& value)
{
    systemType_ = value;
    systemTypeIsSet_ = true;
}

bool TestCaseAttachmentInfo::systemTypeIsSet() const
{
    return systemTypeIsSet_;
}

void TestCaseAttachmentInfo::unsetsystemType()
{
    systemTypeIsSet_ = false;
}

std::string TestCaseAttachmentInfo::getStorageSystem() const
{
    return storageSystem_;
}

void TestCaseAttachmentInfo::setStorageSystem(const std::string& value)
{
    storageSystem_ = value;
    storageSystemIsSet_ = true;
}

bool TestCaseAttachmentInfo::storageSystemIsSet() const
{
    return storageSystemIsSet_;
}

void TestCaseAttachmentInfo::unsetstorageSystem()
{
    storageSystemIsSet_ = false;
}

}
}
}
}
}


