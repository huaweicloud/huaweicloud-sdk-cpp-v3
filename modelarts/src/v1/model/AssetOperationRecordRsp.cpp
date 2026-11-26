

#include "huaweicloud/modelarts/v1/model/AssetOperationRecordRsp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AssetOperationRecordRsp::AssetOperationRecordRsp()
{
    recordId_ = "";
    recordIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    jobStatus_ = "";
    jobStatusIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    service_ = "";
    serviceIsSet_ = false;
    assetCode_ = "";
    assetCodeIsSet_ = false;
    assetName_ = "";
    assetNameIsSet_ = false;
    assetVersion_ = "";
    assetVersionIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    isDeleted_ = false;
    isDeletedIsSet_ = false;
    details_ = "";
    detailsIsSet_ = false;
    recordExtendMessage_ = "";
    recordExtendMessageIsSet_ = false;
}

AssetOperationRecordRsp::~AssetOperationRecordRsp() = default;

void AssetOperationRecordRsp::validate()
{
}

web::json::value AssetOperationRecordRsp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordIdIsSet_) {
        val[utility::conversions::to_string_t("record_id")] = ModelBase::toJson(recordId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }
    if(jobStatusIsSet_) {
        val[utility::conversions::to_string_t("job_status")] = ModelBase::toJson(jobStatus_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(serviceIsSet_) {
        val[utility::conversions::to_string_t("service")] = ModelBase::toJson(service_);
    }
    if(assetCodeIsSet_) {
        val[utility::conversions::to_string_t("asset_code")] = ModelBase::toJson(assetCode_);
    }
    if(assetNameIsSet_) {
        val[utility::conversions::to_string_t("asset_name")] = ModelBase::toJson(assetName_);
    }
    if(assetVersionIsSet_) {
        val[utility::conversions::to_string_t("asset_version")] = ModelBase::toJson(assetVersion_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(isDeletedIsSet_) {
        val[utility::conversions::to_string_t("is_deleted")] = ModelBase::toJson(isDeleted_);
    }
    if(detailsIsSet_) {
        val[utility::conversions::to_string_t("details")] = ModelBase::toJson(details_);
    }
    if(recordExtendMessageIsSet_) {
        val[utility::conversions::to_string_t("record_extend_message")] = ModelBase::toJson(recordExtendMessage_);
    }

    return val;
}
bool AssetOperationRecordRsp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("record_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setService(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_deleted"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDeleted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("details"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("record_extend_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_extend_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordExtendMessage(refVal);
        }
    }
    return ok;
}


std::string AssetOperationRecordRsp::getRecordId() const
{
    return recordId_;
}

void AssetOperationRecordRsp::setRecordId(const std::string& value)
{
    recordId_ = value;
    recordIdIsSet_ = true;
}

bool AssetOperationRecordRsp::recordIdIsSet() const
{
    return recordIdIsSet_;
}

void AssetOperationRecordRsp::unsetrecordId()
{
    recordIdIsSet_ = false;
}

std::string AssetOperationRecordRsp::getProjectId() const
{
    return projectId_;
}

void AssetOperationRecordRsp::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AssetOperationRecordRsp::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AssetOperationRecordRsp::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string AssetOperationRecordRsp::getWorkspaceId() const
{
    return workspaceId_;
}

void AssetOperationRecordRsp::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool AssetOperationRecordRsp::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void AssetOperationRecordRsp::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string AssetOperationRecordRsp::getJobType() const
{
    return jobType_;
}

void AssetOperationRecordRsp::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool AssetOperationRecordRsp::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void AssetOperationRecordRsp::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string AssetOperationRecordRsp::getJobId() const
{
    return jobId_;
}

void AssetOperationRecordRsp::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool AssetOperationRecordRsp::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void AssetOperationRecordRsp::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string AssetOperationRecordRsp::getJobName() const
{
    return jobName_;
}

void AssetOperationRecordRsp::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool AssetOperationRecordRsp::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void AssetOperationRecordRsp::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string AssetOperationRecordRsp::getJobStatus() const
{
    return jobStatus_;
}

void AssetOperationRecordRsp::setJobStatus(const std::string& value)
{
    jobStatus_ = value;
    jobStatusIsSet_ = true;
}

bool AssetOperationRecordRsp::jobStatusIsSet() const
{
    return jobStatusIsSet_;
}

void AssetOperationRecordRsp::unsetjobStatus()
{
    jobStatusIsSet_ = false;
}

std::string AssetOperationRecordRsp::getUserId() const
{
    return userId_;
}

void AssetOperationRecordRsp::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool AssetOperationRecordRsp::userIdIsSet() const
{
    return userIdIsSet_;
}

void AssetOperationRecordRsp::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string AssetOperationRecordRsp::getUserName() const
{
    return userName_;
}

void AssetOperationRecordRsp::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool AssetOperationRecordRsp::userNameIsSet() const
{
    return userNameIsSet_;
}

void AssetOperationRecordRsp::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string AssetOperationRecordRsp::getAssetId() const
{
    return assetId_;
}

void AssetOperationRecordRsp::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool AssetOperationRecordRsp::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void AssetOperationRecordRsp::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string AssetOperationRecordRsp::getService() const
{
    return service_;
}

void AssetOperationRecordRsp::setService(const std::string& value)
{
    service_ = value;
    serviceIsSet_ = true;
}

bool AssetOperationRecordRsp::serviceIsSet() const
{
    return serviceIsSet_;
}

void AssetOperationRecordRsp::unsetservice()
{
    serviceIsSet_ = false;
}

std::string AssetOperationRecordRsp::getAssetCode() const
{
    return assetCode_;
}

void AssetOperationRecordRsp::setAssetCode(const std::string& value)
{
    assetCode_ = value;
    assetCodeIsSet_ = true;
}

bool AssetOperationRecordRsp::assetCodeIsSet() const
{
    return assetCodeIsSet_;
}

void AssetOperationRecordRsp::unsetassetCode()
{
    assetCodeIsSet_ = false;
}

std::string AssetOperationRecordRsp::getAssetName() const
{
    return assetName_;
}

void AssetOperationRecordRsp::setAssetName(const std::string& value)
{
    assetName_ = value;
    assetNameIsSet_ = true;
}

bool AssetOperationRecordRsp::assetNameIsSet() const
{
    return assetNameIsSet_;
}

void AssetOperationRecordRsp::unsetassetName()
{
    assetNameIsSet_ = false;
}

std::string AssetOperationRecordRsp::getAssetVersion() const
{
    return assetVersion_;
}

void AssetOperationRecordRsp::setAssetVersion(const std::string& value)
{
    assetVersion_ = value;
    assetVersionIsSet_ = true;
}

bool AssetOperationRecordRsp::assetVersionIsSet() const
{
    return assetVersionIsSet_;
}

void AssetOperationRecordRsp::unsetassetVersion()
{
    assetVersionIsSet_ = false;
}

utility::datetime AssetOperationRecordRsp::getCreatedAt() const
{
    return createdAt_;
}

void AssetOperationRecordRsp::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool AssetOperationRecordRsp::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void AssetOperationRecordRsp::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime AssetOperationRecordRsp::getUpdatedAt() const
{
    return updatedAt_;
}

void AssetOperationRecordRsp::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool AssetOperationRecordRsp::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void AssetOperationRecordRsp::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

bool AssetOperationRecordRsp::isIsDeleted() const
{
    return isDeleted_;
}

void AssetOperationRecordRsp::setIsDeleted(bool value)
{
    isDeleted_ = value;
    isDeletedIsSet_ = true;
}

bool AssetOperationRecordRsp::isDeletedIsSet() const
{
    return isDeletedIsSet_;
}

void AssetOperationRecordRsp::unsetisDeleted()
{
    isDeletedIsSet_ = false;
}

std::string AssetOperationRecordRsp::getDetails() const
{
    return details_;
}

void AssetOperationRecordRsp::setDetails(const std::string& value)
{
    details_ = value;
    detailsIsSet_ = true;
}

bool AssetOperationRecordRsp::detailsIsSet() const
{
    return detailsIsSet_;
}

void AssetOperationRecordRsp::unsetdetails()
{
    detailsIsSet_ = false;
}

std::string AssetOperationRecordRsp::getRecordExtendMessage() const
{
    return recordExtendMessage_;
}

void AssetOperationRecordRsp::setRecordExtendMessage(const std::string& value)
{
    recordExtendMessage_ = value;
    recordExtendMessageIsSet_ = true;
}

bool AssetOperationRecordRsp::recordExtendMessageIsSet() const
{
    return recordExtendMessageIsSet_;
}

void AssetOperationRecordRsp::unsetrecordExtendMessage()
{
    recordExtendMessageIsSet_ = false;
}

}
}
}
}
}


