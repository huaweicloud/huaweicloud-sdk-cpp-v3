

#include "huaweicloud/cts/v3/model/CreateTrackerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




CreateTrackerResponse::CreateTrackerResponse()
{
    id_ = "";
    idIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    kmsId_ = "";
    kmsIdIsSet_ = false;
    isSupportValidate_ = false;
    isSupportValidateIsSet_ = false;
    isOrganizationTracker_ = false;
    isOrganizationTrackerIsSet_ = false;
    managementEventSelectorIsSet_ = false;
    ltsIsSet_ = false;
    trackerType_ = "";
    trackerTypeIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    trackerName_ = "";
    trackerNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    detail_ = "";
    detailIsSet_ = false;
    isSupportTraceFilesEncryption_ = false;
    isSupportTraceFilesEncryptionIsSet_ = false;
    obsInfoIsSet_ = false;
    dataBucketIsSet_ = false;
}

CreateTrackerResponse::~CreateTrackerResponse() = default;

void CreateTrackerResponse::validate()
{
}

web::json::value CreateTrackerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(kmsIdIsSet_) {
        val[utility::conversions::to_string_t("kms_id")] = ModelBase::toJson(kmsId_);
    }
    if(isSupportValidateIsSet_) {
        val[utility::conversions::to_string_t("is_support_validate")] = ModelBase::toJson(isSupportValidate_);
    }
    if(isOrganizationTrackerIsSet_) {
        val[utility::conversions::to_string_t("is_organization_tracker")] = ModelBase::toJson(isOrganizationTracker_);
    }
    if(managementEventSelectorIsSet_) {
        val[utility::conversions::to_string_t("management_event_selector")] = ModelBase::toJson(managementEventSelector_);
    }
    if(ltsIsSet_) {
        val[utility::conversions::to_string_t("lts")] = ModelBase::toJson(lts_);
    }
    if(trackerTypeIsSet_) {
        val[utility::conversions::to_string_t("tracker_type")] = ModelBase::toJson(trackerType_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(trackerNameIsSet_) {
        val[utility::conversions::to_string_t("tracker_name")] = ModelBase::toJson(trackerName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(detailIsSet_) {
        val[utility::conversions::to_string_t("detail")] = ModelBase::toJson(detail_);
    }
    if(isSupportTraceFilesEncryptionIsSet_) {
        val[utility::conversions::to_string_t("is_support_trace_files_encryption")] = ModelBase::toJson(isSupportTraceFilesEncryption_);
    }
    if(obsInfoIsSet_) {
        val[utility::conversions::to_string_t("obs_info")] = ModelBase::toJson(obsInfo_);
    }
    if(dataBucketIsSet_) {
        val[utility::conversions::to_string_t("data_bucket")] = ModelBase::toJson(dataBucket_);
    }

    return val;
}
bool CreateTrackerResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kms_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kms_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKmsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_validate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_validate"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportValidate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_organization_tracker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_organization_tracker"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOrganizationTracker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("management_event_selector"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("management_event_selector"));
        if(!fieldValue.is_null())
        {
            ManagementEventSelector refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagementEventSelector(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts"));
        if(!fieldValue.is_null())
        {
            Lts refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tracker_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_trace_files_encryption"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_trace_files_encryption"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportTraceFilesEncryption(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_info"));
        if(!fieldValue.is_null())
        {
            ObsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_bucket"));
        if(!fieldValue.is_null())
        {
            DataBucketQuery refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataBucket(refVal);
        }
    }
    return ok;
}


std::string CreateTrackerResponse::getId() const
{
    return id_;
}

void CreateTrackerResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateTrackerResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateTrackerResponse::unsetid()
{
    idIsSet_ = false;
}

int64_t CreateTrackerResponse::getCreateTime() const
{
    return createTime_;
}

void CreateTrackerResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateTrackerResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateTrackerResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CreateTrackerResponse::getKmsId() const
{
    return kmsId_;
}

void CreateTrackerResponse::setKmsId(const std::string& value)
{
    kmsId_ = value;
    kmsIdIsSet_ = true;
}

bool CreateTrackerResponse::kmsIdIsSet() const
{
    return kmsIdIsSet_;
}

void CreateTrackerResponse::unsetkmsId()
{
    kmsIdIsSet_ = false;
}

bool CreateTrackerResponse::isIsSupportValidate() const
{
    return isSupportValidate_;
}

void CreateTrackerResponse::setIsSupportValidate(bool value)
{
    isSupportValidate_ = value;
    isSupportValidateIsSet_ = true;
}

bool CreateTrackerResponse::isSupportValidateIsSet() const
{
    return isSupportValidateIsSet_;
}

void CreateTrackerResponse::unsetisSupportValidate()
{
    isSupportValidateIsSet_ = false;
}

bool CreateTrackerResponse::isIsOrganizationTracker() const
{
    return isOrganizationTracker_;
}

void CreateTrackerResponse::setIsOrganizationTracker(bool value)
{
    isOrganizationTracker_ = value;
    isOrganizationTrackerIsSet_ = true;
}

bool CreateTrackerResponse::isOrganizationTrackerIsSet() const
{
    return isOrganizationTrackerIsSet_;
}

void CreateTrackerResponse::unsetisOrganizationTracker()
{
    isOrganizationTrackerIsSet_ = false;
}

ManagementEventSelector CreateTrackerResponse::getManagementEventSelector() const
{
    return managementEventSelector_;
}

void CreateTrackerResponse::setManagementEventSelector(const ManagementEventSelector& value)
{
    managementEventSelector_ = value;
    managementEventSelectorIsSet_ = true;
}

bool CreateTrackerResponse::managementEventSelectorIsSet() const
{
    return managementEventSelectorIsSet_;
}

void CreateTrackerResponse::unsetmanagementEventSelector()
{
    managementEventSelectorIsSet_ = false;
}

Lts CreateTrackerResponse::getLts() const
{
    return lts_;
}

void CreateTrackerResponse::setLts(const Lts& value)
{
    lts_ = value;
    ltsIsSet_ = true;
}

bool CreateTrackerResponse::ltsIsSet() const
{
    return ltsIsSet_;
}

void CreateTrackerResponse::unsetlts()
{
    ltsIsSet_ = false;
}

std::string CreateTrackerResponse::getTrackerType() const
{
    return trackerType_;
}

void CreateTrackerResponse::setTrackerType(const std::string& value)
{
    trackerType_ = value;
    trackerTypeIsSet_ = true;
}

bool CreateTrackerResponse::trackerTypeIsSet() const
{
    return trackerTypeIsSet_;
}

void CreateTrackerResponse::unsettrackerType()
{
    trackerTypeIsSet_ = false;
}

std::string CreateTrackerResponse::getDomainId() const
{
    return domainId_;
}

void CreateTrackerResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreateTrackerResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreateTrackerResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string CreateTrackerResponse::getProjectId() const
{
    return projectId_;
}

void CreateTrackerResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateTrackerResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateTrackerResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CreateTrackerResponse::getTrackerName() const
{
    return trackerName_;
}

void CreateTrackerResponse::setTrackerName(const std::string& value)
{
    trackerName_ = value;
    trackerNameIsSet_ = true;
}

bool CreateTrackerResponse::trackerNameIsSet() const
{
    return trackerNameIsSet_;
}

void CreateTrackerResponse::unsettrackerName()
{
    trackerNameIsSet_ = false;
}

std::string CreateTrackerResponse::getStatus() const
{
    return status_;
}

void CreateTrackerResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateTrackerResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateTrackerResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateTrackerResponse::getDetail() const
{
    return detail_;
}

void CreateTrackerResponse::setDetail(const std::string& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool CreateTrackerResponse::detailIsSet() const
{
    return detailIsSet_;
}

void CreateTrackerResponse::unsetdetail()
{
    detailIsSet_ = false;
}

bool CreateTrackerResponse::isIsSupportTraceFilesEncryption() const
{
    return isSupportTraceFilesEncryption_;
}

void CreateTrackerResponse::setIsSupportTraceFilesEncryption(bool value)
{
    isSupportTraceFilesEncryption_ = value;
    isSupportTraceFilesEncryptionIsSet_ = true;
}

bool CreateTrackerResponse::isSupportTraceFilesEncryptionIsSet() const
{
    return isSupportTraceFilesEncryptionIsSet_;
}

void CreateTrackerResponse::unsetisSupportTraceFilesEncryption()
{
    isSupportTraceFilesEncryptionIsSet_ = false;
}

ObsInfo CreateTrackerResponse::getObsInfo() const
{
    return obsInfo_;
}

void CreateTrackerResponse::setObsInfo(const ObsInfo& value)
{
    obsInfo_ = value;
    obsInfoIsSet_ = true;
}

bool CreateTrackerResponse::obsInfoIsSet() const
{
    return obsInfoIsSet_;
}

void CreateTrackerResponse::unsetobsInfo()
{
    obsInfoIsSet_ = false;
}

DataBucketQuery CreateTrackerResponse::getDataBucket() const
{
    return dataBucket_;
}

void CreateTrackerResponse::setDataBucket(const DataBucketQuery& value)
{
    dataBucket_ = value;
    dataBucketIsSet_ = true;
}

bool CreateTrackerResponse::dataBucketIsSet() const
{
    return dataBucketIsSet_;
}

void CreateTrackerResponse::unsetdataBucket()
{
    dataBucketIsSet_ = false;
}

}
}
}
}
}


