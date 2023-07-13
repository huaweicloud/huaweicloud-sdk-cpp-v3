

#include "huaweicloud/cts/v3/model/UpdateTrackerRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




UpdateTrackerRequestBody::UpdateTrackerRequestBody()
{
    trackerType_ = "";
    trackerTypeIsSet_ = false;
    trackerName_ = "";
    trackerNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
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

UpdateTrackerRequestBody::~UpdateTrackerRequestBody() = default;

void UpdateTrackerRequestBody::validate()
{
}

web::json::value UpdateTrackerRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trackerTypeIsSet_) {
        val[utility::conversions::to_string_t("tracker_type")] = ModelBase::toJson(trackerType_);
    }
    if(trackerNameIsSet_) {
        val[utility::conversions::to_string_t("tracker_name")] = ModelBase::toJson(trackerName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
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

bool UpdateTrackerRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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

std::string UpdateTrackerRequestBody::getTrackerType() const
{
    return trackerType_;
}

void UpdateTrackerRequestBody::setTrackerType(const std::string& value)
{
    trackerType_ = value;
    trackerTypeIsSet_ = true;
}

bool UpdateTrackerRequestBody::trackerTypeIsSet() const
{
    return trackerTypeIsSet_;
}

void UpdateTrackerRequestBody::unsettrackerType()
{
    trackerTypeIsSet_ = false;
}

std::string UpdateTrackerRequestBody::getTrackerName() const
{
    return trackerName_;
}

void UpdateTrackerRequestBody::setTrackerName(const std::string& value)
{
    trackerName_ = value;
    trackerNameIsSet_ = true;
}

bool UpdateTrackerRequestBody::trackerNameIsSet() const
{
    return trackerNameIsSet_;
}

void UpdateTrackerRequestBody::unsettrackerName()
{
    trackerNameIsSet_ = false;
}

std::string UpdateTrackerRequestBody::getStatus() const
{
    return status_;
}

void UpdateTrackerRequestBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateTrackerRequestBody::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateTrackerRequestBody::unsetstatus()
{
    statusIsSet_ = false;
}

bool UpdateTrackerRequestBody::isIsLtsEnabled() const
{
    return isLtsEnabled_;
}

void UpdateTrackerRequestBody::setIsLtsEnabled(bool value)
{
    isLtsEnabled_ = value;
    isLtsEnabledIsSet_ = true;
}

bool UpdateTrackerRequestBody::isLtsEnabledIsSet() const
{
    return isLtsEnabledIsSet_;
}

void UpdateTrackerRequestBody::unsetisLtsEnabled()
{
    isLtsEnabledIsSet_ = false;
}

TrackerObsInfo UpdateTrackerRequestBody::getObsInfo() const
{
    return obsInfo_;
}

void UpdateTrackerRequestBody::setObsInfo(const TrackerObsInfo& value)
{
    obsInfo_ = value;
    obsInfoIsSet_ = true;
}

bool UpdateTrackerRequestBody::obsInfoIsSet() const
{
    return obsInfoIsSet_;
}

void UpdateTrackerRequestBody::unsetobsInfo()
{
    obsInfoIsSet_ = false;
}

bool UpdateTrackerRequestBody::isIsSupportTraceFilesEncryption() const
{
    return isSupportTraceFilesEncryption_;
}

void UpdateTrackerRequestBody::setIsSupportTraceFilesEncryption(bool value)
{
    isSupportTraceFilesEncryption_ = value;
    isSupportTraceFilesEncryptionIsSet_ = true;
}

bool UpdateTrackerRequestBody::isSupportTraceFilesEncryptionIsSet() const
{
    return isSupportTraceFilesEncryptionIsSet_;
}

void UpdateTrackerRequestBody::unsetisSupportTraceFilesEncryption()
{
    isSupportTraceFilesEncryptionIsSet_ = false;
}

std::string UpdateTrackerRequestBody::getKmsId() const
{
    return kmsId_;
}

void UpdateTrackerRequestBody::setKmsId(const std::string& value)
{
    kmsId_ = value;
    kmsIdIsSet_ = true;
}

bool UpdateTrackerRequestBody::kmsIdIsSet() const
{
    return kmsIdIsSet_;
}

void UpdateTrackerRequestBody::unsetkmsId()
{
    kmsIdIsSet_ = false;
}

bool UpdateTrackerRequestBody::isIsSupportValidate() const
{
    return isSupportValidate_;
}

void UpdateTrackerRequestBody::setIsSupportValidate(bool value)
{
    isSupportValidate_ = value;
    isSupportValidateIsSet_ = true;
}

bool UpdateTrackerRequestBody::isSupportValidateIsSet() const
{
    return isSupportValidateIsSet_;
}

void UpdateTrackerRequestBody::unsetisSupportValidate()
{
    isSupportValidateIsSet_ = false;
}

DataBucket UpdateTrackerRequestBody::getDataBucket() const
{
    return dataBucket_;
}

void UpdateTrackerRequestBody::setDataBucket(const DataBucket& value)
{
    dataBucket_ = value;
    dataBucketIsSet_ = true;
}

bool UpdateTrackerRequestBody::dataBucketIsSet() const
{
    return dataBucketIsSet_;
}

void UpdateTrackerRequestBody::unsetdataBucket()
{
    dataBucketIsSet_ = false;
}

}
}
}
}
}


