

#include "huaweicloud/gaussdbforopengauss/v3/model/CollectedWdrSnapshotInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CollectedWdrSnapshotInfoResult::CollectedWdrSnapshotInfoResult()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    wdrType_ = "";
    wdrTypeIsSet_ = false;
    fileSize_ = 0;
    fileSizeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    downloadUrl_ = "";
    downloadUrlIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    notes_ = "";
    notesIsSet_ = false;
}

CollectedWdrSnapshotInfoResult::~CollectedWdrSnapshotInfoResult() = default;

void CollectedWdrSnapshotInfoResult::validate()
{
}

web::json::value CollectedWdrSnapshotInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(wdrTypeIsSet_) {
        val[utility::conversions::to_string_t("wdr_type")] = ModelBase::toJson(wdrType_);
    }
    if(fileSizeIsSet_) {
        val[utility::conversions::to_string_t("file_size")] = ModelBase::toJson(fileSize_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(downloadUrlIsSet_) {
        val[utility::conversions::to_string_t("download_url")] = ModelBase::toJson(downloadUrl_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(notesIsSet_) {
        val[utility::conversions::to_string_t("notes")] = ModelBase::toJson(notes_);
    }

    return val;
}
bool CollectedWdrSnapshotInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wdr_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wdr_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWdrType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownloadUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("notes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotes(refVal);
        }
    }
    return ok;
}


std::string CollectedWdrSnapshotInfoResult::getJobId() const
{
    return jobId_;
}

void CollectedWdrSnapshotInfoResult::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CollectedWdrSnapshotInfoResult::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CollectedWdrSnapshotInfoResult::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CollectedWdrSnapshotInfoResult::getWdrType() const
{
    return wdrType_;
}

void CollectedWdrSnapshotInfoResult::setWdrType(const std::string& value)
{
    wdrType_ = value;
    wdrTypeIsSet_ = true;
}

bool CollectedWdrSnapshotInfoResult::wdrTypeIsSet() const
{
    return wdrTypeIsSet_;
}

void CollectedWdrSnapshotInfoResult::unsetwdrType()
{
    wdrTypeIsSet_ = false;
}

int32_t CollectedWdrSnapshotInfoResult::getFileSize() const
{
    return fileSize_;
}

void CollectedWdrSnapshotInfoResult::setFileSize(int32_t value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool CollectedWdrSnapshotInfoResult::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void CollectedWdrSnapshotInfoResult::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string CollectedWdrSnapshotInfoResult::getStartTime() const
{
    return startTime_;
}

void CollectedWdrSnapshotInfoResult::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CollectedWdrSnapshotInfoResult::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CollectedWdrSnapshotInfoResult::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string CollectedWdrSnapshotInfoResult::getEndTime() const
{
    return endTime_;
}

void CollectedWdrSnapshotInfoResult::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CollectedWdrSnapshotInfoResult::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CollectedWdrSnapshotInfoResult::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string CollectedWdrSnapshotInfoResult::getDownloadUrl() const
{
    return downloadUrl_;
}

void CollectedWdrSnapshotInfoResult::setDownloadUrl(const std::string& value)
{
    downloadUrl_ = value;
    downloadUrlIsSet_ = true;
}

bool CollectedWdrSnapshotInfoResult::downloadUrlIsSet() const
{
    return downloadUrlIsSet_;
}

void CollectedWdrSnapshotInfoResult::unsetdownloadUrl()
{
    downloadUrlIsSet_ = false;
}

std::string CollectedWdrSnapshotInfoResult::getStatus() const
{
    return status_;
}

void CollectedWdrSnapshotInfoResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CollectedWdrSnapshotInfoResult::statusIsSet() const
{
    return statusIsSet_;
}

void CollectedWdrSnapshotInfoResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CollectedWdrSnapshotInfoResult::getNotes() const
{
    return notes_;
}

void CollectedWdrSnapshotInfoResult::setNotes(const std::string& value)
{
    notes_ = value;
    notesIsSet_ = true;
}

bool CollectedWdrSnapshotInfoResult::notesIsSet() const
{
    return notesIsSet_;
}

void CollectedWdrSnapshotInfoResult::unsetnotes()
{
    notesIsSet_ = false;
}

}
}
}
}
}


