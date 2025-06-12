
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LayerPositionConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LayerPositionConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 图层位置配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  LayerPositionConfig
    : public ModelBase
{
public:
    LayerPositionConfig();
    virtual ~LayerPositionConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LayerPositionConfig members

    /// <summary>
    /// **参数解释**： 图层左上角像素点的X轴位置值（画布左上角坐标是0x0）。 横屏（16:9）画布像素为1920x1080；竖屏（9:16）画布像素为1080x1920。  **约束限制**： 该值为相对于画布的像素值，仅表示布局位置关系，与输出画面分辨率无关。
    /// </summary>

    int32_t getDx() const;
    bool dxIsSet() const;
    void unsetdx();
    void setDx(int32_t value);

    /// <summary>
    /// **参数解释**： 图层图片左上角像素点的Y轴位置值（画布左上角坐标是0x0）。 横屏（16:9）画布像素为1920x1080；竖屏（9:16）画布像素为1080x1920。  **约束限制**： 该值为相对于画布的像素值，仅表示布局位置关系，与输出画面分辨率无关。
    /// </summary>

    int32_t getDy() const;
    bool dyIsSet() const;
    void unsetdy();
    void setDy(int32_t value);

    /// <summary>
    /// **参数解释**： 图片、视频、人物图的层顺序。 &gt; 图层顺序为从1开始的整数，底层图层顺序是1，往上依次增加。  **约束限制**： 如果出现重复则重复图层叠加关系随机。
    /// </summary>

    int32_t getLayerIndex() const;
    bool layerIndexIsSet() const;
    void unsetlayerIndex();
    void setLayerIndex(int32_t value);


protected:
    int32_t dx_;
    bool dxIsSet_;
    int32_t dy_;
    bool dyIsSet_;
    int32_t layerIndex_;
    bool layerIndexIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LayerPositionConfig_H_
