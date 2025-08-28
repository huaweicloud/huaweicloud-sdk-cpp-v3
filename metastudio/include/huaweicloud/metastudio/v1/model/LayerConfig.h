
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LayerConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LayerConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/LayerSizeConfig.h>
#include <huaweicloud/metastudio/v1/model/LayerPositionConfig.h>
#include <huaweicloud/metastudio/v1/model/ImageLayerConfig.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/TextLayerConfig.h>
#include <huaweicloud/metastudio/v1/model/LayerRotationConfig.h>
#include <huaweicloud/metastudio/v1/model/VideoLayerConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 图层配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  LayerConfig
    : public ModelBase
{
public:
    LayerConfig();
    virtual ~LayerConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LayerConfig members

    /// <summary>
    /// **参数解释**： 图层类型。 **约束限制**： 不涉及。 **取值范围**： * HUMAN:  人物图层 * IMAGE： 素材图片图层 * VIDEO： 素材视频图层 * TEXT: 素材文字图层  **默认取值**： 不涉及
    /// </summary>

    std::string getLayerType() const;
    bool layerTypeIsSet() const;
    void unsetlayerType();
    void setLayerType(const std::string& value);

    /// <summary>
    /// **参数解释**： 图层所需资产的资产id，外部资产信息无需填写。 **约束限制**： 不涉及。 **取值范围**： 字符长度0-64位 **默认取值**： 不涉及
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// **参数解释**： 多场景素材编组。同一group_id的素材，在应用全局时共享位置信息。 **约束限制**： 不涉及。 **取值范围**： 字符长度0-64位 **默认取值**： 不涉及
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// **参数解释**： 播放到对应的段落，显示对应的图层。该字段向前兼容，可以不填，字段可选。 只支持直播业务。 **约束限制**： 段落sequence_no。 **默认取值**： 不涉及。
    /// </summary>

    int32_t getSequenceNo() const;
    bool sequenceNoIsSet() const;
    void unsetsequenceNo();
    void setSequenceNo(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    LayerPositionConfig getPosition() const;
    bool positionIsSet() const;
    void unsetposition();
    void setPosition(const LayerPositionConfig& value);

    /// <summary>
    /// 
    /// </summary>

    LayerSizeConfig getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(const LayerSizeConfig& value);

    /// <summary>
    /// 
    /// </summary>

    LayerRotationConfig getRotation() const;
    bool rotationIsSet() const;
    void unsetrotation();
    void setRotation(const LayerRotationConfig& value);

    /// <summary>
    /// 
    /// </summary>

    ImageLayerConfig getImageConfig() const;
    bool imageConfigIsSet() const;
    void unsetimageConfig();
    void setImageConfig(const ImageLayerConfig& value);

    /// <summary>
    /// 
    /// </summary>

    VideoLayerConfig getVideoConfig() const;
    bool videoConfigIsSet() const;
    void unsetvideoConfig();
    void setVideoConfig(const VideoLayerConfig& value);

    /// <summary>
    /// 
    /// </summary>

    TextLayerConfig getTextConfig() const;
    bool textConfigIsSet() const;
    void unsettextConfig();
    void setTextConfig(const TextLayerConfig& value);


protected:
    std::string layerType_;
    bool layerTypeIsSet_;
    std::string assetId_;
    bool assetIdIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    int32_t sequenceNo_;
    bool sequenceNoIsSet_;
    LayerPositionConfig position_;
    bool positionIsSet_;
    LayerSizeConfig size_;
    bool sizeIsSet_;
    LayerRotationConfig rotation_;
    bool rotationIsSet_;
    ImageLayerConfig imageConfig_;
    bool imageConfigIsSet_;
    VideoLayerConfig videoConfig_;
    bool videoConfigIsSet_;
    TextLayerConfig textConfig_;
    bool textConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LayerConfig_H_
