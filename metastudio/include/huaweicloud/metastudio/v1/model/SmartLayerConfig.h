
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartLayerConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartLayerConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/LayerSizeConfig.h>
#include <huaweicloud/metastudio/v1/model/SmartImageLayerConfig.h>
#include <huaweicloud/metastudio/v1/model/LayerPositionConfig.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/SmartTextLayerConfig.h>
#include <huaweicloud/metastudio/v1/model/SmartVideoLayerConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 智能图层配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SmartLayerConfig
    : public ModelBase
{
public:
    SmartLayerConfig();
    virtual ~SmartLayerConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SmartLayerConfig members

    /// <summary>
    /// 图层类型。 - IMAGE： 素材图片图层 - VIDEO： 素材视频图层 - TEXT: 文本图层
    /// </summary>

    std::string getLayerType() const;
    bool layerTypeIsSet() const;
    void unsetlayerType();
    void setLayerType(const std::string& value);

    /// <summary>
    /// 图层所需资产的资产id，外部资产信息无需填写
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

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

    SmartImageLayerConfig getImageConfig() const;
    bool imageConfigIsSet() const;
    void unsetimageConfig();
    void setImageConfig(const SmartImageLayerConfig& value);

    /// <summary>
    /// 
    /// </summary>

    SmartVideoLayerConfig getVideoConfig() const;
    bool videoConfigIsSet() const;
    void unsetvideoConfig();
    void setVideoConfig(const SmartVideoLayerConfig& value);

    /// <summary>
    /// 
    /// </summary>

    SmartTextLayerConfig getTextConfig() const;
    bool textConfigIsSet() const;
    void unsettextConfig();
    void setTextConfig(const SmartTextLayerConfig& value);


protected:
    std::string layerType_;
    bool layerTypeIsSet_;
    std::string assetId_;
    bool assetIdIsSet_;
    LayerPositionConfig position_;
    bool positionIsSet_;
    LayerSizeConfig size_;
    bool sizeIsSet_;
    SmartImageLayerConfig imageConfig_;
    bool imageConfigIsSet_;
    SmartVideoLayerConfig videoConfig_;
    bool videoConfigIsSet_;
    SmartTextLayerConfig textConfig_;
    bool textConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartLayerConfig_H_
