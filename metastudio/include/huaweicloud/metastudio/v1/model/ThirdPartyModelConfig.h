
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ThirdPartyModelConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ThirdPartyModelConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/AsrTypeEnum.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 第三方语言模型配置
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ThirdPartyModelConfig
    : public ModelBase
{
public:
    ThirdPartyModelConfig();
    virtual ~ThirdPartyModelConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ThirdPartyModelConfig members

    /// <summary>
    /// 第三方语言模型应用ID。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 第三方语言模型应用密钥。
    /// </summary>

    std::string getAppKey() const;
    bool appKeyIsSet() const;
    void unsetappKey();
    void setAppKey(const std::string& value);

    /// <summary>
    /// 第三方语言模型地址。
    /// </summary>

    std::string getLlmUrl() const;
    bool llmUrlIsSet() const;
    void unsetllmUrl();
    void setLlmUrl(const std::string& value);

    /// <summary>
    /// 是否采用流式响应。
    /// </summary>

    bool isIsStream() const;
    bool isStreamIsSet() const;
    void unsetisStream();
    void setIsStream(bool value);

    /// <summary>
    /// 支持的多轮对话数量，取值大于1时，请求第三方语言模型时将携带历史对话信息。
    /// </summary>

    int32_t getChatRounds() const;
    bool chatRoundsIsSet() const;
    void unsetchatRounds();
    void setChatRounds(int32_t value);

    /// <summary>
    /// SIS所在区域
    /// </summary>

    int32_t getSisRegion() const;
    bool sisRegionIsSet() const;
    void unsetsisRegion();
    void setSisRegion(int32_t value);

    /// <summary>
    /// SIS所在区域的projectId
    /// </summary>

    std::string getSisProjectId() const;
    bool sisProjectIdIsSet() const;
    void unsetsisProjectId();
    void setSisProjectId(const std::string& value);

    /// <summary>
    /// 是否开启热词（asr_type选择EI_SIS时生效）
    /// </summary>

    bool isEnableHotWords() const;
    bool enableHotWordsIsSet() const;
    void unsetenableHotWords();
    void setEnableHotWords(bool value);

    /// <summary>
    /// 
    /// </summary>

    AsrTypeEnum getAsrType() const;
    bool asrTypeIsSet() const;
    void unsetasrType();
    void setAsrType(const AsrTypeEnum& value);

    /// <summary>
    /// ASR帐号（asr_type选择EI_SIS时不需要配置）。
    /// </summary>

    std::string getAsrAccount() const;
    bool asrAccountIsSet() const;
    void unsetasrAccount();
    void setAsrAccount(const std::string& value);

    /// <summary>
    /// ASR密钥（asr_type选择EI_SIS时不需要配置）。
    /// </summary>

    std::string getAsrSecret() const;
    bool asrSecretIsSet() const;
    void unsetasrSecret();
    void setAsrSecret(const std::string& value);


protected:
    std::string appId_;
    bool appIdIsSet_;
    std::string appKey_;
    bool appKeyIsSet_;
    std::string llmUrl_;
    bool llmUrlIsSet_;
    bool isStream_;
    bool isStreamIsSet_;
    int32_t chatRounds_;
    bool chatRoundsIsSet_;
    int32_t sisRegion_;
    bool sisRegionIsSet_;
    std::string sisProjectId_;
    bool sisProjectIdIsSet_;
    bool enableHotWords_;
    bool enableHotWordsIsSet_;
    AsrTypeEnum asrType_;
    bool asrTypeIsSet_;
    std::string asrAccount_;
    bool asrAccountIsSet_;
    std::string asrSecret_;
    bool asrSecretIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ThirdPartyModelConfig_H_
