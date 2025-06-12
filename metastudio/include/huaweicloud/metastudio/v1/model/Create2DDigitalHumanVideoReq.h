
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_Create2DDigitalHumanVideoReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_Create2DDigitalHumanVideoReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/ActionConfig.h>
#include <huaweicloud/metastudio/v1/model/CallBackConfig.h>
#include <huaweicloud/metastudio/v1/model/VideoConfig.h>
#include <huaweicloud/metastudio/v1/model/OutputAssetConfig.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/VoiceConfig.h>
#include <huaweicloud/metastudio/v1/model/BackgroundMusicConfig.h>
#include <huaweicloud/metastudio/v1/model/ReviewConfig.h>
#include <huaweicloud/metastudio/v1/model/ShootScriptItem.h>
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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  Create2DDigitalHumanVideoReq
    : public ModelBase
{
public:
    Create2DDigitalHumanVideoReq();
    virtual ~Create2DDigitalHumanVideoReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Create2DDigitalHumanVideoReq members

    /// <summary>
    /// 剧本ID。 &gt; * 如果填写了script_id，model_asset_id、voice_config、scene_asset_id、video_config、shoot_scripts可以不填，以脚本中的配置为准。 &gt; * 如果填写了script_id，并且同时也填写了model_asset_id、voice_config、scene_asset_id、video_config、shoot_scripts则以本接口中的配置为准。
    /// </summary>

    std::string getScriptId() const;
    bool scriptIdIsSet() const;
    void unsetscriptId();
    void setScriptId(const std::string& value);

    /// <summary>
    /// 分身数字人模型资产ID，可以从资产库中查询。
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
    /// 
    /// </summary>

    VideoConfig getVideoConfig() const;
    bool videoConfigIsSet() const;
    void unsetvideoConfig();
    void setVideoConfig(const VideoConfig& value);

    /// <summary>
    /// 拍摄脚本列表。
    /// </summary>

    std::vector<ShootScriptItem>& getShootScripts();
    bool shootScriptsIsSet() const;
    void unsetshootScripts();
    void setShootScripts(const std::vector<ShootScriptItem>& value);

    /// <summary>
    /// 
    /// </summary>

    OutputAssetConfig getOutputAssetConfig() const;
    bool outputAssetConfigIsSet() const;
    void unsetoutputAssetConfig();
    void setOutputAssetConfig(const OutputAssetConfig& value);

    /// <summary>
    /// 
    /// </summary>

    BackgroundMusicConfig getBackgroundMusicConfig() const;
    bool backgroundMusicConfigIsSet() const;
    void unsetbackgroundMusicConfig();
    void setBackgroundMusicConfig(const BackgroundMusicConfig& value);

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

    CallBackConfig getCallbackConfig() const;
    bool callbackConfigIsSet() const;
    void unsetcallbackConfig();
    void setCallbackConfig(const CallBackConfig& value);

    /// <summary>
    /// 
    /// </summary>

    ActionConfig getActionConfig() const;
    bool actionConfigIsSet() const;
    void unsetactionConfig();
    void setActionConfig(const ActionConfig& value);


protected:
    std::string scriptId_;
    bool scriptIdIsSet_;
    std::string modelAssetId_;
    bool modelAssetIdIsSet_;
    VoiceConfig voiceConfig_;
    bool voiceConfigIsSet_;
    VideoConfig videoConfig_;
    bool videoConfigIsSet_;
    std::vector<ShootScriptItem> shootScripts_;
    bool shootScriptsIsSet_;
    OutputAssetConfig outputAssetConfig_;
    bool outputAssetConfigIsSet_;
    BackgroundMusicConfig backgroundMusicConfig_;
    bool backgroundMusicConfigIsSet_;
    ReviewConfig reviewConfig_;
    bool reviewConfigIsSet_;
    CallBackConfig callbackConfig_;
    bool callbackConfigIsSet_;
    ActionConfig actionConfig_;
    bool actionConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_Create2DDigitalHumanVideoReq_H_
