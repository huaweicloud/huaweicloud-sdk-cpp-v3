

#include "huaweicloud/metastudio/v1/model/SubtitleFileDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SubtitleFileDetail::SubtitleFileDetail()
{
    sequenceNo_ = 0;
    sequenceNoIsSet_ = false;
    subtitleFileState_ = "";
    subtitleFileStateIsSet_ = false;
    subtitleFileDownloadUrl_ = "";
    subtitleFileDownloadUrlIsSet_ = false;
    subtitleFileUploadUrl_ = "";
    subtitleFileUploadUrlIsSet_ = false;
    generateTime_ = "";
    generateTimeIsSet_ = false;
}

SubtitleFileDetail::~SubtitleFileDetail() = default;

void SubtitleFileDetail::validate()
{
}

web::json::value SubtitleFileDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sequenceNoIsSet_) {
        val[utility::conversions::to_string_t("sequence_no")] = ModelBase::toJson(sequenceNo_);
    }
    if(subtitleFileStateIsSet_) {
        val[utility::conversions::to_string_t("subtitle_file_state")] = ModelBase::toJson(subtitleFileState_);
    }
    if(subtitleFileDownloadUrlIsSet_) {
        val[utility::conversions::to_string_t("subtitle_file_download_url")] = ModelBase::toJson(subtitleFileDownloadUrl_);
    }
    if(subtitleFileUploadUrlIsSet_) {
        val[utility::conversions::to_string_t("subtitle_file_upload_url")] = ModelBase::toJson(subtitleFileUploadUrl_);
    }
    if(generateTimeIsSet_) {
        val[utility::conversions::to_string_t("generate_time")] = ModelBase::toJson(generateTime_);
    }

    return val;
}
bool SubtitleFileDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sequence_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequenceNo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("generate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("generate_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGenerateTime(refVal);
        }
    }
    return ok;
}


int32_t SubtitleFileDetail::getSequenceNo() const
{
    return sequenceNo_;
}

void SubtitleFileDetail::setSequenceNo(int32_t value)
{
    sequenceNo_ = value;
    sequenceNoIsSet_ = true;
}

bool SubtitleFileDetail::sequenceNoIsSet() const
{
    return sequenceNoIsSet_;
}

void SubtitleFileDetail::unsetsequenceNo()
{
    sequenceNoIsSet_ = false;
}

std::string SubtitleFileDetail::getSubtitleFileState() const
{
    return subtitleFileState_;
}

void SubtitleFileDetail::setSubtitleFileState(const std::string& value)
{
    subtitleFileState_ = value;
    subtitleFileStateIsSet_ = true;
}

bool SubtitleFileDetail::subtitleFileStateIsSet() const
{
    return subtitleFileStateIsSet_;
}

void SubtitleFileDetail::unsetsubtitleFileState()
{
    subtitleFileStateIsSet_ = false;
}

std::string SubtitleFileDetail::getSubtitleFileDownloadUrl() const
{
    return subtitleFileDownloadUrl_;
}

void SubtitleFileDetail::setSubtitleFileDownloadUrl(const std::string& value)
{
    subtitleFileDownloadUrl_ = value;
    subtitleFileDownloadUrlIsSet_ = true;
}

bool SubtitleFileDetail::subtitleFileDownloadUrlIsSet() const
{
    return subtitleFileDownloadUrlIsSet_;
}

void SubtitleFileDetail::unsetsubtitleFileDownloadUrl()
{
    subtitleFileDownloadUrlIsSet_ = false;
}

std::string SubtitleFileDetail::getSubtitleFileUploadUrl() const
{
    return subtitleFileUploadUrl_;
}

void SubtitleFileDetail::setSubtitleFileUploadUrl(const std::string& value)
{
    subtitleFileUploadUrl_ = value;
    subtitleFileUploadUrlIsSet_ = true;
}

bool SubtitleFileDetail::subtitleFileUploadUrlIsSet() const
{
    return subtitleFileUploadUrlIsSet_;
}

void SubtitleFileDetail::unsetsubtitleFileUploadUrl()
{
    subtitleFileUploadUrlIsSet_ = false;
}

std::string SubtitleFileDetail::getGenerateTime() const
{
    return generateTime_;
}

void SubtitleFileDetail::setGenerateTime(const std::string& value)
{
    generateTime_ = value;
    generateTimeIsSet_ = true;
}

bool SubtitleFileDetail::generateTimeIsSet() const
{
    return generateTimeIsSet_;
}

void SubtitleFileDetail::unsetgenerateTime()
{
    generateTimeIsSet_ = false;
}

}
}
}
}
}


