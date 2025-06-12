

#include "huaweicloud/metastudio/v1/model/ShowSmartLiveRoomResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowSmartLiveRoomResponse::ShowSmartLiveRoomResponse()
{
    roomName_ = "";
    roomNameIsSet_ = false;
    roomDescription_ = "";
    roomDescriptionIsSet_ = false;
    roomType_ = "";
    roomTypeIsSet_ = false;
    sceneScriptsIsSet_ = false;
    interactionConfigIsSet_ = false;
    interactionRulesIsSet_ = false;
    playPolicyIsSet_ = false;
    videoConfigIsSet_ = false;
    outputUrlsIsSet_ = false;
    streamKeysIsSet_ = false;
    backupModelAssetIdsIsSet_ = false;
    liveEventCallbackConfigIsSet_ = false;
    rtcCallbackConfigIsSet_ = false;
    reviewConfigIsSet_ = false;
    sharedConfigIsSet_ = false;
    viewMode_ = "";
    viewModeIsSet_ = false;
    coStreamerConfigIsSet_ = false;
    privData_ = "";
    privDataIsSet_ = false;
    roomId_ = "";
    roomIdIsSet_ = false;
    relationLivePlatformInfoIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    coverUrl_ = "";
    coverUrlIsSet_ = false;
    thumbnail_ = "";
    thumbnailIsSet_ = false;
    roomState_ = "";
    roomStateIsSet_ = false;
    confirmState_ = "";
    confirmStateIsSet_ = false;
    scriptVersion_ = "";
    scriptVersionIsSet_ = false;
    errorInfoIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowSmartLiveRoomResponse::~ShowSmartLiveRoomResponse() = default;

void ShowSmartLiveRoomResponse::validate()
{
}

web::json::value ShowSmartLiveRoomResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roomNameIsSet_) {
        val[utility::conversions::to_string_t("room_name")] = ModelBase::toJson(roomName_);
    }
    if(roomDescriptionIsSet_) {
        val[utility::conversions::to_string_t("room_description")] = ModelBase::toJson(roomDescription_);
    }
    if(roomTypeIsSet_) {
        val[utility::conversions::to_string_t("room_type")] = ModelBase::toJson(roomType_);
    }
    if(sceneScriptsIsSet_) {
        val[utility::conversions::to_string_t("scene_scripts")] = ModelBase::toJson(sceneScripts_);
    }
    if(interactionConfigIsSet_) {
        val[utility::conversions::to_string_t("interaction_config")] = ModelBase::toJson(interactionConfig_);
    }
    if(interactionRulesIsSet_) {
        val[utility::conversions::to_string_t("interaction_rules")] = ModelBase::toJson(interactionRules_);
    }
    if(playPolicyIsSet_) {
        val[utility::conversions::to_string_t("play_policy")] = ModelBase::toJson(playPolicy_);
    }
    if(videoConfigIsSet_) {
        val[utility::conversions::to_string_t("video_config")] = ModelBase::toJson(videoConfig_);
    }
    if(outputUrlsIsSet_) {
        val[utility::conversions::to_string_t("output_urls")] = ModelBase::toJson(outputUrls_);
    }
    if(streamKeysIsSet_) {
        val[utility::conversions::to_string_t("stream_keys")] = ModelBase::toJson(streamKeys_);
    }
    if(backupModelAssetIdsIsSet_) {
        val[utility::conversions::to_string_t("backup_model_asset_ids")] = ModelBase::toJson(backupModelAssetIds_);
    }
    if(liveEventCallbackConfigIsSet_) {
        val[utility::conversions::to_string_t("live_event_callback_config")] = ModelBase::toJson(liveEventCallbackConfig_);
    }
    if(rtcCallbackConfigIsSet_) {
        val[utility::conversions::to_string_t("rtc_callback_config")] = ModelBase::toJson(rtcCallbackConfig_);
    }
    if(reviewConfigIsSet_) {
        val[utility::conversions::to_string_t("review_config")] = ModelBase::toJson(reviewConfig_);
    }
    if(sharedConfigIsSet_) {
        val[utility::conversions::to_string_t("shared_config")] = ModelBase::toJson(sharedConfig_);
    }
    if(viewModeIsSet_) {
        val[utility::conversions::to_string_t("view_mode")] = ModelBase::toJson(viewMode_);
    }
    if(coStreamerConfigIsSet_) {
        val[utility::conversions::to_string_t("co_streamer_config")] = ModelBase::toJson(coStreamerConfig_);
    }
    if(privDataIsSet_) {
        val[utility::conversions::to_string_t("priv_data")] = ModelBase::toJson(privData_);
    }
    if(roomIdIsSet_) {
        val[utility::conversions::to_string_t("room_id")] = ModelBase::toJson(roomId_);
    }
    if(relationLivePlatformInfoIsSet_) {
        val[utility::conversions::to_string_t("relation_live_platform_info")] = ModelBase::toJson(relationLivePlatformInfo_);
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
    if(thumbnailIsSet_) {
        val[utility::conversions::to_string_t("thumbnail")] = ModelBase::toJson(thumbnail_);
    }
    if(roomStateIsSet_) {
        val[utility::conversions::to_string_t("room_state")] = ModelBase::toJson(roomState_);
    }
    if(confirmStateIsSet_) {
        val[utility::conversions::to_string_t("confirm_state")] = ModelBase::toJson(confirmState_);
    }
    if(scriptVersionIsSet_) {
        val[utility::conversions::to_string_t("script_version")] = ModelBase::toJson(scriptVersion_);
    }
    if(errorInfoIsSet_) {
        val[utility::conversions::to_string_t("error_info")] = ModelBase::toJson(errorInfo_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowSmartLiveRoomResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("room_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scene_scripts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene_scripts"));
        if(!fieldValue.is_null())
        {
            std::vector<LiveVideoScriptInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSceneScripts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interaction_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interaction_config"));
        if(!fieldValue.is_null())
        {
            LiveRoomInteractionConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInteractionConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interaction_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interaction_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<LiveRoomInteractionRuleInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInteractionRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("play_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("play_policy"));
        if(!fieldValue.is_null())
        {
            PlayPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlayPolicy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("output_urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_urls"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputUrls(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_keys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_keys"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamKeys(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_model_asset_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_model_asset_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupModelAssetIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("live_event_callback_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("live_event_callback_config"));
        if(!fieldValue.is_null())
        {
            LiveRoomEventCallBackConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveEventCallbackConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rtc_callback_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rtc_callback_config"));
        if(!fieldValue.is_null())
        {
            RTCLiveEventCallBackConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRtcCallbackConfig(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("shared_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shared_config"));
        if(!fieldValue.is_null())
        {
            SharedConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSharedConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("view_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("view_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setViewMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("co_streamer_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("co_streamer_config"));
        if(!fieldValue.is_null())
        {
            CoStreamerConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoStreamerConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priv_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priv_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivData(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("relation_live_platform_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relation_live_platform_info"));
        if(!fieldValue.is_null())
        {
            PlatformLiveDetailInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelationLivePlatformInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("thumbnail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnail"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("room_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confirm_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confirm_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfirmState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("script_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptVersion(refVal);
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


std::string ShowSmartLiveRoomResponse::getRoomName() const
{
    return roomName_;
}

void ShowSmartLiveRoomResponse::setRoomName(const std::string& value)
{
    roomName_ = value;
    roomNameIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::roomNameIsSet() const
{
    return roomNameIsSet_;
}

void ShowSmartLiveRoomResponse::unsetroomName()
{
    roomNameIsSet_ = false;
}

std::string ShowSmartLiveRoomResponse::getRoomDescription() const
{
    return roomDescription_;
}

void ShowSmartLiveRoomResponse::setRoomDescription(const std::string& value)
{
    roomDescription_ = value;
    roomDescriptionIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::roomDescriptionIsSet() const
{
    return roomDescriptionIsSet_;
}

void ShowSmartLiveRoomResponse::unsetroomDescription()
{
    roomDescriptionIsSet_ = false;
}

std::string ShowSmartLiveRoomResponse::getRoomType() const
{
    return roomType_;
}

void ShowSmartLiveRoomResponse::setRoomType(const std::string& value)
{
    roomType_ = value;
    roomTypeIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::roomTypeIsSet() const
{
    return roomTypeIsSet_;
}

void ShowSmartLiveRoomResponse::unsetroomType()
{
    roomTypeIsSet_ = false;
}

std::vector<LiveVideoScriptInfo>& ShowSmartLiveRoomResponse::getSceneScripts()
{
    return sceneScripts_;
}

void ShowSmartLiveRoomResponse::setSceneScripts(const std::vector<LiveVideoScriptInfo>& value)
{
    sceneScripts_ = value;
    sceneScriptsIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::sceneScriptsIsSet() const
{
    return sceneScriptsIsSet_;
}

void ShowSmartLiveRoomResponse::unsetsceneScripts()
{
    sceneScriptsIsSet_ = false;
}

LiveRoomInteractionConfig ShowSmartLiveRoomResponse::getInteractionConfig() const
{
    return interactionConfig_;
}

void ShowSmartLiveRoomResponse::setInteractionConfig(const LiveRoomInteractionConfig& value)
{
    interactionConfig_ = value;
    interactionConfigIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::interactionConfigIsSet() const
{
    return interactionConfigIsSet_;
}

void ShowSmartLiveRoomResponse::unsetinteractionConfig()
{
    interactionConfigIsSet_ = false;
}

std::vector<LiveRoomInteractionRuleInfo>& ShowSmartLiveRoomResponse::getInteractionRules()
{
    return interactionRules_;
}

void ShowSmartLiveRoomResponse::setInteractionRules(const std::vector<LiveRoomInteractionRuleInfo>& value)
{
    interactionRules_ = value;
    interactionRulesIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::interactionRulesIsSet() const
{
    return interactionRulesIsSet_;
}

void ShowSmartLiveRoomResponse::unsetinteractionRules()
{
    interactionRulesIsSet_ = false;
}

PlayPolicy ShowSmartLiveRoomResponse::getPlayPolicy() const
{
    return playPolicy_;
}

void ShowSmartLiveRoomResponse::setPlayPolicy(const PlayPolicy& value)
{
    playPolicy_ = value;
    playPolicyIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::playPolicyIsSet() const
{
    return playPolicyIsSet_;
}

void ShowSmartLiveRoomResponse::unsetplayPolicy()
{
    playPolicyIsSet_ = false;
}

VideoConfig ShowSmartLiveRoomResponse::getVideoConfig() const
{
    return videoConfig_;
}

void ShowSmartLiveRoomResponse::setVideoConfig(const VideoConfig& value)
{
    videoConfig_ = value;
    videoConfigIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::videoConfigIsSet() const
{
    return videoConfigIsSet_;
}

void ShowSmartLiveRoomResponse::unsetvideoConfig()
{
    videoConfigIsSet_ = false;
}

std::vector<std::string>& ShowSmartLiveRoomResponse::getOutputUrls()
{
    return outputUrls_;
}

void ShowSmartLiveRoomResponse::setOutputUrls(const std::vector<std::string>& value)
{
    outputUrls_ = value;
    outputUrlsIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::outputUrlsIsSet() const
{
    return outputUrlsIsSet_;
}

void ShowSmartLiveRoomResponse::unsetoutputUrls()
{
    outputUrlsIsSet_ = false;
}

std::vector<std::string>& ShowSmartLiveRoomResponse::getStreamKeys()
{
    return streamKeys_;
}

void ShowSmartLiveRoomResponse::setStreamKeys(const std::vector<std::string>& value)
{
    streamKeys_ = value;
    streamKeysIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::streamKeysIsSet() const
{
    return streamKeysIsSet_;
}

void ShowSmartLiveRoomResponse::unsetstreamKeys()
{
    streamKeysIsSet_ = false;
}

std::vector<std::string>& ShowSmartLiveRoomResponse::getBackupModelAssetIds()
{
    return backupModelAssetIds_;
}

void ShowSmartLiveRoomResponse::setBackupModelAssetIds(const std::vector<std::string>& value)
{
    backupModelAssetIds_ = value;
    backupModelAssetIdsIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::backupModelAssetIdsIsSet() const
{
    return backupModelAssetIdsIsSet_;
}

void ShowSmartLiveRoomResponse::unsetbackupModelAssetIds()
{
    backupModelAssetIdsIsSet_ = false;
}

LiveRoomEventCallBackConfig ShowSmartLiveRoomResponse::getLiveEventCallbackConfig() const
{
    return liveEventCallbackConfig_;
}

void ShowSmartLiveRoomResponse::setLiveEventCallbackConfig(const LiveRoomEventCallBackConfig& value)
{
    liveEventCallbackConfig_ = value;
    liveEventCallbackConfigIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::liveEventCallbackConfigIsSet() const
{
    return liveEventCallbackConfigIsSet_;
}

void ShowSmartLiveRoomResponse::unsetliveEventCallbackConfig()
{
    liveEventCallbackConfigIsSet_ = false;
}

RTCLiveEventCallBackConfig ShowSmartLiveRoomResponse::getRtcCallbackConfig() const
{
    return rtcCallbackConfig_;
}

void ShowSmartLiveRoomResponse::setRtcCallbackConfig(const RTCLiveEventCallBackConfig& value)
{
    rtcCallbackConfig_ = value;
    rtcCallbackConfigIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::rtcCallbackConfigIsSet() const
{
    return rtcCallbackConfigIsSet_;
}

void ShowSmartLiveRoomResponse::unsetrtcCallbackConfig()
{
    rtcCallbackConfigIsSet_ = false;
}

ReviewConfig ShowSmartLiveRoomResponse::getReviewConfig() const
{
    return reviewConfig_;
}

void ShowSmartLiveRoomResponse::setReviewConfig(const ReviewConfig& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void ShowSmartLiveRoomResponse::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

SharedConfig ShowSmartLiveRoomResponse::getSharedConfig() const
{
    return sharedConfig_;
}

void ShowSmartLiveRoomResponse::setSharedConfig(const SharedConfig& value)
{
    sharedConfig_ = value;
    sharedConfigIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::sharedConfigIsSet() const
{
    return sharedConfigIsSet_;
}

void ShowSmartLiveRoomResponse::unsetsharedConfig()
{
    sharedConfigIsSet_ = false;
}

std::string ShowSmartLiveRoomResponse::getViewMode() const
{
    return viewMode_;
}

void ShowSmartLiveRoomResponse::setViewMode(const std::string& value)
{
    viewMode_ = value;
    viewModeIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::viewModeIsSet() const
{
    return viewModeIsSet_;
}

void ShowSmartLiveRoomResponse::unsetviewMode()
{
    viewModeIsSet_ = false;
}

CoStreamerConfig ShowSmartLiveRoomResponse::getCoStreamerConfig() const
{
    return coStreamerConfig_;
}

void ShowSmartLiveRoomResponse::setCoStreamerConfig(const CoStreamerConfig& value)
{
    coStreamerConfig_ = value;
    coStreamerConfigIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::coStreamerConfigIsSet() const
{
    return coStreamerConfigIsSet_;
}

void ShowSmartLiveRoomResponse::unsetcoStreamerConfig()
{
    coStreamerConfigIsSet_ = false;
}

std::string ShowSmartLiveRoomResponse::getPrivData() const
{
    return privData_;
}

void ShowSmartLiveRoomResponse::setPrivData(const std::string& value)
{
    privData_ = value;
    privDataIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::privDataIsSet() const
{
    return privDataIsSet_;
}

void ShowSmartLiveRoomResponse::unsetprivData()
{
    privDataIsSet_ = false;
}

std::string ShowSmartLiveRoomResponse::getRoomId() const
{
    return roomId_;
}

void ShowSmartLiveRoomResponse::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void ShowSmartLiveRoomResponse::unsetroomId()
{
    roomIdIsSet_ = false;
}

PlatformLiveDetailInfo ShowSmartLiveRoomResponse::getRelationLivePlatformInfo() const
{
    return relationLivePlatformInfo_;
}

void ShowSmartLiveRoomResponse::setRelationLivePlatformInfo(const PlatformLiveDetailInfo& value)
{
    relationLivePlatformInfo_ = value;
    relationLivePlatformInfoIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::relationLivePlatformInfoIsSet() const
{
    return relationLivePlatformInfoIsSet_;
}

void ShowSmartLiveRoomResponse::unsetrelationLivePlatformInfo()
{
    relationLivePlatformInfoIsSet_ = false;
}

std::string ShowSmartLiveRoomResponse::getCreateTime() const
{
    return createTime_;
}

void ShowSmartLiveRoomResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowSmartLiveRoomResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowSmartLiveRoomResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowSmartLiveRoomResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowSmartLiveRoomResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowSmartLiveRoomResponse::getCoverUrl() const
{
    return coverUrl_;
}

void ShowSmartLiveRoomResponse::setCoverUrl(const std::string& value)
{
    coverUrl_ = value;
    coverUrlIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::coverUrlIsSet() const
{
    return coverUrlIsSet_;
}

void ShowSmartLiveRoomResponse::unsetcoverUrl()
{
    coverUrlIsSet_ = false;
}

std::string ShowSmartLiveRoomResponse::getThumbnail() const
{
    return thumbnail_;
}

void ShowSmartLiveRoomResponse::setThumbnail(const std::string& value)
{
    thumbnail_ = value;
    thumbnailIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::thumbnailIsSet() const
{
    return thumbnailIsSet_;
}

void ShowSmartLiveRoomResponse::unsetthumbnail()
{
    thumbnailIsSet_ = false;
}

std::string ShowSmartLiveRoomResponse::getRoomState() const
{
    return roomState_;
}

void ShowSmartLiveRoomResponse::setRoomState(const std::string& value)
{
    roomState_ = value;
    roomStateIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::roomStateIsSet() const
{
    return roomStateIsSet_;
}

void ShowSmartLiveRoomResponse::unsetroomState()
{
    roomStateIsSet_ = false;
}

std::string ShowSmartLiveRoomResponse::getConfirmState() const
{
    return confirmState_;
}

void ShowSmartLiveRoomResponse::setConfirmState(const std::string& value)
{
    confirmState_ = value;
    confirmStateIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::confirmStateIsSet() const
{
    return confirmStateIsSet_;
}

void ShowSmartLiveRoomResponse::unsetconfirmState()
{
    confirmStateIsSet_ = false;
}

std::string ShowSmartLiveRoomResponse::getScriptVersion() const
{
    return scriptVersion_;
}

void ShowSmartLiveRoomResponse::setScriptVersion(const std::string& value)
{
    scriptVersion_ = value;
    scriptVersionIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::scriptVersionIsSet() const
{
    return scriptVersionIsSet_;
}

void ShowSmartLiveRoomResponse::unsetscriptVersion()
{
    scriptVersionIsSet_ = false;
}

ErrorResponse ShowSmartLiveRoomResponse::getErrorInfo() const
{
    return errorInfo_;
}

void ShowSmartLiveRoomResponse::setErrorInfo(const ErrorResponse& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void ShowSmartLiveRoomResponse::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

std::string ShowSmartLiveRoomResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowSmartLiveRoomResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowSmartLiveRoomResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowSmartLiveRoomResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


