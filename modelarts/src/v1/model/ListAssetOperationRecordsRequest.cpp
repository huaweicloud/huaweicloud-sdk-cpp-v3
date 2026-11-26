

#include "huaweicloud/modelarts/v1/model/ListAssetOperationRecordsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListAssetOperationRecordsRequest::ListAssetOperationRecordsRequest()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    recordId_ = "";
    recordIdIsSet_ = false;
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
    assetCode_ = "";
    assetCodeIsSet_ = false;
    isDeleted_ = false;
    isDeletedIsSet_ = false;
}

ListAssetOperationRecordsRequest::~ListAssetOperationRecordsRequest() = default;

void ListAssetOperationRecordsRequest::validate()
{
}

web::json::value ListAssetOperationRecordsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(recordIdIsSet_) {
        val[utility::conversions::to_string_t("record_id")] = ModelBase::toJson(recordId_);
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
    if(assetCodeIsSet_) {
        val[utility::conversions::to_string_t("asset_code")] = ModelBase::toJson(assetCode_);
    }
    if(isDeletedIsSet_) {
        val[utility::conversions::to_string_t("is_deleted")] = ModelBase::toJson(isDeleted_);
    }

    return val;
}
bool ListAssetOperationRecordsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("record_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("asset_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetCode(refVal);
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
    return ok;
}


std::string ListAssetOperationRecordsRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ListAssetOperationRecordsRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ListAssetOperationRecordsRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ListAssetOperationRecordsRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

int32_t ListAssetOperationRecordsRequest::getLimit() const
{
    return limit_;
}

void ListAssetOperationRecordsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAssetOperationRecordsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAssetOperationRecordsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListAssetOperationRecordsRequest::getOffset() const
{
    return offset_;
}

void ListAssetOperationRecordsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAssetOperationRecordsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAssetOperationRecordsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAssetOperationRecordsRequest::getSortDir() const
{
    return sortDir_;
}

void ListAssetOperationRecordsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListAssetOperationRecordsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListAssetOperationRecordsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListAssetOperationRecordsRequest::getSortKey() const
{
    return sortKey_;
}

void ListAssetOperationRecordsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListAssetOperationRecordsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListAssetOperationRecordsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListAssetOperationRecordsRequest::getRecordId() const
{
    return recordId_;
}

void ListAssetOperationRecordsRequest::setRecordId(const std::string& value)
{
    recordId_ = value;
    recordIdIsSet_ = true;
}

bool ListAssetOperationRecordsRequest::recordIdIsSet() const
{
    return recordIdIsSet_;
}

void ListAssetOperationRecordsRequest::unsetrecordId()
{
    recordIdIsSet_ = false;
}

std::string ListAssetOperationRecordsRequest::getJobType() const
{
    return jobType_;
}

void ListAssetOperationRecordsRequest::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool ListAssetOperationRecordsRequest::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void ListAssetOperationRecordsRequest::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string ListAssetOperationRecordsRequest::getJobId() const
{
    return jobId_;
}

void ListAssetOperationRecordsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListAssetOperationRecordsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListAssetOperationRecordsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListAssetOperationRecordsRequest::getJobName() const
{
    return jobName_;
}

void ListAssetOperationRecordsRequest::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool ListAssetOperationRecordsRequest::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void ListAssetOperationRecordsRequest::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string ListAssetOperationRecordsRequest::getJobStatus() const
{
    return jobStatus_;
}

void ListAssetOperationRecordsRequest::setJobStatus(const std::string& value)
{
    jobStatus_ = value;
    jobStatusIsSet_ = true;
}

bool ListAssetOperationRecordsRequest::jobStatusIsSet() const
{
    return jobStatusIsSet_;
}

void ListAssetOperationRecordsRequest::unsetjobStatus()
{
    jobStatusIsSet_ = false;
}

std::string ListAssetOperationRecordsRequest::getUserId() const
{
    return userId_;
}

void ListAssetOperationRecordsRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ListAssetOperationRecordsRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void ListAssetOperationRecordsRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string ListAssetOperationRecordsRequest::getUserName() const
{
    return userName_;
}

void ListAssetOperationRecordsRequest::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ListAssetOperationRecordsRequest::userNameIsSet() const
{
    return userNameIsSet_;
}

void ListAssetOperationRecordsRequest::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ListAssetOperationRecordsRequest::getAssetId() const
{
    return assetId_;
}

void ListAssetOperationRecordsRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ListAssetOperationRecordsRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ListAssetOperationRecordsRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string ListAssetOperationRecordsRequest::getAssetCode() const
{
    return assetCode_;
}

void ListAssetOperationRecordsRequest::setAssetCode(const std::string& value)
{
    assetCode_ = value;
    assetCodeIsSet_ = true;
}

bool ListAssetOperationRecordsRequest::assetCodeIsSet() const
{
    return assetCodeIsSet_;
}

void ListAssetOperationRecordsRequest::unsetassetCode()
{
    assetCodeIsSet_ = false;
}

bool ListAssetOperationRecordsRequest::isIsDeleted() const
{
    return isDeleted_;
}

void ListAssetOperationRecordsRequest::setIsDeleted(bool value)
{
    isDeleted_ = value;
    isDeletedIsSet_ = true;
}

bool ListAssetOperationRecordsRequest::isDeletedIsSet() const
{
    return isDeletedIsSet_;
}

void ListAssetOperationRecordsRequest::unsetisDeleted()
{
    isDeletedIsSet_ = false;
}

}
}
}
}
}


