
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartChatJobBaseInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartChatJobBaseInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/SmartChatVoiceConfig.h>
#include <huaweicloud/metastudio/v1/model/SmartChatVideoConfig.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/ErrorResponse.h>
#include <huaweicloud/metastudio/v1/model/SmartChatSubtitleConfig.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数字人智能交互对话任务信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SmartChatJobBaseInfo
    : public ModelBase
{
public:
    SmartChatJobBaseInfo();
    virtual ~SmartChatJobBaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SmartChatJobBaseInfo members

    /// <summary>
    /// 数字人智能交互对话任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 数字人智能交互对话任务的状态。 * WAITING: 等待 * PROCESSING: 处理中 * SUCCEED: 成功 * FAILED: 失败 * DELETING: 删除中
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 数字人智能交互对话时长，单位秒。
    /// </summary>

    float getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(float value);

    /// <summary>
    /// 数字人智能交互对话任务开始时间。格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 数字人智能交互对话任务结束时间。格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ErrorResponse getErrorInfo() const;
    bool errorInfoIsSet() const;
    void unseterrorInfo();
    void setErrorInfo(const ErrorResponse& value);

    /// <summary>
    /// 数字人智能交互对话任务创建时间。格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 数字人智能交互对话任务最后更新时间。格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getLastupdateTime() const;
    bool lastupdateTimeIsSet() const;
    void unsetlastupdateTime();
    void setLastupdateTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SmartChatSubtitleConfig getChatSubtitleConfig() const;
    bool chatSubtitleConfigIsSet() const;
    void unsetchatSubtitleConfig();
    void setChatSubtitleConfig(const SmartChatSubtitleConfig& value);

    /// <summary>
    /// 
    /// </summary>

    SmartChatVideoConfig getVideoConfig() const;
    bool videoConfigIsSet() const;
    void unsetvideoConfig();
    void setVideoConfig(const SmartChatVideoConfig& value);

    /// <summary>
    /// 语音配置参数列表。
    /// </summary>

    std::vector<SmartChatVoiceConfig>& getVoiceConfigList();
    bool voiceConfigListIsSet() const;
    void unsetvoiceConfigList();
    void setVoiceConfigList(const std::vector<SmartChatVoiceConfig>& value);

    /// <summary>
    /// 智能交互对话端配置。 * COMPUTER: 电脑端 * MOBILE: 手机端 * HUB: 大屏
    /// </summary>

    std::string getChatVideoType() const;
    bool chatVideoTypeIsSet() const;
    void unsetchatVideoType();
    void setChatVideoType(const std::string& value);

    /// <summary>
    /// 是否透明背景
    /// </summary>

    bool isIsTransparent() const;
    bool isTransparentIsSet() const;
    void unsetisTransparent();
    void setIsTransparent(bool value);

    /// <summary>
    /// 默认语言，智能交互接口使用。默认值CN。 * CN：中文。 * EN：英文。 * ESP：西班牙语（仅海外站点支持） * por：葡萄牙语（仅海外站点支持） * Arabic：阿拉伯语（仅海外站点支持） * Thai：泰语（仅海外站点支持）
    /// </summary>

    std::string getDefaultLanguage() const;
    bool defaultLanguageIsSet() const;
    void unsetdefaultLanguage();
    void setDefaultLanguage(const std::string& value);

    /// <summary>
    /// clientId
    /// </summary>

    std::string getClientId() const;
    bool clientIdIsSet() const;
    void unsetclientId();
    void setClientId(const std::string& value);

    /// <summary>
    /// 是否是资源池模式
    /// </summary>

    bool isIsPoolMode() const;
    bool isPoolModeIsSet() const;
    void unsetisPoolMode();
    void setIsPoolMode(bool value);

    /// <summary>
    /// 对话结束原因 * NORMAL：正常结束 * MUTE_TIMEOUT：静音超时
    /// </summary>

    std::string getJobFinishReason() const;
    bool jobFinishReasonIsSet() const;
    void unsetjobFinishReason();
    void setJobFinishReason(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string state_;
    bool stateIsSet_;
    float duration_;
    bool durationIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    ErrorResponse errorInfo_;
    bool errorInfoIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string lastupdateTime_;
    bool lastupdateTimeIsSet_;
    SmartChatSubtitleConfig chatSubtitleConfig_;
    bool chatSubtitleConfigIsSet_;
    SmartChatVideoConfig videoConfig_;
    bool videoConfigIsSet_;
    std::vector<SmartChatVoiceConfig> voiceConfigList_;
    bool voiceConfigListIsSet_;
    std::string chatVideoType_;
    bool chatVideoTypeIsSet_;
    bool isTransparent_;
    bool isTransparentIsSet_;
    std::string defaultLanguage_;
    bool defaultLanguageIsSet_;
    std::string clientId_;
    bool clientIdIsSet_;
    bool isPoolMode_;
    bool isPoolModeIsSet_;
    std::string jobFinishReason_;
    bool jobFinishReasonIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartChatJobBaseInfo_H_
