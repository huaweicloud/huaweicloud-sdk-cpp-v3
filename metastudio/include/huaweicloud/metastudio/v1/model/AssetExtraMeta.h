
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AssetExtraMeta_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AssetExtraMeta_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/PPTAssetMeta.h>
#include <huaweicloud/metastudio/v1/model/SceneAssetMeta.h>
#include <huaweicloud/metastudio/v1/model/VideoAssetMeta.h>
#include <huaweicloud/metastudio/v1/model/HumanModelAssetMeta.h>
#include <huaweicloud/metastudio/v1/model/AnimationAssetMeta.h>
#include <huaweicloud/metastudio/v1/model/HumanModel2DAssetMeta.h>
#include <huaweicloud/metastudio/v1/model/MaterialAssetMeta.h>
#include <huaweicloud/metastudio/v1/model/ImageAssetMeta.h>
#include <huaweicloud/metastudio/v1/model/VoiceModelAssetMeta.h>
#include <huaweicloud/metastudio/v1/model/AudioAssetMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 资产额外元数据。  **约束限制**： 根据asset_type选择对应结构填写，填写其他不匹配的结构会被忽略。 * HUMAN_MODEL: 填写human_model_meta * HUMAN_MODEL_2D: 填写human_model_2d_meta * SCENE：填写scene_meta * ANIMATION：填写animation_meta * MATERIAL：填写material_meta * VOICE_MODEL：填写voice_model_meta * VIDEO：填写video_meta * IMAGE：填写image_meta * PPT：填写ppt_meta * AUDIO: 填写audio_meta
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  AssetExtraMeta
    : public ModelBase
{
public:
    AssetExtraMeta();
    virtual ~AssetExtraMeta();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssetExtraMeta members

    /// <summary>
    /// 
    /// </summary>

    HumanModelAssetMeta getHumanModelMeta() const;
    bool humanModelMetaIsSet() const;
    void unsethumanModelMeta();
    void setHumanModelMeta(const HumanModelAssetMeta& value);

    /// <summary>
    /// 
    /// </summary>

    VoiceModelAssetMeta getVoiceModelMeta() const;
    bool voiceModelMetaIsSet() const;
    void unsetvoiceModelMeta();
    void setVoiceModelMeta(const VoiceModelAssetMeta& value);

    /// <summary>
    /// 
    /// </summary>

    PPTAssetMeta getPptMeta() const;
    bool pptMetaIsSet() const;
    void unsetpptMeta();
    void setPptMeta(const PPTAssetMeta& value);

    /// <summary>
    /// 
    /// </summary>

    AnimationAssetMeta getAnimationMeta() const;
    bool animationMetaIsSet() const;
    void unsetanimationMeta();
    void setAnimationMeta(const AnimationAssetMeta& value);

    /// <summary>
    /// 
    /// </summary>

    SceneAssetMeta getSceneMeta() const;
    bool sceneMetaIsSet() const;
    void unsetsceneMeta();
    void setSceneMeta(const SceneAssetMeta& value);

    /// <summary>
    /// 
    /// </summary>

    MaterialAssetMeta getMaterialMeta() const;
    bool materialMetaIsSet() const;
    void unsetmaterialMeta();
    void setMaterialMeta(const MaterialAssetMeta& value);

    /// <summary>
    /// 
    /// </summary>

    HumanModel2DAssetMeta getHumanModel2dMeta() const;
    bool humanModel2dMetaIsSet() const;
    void unsethumanModel2dMeta();
    void setHumanModel2dMeta(const HumanModel2DAssetMeta& value);

    /// <summary>
    /// 
    /// </summary>

    ImageAssetMeta getImageMeta() const;
    bool imageMetaIsSet() const;
    void unsetimageMeta();
    void setImageMeta(const ImageAssetMeta& value);

    /// <summary>
    /// 
    /// </summary>

    VideoAssetMeta getVideoMeta() const;
    bool videoMetaIsSet() const;
    void unsetvideoMeta();
    void setVideoMeta(const VideoAssetMeta& value);

    /// <summary>
    /// 
    /// </summary>

    AudioAssetMeta getAudioMeta() const;
    bool audioMetaIsSet() const;
    void unsetaudioMeta();
    void setAudioMeta(const AudioAssetMeta& value);


protected:
    HumanModelAssetMeta humanModelMeta_;
    bool humanModelMetaIsSet_;
    VoiceModelAssetMeta voiceModelMeta_;
    bool voiceModelMetaIsSet_;
    PPTAssetMeta pptMeta_;
    bool pptMetaIsSet_;
    AnimationAssetMeta animationMeta_;
    bool animationMetaIsSet_;
    SceneAssetMeta sceneMeta_;
    bool sceneMetaIsSet_;
    MaterialAssetMeta materialMeta_;
    bool materialMetaIsSet_;
    HumanModel2DAssetMeta humanModel2dMeta_;
    bool humanModel2dMetaIsSet_;
    ImageAssetMeta imageMeta_;
    bool imageMetaIsSet_;
    VideoAssetMeta videoMeta_;
    bool videoMetaIsSet_;
    AudioAssetMeta audioMeta_;
    bool audioMetaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AssetExtraMeta_H_
