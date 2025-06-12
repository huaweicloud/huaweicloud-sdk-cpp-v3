

#include "huaweicloud/metastudio/v1/model/UpdateSmartLiveRoomResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateSmartLiveRoomResponse::UpdateSmartLiveRoomResponse()
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

UpdateSmartLiveRoomResponse::~UpdateSmartLiveRoomResponse() = default;

void UpdateSmartLiveRoomResponse::validate()
{
}

web::json::value UpdateSmartLiveRoomResponse::toJson() const
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
bool UpdateSmartLiveRoomResponse::fromJson(const web::json::value& val)
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


std::string UpdateSmartLiveRoomResponse::getRoomName() const
{
    return roomName_;
}

void UpdateSmartLiveRoomResponse::setRoomName(const std::string& value)
{
    roomName_ = value;
    roomNameIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::roomNameIsSet() const
{
    return roomNameIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetroomName()
{
    roomNameIsSet_ = false;
}

std::string UpdateSmartLiveRoomResponse::getRoomDescription() const
{
    return roomDescription_;
}

void UpdateSmartLiveRoomResponse::setRoomDescription(const std::string& value)
{
    roomDescription_ = value;
    roomDescriptionIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::roomDescriptionIsSet() const
{
    return roomDescriptionIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetroomDescription()
{
    roomDescriptionIsSet_ = false;
}

std::string UpdateSmartLiveRoomResponse::getRoomType() const
{
    return roomType_;
}

void UpdateSmartLiveRoomResponse::setRoomType(const std::string& value)
{
    roomType_ = value;
    roomTypeIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::roomTypeIsSet() const
{
    return roomTypeIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetroomType()
{
    roomTypeIsSet_ = false;
}

std::vector<LiveVideoScriptInfo>& UpdateSmartLiveRoomResponse::getSceneScripts()
{
    return sceneScripts_;
}

void UpdateSmartLiveRoomResponse::setSceneScripts(const std::vector<LiveVideoScriptInfo>& value)
{
    sceneScripts_ = value;
    sceneScriptsIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::sceneScriptsIsSet() const
{
    return sceneScriptsIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetsceneScripts()
{
    sceneScriptsIsSet_ = false;
}

LiveRoomInteractionConfig UpdateSmartLiveRoomResponse::getInteractionConfig() const
{
    return interactionConfig_;
}

void UpdateSmartLiveRoomResponse::setInteractionConfig(const LiveRoomInteractionConfig& value)
{
    interactionConfig_ = value;
    interactionConfigIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::interactionConfigIsSet() const
{
    return interactionConfigIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetinteractionConfig()
{
    interactionConfigIsSet_ = false;
}

std::vector<LiveRoomInteractionRuleInfo>& UpdateSmartLiveRoomResponse::getInteractionRules()
{
    return interactionRules_;
}

void UpdateSmartLiveRoomResponse::setInteractionRules(const std::vector<LiveRoomInteractionRuleInfo>& value)
{
    interactionRules_ = value;
    interactionRulesIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::interactionRulesIsSet() const
{
    return interactionRulesIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetinteractionRules()
{
    interactionRulesIsSet_ = false;
}

PlayPolicy UpdateSmartLiveRoomResponse::getPlayPolicy() const
{
    return playPolicy_;
}

void UpdateSmartLiveRoomResponse::setPlayPolicy(const PlayPolicy& value)
{
    playPolicy_ = value;
    playPolicyIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::playPolicyIsSet() const
{
    return playPolicyIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetplayPolicy()
{
    playPolicyIsSet_ = false;
}

VideoConfig UpdateSmartLiveRoomResponse::getVideoConfig() const
{
    return videoConfig_;
}

void UpdateSmartLiveRoomResponse::setVideoConfig(const VideoConfig& value)
{
    videoConfig_ = value;
    videoConfigIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::videoConfigIsSet() const
{
    return videoConfigIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetvideoConfig()
{
    videoConfigIsSet_ = false;
}

std::vector<std::string>& UpdateSmartLiveRoomResponse::getOutputUrls()
{
    return outputUrls_;
}

void UpdateSmartLiveRoomResponse::setOutputUrls(const std::vector<std::string>& value)
{
    outputUrls_ = value;
    outputUrlsIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::outputUrlsIsSet() const
{
    return outputUrlsIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetoutputUrls()
{
    outputUrlsIsSet_ = false;
}

std::vector<std::string>& UpdateSmartLiveRoomResponse::getStreamKeys()
{
    return streamKeys_;
}

void UpdateSmartLiveRoomResponse::setStreamKeys(const std::vector<std::string>& value)
{
    streamKeys_ = value;
    streamKeysIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::streamKeysIsSet() const
{
    return streamKeysIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetstreamKeys()
{
    streamKeysIsSet_ = false;
}

std::vector<std::string>& UpdateSmartLiveRoomResponse::getBackupModelAssetIds()
{
    return backupModelAssetIds_;
}

void UpdateSmartLiveRoomResponse::setBackupModelAssetIds(const std::vector<std::string>& value)
{
    backupModelAssetIds_ = value;
    backupModelAssetIdsIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::backupModelAssetIdsIsSet() const
{
    return backupModelAssetIdsIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetbackupModelAssetIds()
{
    backupModelAssetIdsIsSet_ = false;
}

LiveRoomEventCallBackConfig UpdateSmartLiveRoomResponse::getLiveEventCallbackConfig() const
{
    return liveEventCallbackConfig_;
}

void UpdateSmartLiveRoomResponse::setLiveEventCallbackConfig(const LiveRoomEventCallBackConfig& value)
{
    liveEventCallbackConfig_ = value;
    liveEventCallbackConfigIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::liveEventCallbackConfigIsSet() const
{
    return liveEventCallbackConfigIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetliveEventCallbackConfig()
{
    liveEventCallbackConfigIsSet_ = false;
}

RTCLiveEventCallBackConfig UpdateSmartLiveRoomResponse::getRtcCallbackConfig() const
{
    return rtcCallbackConfig_;
}

void UpdateSmartLiveRoomResponse::setRtcCallbackConfig(const RTCLiveEventCallBackConfig& value)
{
    rtcCallbackConfig_ = value;
    rtcCallbackConfigIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::rtcCallbackConfigIsSet() const
{
    return rtcCallbackConfigIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetrtcCallbackConfig()
{
    rtcCallbackConfigIsSet_ = false;
}

ReviewConfig UpdateSmartLiveRoomResponse::getReviewConfig() const
{
    return reviewConfig_;
}

void UpdateSmartLiveRoomResponse::setReviewConfig(const ReviewConfig& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

SharedConfig UpdateSmartLiveRoomResponse::getSharedConfig() const
{
    return sharedConfig_;
}

void UpdateSmartLiveRoomResponse::setSharedConfig(const SharedConfig& value)
{
    sharedConfig_ = value;
    sharedConfigIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::sharedConfigIsSet() const
{
    return sharedConfigIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetsharedConfig()
{
    sharedConfigIsSet_ = false;
}

std::string UpdateSmartLiveRoomResponse::getViewMode() const
{
    return viewMode_;
}

void UpdateSmartLiveRoomResponse::setViewMode(const std::string& value)
{
    viewMode_ = value;
    viewModeIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::viewModeIsSet() const
{
    return viewModeIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetviewMode()
{
    viewModeIsSet_ = false;
}

CoStreamerConfig UpdateSmartLiveRoomResponse::getCoStreamerConfig() const
{
    return coStreamerConfig_;
}

void UpdateSmartLiveRoomResponse::setCoStreamerConfig(const CoStreamerConfig& value)
{
    coStreamerConfig_ = value;
    coStreamerConfigIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::coStreamerConfigIsSet() const
{
    return coStreamerConfigIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetcoStreamerConfig()
{
    coStreamerConfigIsSet_ = false;
}

std::string UpdateSmartLiveRoomResponse::getPrivData() const
{
    return privData_;
}

void UpdateSmartLiveRoomResponse::setPrivData(const std::string& value)
{
    privData_ = value;
    privDataIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::privDataIsSet() const
{
    return privDataIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetprivData()
{
    privDataIsSet_ = false;
}

std::string UpdateSmartLiveRoomResponse::getRoomId() const
{
    return roomId_;
}

void UpdateSmartLiveRoomResponse::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetroomId()
{
    roomIdIsSet_ = false;
}

PlatformLiveDetailInfo UpdateSmartLiveRoomResponse::getRelationLivePlatformInfo() const
{
    return relationLivePlatformInfo_;
}

void UpdateSmartLiveRoomResponse::setRelationLivePlatformInfo(const PlatformLiveDetailInfo& value)
{
    relationLivePlatformInfo_ = value;
    relationLivePlatformInfoIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::relationLivePlatformInfoIsSet() const
{
    return relationLivePlatformInfoIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetrelationLivePlatformInfo()
{
    relationLivePlatformInfoIsSet_ = false;
}

std::string UpdateSmartLiveRoomResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateSmartLiveRoomResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string UpdateSmartLiveRoomResponse::getUpdateTime() const
{
    return updateTime_;
}

void UpdateSmartLiveRoomResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string UpdateSmartLiveRoomResponse::getCoverUrl() const
{
    return coverUrl_;
}

void UpdateSmartLiveRoomResponse::setCoverUrl(const std::string& value)
{
    coverUrl_ = value;
    coverUrlIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::coverUrlIsSet() const
{
    return coverUrlIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetcoverUrl()
{
    coverUrlIsSet_ = false;
}

std::string UpdateSmartLiveRoomResponse::getThumbnail() const
{
    return thumbnail_;
}

void UpdateSmartLiveRoomResponse::setThumbnail(const std::string& value)
{
    thumbnail_ = value;
    thumbnailIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::thumbnailIsSet() const
{
    return thumbnailIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetthumbnail()
{
    thumbnailIsSet_ = false;
}

std::string UpdateSmartLiveRoomResponse::getRoomState() const
{
    return roomState_;
}

void UpdateSmartLiveRoomResponse::setRoomState(const std::string& value)
{
    roomState_ = value;
    roomStateIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::roomStateIsSet() const
{
    return roomStateIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetroomState()
{
    roomStateIsSet_ = false;
}

std::string UpdateSmartLiveRoomResponse::getConfirmState() const
{
    return confirmState_;
}

void UpdateSmartLiveRoomResponse::setConfirmState(const std::string& value)
{
    confirmState_ = value;
    confirmStateIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::confirmStateIsSet() const
{
    return confirmStateIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetconfirmState()
{
    confirmStateIsSet_ = false;
}

std::string UpdateSmartLiveRoomResponse::getScriptVersion() const
{
    return scriptVersion_;
}

void UpdateSmartLiveRoomResponse::setScriptVersion(const std::string& value)
{
    scriptVersion_ = value;
    scriptVersionIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::scriptVersionIsSet() const
{
    return scriptVersionIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetscriptVersion()
{
    scriptVersionIsSet_ = false;
}

ErrorResponse UpdateSmartLiveRoomResponse::getErrorInfo() const
{
    return errorInfo_;
}

void UpdateSmartLiveRoomResponse::setErrorInfo(const ErrorResponse& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void UpdateSmartLiveRoomResponse::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

std::string UpdateSmartLiveRoomResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateSmartLiveRoomResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateSmartLiveRoomResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateSmartLiveRoomResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


