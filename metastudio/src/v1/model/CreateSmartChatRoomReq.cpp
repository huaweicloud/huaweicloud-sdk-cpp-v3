

#include "huaweicloud/metastudio/v1/model/CreateSmartChatRoomReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateSmartChatRoomReq::CreateSmartChatRoomReq()
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
    chatResourceConfigIsSet_ = false;
}

CreateSmartChatRoomReq::~CreateSmartChatRoomReq() = default;

void CreateSmartChatRoomReq::validate()
{
}

web::json::value CreateSmartChatRoomReq::toJson() const
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
    if(chatResourceConfigIsSet_) {
        val[utility::conversions::to_string_t("chat_resource_config")] = ModelBase::toJson(chatResourceConfig_);
    }

    return val;
}
bool CreateSmartChatRoomReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("chat_resource_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chat_resource_config"));
        if(!fieldValue.is_null())
        {
            std::vector<ChatResourceConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChatResourceConfig(refVal);
        }
    }
    return ok;
}


std::string CreateSmartChatRoomReq::getRoomName() const
{
    return roomName_;
}

void CreateSmartChatRoomReq::setRoomName(const std::string& value)
{
    roomName_ = value;
    roomNameIsSet_ = true;
}

bool CreateSmartChatRoomReq::roomNameIsSet() const
{
    return roomNameIsSet_;
}

void CreateSmartChatRoomReq::unsetroomName()
{
    roomNameIsSet_ = false;
}

std::string CreateSmartChatRoomReq::getRoomDescription() const
{
    return roomDescription_;
}

void CreateSmartChatRoomReq::setRoomDescription(const std::string& value)
{
    roomDescription_ = value;
    roomDescriptionIsSet_ = true;
}

bool CreateSmartChatRoomReq::roomDescriptionIsSet() const
{
    return roomDescriptionIsSet_;
}

void CreateSmartChatRoomReq::unsetroomDescription()
{
    roomDescriptionIsSet_ = false;
}

VideoConfig CreateSmartChatRoomReq::getVideoConfig() const
{
    return videoConfig_;
}

void CreateSmartChatRoomReq::setVideoConfig(const VideoConfig& value)
{
    videoConfig_ = value;
    videoConfigIsSet_ = true;
}

bool CreateSmartChatRoomReq::videoConfigIsSet() const
{
    return videoConfigIsSet_;
}

void CreateSmartChatRoomReq::unsetvideoConfig()
{
    videoConfigIsSet_ = false;
}

std::string CreateSmartChatRoomReq::getModelAssetId() const
{
    return modelAssetId_;
}

void CreateSmartChatRoomReq::setModelAssetId(const std::string& value)
{
    modelAssetId_ = value;
    modelAssetIdIsSet_ = true;
}

bool CreateSmartChatRoomReq::modelAssetIdIsSet() const
{
    return modelAssetIdIsSet_;
}

void CreateSmartChatRoomReq::unsetmodelAssetId()
{
    modelAssetIdIsSet_ = false;
}

VoiceConfig CreateSmartChatRoomReq::getVoiceConfig() const
{
    return voiceConfig_;
}

void CreateSmartChatRoomReq::setVoiceConfig(const VoiceConfig& value)
{
    voiceConfig_ = value;
    voiceConfigIsSet_ = true;
}

bool CreateSmartChatRoomReq::voiceConfigIsSet() const
{
    return voiceConfigIsSet_;
}

void CreateSmartChatRoomReq::unsetvoiceConfig()
{
    voiceConfigIsSet_ = false;
}

std::vector<ChatVoiceConfig>& CreateSmartChatRoomReq::getVoiceConfigList()
{
    return voiceConfigList_;
}

void CreateSmartChatRoomReq::setVoiceConfigList(const std::vector<ChatVoiceConfig>& value)
{
    voiceConfigList_ = value;
    voiceConfigListIsSet_ = true;
}

bool CreateSmartChatRoomReq::voiceConfigListIsSet() const
{
    return voiceConfigListIsSet_;
}

void CreateSmartChatRoomReq::unsetvoiceConfigList()
{
    voiceConfigListIsSet_ = false;
}

std::string CreateSmartChatRoomReq::getRobotId() const
{
    return robotId_;
}

void CreateSmartChatRoomReq::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool CreateSmartChatRoomReq::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void CreateSmartChatRoomReq::unsetrobotId()
{
    robotIdIsSet_ = false;
}

int32_t CreateSmartChatRoomReq::getConcurrency() const
{
    return concurrency_;
}

void CreateSmartChatRoomReq::setConcurrency(int32_t value)
{
    concurrency_ = value;
    concurrencyIsSet_ = true;
}

bool CreateSmartChatRoomReq::concurrencyIsSet() const
{
    return concurrencyIsSet_;
}

void CreateSmartChatRoomReq::unsetconcurrency()
{
    concurrencyIsSet_ = false;
}

std::string CreateSmartChatRoomReq::getDefaultLanguage() const
{
    return defaultLanguage_;
}

void CreateSmartChatRoomReq::setDefaultLanguage(const std::string& value)
{
    defaultLanguage_ = value;
    defaultLanguageIsSet_ = true;
}

bool CreateSmartChatRoomReq::defaultLanguageIsSet() const
{
    return defaultLanguageIsSet_;
}

void CreateSmartChatRoomReq::unsetdefaultLanguage()
{
    defaultLanguageIsSet_ = false;
}

BackgroundConfigInfo CreateSmartChatRoomReq::getBackgroundConfig() const
{
    return backgroundConfig_;
}

void CreateSmartChatRoomReq::setBackgroundConfig(const BackgroundConfigInfo& value)
{
    backgroundConfig_ = value;
    backgroundConfigIsSet_ = true;
}

bool CreateSmartChatRoomReq::backgroundConfigIsSet() const
{
    return backgroundConfigIsSet_;
}

void CreateSmartChatRoomReq::unsetbackgroundConfig()
{
    backgroundConfigIsSet_ = false;
}

std::vector<LayerConfig>& CreateSmartChatRoomReq::getLayerConfig()
{
    return layerConfig_;
}

void CreateSmartChatRoomReq::setLayerConfig(const std::vector<LayerConfig>& value)
{
    layerConfig_ = value;
    layerConfigIsSet_ = true;
}

bool CreateSmartChatRoomReq::layerConfigIsSet() const
{
    return layerConfigIsSet_;
}

void CreateSmartChatRoomReq::unsetlayerConfig()
{
    layerConfigIsSet_ = false;
}

ReviewConfig CreateSmartChatRoomReq::getReviewConfig() const
{
    return reviewConfig_;
}

void CreateSmartChatRoomReq::setReviewConfig(const ReviewConfig& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool CreateSmartChatRoomReq::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void CreateSmartChatRoomReq::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

ChatSubtitleConfig CreateSmartChatRoomReq::getChatSubtitleConfig() const
{
    return chatSubtitleConfig_;
}

void CreateSmartChatRoomReq::setChatSubtitleConfig(const ChatSubtitleConfig& value)
{
    chatSubtitleConfig_ = value;
    chatSubtitleConfigIsSet_ = true;
}

bool CreateSmartChatRoomReq::chatSubtitleConfigIsSet() const
{
    return chatSubtitleConfigIsSet_;
}

void CreateSmartChatRoomReq::unsetchatSubtitleConfig()
{
    chatSubtitleConfigIsSet_ = false;
}

std::string CreateSmartChatRoomReq::getChatVideoType() const
{
    return chatVideoType_;
}

void CreateSmartChatRoomReq::setChatVideoType(const std::string& value)
{
    chatVideoType_ = value;
    chatVideoTypeIsSet_ = true;
}

bool CreateSmartChatRoomReq::chatVideoTypeIsSet() const
{
    return chatVideoTypeIsSet_;
}

void CreateSmartChatRoomReq::unsetchatVideoType()
{
    chatVideoTypeIsSet_ = false;
}

int32_t CreateSmartChatRoomReq::getExitMuteThreshold() const
{
    return exitMuteThreshold_;
}

void CreateSmartChatRoomReq::setExitMuteThreshold(int32_t value)
{
    exitMuteThreshold_ = value;
    exitMuteThresholdIsSet_ = true;
}

bool CreateSmartChatRoomReq::exitMuteThresholdIsSet() const
{
    return exitMuteThresholdIsSet_;
}

void CreateSmartChatRoomReq::unsetexitMuteThreshold()
{
    exitMuteThresholdIsSet_ = false;
}

std::vector<ChatResourceConfig>& CreateSmartChatRoomReq::getChatResourceConfig()
{
    return chatResourceConfig_;
}

void CreateSmartChatRoomReq::setChatResourceConfig(const std::vector<ChatResourceConfig>& value)
{
    chatResourceConfig_ = value;
    chatResourceConfigIsSet_ = true;
}

bool CreateSmartChatRoomReq::chatResourceConfigIsSet() const
{
    return chatResourceConfigIsSet_;
}

void CreateSmartChatRoomReq::unsetchatResourceConfig()
{
    chatResourceConfigIsSet_ = false;
}

}
}
}
}
}


