

#include "huaweicloud/metastudio/v1/model/DocumentInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DocumentInfo::DocumentInfo()
{
    documentId_ = "";
    documentIdIsSet_ = false;
    knowledgeLibraryId_ = "";
    knowledgeLibraryIdIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    fileSize_ = 0L;
    fileSizeIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
    splitType_ = 0;
    splitTypeIsSet_ = false;
    chunkSize_ = 0;
    chunkSizeIsSet_ = false;
    chunkType_ = "";
    chunkTypeIsSet_ = false;
    separatorsIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    documentTaskInfoIsSet_ = false;
}

DocumentInfo::~DocumentInfo() = default;

void DocumentInfo::validate()
{
}

web::json::value DocumentInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(documentIdIsSet_) {
        val[utility::conversions::to_string_t("document_id")] = ModelBase::toJson(documentId_);
    }
    if(knowledgeLibraryIdIsSet_) {
        val[utility::conversions::to_string_t("knowledge_library_id")] = ModelBase::toJson(knowledgeLibraryId_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(fileSizeIsSet_) {
        val[utility::conversions::to_string_t("file_size")] = ModelBase::toJson(fileSize_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }
    if(splitTypeIsSet_) {
        val[utility::conversions::to_string_t("split_type")] = ModelBase::toJson(splitType_);
    }
    if(chunkSizeIsSet_) {
        val[utility::conversions::to_string_t("chunk_size")] = ModelBase::toJson(chunkSize_);
    }
    if(chunkTypeIsSet_) {
        val[utility::conversions::to_string_t("chunk_type")] = ModelBase::toJson(chunkType_);
    }
    if(separatorsIsSet_) {
        val[utility::conversions::to_string_t("separators")] = ModelBase::toJson(separators_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(documentTaskInfoIsSet_) {
        val[utility::conversions::to_string_t("document_task_info")] = ModelBase::toJson(documentTaskInfo_);
    }

    return val;
}
bool DocumentInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("document_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("document_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocumentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("knowledge_library_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("knowledge_library_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKnowledgeLibraryId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("file_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("split_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("split_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSplitType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chunk_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chunk_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChunkSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chunk_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chunk_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChunkType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("separators"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("separators"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeparators(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("document_task_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("document_task_info"));
        if(!fieldValue.is_null())
        {
            DocumentTaskInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocumentTaskInfo(refVal);
        }
    }
    return ok;
}


std::string DocumentInfo::getDocumentId() const
{
    return documentId_;
}

void DocumentInfo::setDocumentId(const std::string& value)
{
    documentId_ = value;
    documentIdIsSet_ = true;
}

bool DocumentInfo::documentIdIsSet() const
{
    return documentIdIsSet_;
}

void DocumentInfo::unsetdocumentId()
{
    documentIdIsSet_ = false;
}

std::string DocumentInfo::getKnowledgeLibraryId() const
{
    return knowledgeLibraryId_;
}

void DocumentInfo::setKnowledgeLibraryId(const std::string& value)
{
    knowledgeLibraryId_ = value;
    knowledgeLibraryIdIsSet_ = true;
}

bool DocumentInfo::knowledgeLibraryIdIsSet() const
{
    return knowledgeLibraryIdIsSet_;
}

void DocumentInfo::unsetknowledgeLibraryId()
{
    knowledgeLibraryIdIsSet_ = false;
}

std::string DocumentInfo::getFileName() const
{
    return fileName_;
}

void DocumentInfo::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool DocumentInfo::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void DocumentInfo::unsetfileName()
{
    fileNameIsSet_ = false;
}

int64_t DocumentInfo::getFileSize() const
{
    return fileSize_;
}

void DocumentInfo::setFileSize(int64_t value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool DocumentInfo::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void DocumentInfo::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string DocumentInfo::getFileType() const
{
    return fileType_;
}

void DocumentInfo::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool DocumentInfo::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void DocumentInfo::unsetfileType()
{
    fileTypeIsSet_ = false;
}

int32_t DocumentInfo::getSplitType() const
{
    return splitType_;
}

void DocumentInfo::setSplitType(int32_t value)
{
    splitType_ = value;
    splitTypeIsSet_ = true;
}

bool DocumentInfo::splitTypeIsSet() const
{
    return splitTypeIsSet_;
}

void DocumentInfo::unsetsplitType()
{
    splitTypeIsSet_ = false;
}

int32_t DocumentInfo::getChunkSize() const
{
    return chunkSize_;
}

void DocumentInfo::setChunkSize(int32_t value)
{
    chunkSize_ = value;
    chunkSizeIsSet_ = true;
}

bool DocumentInfo::chunkSizeIsSet() const
{
    return chunkSizeIsSet_;
}

void DocumentInfo::unsetchunkSize()
{
    chunkSizeIsSet_ = false;
}

std::string DocumentInfo::getChunkType() const
{
    return chunkType_;
}

void DocumentInfo::setChunkType(const std::string& value)
{
    chunkType_ = value;
    chunkTypeIsSet_ = true;
}

bool DocumentInfo::chunkTypeIsSet() const
{
    return chunkTypeIsSet_;
}

void DocumentInfo::unsetchunkType()
{
    chunkTypeIsSet_ = false;
}

std::vector<std::string>& DocumentInfo::getSeparators()
{
    return separators_;
}

void DocumentInfo::setSeparators(const std::vector<std::string>& value)
{
    separators_ = value;
    separatorsIsSet_ = true;
}

bool DocumentInfo::separatorsIsSet() const
{
    return separatorsIsSet_;
}

void DocumentInfo::unsetseparators()
{
    separatorsIsSet_ = false;
}

std::string DocumentInfo::getCreateTime() const
{
    return createTime_;
}

void DocumentInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool DocumentInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void DocumentInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string DocumentInfo::getUpdateTime() const
{
    return updateTime_;
}

void DocumentInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool DocumentInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void DocumentInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

DocumentTaskInfo DocumentInfo::getDocumentTaskInfo() const
{
    return documentTaskInfo_;
}

void DocumentInfo::setDocumentTaskInfo(const DocumentTaskInfo& value)
{
    documentTaskInfo_ = value;
    documentTaskInfoIsSet_ = true;
}

bool DocumentInfo::documentTaskInfoIsSet() const
{
    return documentTaskInfoIsSet_;
}

void DocumentInfo::unsetdocumentTaskInfo()
{
    documentTaskInfoIsSet_ = false;
}

}
}
}
}
}


