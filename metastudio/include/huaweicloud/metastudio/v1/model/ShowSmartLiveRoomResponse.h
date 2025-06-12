
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowSmartLiveRoomResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowSmartLiveRoomResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/VideoConfig.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/LiveVideoScriptInfo.h>
#include <huaweicloud/metastudio/v1/model/SharedConfig.h>
#include <huaweicloud/metastudio/v1/model/ErrorResponse.h>
#include <huaweicloud/metastudio/v1/model/PlatformLiveDetailInfo.h>
#include <huaweicloud/metastudio/v1/model/PlayPolicy.h>
#include <vector>
#include <huaweicloud/metastudio/v1/model/LiveRoomInteractionConfig.h>
#include <huaweicloud/metastudio/v1/model/RTCLiveEventCallBackConfig.h>
#include <huaweicloud/metastudio/v1/model/LiveRoomInteractionRuleInfo.h>
#include <huaweicloud/metastudio/v1/model/CreateSmartLiveRoomReqBaseInfo.h>
#include <huaweicloud/metastudio/v1/model/CoStreamerConfig.h>
#include <huaweicloud/metastudio/v1/model/ReviewConfig.h>
#include <huaweicloud/metastudio/v1/model/LiveRoomEventCallBackConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowSmartLiveRoomResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSmartLiveRoomResponse();
    virtual ~ShowSmartLiveRoomResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSmartLiveRoomResponse members

    /// <summary>
    /// **参数解释**： 直播间名称。 **约束限制**： 不涉及。 **取值范围**： 字符长度1-256位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getRoomName() const;
    bool roomNameIsSet() const;
    void unsetroomName();
    void setRoomName(const std::string& value);

    /// <summary>
    /// **参数解释**： 直播间描述。 **约束限制**： 不涉及。 **取值范围**： 字符长度0-1024位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getRoomDescription() const;
    bool roomDescriptionIsSet() const;
    void unsetroomDescription();
    void setRoomDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 直播间类型。 **约束限制**： 不涉及。 **取值范围**： * NORMAL：普通直播间，直播间一直存在，可以反复开播 * TEMP：临时直播间，直播任务结束后自动清理直播间。 * TEMPLATE：直播间模板。
    /// </summary>

    std::string getRoomType() const;
    bool roomTypeIsSet() const;
    void unsetroomType();
    void setRoomType(const std::string& value);

    /// <summary>
    /// 默认直播剧本列表。
    /// </summary>

    std::vector<LiveVideoScriptInfo>& getSceneScripts();
    bool sceneScriptsIsSet() const;
    void unsetsceneScripts();
    void setSceneScripts(const std::vector<LiveVideoScriptInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    LiveRoomInteractionConfig getInteractionConfig() const;
    bool interactionConfigIsSet() const;
    void unsetinteractionConfig();
    void setInteractionConfig(const LiveRoomInteractionConfig& value);

    /// <summary>
    /// 互动规则列表
    /// </summary>

    std::vector<LiveRoomInteractionRuleInfo>& getInteractionRules();
    bool interactionRulesIsSet() const;
    void unsetinteractionRules();
    void setInteractionRules(const std::vector<LiveRoomInteractionRuleInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    PlayPolicy getPlayPolicy() const;
    bool playPolicyIsSet() const;
    void unsetplayPolicy();
    void setPlayPolicy(const PlayPolicy& value);

    /// <summary>
    /// 
    /// </summary>

    VideoConfig getVideoConfig() const;
    bool videoConfigIsSet() const;
    void unsetvideoConfig();
    void setVideoConfig(const VideoConfig& value);

    /// <summary>
    /// **参数解释**： RTMP视频推流第三方直播平台地址。 &gt; 直播过程中刷新地址，需要调用COMMAND命令REFRESH_OUTPUT_URL。  **约束限制**： 不涉及 **取值范围**： 当前仅支持一条RTMP出流地址。 **默认取值**： 不涉及。
    /// </summary>

    std::vector<std::string>& getOutputUrls();
    bool outputUrlsIsSet() const;
    void unsetoutputUrls();
    void setOutputUrls(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： RTMP视频推流第三方直播平台流密钥，与推流地址对应。 &gt; 直播过程中刷新地址，需要调用COMMAND命令REFRESH_OUTPUT_URL。  **约束限制**： 不涉及 **取值范围**： 当前仅支持一条RTMP出流地址。 **默认取值**： 不涉及。
    /// </summary>

    std::vector<std::string>& getStreamKeys();
    bool streamKeysIsSet() const;
    void unsetstreamKeys();
    void setStreamKeys(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 主播轮换时备选主播数字人资产ID（仅形象资产，不包含声音）。  **约束限制**： 不涉及 **取值范围**： 当前最大支持5个备选主播。 数字人资产ID，字符长度0-64位。 **默认取值**： 不涉及
    /// </summary>

    std::vector<std::string>& getBackupModelAssetIds();
    bool backupModelAssetIdsIsSet() const;
    void unsetbackupModelAssetIds();
    void setBackupModelAssetIds(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    LiveRoomEventCallBackConfig getLiveEventCallbackConfig() const;
    bool liveEventCallbackConfigIsSet() const;
    void unsetliveEventCallbackConfig();
    void setLiveEventCallbackConfig(const LiveRoomEventCallBackConfig& value);

    /// <summary>
    /// 
    /// </summary>

    RTCLiveEventCallBackConfig getRtcCallbackConfig() const;
    bool rtcCallbackConfigIsSet() const;
    void unsetrtcCallbackConfig();
    void setRtcCallbackConfig(const RTCLiveEventCallBackConfig& value);

    /// <summary>
    /// 
    /// </summary>

    ReviewConfig getReviewConfig() const;
    bool reviewConfigIsSet() const;
    void unsetreviewConfig();
    void setReviewConfig(const ReviewConfig& value);

    /// <summary>
    /// 
    /// </summary>

    SharedConfig getSharedConfig() const;
    bool sharedConfigIsSet() const;
    void unsetsharedConfig();
    void setSharedConfig(const SharedConfig& value);

    /// <summary>
    /// **参数解释**： 横竖屏类型。 **约束限制**： 用户无需填写，通过video_config中分辨率判断 **取值范围**： * LANDSCAPE：横屏。 * VERTICAL： 竖屏。
    /// </summary>

    std::string getViewMode() const;
    bool viewModeIsSet() const;
    void unsetviewMode();
    void setViewMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CoStreamerConfig getCoStreamerConfig() const;
    bool coStreamerConfigIsSet() const;
    void unsetcoStreamerConfig();
    void setCoStreamerConfig(const CoStreamerConfig& value);

    /// <summary>
    /// **参数解释**： 匹配值私有数据，用户填写，原样带回。 **约束限制**： 不涉及 **取值范围**： 字符长度0-8192 **默认取值**： 不涉及。
    /// </summary>

    std::string getPrivData() const;
    bool privDataIsSet() const;
    void unsetprivData();
    void setPrivData(const std::string& value);

    /// <summary>
    /// 直播间ID
    /// </summary>

    std::string getRoomId() const;
    bool roomIdIsSet() const;
    void unsetroomId();
    void setRoomId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PlatformLiveDetailInfo getRelationLivePlatformInfo() const;
    bool relationLivePlatformInfoIsSet() const;
    void unsetrelationLivePlatformInfo();
    void setRelationLivePlatformInfo(const PlatformLiveDetailInfo& value);

    /// <summary>
    /// 直播间创建时间，格式遵循：RFC 3339 如“2021-01-10T08:43:17Z”。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 直播间更新时间，格式遵循：RFC 3339 如“2021-01-10T08:43:17Z”。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 直播间封面图URL
    /// </summary>

    std::string getCoverUrl() const;
    bool coverUrlIsSet() const;
    void unsetcoverUrl();
    void setCoverUrl(const std::string& value);

    /// <summary>
    /// 直播间封面图新URL
    /// </summary>

    std::string getThumbnail() const;
    bool thumbnailIsSet() const;
    void unsetthumbnail();
    void setThumbnail(const std::string& value);

    /// <summary>
    /// 直播间配置状态。 - ENABLE: 直播间正常可用。 - DISABLE： 直播间不可用。不可用原因在error_info中说明。 - BLOCKED：直播间被冻结。冻结原因在error_info中说明。
    /// </summary>

    std::string getRoomState() const;
    bool roomStateIsSet() const;
    void unsetroomState();
    void setRoomState(const std::string& value);

    /// <summary>
    /// 直播间确认状态。此状态仅用于特定用户需要人工确认场景。 - UNCONFIRM: 未确认 - CONFIRMED：已确认 - REJECT： 拒绝
    /// </summary>

    std::string getConfirmState() const;
    bool confirmStateIsSet() const;
    void unsetconfirmState();
    void setConfirmState(const std::string& value);

    /// <summary>
    /// 直播间剧本版本。调用update接口即更新版本。使用时间戳。
    /// </summary>

    std::string getScriptVersion() const;
    bool scriptVersionIsSet() const;
    void unsetscriptVersion();
    void setScriptVersion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ErrorResponse getErrorInfo() const;
    bool errorInfoIsSet() const;
    void unseterrorInfo();
    void setErrorInfo(const ErrorResponse& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string roomName_;
    bool roomNameIsSet_;
    std::string roomDescription_;
    bool roomDescriptionIsSet_;
    std::string roomType_;
    bool roomTypeIsSet_;
    std::vector<LiveVideoScriptInfo> sceneScripts_;
    bool sceneScriptsIsSet_;
    LiveRoomInteractionConfig interactionConfig_;
    bool interactionConfigIsSet_;
    std::vector<LiveRoomInteractionRuleInfo> interactionRules_;
    bool interactionRulesIsSet_;
    PlayPolicy playPolicy_;
    bool playPolicyIsSet_;
    VideoConfig videoConfig_;
    bool videoConfigIsSet_;
    std::vector<std::string> outputUrls_;
    bool outputUrlsIsSet_;
    std::vector<std::string> streamKeys_;
    bool streamKeysIsSet_;
    std::vector<std::string> backupModelAssetIds_;
    bool backupModelAssetIdsIsSet_;
    LiveRoomEventCallBackConfig liveEventCallbackConfig_;
    bool liveEventCallbackConfigIsSet_;
    RTCLiveEventCallBackConfig rtcCallbackConfig_;
    bool rtcCallbackConfigIsSet_;
    ReviewConfig reviewConfig_;
    bool reviewConfigIsSet_;
    SharedConfig sharedConfig_;
    bool sharedConfigIsSet_;
    std::string viewMode_;
    bool viewModeIsSet_;
    CoStreamerConfig coStreamerConfig_;
    bool coStreamerConfigIsSet_;
    std::string privData_;
    bool privDataIsSet_;
    std::string roomId_;
    bool roomIdIsSet_;
    PlatformLiveDetailInfo relationLivePlatformInfo_;
    bool relationLivePlatformInfoIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string coverUrl_;
    bool coverUrlIsSet_;
    std::string thumbnail_;
    bool thumbnailIsSet_;
    std::string roomState_;
    bool roomStateIsSet_;
    std::string confirmState_;
    bool confirmStateIsSet_;
    std::string scriptVersion_;
    bool scriptVersionIsSet_;
    ErrorResponse errorInfo_;
    bool errorInfoIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowSmartLiveRoomResponse_H_
