
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveVideoScriptInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveVideoScriptInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/LayerConfig.h>
#include <huaweicloud/metastudio/v1/model/LiveShootScriptItem.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/VoiceConfig.h>
#include <huaweicloud/metastudio/v1/model/BackgroundConfigInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创视频制作脚本请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  LiveVideoScriptInfo
    : public ModelBase
{
public:
    LiveVideoScriptInfo();
    virtual ~LiveVideoScriptInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LiveVideoScriptInfo members

    /// <summary>
    /// **参数解释**： 剧本ID。 **约束限制**： 该字段无需填写。 **取值范围**： 字符长度1-64位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getScriptId() const;
    bool scriptIdIsSet() const;
    void unsetscriptId();
    void setScriptId(const std::string& value);

    /// <summary>
    /// **参数解释**： 剧本名称。 **约束限制**： 该字段必须填写。 **取值范围**： 字符长度1-256位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getScriptName() const;
    bool scriptNameIsSet() const;
    void unsetscriptName();
    void setScriptName(const std::string& value);

    /// <summary>
    /// **参数解释**： 剧本描述。 **约束限制**： 该字段无需填写。 **取值范围**： 字符长度0-1024位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getScriptDescription() const;
    bool scriptDescriptionIsSet() const;
    void unsetscriptDescription();
    void setScriptDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 数字人ID。对应形象和音色组合。 **约束限制**： 该字段暂未启用，无需填写。 **取值范围**： 字符长度0-64位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getDhId() const;
    bool dhIdIsSet() const;
    void unsetdhId();
    void setDhId(const std::string& value);

    /// <summary>
    /// **参数解释**： 数字人模型资产ID，可以从资产库中查询。 **约束限制**： 不涉及 **取值范围**： 字符长度0-64位。 **默认取值**： 不涉及
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
    /// 背景配置。
    /// </summary>

    std::vector<BackgroundConfigInfo>& getBackgroundConfig();
    bool backgroundConfigIsSet() const;
    void unsetbackgroundConfig();
    void setBackgroundConfig(const std::vector<BackgroundConfigInfo>& value);

    /// <summary>
    /// 图层配置。
    /// </summary>

    std::vector<LayerConfig>& getLayerConfig();
    bool layerConfigIsSet() const;
    void unsetlayerConfig();
    void setLayerConfig(const std::vector<LayerConfig>& value);

    /// <summary>
    /// 拍摄脚本列表。
    /// </summary>

    std::vector<LiveShootScriptItem>& getShootScripts();
    bool shootScriptsIsSet() const;
    void unsetshootScripts();
    void setShootScripts(const std::vector<LiveShootScriptItem>& value);


protected:
    std::string scriptId_;
    bool scriptIdIsSet_;
    std::string scriptName_;
    bool scriptNameIsSet_;
    std::string scriptDescription_;
    bool scriptDescriptionIsSet_;
    std::string dhId_;
    bool dhIdIsSet_;
    std::string modelAssetId_;
    bool modelAssetIdIsSet_;
    VoiceConfig voiceConfig_;
    bool voiceConfigIsSet_;
    std::vector<BackgroundConfigInfo> backgroundConfig_;
    bool backgroundConfigIsSet_;
    std::vector<LayerConfig> layerConfig_;
    bool layerConfigIsSet_;
    std::vector<LiveShootScriptItem> shootScripts_;
    bool shootScriptsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveVideoScriptInfo_H_
