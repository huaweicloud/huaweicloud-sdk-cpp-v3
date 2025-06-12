

#include "huaweicloud/metastudio/v1/model/Show2DDigitalHumanVideoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




Show2DDigitalHumanVideoResponse::Show2DDigitalHumanVideoResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    duration_ = 0.0f;
    durationIsSet_ = false;
    outputAssetConfigIsSet_ = false;
    errorInfoIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    lastupdateTime_ = "";
    lastupdateTimeIsSet_ = false;
    scriptId_ = "";
    scriptIdIsSet_ = false;
    videoMakingType_ = "";
    videoMakingTypeIsSet_ = false;
    humanImage_ = "";
    humanImageIsSet_ = false;
    modelAssetId_ = "";
    modelAssetIdIsSet_ = false;
    voiceConfigIsSet_ = false;
    videoConfigIsSet_ = false;
    shootScriptsIsSet_ = false;
    backgroundMusicConfigIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

Show2DDigitalHumanVideoResponse::~Show2DDigitalHumanVideoResponse() = default;

void Show2DDigitalHumanVideoResponse::validate()
{
}

web::json::value Show2DDigitalHumanVideoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(outputAssetConfigIsSet_) {
        val[utility::conversions::to_string_t("output_asset_config")] = ModelBase::toJson(outputAssetConfig_);
    }
    if(errorInfoIsSet_) {
        val[utility::conversions::to_string_t("error_info")] = ModelBase::toJson(errorInfo_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(lastupdateTimeIsSet_) {
        val[utility::conversions::to_string_t("lastupdate_time")] = ModelBase::toJson(lastupdateTime_);
    }
    if(scriptIdIsSet_) {
        val[utility::conversions::to_string_t("script_id")] = ModelBase::toJson(scriptId_);
    }
    if(videoMakingTypeIsSet_) {
        val[utility::conversions::to_string_t("video_making_type")] = ModelBase::toJson(videoMakingType_);
    }
    if(humanImageIsSet_) {
        val[utility::conversions::to_string_t("human_image")] = ModelBase::toJson(humanImage_);
    }
    if(modelAssetIdIsSet_) {
        val[utility::conversions::to_string_t("model_asset_id")] = ModelBase::toJson(modelAssetId_);
    }
    if(voiceConfigIsSet_) {
        val[utility::conversions::to_string_t("voice_config")] = ModelBase::toJson(voiceConfig_);
    }
    if(videoConfigIsSet_) {
        val[utility::conversions::to_string_t("video_config")] = ModelBase::toJson(videoConfig_);
    }
    if(shootScriptsIsSet_) {
        val[utility::conversions::to_string_t("shoot_scripts")] = ModelBase::toJson(shootScripts_);
    }
    if(backgroundMusicConfigIsSet_) {
        val[utility::conversions::to_string_t("background_music_config")] = ModelBase::toJson(backgroundMusicConfig_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool Show2DDigitalHumanVideoResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_asset_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_asset_config"));
        if(!fieldValue.is_null())
        {
            OutputAssetInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputAssetConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_info"));
        if(!fieldValue.is_null())
        {
            ErrorResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastupdate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastupdate_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastupdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("script_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_making_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_making_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoMakingType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("human_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("human_image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHumanImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voice_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_config"));
        if(!fieldValue.is_null())
        {
            VoiceConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_config"));
        if(!fieldValue.is_null())
        {
            VideoConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shoot_scripts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shoot_scripts"));
        if(!fieldValue.is_null())
        {
            std::vector<ShootScriptItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShootScripts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("background_music_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("background_music_config"));
        if(!fieldValue.is_null())
        {
            BackgroundMusicConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackgroundMusicConfig(refVal);
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


std::string Show2DDigitalHumanVideoResponse::getJobId() const
{
    return jobId_;
}

void Show2DDigitalHumanVideoResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool Show2DDigitalHumanVideoResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void Show2DDigitalHumanVideoResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string Show2DDigitalHumanVideoResponse::getState() const
{
    return state_;
}

void Show2DDigitalHumanVideoResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool Show2DDigitalHumanVideoResponse::stateIsSet() const
{
    return stateIsSet_;
}

void Show2DDigitalHumanVideoResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string Show2DDigitalHumanVideoResponse::getJobType() const
{
    return jobType_;
}

void Show2DDigitalHumanVideoResponse::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool Show2DDigitalHumanVideoResponse::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void Show2DDigitalHumanVideoResponse::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string Show2DDigitalHumanVideoResponse::getStartTime() const
{
    return startTime_;
}

void Show2DDigitalHumanVideoResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool Show2DDigitalHumanVideoResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void Show2DDigitalHumanVideoResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string Show2DDigitalHumanVideoResponse::getEndTime() const
{
    return endTime_;
}

void Show2DDigitalHumanVideoResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool Show2DDigitalHumanVideoResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void Show2DDigitalHumanVideoResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

float Show2DDigitalHumanVideoResponse::getDuration() const
{
    return duration_;
}

void Show2DDigitalHumanVideoResponse::setDuration(float value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool Show2DDigitalHumanVideoResponse::durationIsSet() const
{
    return durationIsSet_;
}

void Show2DDigitalHumanVideoResponse::unsetduration()
{
    durationIsSet_ = false;
}

OutputAssetInfo Show2DDigitalHumanVideoResponse::getOutputAssetConfig() const
{
    return outputAssetConfig_;
}

void Show2DDigitalHumanVideoResponse::setOutputAssetConfig(const OutputAssetInfo& value)
{
    outputAssetConfig_ = value;
    outputAssetConfigIsSet_ = true;
}

bool Show2DDigitalHumanVideoResponse::outputAssetConfigIsSet() const
{
    return outputAssetConfigIsSet_;
}

void Show2DDigitalHumanVideoResponse::unsetoutputAssetConfig()
{
    outputAssetConfigIsSet_ = false;
}

ErrorResponse Show2DDigitalHumanVideoResponse::getErrorInfo() const
{
    return errorInfo_;
}

void Show2DDigitalHumanVideoResponse::setErrorInfo(const ErrorResponse& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool Show2DDigitalHumanVideoResponse::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void Show2DDigitalHumanVideoResponse::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

std::string Show2DDigitalHumanVideoResponse::getCreateTime() const
{
    return createTime_;
}

void Show2DDigitalHumanVideoResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool Show2DDigitalHumanVideoResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void Show2DDigitalHumanVideoResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string Show2DDigitalHumanVideoResponse::getLastupdateTime() const
{
    return lastupdateTime_;
}

void Show2DDigitalHumanVideoResponse::setLastupdateTime(const std::string& value)
{
    lastupdateTime_ = value;
    lastupdateTimeIsSet_ = true;
}

bool Show2DDigitalHumanVideoResponse::lastupdateTimeIsSet() const
{
    return lastupdateTimeIsSet_;
}

void Show2DDigitalHumanVideoResponse::unsetlastupdateTime()
{
    lastupdateTimeIsSet_ = false;
}

std::string Show2DDigitalHumanVideoResponse::getScriptId() const
{
    return scriptId_;
}

void Show2DDigitalHumanVideoResponse::setScriptId(const std::string& value)
{
    scriptId_ = value;
    scriptIdIsSet_ = true;
}

bool Show2DDigitalHumanVideoResponse::scriptIdIsSet() const
{
    return scriptIdIsSet_;
}

void Show2DDigitalHumanVideoResponse::unsetscriptId()
{
    scriptIdIsSet_ = false;
}

std::string Show2DDigitalHumanVideoResponse::getVideoMakingType() const
{
    return videoMakingType_;
}

void Show2DDigitalHumanVideoResponse::setVideoMakingType(const std::string& value)
{
    videoMakingType_ = value;
    videoMakingTypeIsSet_ = true;
}

bool Show2DDigitalHumanVideoResponse::videoMakingTypeIsSet() const
{
    return videoMakingTypeIsSet_;
}

void Show2DDigitalHumanVideoResponse::unsetvideoMakingType()
{
    videoMakingTypeIsSet_ = false;
}

std::string Show2DDigitalHumanVideoResponse::getHumanImage() const
{
    return humanImage_;
}

void Show2DDigitalHumanVideoResponse::setHumanImage(const std::string& value)
{
    humanImage_ = value;
    humanImageIsSet_ = true;
}

bool Show2DDigitalHumanVideoResponse::humanImageIsSet() const
{
    return humanImageIsSet_;
}

void Show2DDigitalHumanVideoResponse::unsethumanImage()
{
    humanImageIsSet_ = false;
}

std::string Show2DDigitalHumanVideoResponse::getModelAssetId() const
{
    return modelAssetId_;
}

void Show2DDigitalHumanVideoResponse::setModelAssetId(const std::string& value)
{
    modelAssetId_ = value;
    modelAssetIdIsSet_ = true;
}

bool Show2DDigitalHumanVideoResponse::modelAssetIdIsSet() const
{
    return modelAssetIdIsSet_;
}

void Show2DDigitalHumanVideoResponse::unsetmodelAssetId()
{
    modelAssetIdIsSet_ = false;
}

VoiceConfig Show2DDigitalHumanVideoResponse::getVoiceConfig() const
{
    return voiceConfig_;
}

void Show2DDigitalHumanVideoResponse::setVoiceConfig(const VoiceConfig& value)
{
    voiceConfig_ = value;
    voiceConfigIsSet_ = true;
}

bool Show2DDigitalHumanVideoResponse::voiceConfigIsSet() const
{
    return voiceConfigIsSet_;
}

void Show2DDigitalHumanVideoResponse::unsetvoiceConfig()
{
    voiceConfigIsSet_ = false;
}

VideoConfig Show2DDigitalHumanVideoResponse::getVideoConfig() const
{
    return videoConfig_;
}

void Show2DDigitalHumanVideoResponse::setVideoConfig(const VideoConfig& value)
{
    videoConfig_ = value;
    videoConfigIsSet_ = true;
}

bool Show2DDigitalHumanVideoResponse::videoConfigIsSet() const
{
    return videoConfigIsSet_;
}

void Show2DDigitalHumanVideoResponse::unsetvideoConfig()
{
    videoConfigIsSet_ = false;
}

std::vector<ShootScriptItem>& Show2DDigitalHumanVideoResponse::getShootScripts()
{
    return shootScripts_;
}

void Show2DDigitalHumanVideoResponse::setShootScripts(const std::vector<ShootScriptItem>& value)
{
    shootScripts_ = value;
    shootScriptsIsSet_ = true;
}

bool Show2DDigitalHumanVideoResponse::shootScriptsIsSet() const
{
    return shootScriptsIsSet_;
}

void Show2DDigitalHumanVideoResponse::unsetshootScripts()
{
    shootScriptsIsSet_ = false;
}

BackgroundMusicConfig Show2DDigitalHumanVideoResponse::getBackgroundMusicConfig() const
{
    return backgroundMusicConfig_;
}

void Show2DDigitalHumanVideoResponse::setBackgroundMusicConfig(const BackgroundMusicConfig& value)
{
    backgroundMusicConfig_ = value;
    backgroundMusicConfigIsSet_ = true;
}

bool Show2DDigitalHumanVideoResponse::backgroundMusicConfigIsSet() const
{
    return backgroundMusicConfigIsSet_;
}

void Show2DDigitalHumanVideoResponse::unsetbackgroundMusicConfig()
{
    backgroundMusicConfigIsSet_ = false;
}

std::string Show2DDigitalHumanVideoResponse::getXRequestId() const
{
    return xRequestId_;
}

void Show2DDigitalHumanVideoResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool Show2DDigitalHumanVideoResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void Show2DDigitalHumanVideoResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


