
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PlayPolicy_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PlayPolicy_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/LiveExitConfig.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 剧本播放策略
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  PlayPolicy
    : public ModelBase
{
public:
    PlayPolicy();
    virtual ~PlayPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PlayPolicy members

    /// <summary>
    /// **参数解释**： 剧本重复播放次数。 * -1：表示持续重复，直至人工停止。 * 0：表示不重复，仅执行一次。 * 其他值n：实际运行次数为n+1次。  **约束限制**： 不涉及。
    /// </summary>

    int32_t getRepeatCount() const;
    bool repeatCountIsSet() const;
    void unsetrepeatCount();
    void setRepeatCount(int32_t value);

    /// <summary>
    /// **参数解释**： 是否自动播放剧本。 **约束限制**： 不涉及。 **取值范围**： * true：服务完成任务初始化后，自动播放剧本。 * false：服务完成任务初始化后，等待信号后再开始播放剧本。
    /// </summary>

    bool isAutoPlayScript() const;
    bool autoPlayScriptIsSet() const;
    void unsetautoPlayScript();
    void setAutoPlayScript(bool value);

    /// <summary>
    /// **参数解释**： 驱动方式。 **约束限制**： 不涉及。 **取值范围**： * TEXT：文本驱动，即通过TTS合成语音。 * AUDIO：语音驱动。 * NO_PRESET：无预置剧本，人工控制模式。
    /// </summary>

    std::string getPlayMode() const;
    bool playModeIsSet() const;
    void unsetplayMode();
    void setPlayMode(const std::string& value);

    /// <summary>
    /// **参数解释**： 随机播报模式。 **约束限制**： 从第二轮播报开始随机。 **取值范围**： * NONE：不启动随机播报。 * SCENE：按场景随机播报。场景内段落按顺序播报。 * SCRIPT_ITEM：按段落随机播报。场景按顺序播报。 * SCENE_AND_SCRIPT_ITEM：场景和段落都随机播报。
    /// </summary>

    std::string getRandomPlayMode() const;
    bool randomPlayModeIsSet() const;
    void unsetrandomPlayMode();
    void setRandomPlayMode(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否需要独立采集端。用于客户端播放与命令分离场景。 **约束限制**： 不涉及。 **取值范围**： * true：分配CAPTURE、PLAYER两个RTC用户。 * false：仅分配PLAYER一个RTC用户。
    /// </summary>

    bool isNeedIndependentCaptureClient() const;
    bool needIndependentCaptureClientIsSet() const;
    void unsetneedIndependentCaptureClient();
    void setNeedIndependentCaptureClient(bool value);

    /// <summary>
    /// 
    /// </summary>

    LiveExitConfig getLiveExitConfig() const;
    bool liveExitConfigIsSet() const;
    void unsetliveExitConfig();
    void setLiveExitConfig(const LiveExitConfig& value);

    /// <summary>
    /// **参数解释**： 动态编辑未播放剧本是否需要下一轮生效。 **约束限制**： 不涉及。 **取值范围**： * true：下一轮生效。 * false：马上生效。 **默认取值**： false
    /// </summary>

    bool isIsRewriteDelay() const;
    bool isRewriteDelayIsSet() const;
    void unsetisRewriteDelay();
    void setIsRewriteDelay(bool value);


protected:
    int32_t repeatCount_;
    bool repeatCountIsSet_;
    bool autoPlayScript_;
    bool autoPlayScriptIsSet_;
    std::string playMode_;
    bool playModeIsSet_;
    std::string randomPlayMode_;
    bool randomPlayModeIsSet_;
    bool needIndependentCaptureClient_;
    bool needIndependentCaptureClientIsSet_;
    LiveExitConfig liveExitConfig_;
    bool liveExitConfigIsSet_;
    bool isRewriteDelay_;
    bool isRewriteDelayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PlayPolicy_H_
