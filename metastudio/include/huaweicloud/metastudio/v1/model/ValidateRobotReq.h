
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ValidateRobotReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ValidateRobotReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/HuaweiEiCbs.h>
#include <huaweicloud/metastudio/v1/model/ThirdPartyModelConfig.h>
#include <huaweicloud/metastudio/v1/model/MobvoiConfig.h>
#include <huaweicloud/metastudio/v1/model/IflytekAiuiConfig.h>
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
/// 校验应用请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ValidateRobotReq
    : public ModelBase
{
public:
    ValidateRobotReq();
    virtual ~ValidateRobotReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ValidateRobotReq members

    /// <summary>
    /// 对接第三方应用厂商类型。 &gt; 0：科大讯飞AIUI；1：华为云CBS；2：科大讯飞星火交互认知大模型；6：第三方语言模型；7：交互助手；8：奇妙问
    /// </summary>

    int32_t getAppType() const;
    bool appTypeIsSet() const;
    void unsetappType();
    void setAppType(int32_t value);

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
    int32_t appType_;
    bool appTypeIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ValidateRobotReq_H_
