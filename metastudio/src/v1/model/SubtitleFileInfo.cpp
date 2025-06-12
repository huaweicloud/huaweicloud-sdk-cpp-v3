

#include "huaweicloud/metastudio/v1/model/SubtitleFileInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SubtitleFileInfo::SubtitleFileInfo()
{
    subtitleFileDownloadUrl_ = "";
    subtitleFileDownloadUrlIsSet_ = false;
    subtitleFileUploadUrl_ = "";
    subtitleFileUploadUrlIsSet_ = false;
    subtitleFileState_ = "";
    subtitleFileStateIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

SubtitleFileInfo::~SubtitleFileInfo() = default;

void SubtitleFileInfo::validate()
{
}

web::json::value SubtitleFileInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subtitleFileDownloadUrlIsSet_) {
        val[utility::conversions::to_string_t("subtitle_file_download_url")] = ModelBase::toJson(subtitleFileDownloadUrl_);
    }
    if(subtitleFileUploadUrlIsSet_) {
        val[utility::conversions::to_string_t("subtitle_file_upload_url")] = ModelBase::toJson(subtitleFileUploadUrl_);
    }
    if(subtitleFileStateIsSet_) {
        val[utility::conversions::to_string_t("subtitle_file_state")] = ModelBase::toJson(subtitleFileState_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool SubtitleFileInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subtitle_file_download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtitle_file_download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubtitleFileDownloadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subtitle_file_upload_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtitle_file_upload_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubtitleFileUploadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subtitle_file_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtitle_file_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubtitleFileState(refVal);
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
    return ok;
}


std::string SubtitleFileInfo::getSubtitleFileDownloadUrl() const
{
    return subtitleFileDownloadUrl_;
}

void SubtitleFileInfo::setSubtitleFileDownloadUrl(const std::string& value)
{
    subtitleFileDownloadUrl_ = value;
    subtitleFileDownloadUrlIsSet_ = true;
}

bool SubtitleFileInfo::subtitleFileDownloadUrlIsSet() const
{
    return subtitleFileDownloadUrlIsSet_;
}

void SubtitleFileInfo::unsetsubtitleFileDownloadUrl()
{
    subtitleFileDownloadUrlIsSet_ = false;
}

std::string SubtitleFileInfo::getSubtitleFileUploadUrl() const
{
    return subtitleFileUploadUrl_;
}

void SubtitleFileInfo::setSubtitleFileUploadUrl(const std::string& value)
{
    subtitleFileUploadUrl_ = value;
    subtitleFileUploadUrlIsSet_ = true;
}

bool SubtitleFileInfo::subtitleFileUploadUrlIsSet() const
{
    return subtitleFileUploadUrlIsSet_;
}

void SubtitleFileInfo::unsetsubtitleFileUploadUrl()
{
    subtitleFileUploadUrlIsSet_ = false;
}

std::string SubtitleFileInfo::getSubtitleFileState() const
{
    return subtitleFileState_;
}

void SubtitleFileInfo::setSubtitleFileState(const std::string& value)
{
    subtitleFileState_ = value;
    subtitleFileStateIsSet_ = true;
}

bool SubtitleFileInfo::subtitleFileStateIsSet() const
{
    return subtitleFileStateIsSet_;
}

void SubtitleFileInfo::unsetsubtitleFileState()
{
    subtitleFileStateIsSet_ = false;
}

std::string SubtitleFileInfo::getJobId() const
{
    return jobId_;
}

void SubtitleFileInfo::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SubtitleFileInfo::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SubtitleFileInfo::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


