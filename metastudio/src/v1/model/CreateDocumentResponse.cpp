

#include "huaweicloud/metastudio/v1/model/CreateDocumentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateDocumentResponse::CreateDocumentResponse()
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
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateDocumentResponse::~CreateDocumentResponse() = default;

void CreateDocumentResponse::validate()
{
}

web::json::value CreateDocumentResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateDocumentResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string CreateDocumentResponse::getDocumentId() const
{
    return documentId_;
}

void CreateDocumentResponse::setDocumentId(const std::string& value)
{
    documentId_ = value;
    documentIdIsSet_ = true;
}

bool CreateDocumentResponse::documentIdIsSet() const
{
    return documentIdIsSet_;
}

void CreateDocumentResponse::unsetdocumentId()
{
    documentIdIsSet_ = false;
}

std::string CreateDocumentResponse::getKnowledgeLibraryId() const
{
    return knowledgeLibraryId_;
}

void CreateDocumentResponse::setKnowledgeLibraryId(const std::string& value)
{
    knowledgeLibraryId_ = value;
    knowledgeLibraryIdIsSet_ = true;
}

bool CreateDocumentResponse::knowledgeLibraryIdIsSet() const
{
    return knowledgeLibraryIdIsSet_;
}

void CreateDocumentResponse::unsetknowledgeLibraryId()
{
    knowledgeLibraryIdIsSet_ = false;
}

std::string CreateDocumentResponse::getFileName() const
{
    return fileName_;
}

void CreateDocumentResponse::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool CreateDocumentResponse::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void CreateDocumentResponse::unsetfileName()
{
    fileNameIsSet_ = false;
}

int64_t CreateDocumentResponse::getFileSize() const
{
    return fileSize_;
}

void CreateDocumentResponse::setFileSize(int64_t value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool CreateDocumentResponse::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void CreateDocumentResponse::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string CreateDocumentResponse::getFileType() const
{
    return fileType_;
}

void CreateDocumentResponse::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool CreateDocumentResponse::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void CreateDocumentResponse::unsetfileType()
{
    fileTypeIsSet_ = false;
}

int32_t CreateDocumentResponse::getSplitType() const
{
    return splitType_;
}

void CreateDocumentResponse::setSplitType(int32_t value)
{
    splitType_ = value;
    splitTypeIsSet_ = true;
}

bool CreateDocumentResponse::splitTypeIsSet() const
{
    return splitTypeIsSet_;
}

void CreateDocumentResponse::unsetsplitType()
{
    splitTypeIsSet_ = false;
}

int32_t CreateDocumentResponse::getChunkSize() const
{
    return chunkSize_;
}

void CreateDocumentResponse::setChunkSize(int32_t value)
{
    chunkSize_ = value;
    chunkSizeIsSet_ = true;
}

bool CreateDocumentResponse::chunkSizeIsSet() const
{
    return chunkSizeIsSet_;
}

void CreateDocumentResponse::unsetchunkSize()
{
    chunkSizeIsSet_ = false;
}

std::string CreateDocumentResponse::getChunkType() const
{
    return chunkType_;
}

void CreateDocumentResponse::setChunkType(const std::string& value)
{
    chunkType_ = value;
    chunkTypeIsSet_ = true;
}

bool CreateDocumentResponse::chunkTypeIsSet() const
{
    return chunkTypeIsSet_;
}

void CreateDocumentResponse::unsetchunkType()
{
    chunkTypeIsSet_ = false;
}

std::vector<std::string>& CreateDocumentResponse::getSeparators()
{
    return separators_;
}

void CreateDocumentResponse::setSeparators(const std::vector<std::string>& value)
{
    separators_ = value;
    separatorsIsSet_ = true;
}

bool CreateDocumentResponse::separatorsIsSet() const
{
    return separatorsIsSet_;
}

void CreateDocumentResponse::unsetseparators()
{
    separatorsIsSet_ = false;
}

std::string CreateDocumentResponse::getCreateTime() const
{
    return createTime_;
}

void CreateDocumentResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateDocumentResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateDocumentResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CreateDocumentResponse::getUpdateTime() const
{
    return updateTime_;
}

void CreateDocumentResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool CreateDocumentResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void CreateDocumentResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

DocumentTaskInfo CreateDocumentResponse::getDocumentTaskInfo() const
{
    return documentTaskInfo_;
}

void CreateDocumentResponse::setDocumentTaskInfo(const DocumentTaskInfo& value)
{
    documentTaskInfo_ = value;
    documentTaskInfoIsSet_ = true;
}

bool CreateDocumentResponse::documentTaskInfoIsSet() const
{
    return documentTaskInfoIsSet_;
}

void CreateDocumentResponse::unsetdocumentTaskInfo()
{
    documentTaskInfoIsSet_ = false;
}

std::string CreateDocumentResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateDocumentResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateDocumentResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateDocumentResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


