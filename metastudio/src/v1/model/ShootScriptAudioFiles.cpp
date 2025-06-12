

#include "huaweicloud/metastudio/v1/model/ShootScriptAudioFiles.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShootScriptAudioFiles::ShootScriptAudioFiles()
{
    audioFileUrlIsSet_ = false;
}

ShootScriptAudioFiles::~ShootScriptAudioFiles() = default;

void ShootScriptAudioFiles::validate()
{
}

web::json::value ShootScriptAudioFiles::toJson() const
{
    web::json::value val = web::json::value::object();

    if(audioFileUrlIsSet_) {
        val[utility::conversions::to_string_t("audio_file_url")] = ModelBase::toJson(audioFileUrl_);
    }

    return val;
}
bool ShootScriptAudioFiles::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("audio_file_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_file_url"));
        if(!fieldValue.is_null())
        {
            std::vector<ShootScriptAudioFileItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioFileUrl(refVal);
        }
    }
    return ok;
}


std::vector<ShootScriptAudioFileItem>& ShootScriptAudioFiles::getAudioFileUrl()
{
    return audioFileUrl_;
}

void ShootScriptAudioFiles::setAudioFileUrl(const std::vector<ShootScriptAudioFileItem>& value)
{
    audioFileUrl_ = value;
    audioFileUrlIsSet_ = true;
}

bool ShootScriptAudioFiles::audioFileUrlIsSet() const
{
    return audioFileUrlIsSet_;
}

void ShootScriptAudioFiles::unsetaudioFileUrl()
{
    audioFileUrlIsSet_ = false;
}

}
}
}
}
}


