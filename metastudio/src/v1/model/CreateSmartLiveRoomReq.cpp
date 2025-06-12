

#include "huaweicloud/metastudio/v1/model/CreateSmartLiveRoomReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateSmartLiveRoomReq::CreateSmartLiveRoomReq()
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
    relationLivePlatformInfoIsSet_ = false;
}

CreateSmartLiveRoomReq::~CreateSmartLiveRoomReq() = default;

void CreateSmartLiveRoomReq::validate()
{
}

web::json::value CreateSmartLiveRoomReq::toJson() const
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
    if(relationLivePlatformInfoIsSet_) {
        val[utility::conversions::to_string_t("relation_live_platform_info")] = ModelBase::toJson(relationLivePlatformInfo_);
    }

    return val;
}
bool CreateSmartLiveRoomReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("relation_live_platform_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relation_live_platform_info"));
        if(!fieldValue.is_null())
        {
            PlatformLiveInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelationLivePlatformInfo(refVal);
        }
    }
    return ok;
}


std::string CreateSmartLiveRoomReq::getRoomName() const
{
    return roomName_;
}

void CreateSmartLiveRoomReq::setRoomName(const std::string& value)
{
    roomName_ = value;
    roomNameIsSet_ = true;
}

bool CreateSmartLiveRoomReq::roomNameIsSet() const
{
    return roomNameIsSet_;
}

void CreateSmartLiveRoomReq::unsetroomName()
{
    roomNameIsSet_ = false;
}

std::string CreateSmartLiveRoomReq::getRoomDescription() const
{
    return roomDescription_;
}

void CreateSmartLiveRoomReq::setRoomDescription(const std::string& value)
{
    roomDescription_ = value;
    roomDescriptionIsSet_ = true;
}

bool CreateSmartLiveRoomReq::roomDescriptionIsSet() const
{
    return roomDescriptionIsSet_;
}

void CreateSmartLiveRoomReq::unsetroomDescription()
{
    roomDescriptionIsSet_ = false;
}

std::string CreateSmartLiveRoomReq::getRoomType() const
{
    return roomType_;
}

void CreateSmartLiveRoomReq::setRoomType(const std::string& value)
{
    roomType_ = value;
    roomTypeIsSet_ = true;
}

bool CreateSmartLiveRoomReq::roomTypeIsSet() const
{
    return roomTypeIsSet_;
}

void CreateSmartLiveRoomReq::unsetroomType()
{
    roomTypeIsSet_ = false;
}

std::vector<LiveVideoScriptInfo>& CreateSmartLiveRoomReq::getSceneScripts()
{
    return sceneScripts_;
}

void CreateSmartLiveRoomReq::setSceneScripts(const std::vector<LiveVideoScriptInfo>& value)
{
    sceneScripts_ = value;
    sceneScriptsIsSet_ = true;
}

bool CreateSmartLiveRoomReq::sceneScriptsIsSet() const
{
    return sceneScriptsIsSet_;
}

void CreateSmartLiveRoomReq::unsetsceneScripts()
{
    sceneScriptsIsSet_ = false;
}

LiveRoomInteractionConfig CreateSmartLiveRoomReq::getInteractionConfig() const
{
    return interactionConfig_;
}

void CreateSmartLiveRoomReq::setInteractionConfig(const LiveRoomInteractionConfig& value)
{
    interactionConfig_ = value;
    interactionConfigIsSet_ = true;
}

bool CreateSmartLiveRoomReq::interactionConfigIsSet() const
{
    return interactionConfigIsSet_;
}

void CreateSmartLiveRoomReq::unsetinteractionConfig()
{
    interactionConfigIsSet_ = false;
}

std::vector<LiveRoomInteractionRuleInfo>& CreateSmartLiveRoomReq::getInteractionRules()
{
    return interactionRules_;
}

void CreateSmartLiveRoomReq::setInteractionRules(const std::vector<LiveRoomInteractionRuleInfo>& value)
{
    interactionRules_ = value;
    interactionRulesIsSet_ = true;
}

bool CreateSmartLiveRoomReq::interactionRulesIsSet() const
{
    return interactionRulesIsSet_;
}

void CreateSmartLiveRoomReq::unsetinteractionRules()
{
    interactionRulesIsSet_ = false;
}

PlayPolicy CreateSmartLiveRoomReq::getPlayPolicy() const
{
    return playPolicy_;
}

void CreateSmartLiveRoomReq::setPlayPolicy(const PlayPolicy& value)
{
    playPolicy_ = value;
    playPolicyIsSet_ = true;
}

bool CreateSmartLiveRoomReq::playPolicyIsSet() const
{
    return playPolicyIsSet_;
}

void CreateSmartLiveRoomReq::unsetplayPolicy()
{
    playPolicyIsSet_ = false;
}

VideoConfig CreateSmartLiveRoomReq::getVideoConfig() const
{
    return videoConfig_;
}

void CreateSmartLiveRoomReq::setVideoConfig(const VideoConfig& value)
{
    videoConfig_ = value;
    videoConfigIsSet_ = true;
}

bool CreateSmartLiveRoomReq::videoConfigIsSet() const
{
    return videoConfigIsSet_;
}

void CreateSmartLiveRoomReq::unsetvideoConfig()
{
    videoConfigIsSet_ = false;
}

std::vector<std::string>& CreateSmartLiveRoomReq::getOutputUrls()
{
    return outputUrls_;
}

void CreateSmartLiveRoomReq::setOutputUrls(const std::vector<std::string>& value)
{
    outputUrls_ = value;
    outputUrlsIsSet_ = true;
}

bool CreateSmartLiveRoomReq::outputUrlsIsSet() const
{
    return outputUrlsIsSet_;
}

void CreateSmartLiveRoomReq::unsetoutputUrls()
{
    outputUrlsIsSet_ = false;
}

std::vector<std::string>& CreateSmartLiveRoomReq::getStreamKeys()
{
    return streamKeys_;
}

void CreateSmartLiveRoomReq::setStreamKeys(const std::vector<std::string>& value)
{
    streamKeys_ = value;
    streamKeysIsSet_ = true;
}

bool CreateSmartLiveRoomReq::streamKeysIsSet() const
{
    return streamKeysIsSet_;
}

void CreateSmartLiveRoomReq::unsetstreamKeys()
{
    streamKeysIsSet_ = false;
}

std::vector<std::string>& CreateSmartLiveRoomReq::getBackupModelAssetIds()
{
    return backupModelAssetIds_;
}

void CreateSmartLiveRoomReq::setBackupModelAssetIds(const std::vector<std::string>& value)
{
    backupModelAssetIds_ = value;
    backupModelAssetIdsIsSet_ = true;
}

bool CreateSmartLiveRoomReq::backupModelAssetIdsIsSet() const
{
    return backupModelAssetIdsIsSet_;
}

void CreateSmartLiveRoomReq::unsetbackupModelAssetIds()
{
    backupModelAssetIdsIsSet_ = false;
}

LiveRoomEventCallBackConfig CreateSmartLiveRoomReq::getLiveEventCallbackConfig() const
{
    return liveEventCallbackConfig_;
}

void CreateSmartLiveRoomReq::setLiveEventCallbackConfig(const LiveRoomEventCallBackConfig& value)
{
    liveEventCallbackConfig_ = value;
    liveEventCallbackConfigIsSet_ = true;
}

bool CreateSmartLiveRoomReq::liveEventCallbackConfigIsSet() const
{
    return liveEventCallbackConfigIsSet_;
}

void CreateSmartLiveRoomReq::unsetliveEventCallbackConfig()
{
    liveEventCallbackConfigIsSet_ = false;
}

RTCLiveEventCallBackConfig CreateSmartLiveRoomReq::getRtcCallbackConfig() const
{
    return rtcCallbackConfig_;
}

void CreateSmartLiveRoomReq::setRtcCallbackConfig(const RTCLiveEventCallBackConfig& value)
{
    rtcCallbackConfig_ = value;
    rtcCallbackConfigIsSet_ = true;
}

bool CreateSmartLiveRoomReq::rtcCallbackConfigIsSet() const
{
    return rtcCallbackConfigIsSet_;
}

void CreateSmartLiveRoomReq::unsetrtcCallbackConfig()
{
    rtcCallbackConfigIsSet_ = false;
}

ReviewConfig CreateSmartLiveRoomReq::getReviewConfig() const
{
    return reviewConfig_;
}

void CreateSmartLiveRoomReq::setReviewConfig(const ReviewConfig& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool CreateSmartLiveRoomReq::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void CreateSmartLiveRoomReq::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

SharedConfig CreateSmartLiveRoomReq::getSharedConfig() const
{
    return sharedConfig_;
}

void CreateSmartLiveRoomReq::setSharedConfig(const SharedConfig& value)
{
    sharedConfig_ = value;
    sharedConfigIsSet_ = true;
}

bool CreateSmartLiveRoomReq::sharedConfigIsSet() const
{
    return sharedConfigIsSet_;
}

void CreateSmartLiveRoomReq::unsetsharedConfig()
{
    sharedConfigIsSet_ = false;
}

std::string CreateSmartLiveRoomReq::getViewMode() const
{
    return viewMode_;
}

void CreateSmartLiveRoomReq::setViewMode(const std::string& value)
{
    viewMode_ = value;
    viewModeIsSet_ = true;
}

bool CreateSmartLiveRoomReq::viewModeIsSet() const
{
    return viewModeIsSet_;
}

void CreateSmartLiveRoomReq::unsetviewMode()
{
    viewModeIsSet_ = false;
}

CoStreamerConfig CreateSmartLiveRoomReq::getCoStreamerConfig() const
{
    return coStreamerConfig_;
}

void CreateSmartLiveRoomReq::setCoStreamerConfig(const CoStreamerConfig& value)
{
    coStreamerConfig_ = value;
    coStreamerConfigIsSet_ = true;
}

bool CreateSmartLiveRoomReq::coStreamerConfigIsSet() const
{
    return coStreamerConfigIsSet_;
}

void CreateSmartLiveRoomReq::unsetcoStreamerConfig()
{
    coStreamerConfigIsSet_ = false;
}

std::string CreateSmartLiveRoomReq::getPrivData() const
{
    return privData_;
}

void CreateSmartLiveRoomReq::setPrivData(const std::string& value)
{
    privData_ = value;
    privDataIsSet_ = true;
}

bool CreateSmartLiveRoomReq::privDataIsSet() const
{
    return privDataIsSet_;
}

void CreateSmartLiveRoomReq::unsetprivData()
{
    privDataIsSet_ = false;
}

PlatformLiveInfo CreateSmartLiveRoomReq::getRelationLivePlatformInfo() const
{
    return relationLivePlatformInfo_;
}

void CreateSmartLiveRoomReq::setRelationLivePlatformInfo(const PlatformLiveInfo& value)
{
    relationLivePlatformInfo_ = value;
    relationLivePlatformInfoIsSet_ = true;
}

bool CreateSmartLiveRoomReq::relationLivePlatformInfoIsSet() const
{
    return relationLivePlatformInfoIsSet_;
}

void CreateSmartLiveRoomReq::unsetrelationLivePlatformInfo()
{
    relationLivePlatformInfoIsSet_ = false;
}

}
}
}
}
}


