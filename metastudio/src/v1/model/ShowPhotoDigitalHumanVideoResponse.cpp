

#include "huaweicloud/metastudio/v1/model/ShowPhotoDigitalHumanVideoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowPhotoDigitalHumanVideoResponse::ShowPhotoDigitalHumanVideoResponse()
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
    humanImage_ = "";
    humanImageIsSet_ = false;
    voiceConfigIsSet_ = false;
    videoConfigIsSet_ = false;
    shootScriptsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowPhotoDigitalHumanVideoResponse::~ShowPhotoDigitalHumanVideoResponse() = default;

void ShowPhotoDigitalHumanVideoResponse::validate()
{
}

web::json::value ShowPhotoDigitalHumanVideoResponse::toJson() const
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
    if(humanImageIsSet_) {
        val[utility::conversions::to_string_t("human_image")] = ModelBase::toJson(humanImage_);
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowPhotoDigitalHumanVideoResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("human_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("human_image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHumanImage(refVal);
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
            PhotoVideoConfig refVal;
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


std::string ShowPhotoDigitalHumanVideoResponse::getJobId() const
{
    return jobId_;
}

void ShowPhotoDigitalHumanVideoResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowPhotoDigitalHumanVideoResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowPhotoDigitalHumanVideoResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowPhotoDigitalHumanVideoResponse::getState() const
{
    return state_;
}

void ShowPhotoDigitalHumanVideoResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ShowPhotoDigitalHumanVideoResponse::stateIsSet() const
{
    return stateIsSet_;
}

void ShowPhotoDigitalHumanVideoResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string ShowPhotoDigitalHumanVideoResponse::getJobType() const
{
    return jobType_;
}

void ShowPhotoDigitalHumanVideoResponse::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool ShowPhotoDigitalHumanVideoResponse::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void ShowPhotoDigitalHumanVideoResponse::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string ShowPhotoDigitalHumanVideoResponse::getStartTime() const
{
    return startTime_;
}

void ShowPhotoDigitalHumanVideoResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowPhotoDigitalHumanVideoResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowPhotoDigitalHumanVideoResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowPhotoDigitalHumanVideoResponse::getEndTime() const
{
    return endTime_;
}

void ShowPhotoDigitalHumanVideoResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowPhotoDigitalHumanVideoResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowPhotoDigitalHumanVideoResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

float ShowPhotoDigitalHumanVideoResponse::getDuration() const
{
    return duration_;
}

void ShowPhotoDigitalHumanVideoResponse::setDuration(float value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool ShowPhotoDigitalHumanVideoResponse::durationIsSet() const
{
    return durationIsSet_;
}

void ShowPhotoDigitalHumanVideoResponse::unsetduration()
{
    durationIsSet_ = false;
}

OutputAssetInfo ShowPhotoDigitalHumanVideoResponse::getOutputAssetConfig() const
{
    return outputAssetConfig_;
}

void ShowPhotoDigitalHumanVideoResponse::setOutputAssetConfig(const OutputAssetInfo& value)
{
    outputAssetConfig_ = value;
    outputAssetConfigIsSet_ = true;
}

bool ShowPhotoDigitalHumanVideoResponse::outputAssetConfigIsSet() const
{
    return outputAssetConfigIsSet_;
}

void ShowPhotoDigitalHumanVideoResponse::unsetoutputAssetConfig()
{
    outputAssetConfigIsSet_ = false;
}

ErrorResponse ShowPhotoDigitalHumanVideoResponse::getErrorInfo() const
{
    return errorInfo_;
}

void ShowPhotoDigitalHumanVideoResponse::setErrorInfo(const ErrorResponse& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool ShowPhotoDigitalHumanVideoResponse::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void ShowPhotoDigitalHumanVideoResponse::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

std::string ShowPhotoDigitalHumanVideoResponse::getCreateTime() const
{
    return createTime_;
}

void ShowPhotoDigitalHumanVideoResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowPhotoDigitalHumanVideoResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowPhotoDigitalHumanVideoResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowPhotoDigitalHumanVideoResponse::getLastupdateTime() const
{
    return lastupdateTime_;
}

void ShowPhotoDigitalHumanVideoResponse::setLastupdateTime(const std::string& value)
{
    lastupdateTime_ = value;
    lastupdateTimeIsSet_ = true;
}

bool ShowPhotoDigitalHumanVideoResponse::lastupdateTimeIsSet() const
{
    return lastupdateTimeIsSet_;
}

void ShowPhotoDigitalHumanVideoResponse::unsetlastupdateTime()
{
    lastupdateTimeIsSet_ = false;
}

std::string ShowPhotoDigitalHumanVideoResponse::getScriptId() const
{
    return scriptId_;
}

void ShowPhotoDigitalHumanVideoResponse::setScriptId(const std::string& value)
{
    scriptId_ = value;
    scriptIdIsSet_ = true;
}

bool ShowPhotoDigitalHumanVideoResponse::scriptIdIsSet() const
{
    return scriptIdIsSet_;
}

void ShowPhotoDigitalHumanVideoResponse::unsetscriptId()
{
    scriptIdIsSet_ = false;
}

std::string ShowPhotoDigitalHumanVideoResponse::getHumanImage() const
{
    return humanImage_;
}

void ShowPhotoDigitalHumanVideoResponse::setHumanImage(const std::string& value)
{
    humanImage_ = value;
    humanImageIsSet_ = true;
}

bool ShowPhotoDigitalHumanVideoResponse::humanImageIsSet() const
{
    return humanImageIsSet_;
}

void ShowPhotoDigitalHumanVideoResponse::unsethumanImage()
{
    humanImageIsSet_ = false;
}

VoiceConfig ShowPhotoDigitalHumanVideoResponse::getVoiceConfig() const
{
    return voiceConfig_;
}

void ShowPhotoDigitalHumanVideoResponse::setVoiceConfig(const VoiceConfig& value)
{
    voiceConfig_ = value;
    voiceConfigIsSet_ = true;
}

bool ShowPhotoDigitalHumanVideoResponse::voiceConfigIsSet() const
{
    return voiceConfigIsSet_;
}

void ShowPhotoDigitalHumanVideoResponse::unsetvoiceConfig()
{
    voiceConfigIsSet_ = false;
}

PhotoVideoConfig ShowPhotoDigitalHumanVideoResponse::getVideoConfig() const
{
    return videoConfig_;
}

void ShowPhotoDigitalHumanVideoResponse::setVideoConfig(const PhotoVideoConfig& value)
{
    videoConfig_ = value;
    videoConfigIsSet_ = true;
}

bool ShowPhotoDigitalHumanVideoResponse::videoConfigIsSet() const
{
    return videoConfigIsSet_;
}

void ShowPhotoDigitalHumanVideoResponse::unsetvideoConfig()
{
    videoConfigIsSet_ = false;
}

std::vector<ShootScriptItem>& ShowPhotoDigitalHumanVideoResponse::getShootScripts()
{
    return shootScripts_;
}

void ShowPhotoDigitalHumanVideoResponse::setShootScripts(const std::vector<ShootScriptItem>& value)
{
    shootScripts_ = value;
    shootScriptsIsSet_ = true;
}

bool ShowPhotoDigitalHumanVideoResponse::shootScriptsIsSet() const
{
    return shootScriptsIsSet_;
}

void ShowPhotoDigitalHumanVideoResponse::unsetshootScripts()
{
    shootScriptsIsSet_ = false;
}

std::string ShowPhotoDigitalHumanVideoResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowPhotoDigitalHumanVideoResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowPhotoDigitalHumanVideoResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowPhotoDigitalHumanVideoResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


