
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartChatRoomBaseInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartChatRoomBaseInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/ModelInfo.h>
#include <huaweicloud/metastudio/v1/model/VoiceConfigRsp.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/VoiceConfig.h>
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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SmartChatRoomBaseInfo
    : public ModelBase
{
public:
    SmartChatRoomBaseInfo();
    virtual ~SmartChatRoomBaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SmartChatRoomBaseInfo members

    /// <summary>
    /// 智能交互对话ID
    /// </summary>

    std::string getRoomId() const;
    bool roomIdIsSet() const;
    void unsetroomId();
    void setRoomId(const std::string& value);

    /// <summary>
    /// 智能交互对话名称
    /// </summary>

    std::string getRoomName() const;
    bool roomNameIsSet() const;
    void unsetroomName();
    void setRoomName(const std::string& value);

    /// <summary>
    /// 智能交互对话描述。
    /// </summary>

    std::string getRoomDescription() const;
    bool roomDescriptionIsSet() const;
    void unsetroomDescription();
    void setRoomDescription(const std::string& value);

    /// <summary>
    /// 机器人ID。
    /// </summary>

    std::string getRobotId() const;
    bool robotIdIsSet() const;
    void unsetrobotId();
    void setRobotId(const std::string& value);

    /// <summary>
    /// 对话封面图URL
    /// </summary>

    std::string getCoverUrl() const;
    bool coverUrlIsSet() const;
    void unsetcoverUrl();
    void setCoverUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ModelInfo getModelInfos() const;
    bool modelInfosIsSet() const;
    void unsetmodelInfos();
    void setModelInfos(const ModelInfo& value);

    /// <summary>
    /// 
    /// </summary>

    VoiceConfig getVoiceConfig() const;
    bool voiceConfigIsSet() const;
    void unsetvoiceConfig();
    void setVoiceConfig(const VoiceConfig& value);

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
    /// **参数解释**： 并发路数。
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
    /// 语音配置参数列表。
    /// </summary>

    std::vector<VoiceConfigRsp>& getVoiceConfigList();
    bool voiceConfigListIsSet() const;
    void unsetvoiceConfigList();
    void setVoiceConfigList(const std::vector<VoiceConfigRsp>& value);

    /// <summary>
    /// 默认语言，智能交互接口使用。默认值CN。 * CN：简体中文。 * EN：英语。 * ESP：西班牙语（仅海外站点支持） * por：葡萄牙语（仅海外站点支持） * Arabic：阿拉伯语（仅海外站点支持） * Thai：泰语（仅海外站点支持）
    /// </summary>

    std::string getDefaultLanguage() const;
    bool defaultLanguageIsSet() const;
    void unsetdefaultLanguage();
    void setDefaultLanguage(const std::string& value);

    /// <summary>
    /// 创建时间，格式遵循：RFC 3339 如“2021-01-10T08:43:17Z”。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 更新时间，格式遵循：RFC 3339 如“2021-01-10T08:43:17Z”。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 静默退出时长。
    /// </summary>

    int32_t getExitMuteThreshold() const;
    bool exitMuteThresholdIsSet() const;
    void unsetexitMuteThreshold();
    void setExitMuteThreshold(int32_t value);


protected:
    std::string roomId_;
    bool roomIdIsSet_;
    std::string roomName_;
    bool roomNameIsSet_;
    std::string roomDescription_;
    bool roomDescriptionIsSet_;
    std::string robotId_;
    bool robotIdIsSet_;
    std::string coverUrl_;
    bool coverUrlIsSet_;
    ModelInfo modelInfos_;
    bool modelInfosIsSet_;
    VoiceConfig voiceConfig_;
    bool voiceConfigIsSet_;
    std::string billingMode_;
    bool billingModeIsSet_;
    bool reuseResource_;
    bool reuseResourceIsSet_;
    int32_t concurrency_;
    bool concurrencyIsSet_;
    int32_t clientNums_;
    bool clientNumsIsSet_;
    std::vector<VoiceConfigRsp> voiceConfigList_;
    bool voiceConfigListIsSet_;
    std::string defaultLanguage_;
    bool defaultLanguageIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    int32_t exitMuteThreshold_;
    bool exitMuteThresholdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartChatRoomBaseInfo_H_
