

#include "huaweicloud/metastudio/v1/model/ShowSmartChatJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowSmartChatJobResponse::ShowSmartChatJobResponse()
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
    rtcRoomInfoIsSet_ = false;
    chatSubtitleConfigIsSet_ = false;
    videoConfigIsSet_ = false;
    voiceConfigListIsSet_ = false;
    chatState_ = 0;
    chatStateIsSet_ = false;
    languageIsSet_ = false;
    chatVideoType_ = "";
    chatVideoTypeIsSet_ = false;
    chatAccessAddress_ = "";
    chatAccessAddressIsSet_ = false;
    chatAccessRestAddress_ = "";
    chatAccessRestAddressIsSet_ = false;
    isTransparent_ = false;
    isTransparentIsSet_ = false;
    defaultLanguage_ = "";
    defaultLanguageIsSet_ = false;
    clientId_ = "";
    clientIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowSmartChatJobResponse::~ShowSmartChatJobResponse() = default;

void ShowSmartChatJobResponse::validate()
{
}

web::json::value ShowSmartChatJobResponse::toJson() const
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
    if(rtcRoomInfoIsSet_) {
        val[utility::conversions::to_string_t("rtc_room_info")] = ModelBase::toJson(rtcRoomInfo_);
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
    if(chatStateIsSet_) {
        val[utility::conversions::to_string_t("chat_state")] = ModelBase::toJson(chatState_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(chatVideoTypeIsSet_) {
        val[utility::conversions::to_string_t("chat_video_type")] = ModelBase::toJson(chatVideoType_);
    }
    if(chatAccessAddressIsSet_) {
        val[utility::conversions::to_string_t("chat_access_address")] = ModelBase::toJson(chatAccessAddress_);
    }
    if(chatAccessRestAddressIsSet_) {
        val[utility::conversions::to_string_t("chat_access_rest_address")] = ModelBase::toJson(chatAccessRestAddress_);
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowSmartChatJobResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("rtc_room_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rtc_room_info"));
        if(!fieldValue.is_null())
        {
            RTCRoomInfoList refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRtcRoomInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("chat_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chat_state"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChatState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            LanguageEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("chat_access_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chat_access_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChatAccessAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chat_access_rest_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chat_access_rest_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChatAccessRestAddress(refVal);
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


std::string ShowSmartChatJobResponse::getJobId() const
{
    return jobId_;
}

void ShowSmartChatJobResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowSmartChatJobResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowSmartChatJobResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowSmartChatJobResponse::getState() const
{
    return state_;
}

void ShowSmartChatJobResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ShowSmartChatJobResponse::stateIsSet() const
{
    return stateIsSet_;
}

void ShowSmartChatJobResponse::unsetstate()
{
    stateIsSet_ = false;
}

float ShowSmartChatJobResponse::getDuration() const
{
    return duration_;
}

void ShowSmartChatJobResponse::setDuration(float value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool ShowSmartChatJobResponse::durationIsSet() const
{
    return durationIsSet_;
}

void ShowSmartChatJobResponse::unsetduration()
{
    durationIsSet_ = false;
}

std::string ShowSmartChatJobResponse::getStartTime() const
{
    return startTime_;
}

void ShowSmartChatJobResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowSmartChatJobResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowSmartChatJobResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowSmartChatJobResponse::getEndTime() const
{
    return endTime_;
}

void ShowSmartChatJobResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowSmartChatJobResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowSmartChatJobResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

ErrorResponse ShowSmartChatJobResponse::getErrorInfo() const
{
    return errorInfo_;
}

void ShowSmartChatJobResponse::setErrorInfo(const ErrorResponse& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool ShowSmartChatJobResponse::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void ShowSmartChatJobResponse::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

std::string ShowSmartChatJobResponse::getCreateTime() const
{
    return createTime_;
}

void ShowSmartChatJobResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowSmartChatJobResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowSmartChatJobResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowSmartChatJobResponse::getLastupdateTime() const
{
    return lastupdateTime_;
}

void ShowSmartChatJobResponse::setLastupdateTime(const std::string& value)
{
    lastupdateTime_ = value;
    lastupdateTimeIsSet_ = true;
}

bool ShowSmartChatJobResponse::lastupdateTimeIsSet() const
{
    return lastupdateTimeIsSet_;
}

void ShowSmartChatJobResponse::unsetlastupdateTime()
{
    lastupdateTimeIsSet_ = false;
}

RTCRoomInfoList ShowSmartChatJobResponse::getRtcRoomInfo() const
{
    return rtcRoomInfo_;
}

void ShowSmartChatJobResponse::setRtcRoomInfo(const RTCRoomInfoList& value)
{
    rtcRoomInfo_ = value;
    rtcRoomInfoIsSet_ = true;
}

bool ShowSmartChatJobResponse::rtcRoomInfoIsSet() const
{
    return rtcRoomInfoIsSet_;
}

void ShowSmartChatJobResponse::unsetrtcRoomInfo()
{
    rtcRoomInfoIsSet_ = false;
}

SmartChatSubtitleConfig ShowSmartChatJobResponse::getChatSubtitleConfig() const
{
    return chatSubtitleConfig_;
}

void ShowSmartChatJobResponse::setChatSubtitleConfig(const SmartChatSubtitleConfig& value)
{
    chatSubtitleConfig_ = value;
    chatSubtitleConfigIsSet_ = true;
}

bool ShowSmartChatJobResponse::chatSubtitleConfigIsSet() const
{
    return chatSubtitleConfigIsSet_;
}

void ShowSmartChatJobResponse::unsetchatSubtitleConfig()
{
    chatSubtitleConfigIsSet_ = false;
}

SmartChatVideoConfig ShowSmartChatJobResponse::getVideoConfig() const
{
    return videoConfig_;
}

void ShowSmartChatJobResponse::setVideoConfig(const SmartChatVideoConfig& value)
{
    videoConfig_ = value;
    videoConfigIsSet_ = true;
}

bool ShowSmartChatJobResponse::videoConfigIsSet() const
{
    return videoConfigIsSet_;
}

void ShowSmartChatJobResponse::unsetvideoConfig()
{
    videoConfigIsSet_ = false;
}

std::vector<SmartChatVoiceConfig>& ShowSmartChatJobResponse::getVoiceConfigList()
{
    return voiceConfigList_;
}

void ShowSmartChatJobResponse::setVoiceConfigList(const std::vector<SmartChatVoiceConfig>& value)
{
    voiceConfigList_ = value;
    voiceConfigListIsSet_ = true;
}

bool ShowSmartChatJobResponse::voiceConfigListIsSet() const
{
    return voiceConfigListIsSet_;
}

void ShowSmartChatJobResponse::unsetvoiceConfigList()
{
    voiceConfigListIsSet_ = false;
}

int32_t ShowSmartChatJobResponse::getChatState() const
{
    return chatState_;
}

void ShowSmartChatJobResponse::setChatState(int32_t value)
{
    chatState_ = value;
    chatStateIsSet_ = true;
}

bool ShowSmartChatJobResponse::chatStateIsSet() const
{
    return chatStateIsSet_;
}

void ShowSmartChatJobResponse::unsetchatState()
{
    chatStateIsSet_ = false;
}

LanguageEnum ShowSmartChatJobResponse::getLanguage() const
{
    return language_;
}

void ShowSmartChatJobResponse::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ShowSmartChatJobResponse::languageIsSet() const
{
    return languageIsSet_;
}

void ShowSmartChatJobResponse::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string ShowSmartChatJobResponse::getChatVideoType() const
{
    return chatVideoType_;
}

void ShowSmartChatJobResponse::setChatVideoType(const std::string& value)
{
    chatVideoType_ = value;
    chatVideoTypeIsSet_ = true;
}

bool ShowSmartChatJobResponse::chatVideoTypeIsSet() const
{
    return chatVideoTypeIsSet_;
}

void ShowSmartChatJobResponse::unsetchatVideoType()
{
    chatVideoTypeIsSet_ = false;
}

std::string ShowSmartChatJobResponse::getChatAccessAddress() const
{
    return chatAccessAddress_;
}

void ShowSmartChatJobResponse::setChatAccessAddress(const std::string& value)
{
    chatAccessAddress_ = value;
    chatAccessAddressIsSet_ = true;
}

bool ShowSmartChatJobResponse::chatAccessAddressIsSet() const
{
    return chatAccessAddressIsSet_;
}

void ShowSmartChatJobResponse::unsetchatAccessAddress()
{
    chatAccessAddressIsSet_ = false;
}

std::string ShowSmartChatJobResponse::getChatAccessRestAddress() const
{
    return chatAccessRestAddress_;
}

void ShowSmartChatJobResponse::setChatAccessRestAddress(const std::string& value)
{
    chatAccessRestAddress_ = value;
    chatAccessRestAddressIsSet_ = true;
}

bool ShowSmartChatJobResponse::chatAccessRestAddressIsSet() const
{
    return chatAccessRestAddressIsSet_;
}

void ShowSmartChatJobResponse::unsetchatAccessRestAddress()
{
    chatAccessRestAddressIsSet_ = false;
}

bool ShowSmartChatJobResponse::isIsTransparent() const
{
    return isTransparent_;
}

void ShowSmartChatJobResponse::setIsTransparent(bool value)
{
    isTransparent_ = value;
    isTransparentIsSet_ = true;
}

bool ShowSmartChatJobResponse::isTransparentIsSet() const
{
    return isTransparentIsSet_;
}

void ShowSmartChatJobResponse::unsetisTransparent()
{
    isTransparentIsSet_ = false;
}

std::string ShowSmartChatJobResponse::getDefaultLanguage() const
{
    return defaultLanguage_;
}

void ShowSmartChatJobResponse::setDefaultLanguage(const std::string& value)
{
    defaultLanguage_ = value;
    defaultLanguageIsSet_ = true;
}

bool ShowSmartChatJobResponse::defaultLanguageIsSet() const
{
    return defaultLanguageIsSet_;
}

void ShowSmartChatJobResponse::unsetdefaultLanguage()
{
    defaultLanguageIsSet_ = false;
}

std::string ShowSmartChatJobResponse::getClientId() const
{
    return clientId_;
}

void ShowSmartChatJobResponse::setClientId(const std::string& value)
{
    clientId_ = value;
    clientIdIsSet_ = true;
}

bool ShowSmartChatJobResponse::clientIdIsSet() const
{
    return clientIdIsSet_;
}

void ShowSmartChatJobResponse::unsetclientId()
{
    clientIdIsSet_ = false;
}

std::string ShowSmartChatJobResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowSmartChatJobResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowSmartChatJobResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowSmartChatJobResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


