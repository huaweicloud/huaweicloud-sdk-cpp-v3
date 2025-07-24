

#include "huaweicloud/cloudtest/v1/model/AttachmentVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AttachmentVo::AttachmentVo()
{
    uri_ = "";
    uriIsSet_ = false;
    creator_ = "";
    creatorIsSet_ = false;
    updator_ = "";
    updatorIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    docId_ = "";
    docIdIsSet_ = false;
    parentUri_ = "";
    parentUriIsSet_ = false;
    parentType_ = "";
    parentTypeIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    storeFileName_ = "";
    storeFileNameIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    fileSize_ = 0;
    fileSizeIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
    systemType_ = "";
    systemTypeIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    createTimeTimestamp_ = 0L;
    createTimeTimestampIsSet_ = false;
    updateTime_ = utility::datetime();
    updateTimeIsSet_ = false;
    updateTimeTimestamp_ = 0L;
    updateTimeTimestampIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    relatedType_ = "";
    relatedTypeIsSet_ = false;
}

AttachmentVo::~AttachmentVo() = default;

void AttachmentVo::validate()
{
}

web::json::value AttachmentVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(updatorIsSet_) {
        val[utility::conversions::to_string_t("updator")] = ModelBase::toJson(updator_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(docIdIsSet_) {
        val[utility::conversions::to_string_t("doc_id")] = ModelBase::toJson(docId_);
    }
    if(parentUriIsSet_) {
        val[utility::conversions::to_string_t("parent_uri")] = ModelBase::toJson(parentUri_);
    }
    if(parentTypeIsSet_) {
        val[utility::conversions::to_string_t("parent_type")] = ModelBase::toJson(parentType_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(storeFileNameIsSet_) {
        val[utility::conversions::to_string_t("store_file_name")] = ModelBase::toJson(storeFileName_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(fileSizeIsSet_) {
        val[utility::conversions::to_string_t("file_size")] = ModelBase::toJson(fileSize_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }
    if(systemTypeIsSet_) {
        val[utility::conversions::to_string_t("system_type")] = ModelBase::toJson(systemType_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(createTimeTimestampIsSet_) {
        val[utility::conversions::to_string_t("create_time_timestamp")] = ModelBase::toJson(createTimeTimestamp_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(updateTimeTimestampIsSet_) {
        val[utility::conversions::to_string_t("update_time_timestamp")] = ModelBase::toJson(updateTimeTimestamp_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(relatedTypeIsSet_) {
        val[utility::conversions::to_string_t("related_type")] = ModelBase::toJson(relatedType_);
    }

    return val;
}
bool AttachmentVo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parent_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("store_file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("store_file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStoreFileName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("file_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("system_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("system_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTimeTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimeTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
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


std::string AttachmentVo::getUri() const
{
    return uri_;
}

void AttachmentVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool AttachmentVo::uriIsSet() const
{
    return uriIsSet_;
}

void AttachmentVo::unseturi()
{
    uriIsSet_ = false;
}

std::string AttachmentVo::getCreator() const
{
    return creator_;
}

void AttachmentVo::setCreator(const std::string& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool AttachmentVo::creatorIsSet() const
{
    return creatorIsSet_;
}

void AttachmentVo::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string AttachmentVo::getUpdator() const
{
    return updator_;
}

void AttachmentVo::setUpdator(const std::string& value)
{
    updator_ = value;
    updatorIsSet_ = true;
}

bool AttachmentVo::updatorIsSet() const
{
    return updatorIsSet_;
}

void AttachmentVo::unsetupdator()
{
    updatorIsSet_ = false;
}

std::string AttachmentVo::getRegion() const
{
    return region_;
}

void AttachmentVo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool AttachmentVo::regionIsSet() const
{
    return regionIsSet_;
}

void AttachmentVo::unsetregion()
{
    regionIsSet_ = false;
}

std::string AttachmentVo::getDocId() const
{
    return docId_;
}

void AttachmentVo::setDocId(const std::string& value)
{
    docId_ = value;
    docIdIsSet_ = true;
}

bool AttachmentVo::docIdIsSet() const
{
    return docIdIsSet_;
}

void AttachmentVo::unsetdocId()
{
    docIdIsSet_ = false;
}

std::string AttachmentVo::getParentUri() const
{
    return parentUri_;
}

void AttachmentVo::setParentUri(const std::string& value)
{
    parentUri_ = value;
    parentUriIsSet_ = true;
}

bool AttachmentVo::parentUriIsSet() const
{
    return parentUriIsSet_;
}

void AttachmentVo::unsetparentUri()
{
    parentUriIsSet_ = false;
}

std::string AttachmentVo::getParentType() const
{
    return parentType_;
}

void AttachmentVo::setParentType(const std::string& value)
{
    parentType_ = value;
    parentTypeIsSet_ = true;
}

bool AttachmentVo::parentTypeIsSet() const
{
    return parentTypeIsSet_;
}

void AttachmentVo::unsetparentType()
{
    parentTypeIsSet_ = false;
}

std::string AttachmentVo::getFileName() const
{
    return fileName_;
}

void AttachmentVo::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool AttachmentVo::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void AttachmentVo::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string AttachmentVo::getStoreFileName() const
{
    return storeFileName_;
}

void AttachmentVo::setStoreFileName(const std::string& value)
{
    storeFileName_ = value;
    storeFileNameIsSet_ = true;
}

bool AttachmentVo::storeFileNameIsSet() const
{
    return storeFileNameIsSet_;
}

void AttachmentVo::unsetstoreFileName()
{
    storeFileNameIsSet_ = false;
}

std::string AttachmentVo::getFilePath() const
{
    return filePath_;
}

void AttachmentVo::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool AttachmentVo::filePathIsSet() const
{
    return filePathIsSet_;
}

void AttachmentVo::unsetfilePath()
{
    filePathIsSet_ = false;
}

int32_t AttachmentVo::getFileSize() const
{
    return fileSize_;
}

void AttachmentVo::setFileSize(int32_t value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool AttachmentVo::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void AttachmentVo::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string AttachmentVo::getFileType() const
{
    return fileType_;
}

void AttachmentVo::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool AttachmentVo::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void AttachmentVo::unsetfileType()
{
    fileTypeIsSet_ = false;
}

std::string AttachmentVo::getSystemType() const
{
    return systemType_;
}

void AttachmentVo::setSystemType(const std::string& value)
{
    systemType_ = value;
    systemTypeIsSet_ = true;
}

bool AttachmentVo::systemTypeIsSet() const
{
    return systemTypeIsSet_;
}

void AttachmentVo::unsetsystemType()
{
    systemTypeIsSet_ = false;
}

utility::datetime AttachmentVo::getCreateTime() const
{
    return createTime_;
}

void AttachmentVo::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AttachmentVo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AttachmentVo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t AttachmentVo::getCreateTimeTimestamp() const
{
    return createTimeTimestamp_;
}

void AttachmentVo::setCreateTimeTimestamp(int64_t value)
{
    createTimeTimestamp_ = value;
    createTimeTimestampIsSet_ = true;
}

bool AttachmentVo::createTimeTimestampIsSet() const
{
    return createTimeTimestampIsSet_;
}

void AttachmentVo::unsetcreateTimeTimestamp()
{
    createTimeTimestampIsSet_ = false;
}

utility::datetime AttachmentVo::getUpdateTime() const
{
    return updateTime_;
}

void AttachmentVo::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool AttachmentVo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void AttachmentVo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int64_t AttachmentVo::getUpdateTimeTimestamp() const
{
    return updateTimeTimestamp_;
}

void AttachmentVo::setUpdateTimeTimestamp(int64_t value)
{
    updateTimeTimestamp_ = value;
    updateTimeTimestampIsSet_ = true;
}

bool AttachmentVo::updateTimeTimestampIsSet() const
{
    return updateTimeTimestampIsSet_;
}

void AttachmentVo::unsetupdateTimeTimestamp()
{
    updateTimeTimestampIsSet_ = false;
}

std::string AttachmentVo::getProjectUuid() const
{
    return projectUuid_;
}

void AttachmentVo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool AttachmentVo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void AttachmentVo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string AttachmentVo::getRelatedType() const
{
    return relatedType_;
}

void AttachmentVo::setRelatedType(const std::string& value)
{
    relatedType_ = value;
    relatedTypeIsSet_ = true;
}

bool AttachmentVo::relatedTypeIsSet() const
{
    return relatedTypeIsSet_;
}

void AttachmentVo::unsetrelatedType()
{
    relatedTypeIsSet_ = false;
}

}
}
}
}
}


