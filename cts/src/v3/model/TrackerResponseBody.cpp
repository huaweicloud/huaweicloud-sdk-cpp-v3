

#include "huaweicloud/cts/v3/model/TrackerResponseBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




TrackerResponseBody::TrackerResponseBody()
{
    id_ = "";
    idIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    kmsId_ = "";
    kmsIdIsSet_ = false;
    isSupportValidate_ = false;
    isSupportValidateIsSet_ = false;
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
    groupId_ = "";
    groupIdIsSet_ = false;
    streamId_ = "";
    streamIdIsSet_ = false;
    obsInfoIsSet_ = false;
    dataBucketIsSet_ = false;
}

TrackerResponseBody::~TrackerResponseBody() = default;

void TrackerResponseBody::validate()
{
}

web::json::value TrackerResponseBody::toJson() const
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
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(streamIdIsSet_) {
        val[utility::conversions::to_string_t("stream_id")] = ModelBase::toJson(streamId_);
    }
    if(obsInfoIsSet_) {
        val[utility::conversions::to_string_t("obs_info")] = ModelBase::toJson(obsInfo_);
    }
    if(dataBucketIsSet_) {
        val[utility::conversions::to_string_t("data_bucket")] = ModelBase::toJson(dataBucket_);
    }

    return val;
}

bool TrackerResponseBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamId(refVal);
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

std::string TrackerResponseBody::getId() const
{
    return id_;
}

void TrackerResponseBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TrackerResponseBody::idIsSet() const
{
    return idIsSet_;
}

void TrackerResponseBody::unsetid()
{
    idIsSet_ = false;
}

int64_t TrackerResponseBody::getCreateTime() const
{
    return createTime_;
}

void TrackerResponseBody::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TrackerResponseBody::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TrackerResponseBody::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TrackerResponseBody::getKmsId() const
{
    return kmsId_;
}

void TrackerResponseBody::setKmsId(const std::string& value)
{
    kmsId_ = value;
    kmsIdIsSet_ = true;
}

bool TrackerResponseBody::kmsIdIsSet() const
{
    return kmsIdIsSet_;
}

void TrackerResponseBody::unsetkmsId()
{
    kmsIdIsSet_ = false;
}

bool TrackerResponseBody::isIsSupportValidate() const
{
    return isSupportValidate_;
}

void TrackerResponseBody::setIsSupportValidate(bool value)
{
    isSupportValidate_ = value;
    isSupportValidateIsSet_ = true;
}

bool TrackerResponseBody::isSupportValidateIsSet() const
{
    return isSupportValidateIsSet_;
}

void TrackerResponseBody::unsetisSupportValidate()
{
    isSupportValidateIsSet_ = false;
}

Lts TrackerResponseBody::getLts() const
{
    return lts_;
}

void TrackerResponseBody::setLts(const Lts& value)
{
    lts_ = value;
    ltsIsSet_ = true;
}

bool TrackerResponseBody::ltsIsSet() const
{
    return ltsIsSet_;
}

void TrackerResponseBody::unsetlts()
{
    ltsIsSet_ = false;
}

std::string TrackerResponseBody::getTrackerType() const
{
    return trackerType_;
}

void TrackerResponseBody::setTrackerType(const std::string& value)
{
    trackerType_ = value;
    trackerTypeIsSet_ = true;
}

bool TrackerResponseBody::trackerTypeIsSet() const
{
    return trackerTypeIsSet_;
}

void TrackerResponseBody::unsettrackerType()
{
    trackerTypeIsSet_ = false;
}

std::string TrackerResponseBody::getDomainId() const
{
    return domainId_;
}

void TrackerResponseBody::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool TrackerResponseBody::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void TrackerResponseBody::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string TrackerResponseBody::getProjectId() const
{
    return projectId_;
}

void TrackerResponseBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool TrackerResponseBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void TrackerResponseBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string TrackerResponseBody::getTrackerName() const
{
    return trackerName_;
}

void TrackerResponseBody::setTrackerName(const std::string& value)
{
    trackerName_ = value;
    trackerNameIsSet_ = true;
}

bool TrackerResponseBody::trackerNameIsSet() const
{
    return trackerNameIsSet_;
}

void TrackerResponseBody::unsettrackerName()
{
    trackerNameIsSet_ = false;
}

std::string TrackerResponseBody::getStatus() const
{
    return status_;
}

void TrackerResponseBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TrackerResponseBody::statusIsSet() const
{
    return statusIsSet_;
}

void TrackerResponseBody::unsetstatus()
{
    statusIsSet_ = false;
}

std::string TrackerResponseBody::getDetail() const
{
    return detail_;
}

void TrackerResponseBody::setDetail(const std::string& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool TrackerResponseBody::detailIsSet() const
{
    return detailIsSet_;
}

void TrackerResponseBody::unsetdetail()
{
    detailIsSet_ = false;
}

bool TrackerResponseBody::isIsSupportTraceFilesEncryption() const
{
    return isSupportTraceFilesEncryption_;
}

void TrackerResponseBody::setIsSupportTraceFilesEncryption(bool value)
{
    isSupportTraceFilesEncryption_ = value;
    isSupportTraceFilesEncryptionIsSet_ = true;
}

bool TrackerResponseBody::isSupportTraceFilesEncryptionIsSet() const
{
    return isSupportTraceFilesEncryptionIsSet_;
}

void TrackerResponseBody::unsetisSupportTraceFilesEncryption()
{
    isSupportTraceFilesEncryptionIsSet_ = false;
}

std::string TrackerResponseBody::getGroupId() const
{
    return groupId_;
}

void TrackerResponseBody::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool TrackerResponseBody::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void TrackerResponseBody::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string TrackerResponseBody::getStreamId() const
{
    return streamId_;
}

void TrackerResponseBody::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool TrackerResponseBody::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void TrackerResponseBody::unsetstreamId()
{
    streamIdIsSet_ = false;
}

ObsInfo TrackerResponseBody::getObsInfo() const
{
    return obsInfo_;
}

void TrackerResponseBody::setObsInfo(const ObsInfo& value)
{
    obsInfo_ = value;
    obsInfoIsSet_ = true;
}

bool TrackerResponseBody::obsInfoIsSet() const
{
    return obsInfoIsSet_;
}

void TrackerResponseBody::unsetobsInfo()
{
    obsInfoIsSet_ = false;
}

DataBucketQuery TrackerResponseBody::getDataBucket() const
{
    return dataBucket_;
}

void TrackerResponseBody::setDataBucket(const DataBucketQuery& value)
{
    dataBucket_ = value;
    dataBucketIsSet_ = true;
}

bool TrackerResponseBody::dataBucketIsSet() const
{
    return dataBucketIsSet_;
}

void TrackerResponseBody::unsetdataBucket()
{
    dataBucketIsSet_ = false;
}

}
}
}
}
}


