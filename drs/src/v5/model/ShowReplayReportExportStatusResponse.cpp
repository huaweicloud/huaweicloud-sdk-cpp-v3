

#include "huaweicloud/drs/v5/model/ShowReplayReportExportStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowReplayReportExportStatusResponse::ShowReplayReportExportStatusResponse()
{
    exportStatus_ = "";
    exportStatusIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
    failedReason_ = "";
    failedReasonIsSet_ = false;
    totalCount_ = 0L;
    totalCountIsSet_ = false;
    currentCount_ = 0L;
    currentCountIsSet_ = false;
    progressPercentage_ = 0;
    progressPercentageIsSet_ = false;
    uploadedFileNamesIsSet_ = false;
}

ShowReplayReportExportStatusResponse::~ShowReplayReportExportStatusResponse() = default;

void ShowReplayReportExportStatusResponse::validate()
{
}

web::json::value ShowReplayReportExportStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(exportStatusIsSet_) {
        val[utility::conversions::to_string_t("export_status")] = ModelBase::toJson(exportStatus_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }
    if(failedReasonIsSet_) {
        val[utility::conversions::to_string_t("failed_reason")] = ModelBase::toJson(failedReason_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(currentCountIsSet_) {
        val[utility::conversions::to_string_t("current_count")] = ModelBase::toJson(currentCount_);
    }
    if(progressPercentageIsSet_) {
        val[utility::conversions::to_string_t("progress_percentage")] = ModelBase::toJson(progressPercentage_);
    }
    if(uploadedFileNamesIsSet_) {
        val[utility::conversions::to_string_t("uploaded_file_names")] = ModelBase::toJson(uploadedFileNames_);
    }

    return val;
}
bool ShowReplayReportExportStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("export_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("export_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExportStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("file_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("progress_percentage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress_percentage"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgressPercentage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uploaded_file_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uploaded_file_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUploadedFileNames(refVal);
        }
    }
    return ok;
}


std::string ShowReplayReportExportStatusResponse::getExportStatus() const
{
    return exportStatus_;
}

void ShowReplayReportExportStatusResponse::setExportStatus(const std::string& value)
{
    exportStatus_ = value;
    exportStatusIsSet_ = true;
}

bool ShowReplayReportExportStatusResponse::exportStatusIsSet() const
{
    return exportStatusIsSet_;
}

void ShowReplayReportExportStatusResponse::unsetexportStatus()
{
    exportStatusIsSet_ = false;
}

std::string ShowReplayReportExportStatusResponse::getJobId() const
{
    return jobId_;
}

void ShowReplayReportExportStatusResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowReplayReportExportStatusResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowReplayReportExportStatusResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowReplayReportExportStatusResponse::getFileType() const
{
    return fileType_;
}

void ShowReplayReportExportStatusResponse::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool ShowReplayReportExportStatusResponse::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void ShowReplayReportExportStatusResponse::unsetfileType()
{
    fileTypeIsSet_ = false;
}

std::string ShowReplayReportExportStatusResponse::getFailedReason() const
{
    return failedReason_;
}

void ShowReplayReportExportStatusResponse::setFailedReason(const std::string& value)
{
    failedReason_ = value;
    failedReasonIsSet_ = true;
}

bool ShowReplayReportExportStatusResponse::failedReasonIsSet() const
{
    return failedReasonIsSet_;
}

void ShowReplayReportExportStatusResponse::unsetfailedReason()
{
    failedReasonIsSet_ = false;
}

int64_t ShowReplayReportExportStatusResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowReplayReportExportStatusResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowReplayReportExportStatusResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowReplayReportExportStatusResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

int64_t ShowReplayReportExportStatusResponse::getCurrentCount() const
{
    return currentCount_;
}

void ShowReplayReportExportStatusResponse::setCurrentCount(int64_t value)
{
    currentCount_ = value;
    currentCountIsSet_ = true;
}

bool ShowReplayReportExportStatusResponse::currentCountIsSet() const
{
    return currentCountIsSet_;
}

void ShowReplayReportExportStatusResponse::unsetcurrentCount()
{
    currentCountIsSet_ = false;
}

int32_t ShowReplayReportExportStatusResponse::getProgressPercentage() const
{
    return progressPercentage_;
}

void ShowReplayReportExportStatusResponse::setProgressPercentage(int32_t value)
{
    progressPercentage_ = value;
    progressPercentageIsSet_ = true;
}

bool ShowReplayReportExportStatusResponse::progressPercentageIsSet() const
{
    return progressPercentageIsSet_;
}

void ShowReplayReportExportStatusResponse::unsetprogressPercentage()
{
    progressPercentageIsSet_ = false;
}

std::vector<std::string>& ShowReplayReportExportStatusResponse::getUploadedFileNames()
{
    return uploadedFileNames_;
}

void ShowReplayReportExportStatusResponse::setUploadedFileNames(const std::vector<std::string>& value)
{
    uploadedFileNames_ = value;
    uploadedFileNamesIsSet_ = true;
}

bool ShowReplayReportExportStatusResponse::uploadedFileNamesIsSet() const
{
    return uploadedFileNamesIsSet_;
}

void ShowReplayReportExportStatusResponse::unsetuploadedFileNames()
{
    uploadedFileNamesIsSet_ = false;
}

}
}
}
}
}


