

#include "huaweicloud/metastudio/v1/model/CreateSmartChatRoomRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateSmartChatRoomRequestBody::CreateSmartChatRoomRequestBody()
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
    billingMode_ = "";
    billingModeIsSet_ = false;
    reuseResource_ = false;
    reuseResourceIsSet_ = false;
    concurrency_ = 0;
    concurrencyIsSet_ = false;
    clientNums_ = 0;
    clientNumsIsSet_ = false;
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
    enableSemanticAction_ = false;
    enableSemanticActionIsSet_ = false;
}

CreateSmartChatRoomRequestBody::~CreateSmartChatRoomRequestBody() = default;

void CreateSmartChatRoomRequestBody::validate()
{
}

web::json::value CreateSmartChatRoomRequestBody::toJson() const
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
    if(billingModeIsSet_) {
        val[utility::conversions::to_string_t("billing_mode")] = ModelBase::toJson(billingMode_);
    }
    if(reuseResourceIsSet_) {
        val[utility::conversions::to_string_t("reuse_resource")] = ModelBase::toJson(reuseResource_);
    }
    if(concurrencyIsSet_) {
        val[utility::conversions::to_string_t("concurrency")] = ModelBase::toJson(concurrency_);
    }
    if(clientNumsIsSet_) {
        val[utility::conversions::to_string_t("client_nums")] = ModelBase::toJson(clientNums_);
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
    if(enableSemanticActionIsSet_) {
        val[utility::conversions::to_string_t("enable_semantic_action")] = ModelBase::toJson(enableSemanticAction_);
    }

    return val;
}
bool CreateSmartChatRoomRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("billing_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillingMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reuse_resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reuse_resource"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReuseResource(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("client_nums"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_nums"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientNums(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enable_semantic_action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_semantic_action"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableSemanticAction(refVal);
        }
    }
    return ok;
}


std::string CreateSmartChatRoomRequestBody::getRoomName() const
{
    return roomName_;
}

void CreateSmartChatRoomRequestBody::setRoomName(const std::string& value)
{
    roomName_ = value;
    roomNameIsSet_ = true;
}

bool CreateSmartChatRoomRequestBody::roomNameIsSet() const
{
    return roomNameIsSet_;
}

void CreateSmartChatRoomRequestBody::unsetroomName()
{
    roomNameIsSet_ = false;
}

std::string CreateSmartChatRoomRequestBody::getRoomDescription() const
{
    return roomDescription_;
}

void CreateSmartChatRoomRequestBody::setRoomDescription(const std::string& value)
{
    roomDescription_ = value;
    roomDescriptionIsSet_ = true;
}

bool CreateSmartChatRoomRequestBody::roomDescriptionIsSet() const
{
    return roomDescriptionIsSet_;
}

void CreateSmartChatRoomRequestBody::unsetroomDescription()
{
    roomDescriptionIsSet_ = false;
}

VideoConfig CreateSmartChatRoomRequestBody::getVideoConfig() const
{
    return videoConfig_;
}

void CreateSmartChatRoomRequestBody::setVideoConfig(const VideoConfig& value)
{
    videoConfig_ = value;
    videoConfigIsSet_ = true;
}

bool CreateSmartChatRoomRequestBody::videoConfigIsSet() const
{
    return videoConfigIsSet_;
}

void CreateSmartChatRoomRequestBody::unsetvideoConfig()
{
    videoConfigIsSet_ = false;
}

std::string CreateSmartChatRoomRequestBody::getModelAssetId() const
{
    return modelAssetId_;
}

void CreateSmartChatRoomRequestBody::setModelAssetId(const std::string& value)
{
    modelAssetId_ = value;
    modelAssetIdIsSet_ = true;
}

bool CreateSmartChatRoomRequestBody::modelAssetIdIsSet() const
{
    return modelAssetIdIsSet_;
}

void CreateSmartChatRoomRequestBody::unsetmodelAssetId()
{
    modelAssetIdIsSet_ = false;
}

VoiceConfig CreateSmartChatRoomRequestBody::getVoiceConfig() const
{
    return voiceConfig_;
}

void CreateSmartChatRoomRequestBody::setVoiceConfig(const VoiceConfig& value)
{
    voiceConfig_ = value;
    voiceConfigIsSet_ = true;
}

bool CreateSmartChatRoomRequestBody::voiceConfigIsSet() const
{
    return voiceConfigIsSet_;
}

void CreateSmartChatRoomRequestBody::unsetvoiceConfig()
{
    voiceConfigIsSet_ = false;
}

std::vector<ChatVoiceConfig>& CreateSmartChatRoomRequestBody::getVoiceConfigList()
{
    return voiceConfigList_;
}

void CreateSmartChatRoomRequestBody::setVoiceConfigList(const std::vector<ChatVoiceConfig>& value)
{
    voiceConfigList_ = value;
    voiceConfigListIsSet_ = true;
}

bool CreateSmartChatRoomRequestBody::voiceConfigListIsSet() const
{
    return voiceConfigListIsSet_;
}

void CreateSmartChatRoomRequestBody::unsetvoiceConfigList()
{
    voiceConfigListIsSet_ = false;
}

std::string CreateSmartChatRoomRequestBody::getRobotId() const
{
    return robotId_;
}

void CreateSmartChatRoomRequestBody::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool CreateSmartChatRoomRequestBody::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void CreateSmartChatRoomRequestBody::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string CreateSmartChatRoomRequestBody::getBillingMode() const
{
    return billingMode_;
}

void CreateSmartChatRoomRequestBody::setBillingMode(const std::string& value)
{
    billingMode_ = value;
    billingModeIsSet_ = true;
}

bool CreateSmartChatRoomRequestBody::billingModeIsSet() const
{
    return billingModeIsSet_;
}

void CreateSmartChatRoomRequestBody::unsetbillingMode()
{
    billingModeIsSet_ = false;
}

bool CreateSmartChatRoomRequestBody::isReuseResource() const
{
    return reuseResource_;
}

void CreateSmartChatRoomRequestBody::setReuseResource(bool value)
{
    reuseResource_ = value;
    reuseResourceIsSet_ = true;
}

bool CreateSmartChatRoomRequestBody::reuseResourceIsSet() const
{
    return reuseResourceIsSet_;
}

void CreateSmartChatRoomRequestBody::unsetreuseResource()
{
    reuseResourceIsSet_ = false;
}

int32_t CreateSmartChatRoomRequestBody::getConcurrency() const
{
    return concurrency_;
}

void CreateSmartChatRoomRequestBody::setConcurrency(int32_t value)
{
    concurrency_ = value;
    concurrencyIsSet_ = true;
}

bool CreateSmartChatRoomRequestBody::concurrencyIsSet() const
{
    return concurrencyIsSet_;
}

void CreateSmartChatRoomRequestBody::unsetconcurrency()
{
    concurrencyIsSet_ = false;
}

int32_t CreateSmartChatRoomRequestBody::getClientNums() const
{
    return clientNums_;
}

void CreateSmartChatRoomRequestBody::setClientNums(int32_t value)
{
    clientNums_ = value;
    clientNumsIsSet_ = true;
}

bool CreateSmartChatRoomRequestBody::clientNumsIsSet() const
{
    return clientNumsIsSet_;
}

void CreateSmartChatRoomRequestBody::unsetclientNums()
{
    clientNumsIsSet_ = false;
}

std::string CreateSmartChatRoomRequestBody::getDefaultLanguage() const
{
    return defaultLanguage_;
}

void CreateSmartChatRoomRequestBody::setDefaultLanguage(const std::string& value)
{
    defaultLanguage_ = value;
    defaultLanguageIsSet_ = true;
}

bool CreateSmartChatRoomRequestBody::defaultLanguageIsSet() const
{
    return defaultLanguageIsSet_;
}

void CreateSmartChatRoomRequestBody::unsetdefaultLanguage()
{
    defaultLanguageIsSet_ = false;
}

BackgroundConfigInfo CreateSmartChatRoomRequestBody::getBackgroundConfig() const
{
    return backgroundConfig_;
}

void CreateSmartChatRoomRequestBody::setBackgroundConfig(const BackgroundConfigInfo& value)
{
    backgroundConfig_ = value;
    backgroundConfigIsSet_ = true;
}

bool CreateSmartChatRoomRequestBody::backgroundConfigIsSet() const
{
    return backgroundConfigIsSet_;
}

void CreateSmartChatRoomRequestBody::unsetbackgroundConfig()
{
    backgroundConfigIsSet_ = false;
}

std::vector<LayerConfig>& CreateSmartChatRoomRequestBody::getLayerConfig()
{
    return layerConfig_;
}

void CreateSmartChatRoomRequestBody::setLayerConfig(const std::vector<LayerConfig>& value)
{
    layerConfig_ = value;
    layerConfigIsSet_ = true;
}

bool CreateSmartChatRoomRequestBody::layerConfigIsSet() const
{
    return layerConfigIsSet_;
}

void CreateSmartChatRoomRequestBody::unsetlayerConfig()
{
    layerConfigIsSet_ = false;
}

ReviewConfig CreateSmartChatRoomRequestBody::getReviewConfig() const
{
    return reviewConfig_;
}

void CreateSmartChatRoomRequestBody::setReviewConfig(const ReviewConfig& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool CreateSmartChatRoomRequestBody::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void CreateSmartChatRoomRequestBody::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

ChatSubtitleConfig CreateSmartChatRoomRequestBody::getChatSubtitleConfig() const
{
    return chatSubtitleConfig_;
}

void CreateSmartChatRoomRequestBody::setChatSubtitleConfig(const ChatSubtitleConfig& value)
{
    chatSubtitleConfig_ = value;
    chatSubtitleConfigIsSet_ = true;
}

bool CreateSmartChatRoomRequestBody::chatSubtitleConfigIsSet() const
{
    return chatSubtitleConfigIsSet_;
}

void CreateSmartChatRoomRequestBody::unsetchatSubtitleConfig()
{
    chatSubtitleConfigIsSet_ = false;
}

std::string CreateSmartChatRoomRequestBody::getChatVideoType() const
{
    return chatVideoType_;
}

void CreateSmartChatRoomRequestBody::setChatVideoType(const std::string& value)
{
    chatVideoType_ = value;
    chatVideoTypeIsSet_ = true;
}

bool CreateSmartChatRoomRequestBody::chatVideoTypeIsSet() const
{
    return chatVideoTypeIsSet_;
}

void CreateSmartChatRoomRequestBody::unsetchatVideoType()
{
    chatVideoTypeIsSet_ = false;
}

int32_t CreateSmartChatRoomRequestBody::getExitMuteThreshold() const
{
    return exitMuteThreshold_;
}

void CreateSmartChatRoomRequestBody::setExitMuteThreshold(int32_t value)
{
    exitMuteThreshold_ = value;
    exitMuteThresholdIsSet_ = true;
}

bool CreateSmartChatRoomRequestBody::exitMuteThresholdIsSet() const
{
    return exitMuteThresholdIsSet_;
}

void CreateSmartChatRoomRequestBody::unsetexitMuteThreshold()
{
    exitMuteThresholdIsSet_ = false;
}

bool CreateSmartChatRoomRequestBody::isEnableSemanticAction() const
{
    return enableSemanticAction_;
}

void CreateSmartChatRoomRequestBody::setEnableSemanticAction(bool value)
{
    enableSemanticAction_ = value;
    enableSemanticActionIsSet_ = true;
}

bool CreateSmartChatRoomRequestBody::enableSemanticActionIsSet() const
{
    return enableSemanticActionIsSet_;
}

void CreateSmartChatRoomRequestBody::unsetenableSemanticAction()
{
    enableSemanticActionIsSet_ = false;
}

}
}
}
}
}


