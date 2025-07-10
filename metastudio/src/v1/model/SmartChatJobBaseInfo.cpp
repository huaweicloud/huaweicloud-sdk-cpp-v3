

#include "huaweicloud/metastudio/v1/model/SmartChatJobBaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SmartChatJobBaseInfo::SmartChatJobBaseInfo()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    duration_ = 0.0f;
    durationIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    errorInfoIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    lastupdateTime_ = "";
    lastupdateTimeIsSet_ = false;
    chatSubtitleConfigIsSet_ = false;
    videoConfigIsSet_ = false;
    voiceConfigListIsSet_ = false;
    chatVideoType_ = "";
    chatVideoTypeIsSet_ = false;
    isTransparent_ = false;
    isTransparentIsSet_ = false;
    defaultLanguage_ = "";
    defaultLanguageIsSet_ = false;
    clientId_ = "";
    clientIdIsSet_ = false;
    isPoolMode_ = false;
    isPoolModeIsSet_ = false;
    jobFinishReason_ = "";
    jobFinishReasonIsSet_ = false;
}

SmartChatJobBaseInfo::~SmartChatJobBaseInfo() = default;

void SmartChatJobBaseInfo::validate()
{
}

web::json::value SmartChatJobBaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
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
    if(chatSubtitleConfigIsSet_) {
        val[utility::conversions::to_string_t("chat_subtitle_config")] = ModelBase::toJson(chatSubtitleConfig_);
    }
    if(videoConfigIsSet_) {
        val[utility::conversions::to_string_t("video_config")] = ModelBase::toJson(videoConfig_);
    }
    if(voiceConfigListIsSet_) {
        val[utility::conversions::to_string_t("voice_config_list")] = ModelBase::toJson(voiceConfigList_);
    }
    if(chatVideoTypeIsSet_) {
        val[utility::conversions::to_string_t("chat_video_type")] = ModelBase::toJson(chatVideoType_);
    }
    if(isTransparentIsSet_) {
        val[utility::conversions::to_string_t("is_transparent")] = ModelBase::toJson(isTransparent_);
    }
    if(defaultLanguageIsSet_) {
        val[utility::conversions::to_string_t("default_language")] = ModelBase::toJson(defaultLanguage_);
    }
    if(clientIdIsSet_) {
        val[utility::conversions::to_string_t("client_id")] = ModelBase::toJson(clientId_);
    }
    if(isPoolModeIsSet_) {
        val[utility::conversions::to_string_t("is_pool_mode")] = ModelBase::toJson(isPoolMode_);
    }
    if(jobFinishReasonIsSet_) {
        val[utility::conversions::to_string_t("job_finish_reason")] = ModelBase::toJson(jobFinishReason_);
    }

    return val;
}
bool SmartChatJobBaseInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("chat_subtitle_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chat_subtitle_config"));
        if(!fieldValue.is_null())
        {
            SmartChatSubtitleConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChatSubtitleConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_config"));
        if(!fieldValue.is_null())
        {
            SmartChatVideoConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voice_config_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_config_list"));
        if(!fieldValue.is_null())
        {
            std::vector<SmartChatVoiceConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceConfigList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chat_video_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chat_video_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChatVideoType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_transparent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_transparent"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsTransparent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_pool_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_pool_mode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPoolMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_finish_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_finish_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobFinishReason(refVal);
        }
    }
    return ok;
}


std::string SmartChatJobBaseInfo::getJobId() const
{
    return jobId_;
}

void SmartChatJobBaseInfo::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SmartChatJobBaseInfo::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SmartChatJobBaseInfo::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string SmartChatJobBaseInfo::getState() const
{
    return state_;
}

void SmartChatJobBaseInfo::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool SmartChatJobBaseInfo::stateIsSet() const
{
    return stateIsSet_;
}

void SmartChatJobBaseInfo::unsetstate()
{
    stateIsSet_ = false;
}

float SmartChatJobBaseInfo::getDuration() const
{
    return duration_;
}

void SmartChatJobBaseInfo::setDuration(float value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool SmartChatJobBaseInfo::durationIsSet() const
{
    return durationIsSet_;
}

void SmartChatJobBaseInfo::unsetduration()
{
    durationIsSet_ = false;
}

std::string SmartChatJobBaseInfo::getStartTime() const
{
    return startTime_;
}

void SmartChatJobBaseInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool SmartChatJobBaseInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void SmartChatJobBaseInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string SmartChatJobBaseInfo::getEndTime() const
{
    return endTime_;
}

void SmartChatJobBaseInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool SmartChatJobBaseInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void SmartChatJobBaseInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

ErrorResponse SmartChatJobBaseInfo::getErrorInfo() const
{
    return errorInfo_;
}

void SmartChatJobBaseInfo::setErrorInfo(const ErrorResponse& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool SmartChatJobBaseInfo::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void SmartChatJobBaseInfo::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

std::string SmartChatJobBaseInfo::getCreateTime() const
{
    return createTime_;
}

void SmartChatJobBaseInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool SmartChatJobBaseInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void SmartChatJobBaseInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string SmartChatJobBaseInfo::getLastupdateTime() const
{
    return lastupdateTime_;
}

void SmartChatJobBaseInfo::setLastupdateTime(const std::string& value)
{
    lastupdateTime_ = value;
    lastupdateTimeIsSet_ = true;
}

bool SmartChatJobBaseInfo::lastupdateTimeIsSet() const
{
    return lastupdateTimeIsSet_;
}

void SmartChatJobBaseInfo::unsetlastupdateTime()
{
    lastupdateTimeIsSet_ = false;
}

SmartChatSubtitleConfig SmartChatJobBaseInfo::getChatSubtitleConfig() const
{
    return chatSubtitleConfig_;
}

void SmartChatJobBaseInfo::setChatSubtitleConfig(const SmartChatSubtitleConfig& value)
{
    chatSubtitleConfig_ = value;
    chatSubtitleConfigIsSet_ = true;
}

bool SmartChatJobBaseInfo::chatSubtitleConfigIsSet() const
{
    return chatSubtitleConfigIsSet_;
}

void SmartChatJobBaseInfo::unsetchatSubtitleConfig()
{
    chatSubtitleConfigIsSet_ = false;
}

SmartChatVideoConfig SmartChatJobBaseInfo::getVideoConfig() const
{
    return videoConfig_;
}

void SmartChatJobBaseInfo::setVideoConfig(const SmartChatVideoConfig& value)
{
    videoConfig_ = value;
    videoConfigIsSet_ = true;
}

bool SmartChatJobBaseInfo::videoConfigIsSet() const
{
    return videoConfigIsSet_;
}

void SmartChatJobBaseInfo::unsetvideoConfig()
{
    videoConfigIsSet_ = false;
}

std::vector<SmartChatVoiceConfig>& SmartChatJobBaseInfo::getVoiceConfigList()
{
    return voiceConfigList_;
}

void SmartChatJobBaseInfo::setVoiceConfigList(const std::vector<SmartChatVoiceConfig>& value)
{
    voiceConfigList_ = value;
    voiceConfigListIsSet_ = true;
}

bool SmartChatJobBaseInfo::voiceConfigListIsSet() const
{
    return voiceConfigListIsSet_;
}

void SmartChatJobBaseInfo::unsetvoiceConfigList()
{
    voiceConfigListIsSet_ = false;
}

std::string SmartChatJobBaseInfo::getChatVideoType() const
{
    return chatVideoType_;
}

void SmartChatJobBaseInfo::setChatVideoType(const std::string& value)
{
    chatVideoType_ = value;
    chatVideoTypeIsSet_ = true;
}

bool SmartChatJobBaseInfo::chatVideoTypeIsSet() const
{
    return chatVideoTypeIsSet_;
}

void SmartChatJobBaseInfo::unsetchatVideoType()
{
    chatVideoTypeIsSet_ = false;
}

bool SmartChatJobBaseInfo::isIsTransparent() const
{
    return isTransparent_;
}

void SmartChatJobBaseInfo::setIsTransparent(bool value)
{
    isTransparent_ = value;
    isTransparentIsSet_ = true;
}

bool SmartChatJobBaseInfo::isTransparentIsSet() const
{
    return isTransparentIsSet_;
}

void SmartChatJobBaseInfo::unsetisTransparent()
{
    isTransparentIsSet_ = false;
}

std::string SmartChatJobBaseInfo::getDefaultLanguage() const
{
    return defaultLanguage_;
}

void SmartChatJobBaseInfo::setDefaultLanguage(const std::string& value)
{
    defaultLanguage_ = value;
    defaultLanguageIsSet_ = true;
}

bool SmartChatJobBaseInfo::defaultLanguageIsSet() const
{
    return defaultLanguageIsSet_;
}

void SmartChatJobBaseInfo::unsetdefaultLanguage()
{
    defaultLanguageIsSet_ = false;
}

std::string SmartChatJobBaseInfo::getClientId() const
{
    return clientId_;
}

void SmartChatJobBaseInfo::setClientId(const std::string& value)
{
    clientId_ = value;
    clientIdIsSet_ = true;
}

bool SmartChatJobBaseInfo::clientIdIsSet() const
{
    return clientIdIsSet_;
}

void SmartChatJobBaseInfo::unsetclientId()
{
    clientIdIsSet_ = false;
}

bool SmartChatJobBaseInfo::isIsPoolMode() const
{
    return isPoolMode_;
}

void SmartChatJobBaseInfo::setIsPoolMode(bool value)
{
    isPoolMode_ = value;
    isPoolModeIsSet_ = true;
}

bool SmartChatJobBaseInfo::isPoolModeIsSet() const
{
    return isPoolModeIsSet_;
}

void SmartChatJobBaseInfo::unsetisPoolMode()
{
    isPoolModeIsSet_ = false;
}

std::string SmartChatJobBaseInfo::getJobFinishReason() const
{
    return jobFinishReason_;
}

void SmartChatJobBaseInfo::setJobFinishReason(const std::string& value)
{
    jobFinishReason_ = value;
    jobFinishReasonIsSet_ = true;
}

bool SmartChatJobBaseInfo::jobFinishReasonIsSet() const
{
    return jobFinishReasonIsSet_;
}

void SmartChatJobBaseInfo::unsetjobFinishReason()
{
    jobFinishReasonIsSet_ = false;
}

}
}
}
}
}


