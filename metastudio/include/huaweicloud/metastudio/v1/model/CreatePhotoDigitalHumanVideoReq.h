
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreatePhotoDigitalHumanVideoReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreatePhotoDigitalHumanVideoReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/CallBackConfig.h>
#include <huaweicloud/metastudio/v1/model/OutputAssetConfig.h>
#include <huaweicloud/metastudio/v1/model/PhotoVideoConfig.h>
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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreatePhotoDigitalHumanVideoReq
    : public ModelBase
{
public:
    CreatePhotoDigitalHumanVideoReq();
    virtual ~CreatePhotoDigitalHumanVideoReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePhotoDigitalHumanVideoReq members

    /// <summary>
    /// 剧本ID。 &gt; * 如果shoot_scripts中shoot_script.script_type为\&quot;TEXT\&quot;，则台词以shoot_scripts中的文本为准； &gt; * 如果shoot_scripts中shoot_script.script_type为\&quot;AUDIO\&quot;，则台词以script_id对应剧本中的音频为准。
    /// </summary>

    std::string getScriptId() const;
    bool scriptIdIsSet() const;
    void unsetscriptId();
    void setScriptId(const std::string& value);

    /// <summary>
    /// 人物照片，需要Base64编码。照片分辨率不超过1080P。
    /// </summary>

    std::string getHumanImage() const;
    bool humanImageIsSet() const;
    void unsethumanImage();
    void setHumanImage(const std::string& value);

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

    PhotoVideoConfig getVideoConfig() const;
    bool videoConfigIsSet() const;
    void unsetvideoConfig();
    void setVideoConfig(const PhotoVideoConfig& value);

    /// <summary>
    /// 剧本列表。照片数字人仅支持传入一个剧本shoot_script，剧本参数仅支持shoot_script.script_type、shoot_script.text_config；
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


protected:
    std::string scriptId_;
    bool scriptIdIsSet_;
    std::string humanImage_;
    bool humanImageIsSet_;
    VoiceConfig voiceConfig_;
    bool voiceConfigIsSet_;
    PhotoVideoConfig videoConfig_;
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreatePhotoDigitalHumanVideoReq_H_
