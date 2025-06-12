
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateSmartLiveRoomReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateSmartLiveRoomReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/VideoConfig.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/LiveVideoScriptInfo.h>
#include <huaweicloud/metastudio/v1/model/SharedConfig.h>
#include <huaweicloud/metastudio/v1/model/PlayPolicy.h>
#include <vector>
#include <huaweicloud/metastudio/v1/model/LiveRoomInteractionConfig.h>
#include <huaweicloud/metastudio/v1/model/RTCLiveEventCallBackConfig.h>
#include <huaweicloud/metastudio/v1/model/LiveRoomInteractionRuleInfo.h>
#include <huaweicloud/metastudio/v1/model/CreateSmartLiveRoomReqBaseInfo.h>
#include <huaweicloud/metastudio/v1/model/CoStreamerConfig.h>
#include <huaweicloud/metastudio/v1/model/ReviewConfig.h>
#include <huaweicloud/metastudio/v1/model/PlatformLiveInfo.h>
#include <huaweicloud/metastudio/v1/model/LiveRoomEventCallBackConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建直播间配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateSmartLiveRoomReq
    : public ModelBase
{
public:
    CreateSmartLiveRoomReq();
    virtual ~CreateSmartLiveRoomReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSmartLiveRoomReq members

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
    /// 
    /// </summary>

    PlatformLiveInfo getRelationLivePlatformInfo() const;
    bool relationLivePlatformInfoIsSet() const;
    void unsetrelationLivePlatformInfo();
    void setRelationLivePlatformInfo(const PlatformLiveInfo& value);


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
    PlatformLiveInfo relationLivePlatformInfo_;
    bool relationLivePlatformInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateSmartLiveRoomReq_H_
