
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateSmartChatRoomRequestBody_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateSmartChatRoomRequestBody_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/VideoConfig.h>
#include <huaweicloud/metastudio/v1/model/ChatVoiceConfig.h>
#include <huaweicloud/metastudio/v1/model/LayerConfig.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/VoiceConfig.h>
#include <huaweicloud/metastudio/v1/model/ChatSubtitleConfig.h>
#include <huaweicloud/metastudio/v1/model/BackgroundConfigInfo.h>
#include <huaweicloud/metastudio/v1/model/ReviewConfig.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateSmartChatRoomRequestBody
    : public ModelBase
{
public:
    CreateSmartChatRoomRequestBody();
    virtual ~CreateSmartChatRoomRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSmartChatRoomRequestBody members

    /// <summary>
    /// 对话名称
    /// </summary>

    std::string getRoomName() const;
    bool roomNameIsSet() const;
    void unsetroomName();
    void setRoomName(const std::string& value);

    /// <summary>
    /// 对话描述。
    /// </summary>

    std::string getRoomDescription() const;
    bool roomDescriptionIsSet() const;
    void unsetroomDescription();
    void setRoomDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VideoConfig getVideoConfig() const;
    bool videoConfigIsSet() const;
    void unsetvideoConfig();
    void setVideoConfig(const VideoConfig& value);

    /// <summary>
    /// 数字人模型资产ID。
    /// </summary>

    std::string getModelAssetId() const;
    bool modelAssetIdIsSet() const;
    void unsetmodelAssetId();
    void setModelAssetId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VoiceConfig getVoiceConfig() const;
    bool voiceConfigIsSet() const;
    void unsetvoiceConfig();
    void setVoiceConfig(const VoiceConfig& value);

    /// <summary>
    /// 语音配置参数列表。
    /// </summary>

    std::vector<ChatVoiceConfig>& getVoiceConfigList();
    bool voiceConfigListIsSet() const;
    void unsetvoiceConfigList();
    void setVoiceConfigList(const std::vector<ChatVoiceConfig>& value);

    /// <summary>
    /// 机器人ID。获取方法请参考[创建应用](CreateRobot.xml)。
    /// </summary>

    std::string getRobotId() const;
    bool robotIdIsSet() const;
    void unsetrobotId();
    void setRobotId(const std::string& value);

    /// <summary>
    /// 计费模式，默认值CONCURRENCY * CONCURRENCY：并发计费 * CLIENT：按接入端计费 * CLIENT_TOKENS: 按接入端计费（TOKENS）
    /// </summary>

    std::string getBillingMode() const;
    bool billingModeIsSet() const;
    void unsetbillingMode();
    void setBillingMode(const std::string& value);

    /// <summary>
    /// 是否允许使用未分配的并发数（端模式下不能复用），默认不使用。
    /// </summary>

    bool isReuseResource() const;
    bool reuseResourceIsSet() const;
    void unsetreuseResource();
    void setReuseResource(bool value);

    /// <summary>
    /// **参数解释**： 并发路数。 **约束限制**： 默认没有并发路数，如果不配置并发数量，则无法启动智能交互对话任务。
    /// </summary>

    int32_t getConcurrency() const;
    bool concurrencyIsSet() const;
    void unsetconcurrency();
    void setConcurrency(int32_t value);

    /// <summary>
    /// **参数解释**： 允许接入终端端数量。
    /// </summary>

    int32_t getClientNums() const;
    bool clientNumsIsSet() const;
    void unsetclientNums();
    void setClientNums(int32_t value);

    /// <summary>
    /// 默认语言，智能交互接口使用。默认值CN。 * CN：简体中文。 * EN：英语。 * ESP：西班牙语（仅海外站点支持） * por：葡萄牙语（仅海外站点支持） * Arabic：阿拉伯语（仅海外站点支持） * Thai：泰语（仅海外站点支持）
    /// </summary>

    std::string getDefaultLanguage() const;
    bool defaultLanguageIsSet() const;
    void unsetdefaultLanguage();
    void setDefaultLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BackgroundConfigInfo getBackgroundConfig() const;
    bool backgroundConfigIsSet() const;
    void unsetbackgroundConfig();
    void setBackgroundConfig(const BackgroundConfigInfo& value);

    /// <summary>
    /// 图层配置。
    /// </summary>

    std::vector<LayerConfig>& getLayerConfig();
    bool layerConfigIsSet() const;
    void unsetlayerConfig();
    void setLayerConfig(const std::vector<LayerConfig>& value);

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

    ChatSubtitleConfig getChatSubtitleConfig() const;
    bool chatSubtitleConfigIsSet() const;
    void unsetchatSubtitleConfig();
    void setChatSubtitleConfig(const ChatSubtitleConfig& value);

    /// <summary>
    /// 智能交互对话端配置。 * COMPUTER: 电脑端 * MOBILE: 手机端 * HUB: 大屏
    /// </summary>

    std::string getChatVideoType() const;
    bool chatVideoTypeIsSet() const;
    void unsetchatVideoType();
    void setChatVideoType(const std::string& value);

    /// <summary>
    /// **参数解释**： 静默退出时长。
    /// </summary>

    int32_t getExitMuteThreshold() const;
    bool exitMuteThresholdIsSet() const;
    void unsetexitMuteThreshold();
    void setExitMuteThreshold(int32_t value);

    /// <summary>
    /// 是否优先级加载模型资产
    /// </summary>

    bool isEnableSemanticAction() const;
    bool enableSemanticActionIsSet() const;
    void unsetenableSemanticAction();
    void setEnableSemanticAction(bool value);


protected:
    std::string roomName_;
    bool roomNameIsSet_;
    std::string roomDescription_;
    bool roomDescriptionIsSet_;
    VideoConfig videoConfig_;
    bool videoConfigIsSet_;
    std::string modelAssetId_;
    bool modelAssetIdIsSet_;
    VoiceConfig voiceConfig_;
    bool voiceConfigIsSet_;
    std::vector<ChatVoiceConfig> voiceConfigList_;
    bool voiceConfigListIsSet_;
    std::string robotId_;
    bool robotIdIsSet_;
    std::string billingMode_;
    bool billingModeIsSet_;
    bool reuseResource_;
    bool reuseResourceIsSet_;
    int32_t concurrency_;
    bool concurrencyIsSet_;
    int32_t clientNums_;
    bool clientNumsIsSet_;
    std::string defaultLanguage_;
    bool defaultLanguageIsSet_;
    BackgroundConfigInfo backgroundConfig_;
    bool backgroundConfigIsSet_;
    std::vector<LayerConfig> layerConfig_;
    bool layerConfigIsSet_;
    ReviewConfig reviewConfig_;
    bool reviewConfigIsSet_;
    ChatSubtitleConfig chatSubtitleConfig_;
    bool chatSubtitleConfigIsSet_;
    std::string chatVideoType_;
    bool chatVideoTypeIsSet_;
    int32_t exitMuteThreshold_;
    bool exitMuteThresholdIsSet_;
    bool enableSemanticAction_;
    bool enableSemanticActionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateSmartChatRoomRequestBody_H_
