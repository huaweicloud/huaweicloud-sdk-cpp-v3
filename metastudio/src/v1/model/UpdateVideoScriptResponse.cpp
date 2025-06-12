

#include "huaweicloud/metastudio/v1/model/UpdateVideoScriptResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateVideoScriptResponse::UpdateVideoScriptResponse()
{
    scriptId_ = "";
    scriptIdIsSet_ = false;
    audioFilesIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateVideoScriptResponse::~UpdateVideoScriptResponse() = default;

void UpdateVideoScriptResponse::validate()
{
}

web::json::value UpdateVideoScriptResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scriptIdIsSet_) {
        val[utility::conversions::to_string_t("script_id")] = ModelBase::toJson(scriptId_);
    }
    if(audioFilesIsSet_) {
        val[utility::conversions::to_string_t("audio_files")] = ModelBase::toJson(audioFiles_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateVideoScriptResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("script_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_files"));
        if(!fieldValue.is_null())
        {
            ShootScriptAudioFiles refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioFiles(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string UpdateVideoScriptResponse::getScriptId() const
{
    return scriptId_;
}

void UpdateVideoScriptResponse::setScriptId(const std::string& value)
{
    scriptId_ = value;
    scriptIdIsSet_ = true;
}

bool UpdateVideoScriptResponse::scriptIdIsSet() const
{
    return scriptIdIsSet_;
}

void UpdateVideoScriptResponse::unsetscriptId()
{
    scriptIdIsSet_ = false;
}

ShootScriptAudioFiles UpdateVideoScriptResponse::getAudioFiles() const
{
    return audioFiles_;
}

void UpdateVideoScriptResponse::setAudioFiles(const ShootScriptAudioFiles& value)
{
    audioFiles_ = value;
    audioFilesIsSet_ = true;
}

bool UpdateVideoScriptResponse::audioFilesIsSet() const
{
    return audioFilesIsSet_;
}

void UpdateVideoScriptResponse::unsetaudioFiles()
{
    audioFilesIsSet_ = false;
}

std::string UpdateVideoScriptResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateVideoScriptResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateVideoScriptResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateVideoScriptResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


