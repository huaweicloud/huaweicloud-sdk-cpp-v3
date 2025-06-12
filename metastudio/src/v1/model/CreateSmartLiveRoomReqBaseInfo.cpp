

#include "huaweicloud/metastudio/v1/model/CreateSmartLiveRoomReqBaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateSmartLiveRoomReqBaseInfo::CreateSmartLiveRoomReqBaseInfo()
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
}

CreateSmartLiveRoomReqBaseInfo::~CreateSmartLiveRoomReqBaseInfo() = default;

void CreateSmartLiveRoomReqBaseInfo::validate()
{
}

web::json::value CreateSmartLiveRoomReqBaseInfo::toJson() const
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

    return val;
}
bool CreateSmartLiveRoomReqBaseInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateSmartLiveRoomReqBaseInfo::getRoomName() const
{
    return roomName_;
}

void CreateSmartLiveRoomReqBaseInfo::setRoomName(const std::string& value)
{
    roomName_ = value;
    roomNameIsSet_ = true;
}

bool CreateSmartLiveRoomReqBaseInfo::roomNameIsSet() const
{
    return roomNameIsSet_;
}

void CreateSmartLiveRoomReqBaseInfo::unsetroomName()
{
    roomNameIsSet_ = false;
}

std::string CreateSmartLiveRoomReqBaseInfo::getRoomDescription() const
{
    return roomDescription_;
}

void CreateSmartLiveRoomReqBaseInfo::setRoomDescription(const std::string& value)
{
    roomDescription_ = value;
    roomDescriptionIsSet_ = true;
}

bool CreateSmartLiveRoomReqBaseInfo::roomDescriptionIsSet() const
{
    return roomDescriptionIsSet_;
}

void CreateSmartLiveRoomReqBaseInfo::unsetroomDescription()
{
    roomDescriptionIsSet_ = false;
}

std::string CreateSmartLiveRoomReqBaseInfo::getRoomType() const
{
    return roomType_;
}

void CreateSmartLiveRoomReqBaseInfo::setRoomType(const std::string& value)
{
    roomType_ = value;
    roomTypeIsSet_ = true;
}

bool CreateSmartLiveRoomReqBaseInfo::roomTypeIsSet() const
{
    return roomTypeIsSet_;
}

void CreateSmartLiveRoomReqBaseInfo::unsetroomType()
{
    roomTypeIsSet_ = false;
}

std::vector<LiveVideoScriptInfo>& CreateSmartLiveRoomReqBaseInfo::getSceneScripts()
{
    return sceneScripts_;
}

void CreateSmartLiveRoomReqBaseInfo::setSceneScripts(const std::vector<LiveVideoScriptInfo>& value)
{
    sceneScripts_ = value;
    sceneScriptsIsSet_ = true;
}

bool CreateSmartLiveRoomReqBaseInfo::sceneScriptsIsSet() const
{
    return sceneScriptsIsSet_;
}

void CreateSmartLiveRoomReqBaseInfo::unsetsceneScripts()
{
    sceneScriptsIsSet_ = false;
}

LiveRoomInteractionConfig CreateSmartLiveRoomReqBaseInfo::getInteractionConfig() const
{
    return interactionConfig_;
}

void CreateSmartLiveRoomReqBaseInfo::setInteractionConfig(const LiveRoomInteractionConfig& value)
{
    interactionConfig_ = value;
    interactionConfigIsSet_ = true;
}

bool CreateSmartLiveRoomReqBaseInfo::interactionConfigIsSet() const
{
    return interactionConfigIsSet_;
}

void CreateSmartLiveRoomReqBaseInfo::unsetinteractionConfig()
{
    interactionConfigIsSet_ = false;
}

std::vector<LiveRoomInteractionRuleInfo>& CreateSmartLiveRoomReqBaseInfo::getInteractionRules()
{
    return interactionRules_;
}

void CreateSmartLiveRoomReqBaseInfo::setInteractionRules(const std::vector<LiveRoomInteractionRuleInfo>& value)
{
    interactionRules_ = value;
    interactionRulesIsSet_ = true;
}

bool CreateSmartLiveRoomReqBaseInfo::interactionRulesIsSet() const
{
    return interactionRulesIsSet_;
}

void CreateSmartLiveRoomReqBaseInfo::unsetinteractionRules()
{
    interactionRulesIsSet_ = false;
}

PlayPolicy CreateSmartLiveRoomReqBaseInfo::getPlayPolicy() const
{
    return playPolicy_;
}

void CreateSmartLiveRoomReqBaseInfo::setPlayPolicy(const PlayPolicy& value)
{
    playPolicy_ = value;
    playPolicyIsSet_ = true;
}

bool CreateSmartLiveRoomReqBaseInfo::playPolicyIsSet() const
{
    return playPolicyIsSet_;
}

void CreateSmartLiveRoomReqBaseInfo::unsetplayPolicy()
{
    playPolicyIsSet_ = false;
}

VideoConfig CreateSmartLiveRoomReqBaseInfo::getVideoConfig() const
{
    return videoConfig_;
}

void CreateSmartLiveRoomReqBaseInfo::setVideoConfig(const VideoConfig& value)
{
    videoConfig_ = value;
    videoConfigIsSet_ = true;
}

bool CreateSmartLiveRoomReqBaseInfo::videoConfigIsSet() const
{
    return videoConfigIsSet_;
}

void CreateSmartLiveRoomReqBaseInfo::unsetvideoConfig()
{
    videoConfigIsSet_ = false;
}

std::vector<std::string>& CreateSmartLiveRoomReqBaseInfo::getOutputUrls()
{
    return outputUrls_;
}

void CreateSmartLiveRoomReqBaseInfo::setOutputUrls(const std::vector<std::string>& value)
{
    outputUrls_ = value;
    outputUrlsIsSet_ = true;
}

bool CreateSmartLiveRoomReqBaseInfo::outputUrlsIsSet() const
{
    return outputUrlsIsSet_;
}

void CreateSmartLiveRoomReqBaseInfo::unsetoutputUrls()
{
    outputUrlsIsSet_ = false;
}

std::vector<std::string>& CreateSmartLiveRoomReqBaseInfo::getStreamKeys()
{
    return streamKeys_;
}

void CreateSmartLiveRoomReqBaseInfo::setStreamKeys(const std::vector<std::string>& value)
{
    streamKeys_ = value;
    streamKeysIsSet_ = true;
}

bool CreateSmartLiveRoomReqBaseInfo::streamKeysIsSet() const
{
    return streamKeysIsSet_;
}

void CreateSmartLiveRoomReqBaseInfo::unsetstreamKeys()
{
    streamKeysIsSet_ = false;
}

std::vector<std::string>& CreateSmartLiveRoomReqBaseInfo::getBackupModelAssetIds()
{
    return backupModelAssetIds_;
}

void CreateSmartLiveRoomReqBaseInfo::setBackupModelAssetIds(const std::vector<std::string>& value)
{
    backupModelAssetIds_ = value;
    backupModelAssetIdsIsSet_ = true;
}

bool CreateSmartLiveRoomReqBaseInfo::backupModelAssetIdsIsSet() const
{
    return backupModelAssetIdsIsSet_;
}

void CreateSmartLiveRoomReqBaseInfo::unsetbackupModelAssetIds()
{
    backupModelAssetIdsIsSet_ = false;
}

LiveRoomEventCallBackConfig CreateSmartLiveRoomReqBaseInfo::getLiveEventCallbackConfig() const
{
    return liveEventCallbackConfig_;
}

void CreateSmartLiveRoomReqBaseInfo::setLiveEventCallbackConfig(const LiveRoomEventCallBackConfig& value)
{
    liveEventCallbackConfig_ = value;
    liveEventCallbackConfigIsSet_ = true;
}

bool CreateSmartLiveRoomReqBaseInfo::liveEventCallbackConfigIsSet() const
{
    return liveEventCallbackConfigIsSet_;
}

void CreateSmartLiveRoomReqBaseInfo::unsetliveEventCallbackConfig()
{
    liveEventCallbackConfigIsSet_ = false;
}

RTCLiveEventCallBackConfig CreateSmartLiveRoomReqBaseInfo::getRtcCallbackConfig() const
{
    return rtcCallbackConfig_;
}

void CreateSmartLiveRoomReqBaseInfo::setRtcCallbackConfig(const RTCLiveEventCallBackConfig& value)
{
    rtcCallbackConfig_ = value;
    rtcCallbackConfigIsSet_ = true;
}

bool CreateSmartLiveRoomReqBaseInfo::rtcCallbackConfigIsSet() const
{
    return rtcCallbackConfigIsSet_;
}

void CreateSmartLiveRoomReqBaseInfo::unsetrtcCallbackConfig()
{
    rtcCallbackConfigIsSet_ = false;
}

ReviewConfig CreateSmartLiveRoomReqBaseInfo::getReviewConfig() const
{
    return reviewConfig_;
}

void CreateSmartLiveRoomReqBaseInfo::setReviewConfig(const ReviewConfig& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool CreateSmartLiveRoomReqBaseInfo::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void CreateSmartLiveRoomReqBaseInfo::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

SharedConfig CreateSmartLiveRoomReqBaseInfo::getSharedConfig() const
{
    return sharedConfig_;
}

void CreateSmartLiveRoomReqBaseInfo::setSharedConfig(const SharedConfig& value)
{
    sharedConfig_ = value;
    sharedConfigIsSet_ = true;
}

bool CreateSmartLiveRoomReqBaseInfo::sharedConfigIsSet() const
{
    return sharedConfigIsSet_;
}

void CreateSmartLiveRoomReqBaseInfo::unsetsharedConfig()
{
    sharedConfigIsSet_ = false;
}

std::string CreateSmartLiveRoomReqBaseInfo::getViewMode() const
{
    return viewMode_;
}

void CreateSmartLiveRoomReqBaseInfo::setViewMode(const std::string& value)
{
    viewMode_ = value;
    viewModeIsSet_ = true;
}

bool CreateSmartLiveRoomReqBaseInfo::viewModeIsSet() const
{
    return viewModeIsSet_;
}

void CreateSmartLiveRoomReqBaseInfo::unsetviewMode()
{
    viewModeIsSet_ = false;
}

CoStreamerConfig CreateSmartLiveRoomReqBaseInfo::getCoStreamerConfig() const
{
    return coStreamerConfig_;
}

void CreateSmartLiveRoomReqBaseInfo::setCoStreamerConfig(const CoStreamerConfig& value)
{
    coStreamerConfig_ = value;
    coStreamerConfigIsSet_ = true;
}

bool CreateSmartLiveRoomReqBaseInfo::coStreamerConfigIsSet() const
{
    return coStreamerConfigIsSet_;
}

void CreateSmartLiveRoomReqBaseInfo::unsetcoStreamerConfig()
{
    coStreamerConfigIsSet_ = false;
}

std::string CreateSmartLiveRoomReqBaseInfo::getPrivData() const
{
    return privData_;
}

void CreateSmartLiveRoomReqBaseInfo::setPrivData(const std::string& value)
{
    privData_ = value;
    privDataIsSet_ = true;
}

bool CreateSmartLiveRoomReqBaseInfo::privDataIsSet() const
{
    return privDataIsSet_;
}

void CreateSmartLiveRoomReqBaseInfo::unsetprivData()
{
    privDataIsSet_ = false;
}

}
}
}
}
}


