

#include "huaweicloud/metastudio/v1/model/UpdateSmartChatRoomResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateSmartChatRoomResponse::UpdateSmartChatRoomResponse()
{
    roomName_ = "";
    roomNameIsSet_ = false;
    roomDescription_ = "";
    roomDescriptionIsSet_ = false;
    videoConfigIsSet_ = false;
    modelAssetId_ = "";
    modelAssetIdIsSet_ = false;
    voiceConfigIsSet_ = false;
    voiceConfigListIsSet_ = false;
    robotId_ = "";
    robotIdIsSet_ = false;
    concurrency_ = 0;
    concurrencyIsSet_ = false;
    defaultLanguage_ = "";
    defaultLanguageIsSet_ = false;
    backgroundConfigIsSet_ = false;
    layerConfigIsSet_ = false;
    reviewConfigIsSet_ = false;
    chatSubtitleConfigIsSet_ = false;
    chatVideoType_ = "";
    chatVideoTypeIsSet_ = false;
    exitMuteThreshold_ = 0;
    exitMuteThresholdIsSet_ = false;
    roomId_ = "";
    roomIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    coverUrl_ = "";
    coverUrlIsSet_ = false;
    isPoolMode_ = false;
    isPoolModeIsSet_ = false;
    chatResourceConfigIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateSmartChatRoomResponse::~UpdateSmartChatRoomResponse() = default;

void UpdateSmartChatRoomResponse::validate()
{
}

web::json::value UpdateSmartChatRoomResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roomNameIsSet_) {
        val[utility::conversions::to_string_t("room_name")] = ModelBase::toJson(roomName_);
    }
    if(roomDescriptionIsSet_) {
        val[utility::conversions::to_string_t("room_description")] = ModelBase::toJson(roomDescription_);
    }
    if(videoConfigIsSet_) {
        val[utility::conversions::to_string_t("video_config")] = ModelBase::toJson(videoConfig_);
    }
    if(modelAssetIdIsSet_) {
        val[utility::conversions::to_string_t("model_asset_id")] = ModelBase::toJson(modelAssetId_);
    }
    if(voiceConfigIsSet_) {
        val[utility::conversions::to_string_t("voice_config")] = ModelBase::toJson(voiceConfig_);
    }
    if(voiceConfigListIsSet_) {
        val[utility::conversions::to_string_t("voice_config_list")] = ModelBase::toJson(voiceConfigList_);
    }
    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }
    if(concurrencyIsSet_) {
        val[utility::conversions::to_string_t("concurrency")] = ModelBase::toJson(concurrency_);
    }
    if(defaultLanguageIsSet_) {
        val[utility::conversions::to_string_t("default_language")] = ModelBase::toJson(defaultLanguage_);
    }
    if(backgroundConfigIsSet_) {
        val[utility::conversions::to_string_t("background_config")] = ModelBase::toJson(backgroundConfig_);
    }
    if(layerConfigIsSet_) {
        val[utility::conversions::to_string_t("layer_config")] = ModelBase::toJson(layerConfig_);
    }
    if(reviewConfigIsSet_) {
        val[utility::conversions::to_string_t("review_config")] = ModelBase::toJson(reviewConfig_);
    }
    if(chatSubtitleConfigIsSet_) {
        val[utility::conversions::to_string_t("chat_subtitle_config")] = ModelBase::toJson(chatSubtitleConfig_);
    }
    if(chatVideoTypeIsSet_) {
        val[utility::conversions::to_string_t("chat_video_type")] = ModelBase::toJson(chatVideoType_);
    }
    if(exitMuteThresholdIsSet_) {
        val[utility::conversions::to_string_t("exit_mute_threshold")] = ModelBase::toJson(exitMuteThreshold_);
    }
    if(roomIdIsSet_) {
        val[utility::conversions::to_string_t("room_id")] = ModelBase::toJson(roomId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(coverUrlIsSet_) {
        val[utility::conversions::to_string_t("cover_url")] = ModelBase::toJson(coverUrl_);
    }
    if(isPoolModeIsSet_) {
        val[utility::conversions::to_string_t("is_pool_mode")] = ModelBase::toJson(isPoolMode_);
    }
    if(chatResourceConfigIsSet_) {
        val[utility::conversions::to_string_t("chat_resource_config")] = ModelBase::toJson(chatResourceConfig_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateSmartChatRoomResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("room_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("room_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("voice_config_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_config_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ChatVoiceConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceConfigList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("robot_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("robot_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRobotId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("concurrency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("concurrency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConcurrency(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("background_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("background_config"));
        if(!fieldValue.is_null())
        {
            BackgroundConfigInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackgroundConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("layer_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("layer_config"));
        if(!fieldValue.is_null())
        {
            std::vector<LayerConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLayerConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_config"));
        if(!fieldValue.is_null())
        {
            ReviewConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chat_subtitle_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chat_subtitle_config"));
        if(!fieldValue.is_null())
        {
            ChatSubtitleConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChatSubtitleConfig(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("exit_mute_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exit_mute_threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExitMuteThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("room_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cover_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cover_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoverUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("chat_resource_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chat_resource_config"));
        if(!fieldValue.is_null())
        {
            std::vector<ChatResourceConfigInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChatResourceConfig(refVal);
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


std::string UpdateSmartChatRoomResponse::getRoomName() const
{
    return roomName_;
}

void UpdateSmartChatRoomResponse::setRoomName(const std::string& value)
{
    roomName_ = value;
    roomNameIsSet_ = true;
}

bool UpdateSmartChatRoomResponse::roomNameIsSet() const
{
    return roomNameIsSet_;
}

void UpdateSmartChatRoomResponse::unsetroomName()
{
    roomNameIsSet_ = false;
}

std::string UpdateSmartChatRoomResponse::getRoomDescription() const
{
    return roomDescription_;
}

void UpdateSmartChatRoomResponse::setRoomDescription(const std::string& value)
{
    roomDescription_ = value;
    roomDescriptionIsSet_ = true;
}

bool UpdateSmartChatRoomResponse::roomDescriptionIsSet() const
{
    return roomDescriptionIsSet_;
}

void UpdateSmartChatRoomResponse::unsetroomDescription()
{
    roomDescriptionIsSet_ = false;
}

VideoConfig UpdateSmartChatRoomResponse::getVideoConfig() const
{
    return videoConfig_;
}

void UpdateSmartChatRoomResponse::setVideoConfig(const VideoConfig& value)
{
    videoConfig_ = value;
    videoConfigIsSet_ = true;
}

bool UpdateSmartChatRoomResponse::videoConfigIsSet() const
{
    return videoConfigIsSet_;
}

void UpdateSmartChatRoomResponse::unsetvideoConfig()
{
    videoConfigIsSet_ = false;
}

std::string UpdateSmartChatRoomResponse::getModelAssetId() const
{
    return modelAssetId_;
}

void UpdateSmartChatRoomResponse::setModelAssetId(const std::string& value)
{
    modelAssetId_ = value;
    modelAssetIdIsSet_ = true;
}

bool UpdateSmartChatRoomResponse::modelAssetIdIsSet() const
{
    return modelAssetIdIsSet_;
}

void UpdateSmartChatRoomResponse::unsetmodelAssetId()
{
    modelAssetIdIsSet_ = false;
}

VoiceConfig UpdateSmartChatRoomResponse::getVoiceConfig() const
{
    return voiceConfig_;
}

void UpdateSmartChatRoomResponse::setVoiceConfig(const VoiceConfig& value)
{
    voiceConfig_ = value;
    voiceConfigIsSet_ = true;
}

bool UpdateSmartChatRoomResponse::voiceConfigIsSet() const
{
    return voiceConfigIsSet_;
}

void UpdateSmartChatRoomResponse::unsetvoiceConfig()
{
    voiceConfigIsSet_ = false;
}

std::vector<ChatVoiceConfig>& UpdateSmartChatRoomResponse::getVoiceConfigList()
{
    return voiceConfigList_;
}

void UpdateSmartChatRoomResponse::setVoiceConfigList(const std::vector<ChatVoiceConfig>& value)
{
    voiceConfigList_ = value;
    voiceConfigListIsSet_ = true;
}

bool UpdateSmartChatRoomResponse::voiceConfigListIsSet() const
{
    return voiceConfigListIsSet_;
}

void UpdateSmartChatRoomResponse::unsetvoiceConfigList()
{
    voiceConfigListIsSet_ = false;
}

std::string UpdateSmartChatRoomResponse::getRobotId() const
{
    return robotId_;
}

void UpdateSmartChatRoomResponse::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool UpdateSmartChatRoomResponse::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void UpdateSmartChatRoomResponse::unsetrobotId()
{
    robotIdIsSet_ = false;
}

int32_t UpdateSmartChatRoomResponse::getConcurrency() const
{
    return concurrency_;
}

void UpdateSmartChatRoomResponse::setConcurrency(int32_t value)
{
    concurrency_ = value;
    concurrencyIsSet_ = true;
}

bool UpdateSmartChatRoomResponse::concurrencyIsSet() const
{
    return concurrencyIsSet_;
}

void UpdateSmartChatRoomResponse::unsetconcurrency()
{
    concurrencyIsSet_ = false;
}

std::string UpdateSmartChatRoomResponse::getDefaultLanguage() const
{
    return defaultLanguage_;
}

void UpdateSmartChatRoomResponse::setDefaultLanguage(const std::string& value)
{
    defaultLanguage_ = value;
    defaultLanguageIsSet_ = true;
}

bool UpdateSmartChatRoomResponse::defaultLanguageIsSet() const
{
    return defaultLanguageIsSet_;
}

void UpdateSmartChatRoomResponse::unsetdefaultLanguage()
{
    defaultLanguageIsSet_ = false;
}

BackgroundConfigInfo UpdateSmartChatRoomResponse::getBackgroundConfig() const
{
    return backgroundConfig_;
}

void UpdateSmartChatRoomResponse::setBackgroundConfig(const BackgroundConfigInfo& value)
{
    backgroundConfig_ = value;
    backgroundConfigIsSet_ = true;
}

bool UpdateSmartChatRoomResponse::backgroundConfigIsSet() const
{
    return backgroundConfigIsSet_;
}

void UpdateSmartChatRoomResponse::unsetbackgroundConfig()
{
    backgroundConfigIsSet_ = false;
}

std::vector<LayerConfig>& UpdateSmartChatRoomResponse::getLayerConfig()
{
    return layerConfig_;
}

void UpdateSmartChatRoomResponse::setLayerConfig(const std::vector<LayerConfig>& value)
{
    layerConfig_ = value;
    layerConfigIsSet_ = true;
}

bool UpdateSmartChatRoomResponse::layerConfigIsSet() const
{
    return layerConfigIsSet_;
}

void UpdateSmartChatRoomResponse::unsetlayerConfig()
{
    layerConfigIsSet_ = false;
}

ReviewConfig UpdateSmartChatRoomResponse::getReviewConfig() const
{
    return reviewConfig_;
}

void UpdateSmartChatRoomResponse::setReviewConfig(const ReviewConfig& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool UpdateSmartChatRoomResponse::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void UpdateSmartChatRoomResponse::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

ChatSubtitleConfig UpdateSmartChatRoomResponse::getChatSubtitleConfig() const
{
    return chatSubtitleConfig_;
}

void UpdateSmartChatRoomResponse::setChatSubtitleConfig(const ChatSubtitleConfig& value)
{
    chatSubtitleConfig_ = value;
    chatSubtitleConfigIsSet_ = true;
}

bool UpdateSmartChatRoomResponse::chatSubtitleConfigIsSet() const
{
    return chatSubtitleConfigIsSet_;
}

void UpdateSmartChatRoomResponse::unsetchatSubtitleConfig()
{
    chatSubtitleConfigIsSet_ = false;
}

std::string UpdateSmartChatRoomResponse::getChatVideoType() const
{
    return chatVideoType_;
}

void UpdateSmartChatRoomResponse::setChatVideoType(const std::string& value)
{
    chatVideoType_ = value;
    chatVideoTypeIsSet_ = true;
}

bool UpdateSmartChatRoomResponse::chatVideoTypeIsSet() const
{
    return chatVideoTypeIsSet_;
}

void UpdateSmartChatRoomResponse::unsetchatVideoType()
{
    chatVideoTypeIsSet_ = false;
}

int32_t UpdateSmartChatRoomResponse::getExitMuteThreshold() const
{
    return exitMuteThreshold_;
}

void UpdateSmartChatRoomResponse::setExitMuteThreshold(int32_t value)
{
    exitMuteThreshold_ = value;
    exitMuteThresholdIsSet_ = true;
}

bool UpdateSmartChatRoomResponse::exitMuteThresholdIsSet() const
{
    return exitMuteThresholdIsSet_;
}

void UpdateSmartChatRoomResponse::unsetexitMuteThreshold()
{
    exitMuteThresholdIsSet_ = false;
}

std::string UpdateSmartChatRoomResponse::getRoomId() const
{
    return roomId_;
}

void UpdateSmartChatRoomResponse::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool UpdateSmartChatRoomResponse::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void UpdateSmartChatRoomResponse::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string UpdateSmartChatRoomResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateSmartChatRoomResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateSmartChatRoomResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateSmartChatRoomResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string UpdateSmartChatRoomResponse::getUpdateTime() const
{
    return updateTime_;
}

void UpdateSmartChatRoomResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UpdateSmartChatRoomResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UpdateSmartChatRoomResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string UpdateSmartChatRoomResponse::getCoverUrl() const
{
    return coverUrl_;
}

void UpdateSmartChatRoomResponse::setCoverUrl(const std::string& value)
{
    coverUrl_ = value;
    coverUrlIsSet_ = true;
}

bool UpdateSmartChatRoomResponse::coverUrlIsSet() const
{
    return coverUrlIsSet_;
}

void UpdateSmartChatRoomResponse::unsetcoverUrl()
{
    coverUrlIsSet_ = false;
}

bool UpdateSmartChatRoomResponse::isIsPoolMode() const
{
    return isPoolMode_;
}

void UpdateSmartChatRoomResponse::setIsPoolMode(bool value)
{
    isPoolMode_ = value;
    isPoolModeIsSet_ = true;
}

bool UpdateSmartChatRoomResponse::isPoolModeIsSet() const
{
    return isPoolModeIsSet_;
}

void UpdateSmartChatRoomResponse::unsetisPoolMode()
{
    isPoolModeIsSet_ = false;
}

std::vector<ChatResourceConfigInfo>& UpdateSmartChatRoomResponse::getChatResourceConfig()
{
    return chatResourceConfig_;
}

void UpdateSmartChatRoomResponse::setChatResourceConfig(const std::vector<ChatResourceConfigInfo>& value)
{
    chatResourceConfig_ = value;
    chatResourceConfigIsSet_ = true;
}

bool UpdateSmartChatRoomResponse::chatResourceConfigIsSet() const
{
    return chatResourceConfigIsSet_;
}

void UpdateSmartChatRoomResponse::unsetchatResourceConfig()
{
    chatResourceConfigIsSet_ = false;
}

std::string UpdateSmartChatRoomResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateSmartChatRoomResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateSmartChatRoomResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateSmartChatRoomResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


