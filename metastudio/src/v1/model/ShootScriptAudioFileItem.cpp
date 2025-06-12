

#include "huaweicloud/metastudio/v1/model/ShootScriptAudioFileItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShootScriptAudioFileItem::ShootScriptAudioFileItem()
{
    sequenceNo_ = 0;
    sequenceNoIsSet_ = false;
    audioFileUploadUrl_ = "";
    audioFileUploadUrlIsSet_ = false;
    audioFileDownloadUrl_ = "";
    audioFileDownloadUrlIsSet_ = false;
    audioId_ = 0;
    audioIdIsSet_ = false;
}

ShootScriptAudioFileItem::~ShootScriptAudioFileItem() = default;

void ShootScriptAudioFileItem::validate()
{
}

web::json::value ShootScriptAudioFileItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sequenceNoIsSet_) {
        val[utility::conversions::to_string_t("sequence_no")] = ModelBase::toJson(sequenceNo_);
    }
    if(audioFileUploadUrlIsSet_) {
        val[utility::conversions::to_string_t("audio_file_upload_url")] = ModelBase::toJson(audioFileUploadUrl_);
    }
    if(audioFileDownloadUrlIsSet_) {
        val[utility::conversions::to_string_t("audio_file_download_url")] = ModelBase::toJson(audioFileDownloadUrl_);
    }
    if(audioIdIsSet_) {
        val[utility::conversions::to_string_t("audio_id")] = ModelBase::toJson(audioId_);
    }

    return val;
}
bool ShootScriptAudioFileItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("audio_file_upload_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_file_upload_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioFileUploadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_file_download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_file_download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioFileDownloadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioId(refVal);
        }
    }
    return ok;
}


int32_t ShootScriptAudioFileItem::getSequenceNo() const
{
    return sequenceNo_;
}

void ShootScriptAudioFileItem::setSequenceNo(int32_t value)
{
    sequenceNo_ = value;
    sequenceNoIsSet_ = true;
}

bool ShootScriptAudioFileItem::sequenceNoIsSet() const
{
    return sequenceNoIsSet_;
}

void ShootScriptAudioFileItem::unsetsequenceNo()
{
    sequenceNoIsSet_ = false;
}

std::string ShootScriptAudioFileItem::getAudioFileUploadUrl() const
{
    return audioFileUploadUrl_;
}

void ShootScriptAudioFileItem::setAudioFileUploadUrl(const std::string& value)
{
    audioFileUploadUrl_ = value;
    audioFileUploadUrlIsSet_ = true;
}

bool ShootScriptAudioFileItem::audioFileUploadUrlIsSet() const
{
    return audioFileUploadUrlIsSet_;
}

void ShootScriptAudioFileItem::unsetaudioFileUploadUrl()
{
    audioFileUploadUrlIsSet_ = false;
}

std::string ShootScriptAudioFileItem::getAudioFileDownloadUrl() const
{
    return audioFileDownloadUrl_;
}

void ShootScriptAudioFileItem::setAudioFileDownloadUrl(const std::string& value)
{
    audioFileDownloadUrl_ = value;
    audioFileDownloadUrlIsSet_ = true;
}

bool ShootScriptAudioFileItem::audioFileDownloadUrlIsSet() const
{
    return audioFileDownloadUrlIsSet_;
}

void ShootScriptAudioFileItem::unsetaudioFileDownloadUrl()
{
    audioFileDownloadUrlIsSet_ = false;
}

int32_t ShootScriptAudioFileItem::getAudioId() const
{
    return audioId_;
}

void ShootScriptAudioFileItem::setAudioId(int32_t value)
{
    audioId_ = value;
    audioIdIsSet_ = true;
}

bool ShootScriptAudioFileItem::audioIdIsSet() const
{
    return audioIdIsSet_;
}

void ShootScriptAudioFileItem::unsetaudioId()
{
    audioIdIsSet_ = false;
}

}
}
}
}
}


