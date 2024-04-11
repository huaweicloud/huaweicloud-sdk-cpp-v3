

#include "huaweicloud/gaussdbforopengauss/v3/model/SlowLogDownloadInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SlowLogDownloadInfo::SlowLogDownloadInfo()
{
    id_ = "";
    idIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    workflowId_ = "";
    workflowIdIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    fileSize_ = "";
    fileSizeIsSet_ = false;
    fileLink_ = "";
    fileLinkIsSet_ = false;
    bucketName_ = "";
    bucketNameIsSet_ = false;
    createdAt_ = 0L;
    createdAtIsSet_ = false;
    updatedAt_ = 0L;
    updatedAtIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

SlowLogDownloadInfo::~SlowLogDownloadInfo() = default;

void SlowLogDownloadInfo::validate()
{
}

web::json::value SlowLogDownloadInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(fileSizeIsSet_) {
        val[utility::conversions::to_string_t("file_size")] = ModelBase::toJson(fileSize_);
    }
    if(fileLinkIsSet_) {
        val[utility::conversions::to_string_t("file_link")] = ModelBase::toJson(fileLink_);
    }
    if(bucketNameIsSet_) {
        val[utility::conversions::to_string_t("bucket_name")] = ModelBase::toJson(bucketName_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool SlowLogDownloadInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workflow_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowId(refVal);
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileLink(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bucket_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}


std::string SlowLogDownloadInfo::getId() const
{
    return id_;
}

void SlowLogDownloadInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SlowLogDownloadInfo::idIsSet() const
{
    return idIsSet_;
}

void SlowLogDownloadInfo::unsetid()
{
    idIsSet_ = false;
}

std::string SlowLogDownloadInfo::getInstanceId() const
{
    return instanceId_;
}

void SlowLogDownloadInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SlowLogDownloadInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SlowLogDownloadInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SlowLogDownloadInfo::getNodeId() const
{
    return nodeId_;
}

void SlowLogDownloadInfo::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool SlowLogDownloadInfo::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void SlowLogDownloadInfo::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string SlowLogDownloadInfo::getWorkflowId() const
{
    return workflowId_;
}

void SlowLogDownloadInfo::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool SlowLogDownloadInfo::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void SlowLogDownloadInfo::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string SlowLogDownloadInfo::getFileName() const
{
    return fileName_;
}

void SlowLogDownloadInfo::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool SlowLogDownloadInfo::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void SlowLogDownloadInfo::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string SlowLogDownloadInfo::getFileSize() const
{
    return fileSize_;
}

void SlowLogDownloadInfo::setFileSize(const std::string& value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool SlowLogDownloadInfo::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void SlowLogDownloadInfo::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string SlowLogDownloadInfo::getFileLink() const
{
    return fileLink_;
}

void SlowLogDownloadInfo::setFileLink(const std::string& value)
{
    fileLink_ = value;
    fileLinkIsSet_ = true;
}

bool SlowLogDownloadInfo::fileLinkIsSet() const
{
    return fileLinkIsSet_;
}

void SlowLogDownloadInfo::unsetfileLink()
{
    fileLinkIsSet_ = false;
}

std::string SlowLogDownloadInfo::getBucketName() const
{
    return bucketName_;
}

void SlowLogDownloadInfo::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool SlowLogDownloadInfo::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void SlowLogDownloadInfo::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

int64_t SlowLogDownloadInfo::getCreatedAt() const
{
    return createdAt_;
}

void SlowLogDownloadInfo::setCreatedAt(int64_t value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool SlowLogDownloadInfo::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void SlowLogDownloadInfo::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

int64_t SlowLogDownloadInfo::getUpdatedAt() const
{
    return updatedAt_;
}

void SlowLogDownloadInfo::setUpdatedAt(int64_t value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool SlowLogDownloadInfo::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void SlowLogDownloadInfo::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string SlowLogDownloadInfo::getVersion() const
{
    return version_;
}

void SlowLogDownloadInfo::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool SlowLogDownloadInfo::versionIsSet() const
{
    return versionIsSet_;
}

void SlowLogDownloadInfo::unsetversion()
{
    versionIsSet_ = false;
}

std::string SlowLogDownloadInfo::getStatus() const
{
    return status_;
}

void SlowLogDownloadInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SlowLogDownloadInfo::statusIsSet() const
{
    return statusIsSet_;
}

void SlowLogDownloadInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SlowLogDownloadInfo::getMessage() const
{
    return message_;
}

void SlowLogDownloadInfo::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool SlowLogDownloadInfo::messageIsSet() const
{
    return messageIsSet_;
}

void SlowLogDownloadInfo::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


