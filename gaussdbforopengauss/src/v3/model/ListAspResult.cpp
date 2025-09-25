

#include "huaweicloud/gaussdbforopengauss/v3/model/ListAspResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListAspResult::ListAspResult()
{
    jobId_ = "";
    jobIdIsSet_ = false;
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
}

ListAspResult::~ListAspResult() = default;

void ListAspResult::validate()
{
}

web::json::value ListAspResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
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

    return val;
}
bool ListAspResult::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListAspResult::getJobId() const
{
    return jobId_;
}

void ListAspResult::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListAspResult::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListAspResult::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t ListAspResult::getFileSize() const
{
    return fileSize_;
}

void ListAspResult::setFileSize(int32_t value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool ListAspResult::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void ListAspResult::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string ListAspResult::getStartTime() const
{
    return startTime_;
}

void ListAspResult::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListAspResult::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListAspResult::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListAspResult::getEndTime() const
{
    return endTime_;
}

void ListAspResult::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListAspResult::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListAspResult::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListAspResult::getDownloadUrl() const
{
    return downloadUrl_;
}

void ListAspResult::setDownloadUrl(const std::string& value)
{
    downloadUrl_ = value;
    downloadUrlIsSet_ = true;
}

bool ListAspResult::downloadUrlIsSet() const
{
    return downloadUrlIsSet_;
}

void ListAspResult::unsetdownloadUrl()
{
    downloadUrlIsSet_ = false;
}

std::string ListAspResult::getStatus() const
{
    return status_;
}

void ListAspResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAspResult::statusIsSet() const
{
    return statusIsSet_;
}

void ListAspResult::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


