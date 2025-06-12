
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AnimationAssetMeta_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AnimationAssetMeta_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 动作动画资产元数据。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  AnimationAssetMeta
    : public ModelBase
{
public:
    AnimationAssetMeta();
    virtual ~AnimationAssetMeta();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AnimationAssetMeta members

    /// <summary>
    /// 数字人模型风格ID。
    /// </summary>

    std::string getStyleId() const;
    bool styleIdIsSet() const;
    void unsetstyleId();
    void setStyleId(const std::string& value);

    /// <summary>
    /// 动作动画时长。
    /// </summary>

    float getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(float value);

    /// <summary>
    /// 动作是否需要自动解析。
    /// </summary>

    bool isAutoAnalysis() const;
    bool autoAnalysisIsSet() const;
    void unsetautoAnalysis();
    void setAutoAnalysis(bool value);

    /// <summary>
    /// 语音延迟播放时长。  单位秒。  使用场景举例：入场动画3秒，voice_delay设置成4秒，则语音从入场动画开始后第4秒开始播放。
    /// </summary>

    float getVoiceDelay() const;
    bool voiceDelayIsSet() const;
    void unsetvoiceDelay();
    void setVoiceDelay(float value);

    /// <summary>
    /// 动画插入位置限制。 * ONLY_BEGINNING：视频制作时，动画只允许出现在起始位置。 * ONLY_END：视频制作时，动画只允许出现在结束位置。
    /// </summary>

    std::string getAnimationInsertRestriction() const;
    bool animationInsertRestrictionIsSet() const;
    void unsetanimationInsertRestriction();
    void setAnimationInsertRestriction(const std::string& value);


protected:
    std::string styleId_;
    bool styleIdIsSet_;
    float duration_;
    bool durationIsSet_;
    bool autoAnalysis_;
    bool autoAnalysisIsSet_;
    float voiceDelay_;
    bool voiceDelayIsSet_;
    std::string animationInsertRestriction_;
    bool animationInsertRestrictionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AnimationAssetMeta_H_
