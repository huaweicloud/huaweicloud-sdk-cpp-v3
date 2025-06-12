
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateRobotReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateRobotReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/HuaweiEiCbs.h>
#include <huaweicloud/metastudio/v1/model/RobotTypeEnum.h>
#include <huaweicloud/metastudio/v1/model/ThirdPartyModelConfig.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/MobvoiConfig.h>
#include <huaweicloud/metastudio/v1/model/IflytekAiuiConfig.h>
#include <huaweicloud/metastudio/v1/model/LanguageEnum.h>
#include <huaweicloud/metastudio/v1/model/WiseBrainConfig.h>
#include <huaweicloud/metastudio/v1/model/IflytekSpark.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建应用请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateRobotReq
    : public ModelBase
{
public:
    CreateRobotReq();
    virtual ~CreateRobotReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRobotReq members

    /// <summary>
    /// 应用名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 对接第三方应用厂商类型。 &gt; 0：科大讯飞AIUI；1：华为云CBS；2：科大讯飞星火交互认知大模型；5：第三方驱动；6：第三方语言模型；7：交互助手；8：奇妙问
    /// </summary>

    int32_t getAppType() const;
    bool appTypeIsSet() const;
    void unsetappType();
    void setAppType(int32_t value);

    /// <summary>
    /// 智能交互对话房间ID。
    /// </summary>

    std::string getRoomId() const;
    bool roomIdIsSet() const;
    void unsetroomId();
    void setRoomId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RobotTypeEnum getRobotType() const;
    bool robotTypeIsSet() const;
    void unsetrobotType();
    void setRobotType(const RobotTypeEnum& value);

    /// <summary>
    /// 
    /// </summary>

    LanguageEnum getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const LanguageEnum& value);

    /// <summary>
    /// 语音识别后端点静音时长默认500ms
    /// </summary>

    int32_t getTailSilenceTime() const;
    bool tailSilenceTimeIsSet() const;
    void unsettailSilenceTime();
    void setTailSilenceTime(int32_t value);

    /// <summary>
    /// 提问文本审核开关
    /// </summary>

    bool isEnableQuestionAudit() const;
    bool enableQuestionAuditIsSet() const;
    void unsetenableQuestionAudit();
    void setEnableQuestionAudit(bool value);

    /// <summary>
    /// 
    /// </summary>

    HuaweiEiCbs getHuaweiEiCbs() const;
    bool huaweiEiCbsIsSet() const;
    void unsethuaweiEiCbs();
    void setHuaweiEiCbs(const HuaweiEiCbs& value);

    /// <summary>
    /// 
    /// </summary>

    IflytekAiuiConfig getIflytekAiuiConfig() const;
    bool iflytekAiuiConfigIsSet() const;
    void unsetiflytekAiuiConfig();
    void setIflytekAiuiConfig(const IflytekAiuiConfig& value);

    /// <summary>
    /// 
    /// </summary>

    IflytekSpark getIflytekSpark() const;
    bool iflytekSparkIsSet() const;
    void unsetiflytekSpark();
    void setIflytekSpark(const IflytekSpark& value);

    /// <summary>
    /// 
    /// </summary>

    ThirdPartyModelConfig getThirdPartyModelConfig() const;
    bool thirdPartyModelConfigIsSet() const;
    void unsetthirdPartyModelConfig();
    void setThirdPartyModelConfig(const ThirdPartyModelConfig& value);

    /// <summary>
    /// 
    /// </summary>

    MobvoiConfig getMobvoiConfig() const;
    bool mobvoiConfigIsSet() const;
    void unsetmobvoiConfig();
    void setMobvoiConfig(const MobvoiConfig& value);

    /// <summary>
    /// 
    /// </summary>

    WiseBrainConfig getWiseBrainConfig() const;
    bool wiseBrainConfigIsSet() const;
    void unsetwiseBrainConfig();
    void setWiseBrainConfig(const WiseBrainConfig& value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t appType_;
    bool appTypeIsSet_;
    std::string roomId_;
    bool roomIdIsSet_;
    RobotTypeEnum robotType_;
    bool robotTypeIsSet_;
    LanguageEnum language_;
    bool languageIsSet_;
    int32_t tailSilenceTime_;
    bool tailSilenceTimeIsSet_;
    bool enableQuestionAudit_;
    bool enableQuestionAuditIsSet_;
    HuaweiEiCbs huaweiEiCbs_;
    bool huaweiEiCbsIsSet_;
    IflytekAiuiConfig iflytekAiuiConfig_;
    bool iflytekAiuiConfigIsSet_;
    IflytekSpark iflytekSpark_;
    bool iflytekSparkIsSet_;
    ThirdPartyModelConfig thirdPartyModelConfig_;
    bool thirdPartyModelConfigIsSet_;
    MobvoiConfig mobvoiConfig_;
    bool mobvoiConfigIsSet_;
    WiseBrainConfig wiseBrainConfig_;
    bool wiseBrainConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateRobotReq_H_
