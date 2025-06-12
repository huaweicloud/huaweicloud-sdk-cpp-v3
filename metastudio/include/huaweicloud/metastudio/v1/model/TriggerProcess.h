
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TriggerProcess_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TriggerProcess_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/ReplyAudioInfo.h>
#include <huaweicloud/metastudio/v1/model/SmartLayerConfig.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 触发器处理
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  TriggerProcess
    : public ModelBase
{
public:
    TriggerProcess();
    virtual ~TriggerProcess();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TriggerProcess members

    /// <summary>
    /// **参数解释**： 处理抑制时长。单位秒。 - -1：表示整场直播仅触发一次。 - 0：表示无抑制，每次都触发。 - 其他值n：表示n秒内仅触发一次。  **约束限制**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    int32_t getTimeWindow() const;
    bool timeWindowIsSet() const;
    void unsettimeWindow();
    void setTimeWindow(int32_t value);

    /// <summary>
    /// **参数解释**： 回复类型。 **约束限制**： 不涉及 **取值范围**： * SYSTEM_REPLY：系统自动回复预先设置的话术。 * CALLBACK：回调给其他服务，携带设置的话术。 * SYSTEM_REPLY_AND_CALLBACK：系统自动回复预先设置的话术，同时回调给用户,携带设置的话术。 * SHOW_LAYER：仅显示叠加图层，不影响话术。 * INTELLIGENT_REPLY：使用配置的大模型生成回复话术。  **默认取值**： 不涉及
    /// </summary>

    std::string getReplyMode() const;
    bool replyModeIsSet() const;
    void unsetreplyMode();
    void setReplyMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SmartLayerConfig getLayerConfig() const;
    bool layerConfigIsSet() const;
    void unsetlayerConfig();
    void setLayerConfig(const SmartLayerConfig& value);

    /// <summary>
    /// 
    /// </summary>

    SmartLayerConfig getExtraLayerConfig() const;
    bool extraLayerConfigIsSet() const;
    void unsetextraLayerConfig();
    void setExtraLayerConfig(const SmartLayerConfig& value);

    /// <summary>
    /// **参数解释**： 回复话术集。 **约束限制**： 不涉及 **取值范围**： 最大支持5条预置话术。 单条话术字符长度0-1024位。 **默认取值**： 不涉及
    /// </summary>

    std::vector<std::string>& getReplyTexts();
    bool replyTextsIsSet() const;
    void unsetreplyTexts();
    void setReplyTexts(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 回复音频集。填写audio_url。 **约束限制**： 不涉及 **取值范围**： 最大支持5条预置音频。 **默认取值**： 不涉及
    /// </summary>

    std::vector<ReplyAudioInfo>& getReplyAudios();
    bool replyAudiosIsSet() const;
    void unsetreplyAudios();
    void setReplyAudios(const std::vector<ReplyAudioInfo>& value);

    /// <summary>
    /// **参数解释**： 回复话术选择次序。 **约束限制**： 不涉及 **取值范围**： * RANDOM：随机 * ORDER：顺序循环  **默认取值**： 不涉及
    /// </summary>

    std::string getReplyOrder() const;
    bool replyOrderIsSet() const;
    void unsetreplyOrder();
    void setReplyOrder(const std::string& value);

    /// <summary>
    /// **参数解释**： 回复角色。 **约束限制**： 不涉及 **取值范围**： * STREAMER：主播 * CO_STREAMER：助播，仅声音。
    /// </summary>

    std::string getReplyRole() const;
    bool replyRoleIsSet() const;
    void unsetreplyRole();
    void setReplyRole(const std::string& value);

    /// <summary>
    /// **参数解释**： 机器人ID。 **约束限制**： reply_mode为INTELLIGENT_REPLY时必填，智能交互配置的大模型机器人ID。 获取方法请参考[创建应用](CreateRobot.xml)。 **取值范围**： 字符长度0-64位。 **默认取值**： 不涉及
    /// </summary>

    std::string getRobotId() const;
    bool robotIdIsSet() const;
    void unsetrobotId();
    void setRobotId(const std::string& value);

    /// <summary>
    /// 回复播放类型。 - APPEND：追加，放置在场景播放队列尾部 - INSERT： 插入，在两个音频文件，或者文本句末添加。 - PLAY_NOW : 立即插入，收到指令后，立即播放，无需等待句末。
    /// </summary>

    std::string getPlayType() const;
    bool playTypeIsSet() const;
    void unsetplayType();
    void setPlayType(const std::string& value);


protected:
    int32_t timeWindow_;
    bool timeWindowIsSet_;
    std::string replyMode_;
    bool replyModeIsSet_;
    SmartLayerConfig layerConfig_;
    bool layerConfigIsSet_;
    SmartLayerConfig extraLayerConfig_;
    bool extraLayerConfigIsSet_;
    std::vector<std::string> replyTexts_;
    bool replyTextsIsSet_;
    std::vector<ReplyAudioInfo> replyAudios_;
    bool replyAudiosIsSet_;
    std::string replyOrder_;
    bool replyOrderIsSet_;
    std::string replyRole_;
    bool replyRoleIsSet_;
    std::string robotId_;
    bool robotIdIsSet_;
    std::string playType_;
    bool playTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TriggerProcess_H_
