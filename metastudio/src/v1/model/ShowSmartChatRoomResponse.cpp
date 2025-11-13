

#include "huaweicloud/metastudio/v1/model/ShowSmartChatRoomResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowSmartChatRoomResponse::ShowSmartChatRoomResponse()
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

ShowSmartChatRoomResponse::~ShowSmartChatRoomResponse() = default;

void ShowSmartChatRoomResponse::validate()
{
}

web::json::value ShowSmartChatRoomResponse::toJson() const
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
bool ShowSmartChatRoomResponse::fromJson(const web::json::value& val)
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


std::string ShowSmartChatRoomResponse::getRoomName() const
{
    return roomName_;
}

void ShowSmartChatRoomResponse::setRoomName(const std::string& value)
{
    roomName_ = value;
    roomNameIsSet_ = true;
}

bool ShowSmartChatRoomResponse::roomNameIsSet() const
{
    return roomNameIsSet_;
}

void ShowSmartChatRoomResponse::unsetroomName()
{
    roomNameIsSet_ = false;
}

std::string ShowSmartChatRoomResponse::getRoomDescription() const
{
    return roomDescription_;
}

void ShowSmartChatRoomResponse::setRoomDescription(const std::string& value)
{
    roomDescription_ = value;
    roomDescriptionIsSet_ = true;
}

bool ShowSmartChatRoomResponse::roomDescriptionIsSet() const
{
    return roomDescriptionIsSet_;
}

void ShowSmartChatRoomResponse::unsetroomDescription()
{
    roomDescriptionIsSet_ = false;
}

VideoConfig ShowSmartChatRoomResponse::getVideoConfig() const
{
    return videoConfig_;
}

void ShowSmartChatRoomResponse::setVideoConfig(const VideoConfig& value)
{
    videoConfig_ = value;
    videoConfigIsSet_ = true;
}

bool ShowSmartChatRoomResponse::videoConfigIsSet() const
{
    return videoConfigIsSet_;
}

void ShowSmartChatRoomResponse::unsetvideoConfig()
{
    videoConfigIsSet_ = false;
}

std::string ShowSmartChatRoomResponse::getModelAssetId() const
{
    return modelAssetId_;
}

void ShowSmartChatRoomResponse::setModelAssetId(const std::string& value)
{
    modelAssetId_ = value;
    modelAssetIdIsSet_ = true;
}

bool ShowSmartChatRoomResponse::modelAssetIdIsSet() const
{
    return modelAssetIdIsSet_;
}

void ShowSmartChatRoomResponse::unsetmodelAssetId()
{
    modelAssetIdIsSet_ = false;
}

VoiceConfig ShowSmartChatRoomResponse::getVoiceConfig() const
{
    return voiceConfig_;
}

void ShowSmartChatRoomResponse::setVoiceConfig(const VoiceConfig& value)
{
    voiceConfig_ = value;
    voiceConfigIsSet_ = true;
}

bool ShowSmartChatRoomResponse::voiceConfigIsSet() const
{
    return voiceConfigIsSet_;
}

void ShowSmartChatRoomResponse::unsetvoiceConfig()
{
    voiceConfigIsSet_ = false;
}

std::vector<ChatVoiceConfig>& ShowSmartChatRoomResponse::getVoiceConfigList()
{
    return voiceConfigList_;
}

void ShowSmartChatRoomResponse::setVoiceConfigList(const std::vector<ChatVoiceConfig>& value)
{
    voiceConfigList_ = value;
    voiceConfigListIsSet_ = true;
}

bool ShowSmartChatRoomResponse::voiceConfigListIsSet() const
{
    return voiceConfigListIsSet_;
}

void ShowSmartChatRoomResponse::unsetvoiceConfigList()
{
    voiceConfigListIsSet_ = false;
}

std::string ShowSmartChatRoomResponse::getRobotId() const
{
    return robotId_;
}

void ShowSmartChatRoomResponse::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool ShowSmartChatRoomResponse::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void ShowSmartChatRoomResponse::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string ShowSmartChatRoomResponse::getBillingMode() const
{
    return billingMode_;
}

void ShowSmartChatRoomResponse::setBillingMode(const std::string& value)
{
    billingMode_ = value;
    billingModeIsSet_ = true;
}

bool ShowSmartChatRoomResponse::billingModeIsSet() const
{
    return billingModeIsSet_;
}

void ShowSmartChatRoomResponse::unsetbillingMode()
{
    billingModeIsSet_ = false;
}

bool ShowSmartChatRoomResponse::isReuseResource() const
{
    return reuseResource_;
}

void ShowSmartChatRoomResponse::setReuseResource(bool value)
{
    reuseResource_ = value;
    reuseResourceIsSet_ = true;
}

bool ShowSmartChatRoomResponse::reuseResourceIsSet() const
{
    return reuseResourceIsSet_;
}

void ShowSmartChatRoomResponse::unsetreuseResource()
{
    reuseResourceIsSet_ = false;
}

int32_t ShowSmartChatRoomResponse::getConcurrency() const
{
    return concurrency_;
}

void ShowSmartChatRoomResponse::setConcurrency(int32_t value)
{
    concurrency_ = value;
    concurrencyIsSet_ = true;
}

bool ShowSmartChatRoomResponse::concurrencyIsSet() const
{
    return concurrencyIsSet_;
}

void ShowSmartChatRoomResponse::unsetconcurrency()
{
    concurrencyIsSet_ = false;
}

int32_t ShowSmartChatRoomResponse::getClientNums() const
{
    return clientNums_;
}

void ShowSmartChatRoomResponse::setClientNums(int32_t value)
{
    clientNums_ = value;
    clientNumsIsSet_ = true;
}

bool ShowSmartChatRoomResponse::clientNumsIsSet() const
{
    return clientNumsIsSet_;
}

void ShowSmartChatRoomResponse::unsetclientNums()
{
    clientNumsIsSet_ = false;
}

std::string ShowSmartChatRoomResponse::getDefaultLanguage() const
{
    return defaultLanguage_;
}

void ShowSmartChatRoomResponse::setDefaultLanguage(const std::string& value)
{
    defaultLanguage_ = value;
    defaultLanguageIsSet_ = true;
}

bool ShowSmartChatRoomResponse::defaultLanguageIsSet() const
{
    return defaultLanguageIsSet_;
}

void ShowSmartChatRoomResponse::unsetdefaultLanguage()
{
    defaultLanguageIsSet_ = false;
}

BackgroundConfigInfo ShowSmartChatRoomResponse::getBackgroundConfig() const
{
    return backgroundConfig_;
}

void ShowSmartChatRoomResponse::setBackgroundConfig(const BackgroundConfigInfo& value)
{
    backgroundConfig_ = value;
    backgroundConfigIsSet_ = true;
}

bool ShowSmartChatRoomResponse::backgroundConfigIsSet() const
{
    return backgroundConfigIsSet_;
}

void ShowSmartChatRoomResponse::unsetbackgroundConfig()
{
    backgroundConfigIsSet_ = false;
}

std::vector<LayerConfig>& ShowSmartChatRoomResponse::getLayerConfig()
{
    return layerConfig_;
}

void ShowSmartChatRoomResponse::setLayerConfig(const std::vector<LayerConfig>& value)
{
    layerConfig_ = value;
    layerConfigIsSet_ = true;
}

bool ShowSmartChatRoomResponse::layerConfigIsSet() const
{
    return layerConfigIsSet_;
}

void ShowSmartChatRoomResponse::unsetlayerConfig()
{
    layerConfigIsSet_ = false;
}

ReviewConfig ShowSmartChatRoomResponse::getReviewConfig() const
{
    return reviewConfig_;
}

void ShowSmartChatRoomResponse::setReviewConfig(const ReviewConfig& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool ShowSmartChatRoomResponse::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void ShowSmartChatRoomResponse::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

ChatSubtitleConfig ShowSmartChatRoomResponse::getChatSubtitleConfig() const
{
    return chatSubtitleConfig_;
}

void ShowSmartChatRoomResponse::setChatSubtitleConfig(const ChatSubtitleConfig& value)
{
    chatSubtitleConfig_ = value;
    chatSubtitleConfigIsSet_ = true;
}

bool ShowSmartChatRoomResponse::chatSubtitleConfigIsSet() const
{
    return chatSubtitleConfigIsSet_;
}

void ShowSmartChatRoomResponse::unsetchatSubtitleConfig()
{
    chatSubtitleConfigIsSet_ = false;
}

std::string ShowSmartChatRoomResponse::getChatVideoType() const
{
    return chatVideoType_;
}

void ShowSmartChatRoomResponse::setChatVideoType(const std::string& value)
{
    chatVideoType_ = value;
    chatVideoTypeIsSet_ = true;
}

bool ShowSmartChatRoomResponse::chatVideoTypeIsSet() const
{
    return chatVideoTypeIsSet_;
}

void ShowSmartChatRoomResponse::unsetchatVideoType()
{
    chatVideoTypeIsSet_ = false;
}

int32_t ShowSmartChatRoomResponse::getExitMuteThreshold() const
{
    return exitMuteThreshold_;
}

void ShowSmartChatRoomResponse::setExitMuteThreshold(int32_t value)
{
    exitMuteThreshold_ = value;
    exitMuteThresholdIsSet_ = true;
}

bool ShowSmartChatRoomResponse::exitMuteThresholdIsSet() const
{
    return exitMuteThresholdIsSet_;
}

void ShowSmartChatRoomResponse::unsetexitMuteThreshold()
{
    exitMuteThresholdIsSet_ = false;
}

bool ShowSmartChatRoomResponse::isEnableSemanticAction() const
{
    return enableSemanticAction_;
}

void ShowSmartChatRoomResponse::setEnableSemanticAction(bool value)
{
    enableSemanticAction_ = value;
    enableSemanticActionIsSet_ = true;
}

bool ShowSmartChatRoomResponse::enableSemanticActionIsSet() const
{
    return enableSemanticActionIsSet_;
}

void ShowSmartChatRoomResponse::unsetenableSemanticAction()
{
    enableSemanticActionIsSet_ = false;
}

std::string ShowSmartChatRoomResponse::getRoomId() const
{
    return roomId_;
}

void ShowSmartChatRoomResponse::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool ShowSmartChatRoomResponse::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void ShowSmartChatRoomResponse::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string ShowSmartChatRoomResponse::getCreateTime() const
{
    return createTime_;
}

void ShowSmartChatRoomResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowSmartChatRoomResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowSmartChatRoomResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowSmartChatRoomResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowSmartChatRoomResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowSmartChatRoomResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowSmartChatRoomResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowSmartChatRoomResponse::getCoverUrl() const
{
    return coverUrl_;
}

void ShowSmartChatRoomResponse::setCoverUrl(const std::string& value)
{
    coverUrl_ = value;
    coverUrlIsSet_ = true;
}

bool ShowSmartChatRoomResponse::coverUrlIsSet() const
{
    return coverUrlIsSet_;
}

void ShowSmartChatRoomResponse::unsetcoverUrl()
{
    coverUrlIsSet_ = false;
}

bool ShowSmartChatRoomResponse::isIsPoolMode() const
{
    return isPoolMode_;
}

void ShowSmartChatRoomResponse::setIsPoolMode(bool value)
{
    isPoolMode_ = value;
    isPoolModeIsSet_ = true;
}

bool ShowSmartChatRoomResponse::isPoolModeIsSet() const
{
    return isPoolModeIsSet_;
}

void ShowSmartChatRoomResponse::unsetisPoolMode()
{
    isPoolModeIsSet_ = false;
}

std::vector<ChatResourceConfigInfo>& ShowSmartChatRoomResponse::getChatResourceConfig()
{
    return chatResourceConfig_;
}

void ShowSmartChatRoomResponse::setChatResourceConfig(const std::vector<ChatResourceConfigInfo>& value)
{
    chatResourceConfig_ = value;
    chatResourceConfigIsSet_ = true;
}

bool ShowSmartChatRoomResponse::chatResourceConfigIsSet() const
{
    return chatResourceConfigIsSet_;
}

void ShowSmartChatRoomResponse::unsetchatResourceConfig()
{
    chatResourceConfigIsSet_ = false;
}

std::string ShowSmartChatRoomResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowSmartChatRoomResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowSmartChatRoomResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowSmartChatRoomResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


