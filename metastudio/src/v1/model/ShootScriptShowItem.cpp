

#include "huaweicloud/metastudio/v1/model/ShootScriptShowItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShootScriptShowItem::ShootScriptShowItem()
{
    sequenceNo_ = 0;
    sequenceNoIsSet_ = false;
    shootScriptIsSet_ = false;
    subtitleFileInfoIsSet_ = false;
    audioConfigIsSet_ = false;
    previewInfoIsSet_ = false;
}

ShootScriptShowItem::~ShootScriptShowItem() = default;

void ShootScriptShowItem::validate()
{
}

web::json::value ShootScriptShowItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sequenceNoIsSet_) {
        val[utility::conversions::to_string_t("sequence_no")] = ModelBase::toJson(sequenceNo_);
    }
    if(shootScriptIsSet_) {
        val[utility::conversions::to_string_t("shoot_script")] = ModelBase::toJson(shootScript_);
    }
    if(subtitleFileInfoIsSet_) {
        val[utility::conversions::to_string_t("subtitle_file_info")] = ModelBase::toJson(subtitleFileInfo_);
    }
    if(audioConfigIsSet_) {
        val[utility::conversions::to_string_t("audio_config")] = ModelBase::toJson(audioConfig_);
    }
    if(previewInfoIsSet_) {
        val[utility::conversions::to_string_t("preview_info")] = ModelBase::toJson(previewInfo_);
    }

    return val;
}
bool ShootScriptShowItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("shoot_script"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shoot_script"));
        if(!fieldValue.is_null())
        {
            ShootScriptDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShootScript(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subtitle_file_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtitle_file_info"));
        if(!fieldValue.is_null())
        {
            SubtitleFiles refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubtitleFileInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_config"));
        if(!fieldValue.is_null())
        {
            AudioInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("preview_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preview_info"));
        if(!fieldValue.is_null())
        {
            PreviewInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreviewInfo(refVal);
        }
    }
    return ok;
}


int32_t ShootScriptShowItem::getSequenceNo() const
{
    return sequenceNo_;
}

void ShootScriptShowItem::setSequenceNo(int32_t value)
{
    sequenceNo_ = value;
    sequenceNoIsSet_ = true;
}

bool ShootScriptShowItem::sequenceNoIsSet() const
{
    return sequenceNoIsSet_;
}

void ShootScriptShowItem::unsetsequenceNo()
{
    sequenceNoIsSet_ = false;
}

ShootScriptDetail ShootScriptShowItem::getShootScript() const
{
    return shootScript_;
}

void ShootScriptShowItem::setShootScript(const ShootScriptDetail& value)
{
    shootScript_ = value;
    shootScriptIsSet_ = true;
}

bool ShootScriptShowItem::shootScriptIsSet() const
{
    return shootScriptIsSet_;
}

void ShootScriptShowItem::unsetshootScript()
{
    shootScriptIsSet_ = false;
}

SubtitleFiles ShootScriptShowItem::getSubtitleFileInfo() const
{
    return subtitleFileInfo_;
}

void ShootScriptShowItem::setSubtitleFileInfo(const SubtitleFiles& value)
{
    subtitleFileInfo_ = value;
    subtitleFileInfoIsSet_ = true;
}

bool ShootScriptShowItem::subtitleFileInfoIsSet() const
{
    return subtitleFileInfoIsSet_;
}

void ShootScriptShowItem::unsetsubtitleFileInfo()
{
    subtitleFileInfoIsSet_ = false;
}

AudioInfo ShootScriptShowItem::getAudioConfig() const
{
    return audioConfig_;
}

void ShootScriptShowItem::setAudioConfig(const AudioInfo& value)
{
    audioConfig_ = value;
    audioConfigIsSet_ = true;
}

bool ShootScriptShowItem::audioConfigIsSet() const
{
    return audioConfigIsSet_;
}

void ShootScriptShowItem::unsetaudioConfig()
{
    audioConfigIsSet_ = false;
}

PreviewInfo ShootScriptShowItem::getPreviewInfo() const
{
    return previewInfo_;
}

void ShootScriptShowItem::setPreviewInfo(const PreviewInfo& value)
{
    previewInfo_ = value;
    previewInfoIsSet_ = true;
}

bool ShootScriptShowItem::previewInfoIsSet() const
{
    return previewInfoIsSet_;
}

void ShootScriptShowItem::unsetpreviewInfo()
{
    previewInfoIsSet_ = false;
}

}
}
}
}
}


