

#include "huaweicloud/cts/v3/model/CreateTrackerRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




CreateTrackerRequestBody::CreateTrackerRequestBody()
{
    trackerType_ = "";
    trackerTypeIsSet_ = false;
    trackerName_ = "";
    trackerNameIsSet_ = false;
    isOrganizationTracker_ = false;
    isOrganizationTrackerIsSet_ = false;
    managementEventSelectorIsSet_ = false;
    isLtsEnabled_ = false;
    isLtsEnabledIsSet_ = false;
    obsInfoIsSet_ = false;
    isSupportTraceFilesEncryption_ = false;
    isSupportTraceFilesEncryptionIsSet_ = false;
    kmsId_ = "";
    kmsIdIsSet_ = false;
    isSupportValidate_ = false;
    isSupportValidateIsSet_ = false;
    dataBucketIsSet_ = false;
}

CreateTrackerRequestBody::~CreateTrackerRequestBody() = default;

void CreateTrackerRequestBody::validate()
{
}

web::json::value CreateTrackerRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trackerTypeIsSet_) {
        val[utility::conversions::to_string_t("tracker_type")] = ModelBase::toJson(trackerType_);
    }
    if(trackerNameIsSet_) {
        val[utility::conversions::to_string_t("tracker_name")] = ModelBase::toJson(trackerName_);
    }
    if(isOrganizationTrackerIsSet_) {
        val[utility::conversions::to_string_t("is_organization_tracker")] = ModelBase::toJson(isOrganizationTracker_);
    }
    if(managementEventSelectorIsSet_) {
        val[utility::conversions::to_string_t("management_event_selector")] = ModelBase::toJson(managementEventSelector_);
    }
    if(isLtsEnabledIsSet_) {
        val[utility::conversions::to_string_t("is_lts_enabled")] = ModelBase::toJson(isLtsEnabled_);
    }
    if(obsInfoIsSet_) {
        val[utility::conversions::to_string_t("obs_info")] = ModelBase::toJson(obsInfo_);
    }
    if(isSupportTraceFilesEncryptionIsSet_) {
        val[utility::conversions::to_string_t("is_support_trace_files_encryption")] = ModelBase::toJson(isSupportTraceFilesEncryption_);
    }
    if(kmsIdIsSet_) {
        val[utility::conversions::to_string_t("kms_id")] = ModelBase::toJson(kmsId_);
    }
    if(isSupportValidateIsSet_) {
        val[utility::conversions::to_string_t("is_support_validate")] = ModelBase::toJson(isSupportValidate_);
    }
    if(dataBucketIsSet_) {
        val[utility::conversions::to_string_t("data_bucket")] = ModelBase::toJson(dataBucket_);
    }

    return val;
}

bool CreateTrackerRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tracker_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_lts_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_lts_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsLtsEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_info"));
        if(!fieldValue.is_null())
        {
            TrackerObsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("data_bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_bucket"));
        if(!fieldValue.is_null())
        {
            DataBucket refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataBucket(refVal);
        }
    }
    return ok;
}

std::string CreateTrackerRequestBody::getTrackerType() const
{
    return trackerType_;
}

void CreateTrackerRequestBody::setTrackerType(const std::string& value)
{
    trackerType_ = value;
    trackerTypeIsSet_ = true;
}

bool CreateTrackerRequestBody::trackerTypeIsSet() const
{
    return trackerTypeIsSet_;
}

void CreateTrackerRequestBody::unsettrackerType()
{
    trackerTypeIsSet_ = false;
}

std::string CreateTrackerRequestBody::getTrackerName() const
{
    return trackerName_;
}

void CreateTrackerRequestBody::setTrackerName(const std::string& value)
{
    trackerName_ = value;
    trackerNameIsSet_ = true;
}

bool CreateTrackerRequestBody::trackerNameIsSet() const
{
    return trackerNameIsSet_;
}

void CreateTrackerRequestBody::unsettrackerName()
{
    trackerNameIsSet_ = false;
}

bool CreateTrackerRequestBody::isIsOrganizationTracker() const
{
    return isOrganizationTracker_;
}

void CreateTrackerRequestBody::setIsOrganizationTracker(bool value)
{
    isOrganizationTracker_ = value;
    isOrganizationTrackerIsSet_ = true;
}

bool CreateTrackerRequestBody::isOrganizationTrackerIsSet() const
{
    return isOrganizationTrackerIsSet_;
}

void CreateTrackerRequestBody::unsetisOrganizationTracker()
{
    isOrganizationTrackerIsSet_ = false;
}

ManagementEventSelector CreateTrackerRequestBody::getManagementEventSelector() const
{
    return managementEventSelector_;
}

void CreateTrackerRequestBody::setManagementEventSelector(const ManagementEventSelector& value)
{
    managementEventSelector_ = value;
    managementEventSelectorIsSet_ = true;
}

bool CreateTrackerRequestBody::managementEventSelectorIsSet() const
{
    return managementEventSelectorIsSet_;
}

void CreateTrackerRequestBody::unsetmanagementEventSelector()
{
    managementEventSelectorIsSet_ = false;
}

bool CreateTrackerRequestBody::isIsLtsEnabled() const
{
    return isLtsEnabled_;
}

void CreateTrackerRequestBody::setIsLtsEnabled(bool value)
{
    isLtsEnabled_ = value;
    isLtsEnabledIsSet_ = true;
}

bool CreateTrackerRequestBody::isLtsEnabledIsSet() const
{
    return isLtsEnabledIsSet_;
}

void CreateTrackerRequestBody::unsetisLtsEnabled()
{
    isLtsEnabledIsSet_ = false;
}

TrackerObsInfo CreateTrackerRequestBody::getObsInfo() const
{
    return obsInfo_;
}

void CreateTrackerRequestBody::setObsInfo(const TrackerObsInfo& value)
{
    obsInfo_ = value;
    obsInfoIsSet_ = true;
}

bool CreateTrackerRequestBody::obsInfoIsSet() const
{
    return obsInfoIsSet_;
}

void CreateTrackerRequestBody::unsetobsInfo()
{
    obsInfoIsSet_ = false;
}

bool CreateTrackerRequestBody::isIsSupportTraceFilesEncryption() const
{
    return isSupportTraceFilesEncryption_;
}

void CreateTrackerRequestBody::setIsSupportTraceFilesEncryption(bool value)
{
    isSupportTraceFilesEncryption_ = value;
    isSupportTraceFilesEncryptionIsSet_ = true;
}

bool CreateTrackerRequestBody::isSupportTraceFilesEncryptionIsSet() const
{
    return isSupportTraceFilesEncryptionIsSet_;
}

void CreateTrackerRequestBody::unsetisSupportTraceFilesEncryption()
{
    isSupportTraceFilesEncryptionIsSet_ = false;
}

std::string CreateTrackerRequestBody::getKmsId() const
{
    return kmsId_;
}

void CreateTrackerRequestBody::setKmsId(const std::string& value)
{
    kmsId_ = value;
    kmsIdIsSet_ = true;
}

bool CreateTrackerRequestBody::kmsIdIsSet() const
{
    return kmsIdIsSet_;
}

void CreateTrackerRequestBody::unsetkmsId()
{
    kmsIdIsSet_ = false;
}

bool CreateTrackerRequestBody::isIsSupportValidate() const
{
    return isSupportValidate_;
}

void CreateTrackerRequestBody::setIsSupportValidate(bool value)
{
    isSupportValidate_ = value;
    isSupportValidateIsSet_ = true;
}

bool CreateTrackerRequestBody::isSupportValidateIsSet() const
{
    return isSupportValidateIsSet_;
}

void CreateTrackerRequestBody::unsetisSupportValidate()
{
    isSupportValidateIsSet_ = false;
}

DataBucket CreateTrackerRequestBody::getDataBucket() const
{
    return dataBucket_;
}

void CreateTrackerRequestBody::setDataBucket(const DataBucket& value)
{
    dataBucket_ = value;
    dataBucketIsSet_ = true;
}

bool CreateTrackerRequestBody::dataBucketIsSet() const
{
    return dataBucketIsSet_;
}

void CreateTrackerRequestBody::unsetdataBucket()
{
    dataBucketIsSet_ = false;
}

}
}
}
}
}


