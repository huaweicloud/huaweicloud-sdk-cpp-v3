
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StartSmartLiveReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StartSmartLiveReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/RTCLiveEventCallBackConfig.h>
#include <huaweicloud/metastudio/v1/model/VideoConfig.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/LiveEventCallBackConfig.h>
#include <huaweicloud/metastudio/v1/model/LiveJobRunConfig.h>
#include <huaweicloud/metastudio/v1/model/CoStreamerConfig.h>
#include <huaweicloud/metastudio/v1/model/PlayPolicy.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数字人直播任务请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  StartSmartLiveReq
    : public ModelBase
{
public:
    StartSmartLiveReq();
    virtual ~StartSmartLiveReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StartSmartLiveReq members

    /// <summary>
    /// 
    /// </summary>

    VideoConfig getVideoConfig() const;
    bool videoConfigIsSet() const;
    void unsetvideoConfig();
    void setVideoConfig(const VideoConfig& value);

    /// <summary>
    /// 
    /// </summary>

    PlayPolicy getPlayPolicy() const;
    bool playPolicyIsSet() const;
    void unsetplayPolicy();
    void setPlayPolicy(const PlayPolicy& value);

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
    /// **参数解释**： 互动回调URL，含鉴权信息。 互动规则trigger.reply_mode配置为CALLBACK时填写 **约束限制**： 不涉及 **取值范围**： 字符长度0-2048位 **默认取值**： 不涉及。
    /// </summary>

    std::string getInteractionCallbackUrl() const;
    bool interactionCallbackUrlIsSet() const;
    void unsetinteractionCallbackUrl();
    void setInteractionCallbackUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LiveEventCallBackConfig getLiveEventCallbackConfig() const;
    bool liveEventCallbackConfigIsSet() const;
    void unsetliveEventCallbackConfig();
    void setLiveEventCallbackConfig(const LiveEventCallBackConfig& value);

    /// <summary>
    /// 
    /// </summary>

    RTCLiveEventCallBackConfig getRtcCallbackConfig() const;
    bool rtcCallbackConfigIsSet() const;
    void unsetrtcCallbackConfig();
    void setRtcCallbackConfig(const RTCLiveEventCallBackConfig& value);

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
    /// 
    /// </summary>

    LiveJobRunConfig getJobRunConfig() const;
    bool jobRunConfigIsSet() const;
    void unsetjobRunConfig();
    void setJobRunConfig(const LiveJobRunConfig& value);


protected:
    VideoConfig videoConfig_;
    bool videoConfigIsSet_;
    PlayPolicy playPolicy_;
    bool playPolicyIsSet_;
    std::vector<std::string> outputUrls_;
    bool outputUrlsIsSet_;
    std::vector<std::string> streamKeys_;
    bool streamKeysIsSet_;
    std::string interactionCallbackUrl_;
    bool interactionCallbackUrlIsSet_;
    LiveEventCallBackConfig liveEventCallbackConfig_;
    bool liveEventCallbackConfigIsSet_;
    RTCLiveEventCallBackConfig rtcCallbackConfig_;
    bool rtcCallbackConfigIsSet_;
    std::string viewMode_;
    bool viewModeIsSet_;
    CoStreamerConfig coStreamerConfig_;
    bool coStreamerConfigIsSet_;
    LiveJobRunConfig jobRunConfig_;
    bool jobRunConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StartSmartLiveReq_H_
