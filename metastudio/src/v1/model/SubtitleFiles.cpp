

#include "huaweicloud/metastudio/v1/model/SubtitleFiles.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SubtitleFiles::SubtitleFiles()
{
    textSubtitleFileIsSet_ = false;
    audioSubtitleFileIsSet_ = false;
}

SubtitleFiles::~SubtitleFiles() = default;

void SubtitleFiles::validate()
{
}

web::json::value SubtitleFiles::toJson() const
{
    web::json::value val = web::json::value::object();

    if(textSubtitleFileIsSet_) {
        val[utility::conversions::to_string_t("text_subtitle_file")] = ModelBase::toJson(textSubtitleFile_);
    }
    if(audioSubtitleFileIsSet_) {
        val[utility::conversions::to_string_t("audio_subtitle_file")] = ModelBase::toJson(audioSubtitleFile_);
    }

    return val;
}
bool SubtitleFiles::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("text_subtitle_file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_subtitle_file"));
        if(!fieldValue.is_null())
        {
            SubtitleFileInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextSubtitleFile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_subtitle_file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_subtitle_file"));
        if(!fieldValue.is_null())
        {
            SubtitleFileInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioSubtitleFile(refVal);
        }
    }
    return ok;
}


SubtitleFileInfo SubtitleFiles::getTextSubtitleFile() const
{
    return textSubtitleFile_;
}

void SubtitleFiles::setTextSubtitleFile(const SubtitleFileInfo& value)
{
    textSubtitleFile_ = value;
    textSubtitleFileIsSet_ = true;
}

bool SubtitleFiles::textSubtitleFileIsSet() const
{
    return textSubtitleFileIsSet_;
}

void SubtitleFiles::unsettextSubtitleFile()
{
    textSubtitleFileIsSet_ = false;
}

SubtitleFileInfo SubtitleFiles::getAudioSubtitleFile() const
{
    return audioSubtitleFile_;
}

void SubtitleFiles::setAudioSubtitleFile(const SubtitleFileInfo& value)
{
    audioSubtitleFile_ = value;
    audioSubtitleFileIsSet_ = true;
}

bool SubtitleFiles::audioSubtitleFileIsSet() const
{
    return audioSubtitleFileIsSet_;
}

void SubtitleFiles::unsetaudioSubtitleFile()
{
    audioSubtitleFileIsSet_ = false;
}

}
}
}
}
}


