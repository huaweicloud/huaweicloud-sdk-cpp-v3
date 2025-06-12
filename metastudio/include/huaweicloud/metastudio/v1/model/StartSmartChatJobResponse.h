
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StartSmartChatJobResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StartSmartChatJobResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/SmartChatVoiceConfig.h>
#include <huaweicloud/metastudio/v1/model/RTCRoomInfoList.h>
#include <huaweicloud/metastudio/v1/model/SmartChatVideoConfig.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/LanguageEnum.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  StartSmartChatJobResponse
    : public ModelBase, public HttpResponse
{
public:
    StartSmartChatJobResponse();
    virtual ~StartSmartChatJobResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StartSmartChatJobResponse members

    /// <summary>
    /// 智能交互对话任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LanguageEnum getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const LanguageEnum& value);

    /// <summary>
    /// 
    /// </summary>

    RTCRoomInfoList getRtcRoomInfo() const;
    bool rtcRoomInfoIsSet() const;
    void unsetrtcRoomInfo();
    void setRtcRoomInfo(const RTCRoomInfoList& value);

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
    /// 算力所在region。 * cn-north-4: 北京4 * cn-southwest-2: 贵阳1
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 智能交互接入地址。
    /// </summary>

    std::string getChatAccessAddress() const;
    bool chatAccessAddressIsSet() const;
    void unsetchatAccessAddress();
    void setChatAccessAddress(const std::string& value);

    /// <summary>
    /// 智能交互Rest接口接入地址。
    /// </summary>

    std::string getChatAccessRestAddress() const;
    bool chatAccessRestAddressIsSet() const;
    void unsetchatAccessRestAddress();
    void setChatAccessRestAddress(const std::string& value);

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
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    LanguageEnum language_;
    bool languageIsSet_;
    RTCRoomInfoList rtcRoomInfo_;
    bool rtcRoomInfoIsSet_;
    SmartChatSubtitleConfig chatSubtitleConfig_;
    bool chatSubtitleConfigIsSet_;
    SmartChatVideoConfig videoConfig_;
    bool videoConfigIsSet_;
    std::vector<SmartChatVoiceConfig> voiceConfigList_;
    bool voiceConfigListIsSet_;
    std::string chatVideoType_;
    bool chatVideoTypeIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string chatAccessAddress_;
    bool chatAccessAddressIsSet_;
    std::string chatAccessRestAddress_;
    bool chatAccessRestAddressIsSet_;
    bool isTransparent_;
    bool isTransparentIsSet_;
    std::string defaultLanguage_;
    bool defaultLanguageIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StartSmartChatJobResponse_H_
