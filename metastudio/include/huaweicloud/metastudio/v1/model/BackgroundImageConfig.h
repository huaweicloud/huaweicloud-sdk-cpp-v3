
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BackgroundImageConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BackgroundImageConfig_H_


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
/// 背景图片大小及位置配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  BackgroundImageConfig
    : public ModelBase
{
public:
    BackgroundImageConfig();
    virtual ~BackgroundImageConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackgroundImageConfig members

    /// <summary>
    /// **参数解释**： 背景图片左上角像素点的X轴位置值（画布左上角坐标是0x0）。 横屏（16:9）画布像素为1920x1080；竖屏（9:16）画布像素为1080x1920。  **约束限制**： 需要保证背景图片要铺满画布。即dx &lt;&#x3D; 0，并且横屏时dx + width &gt;&#x3D;1920，竖屏时dx + width &gt;&#x3D;1080。
    /// </summary>

    int32_t getDx() const;
    bool dxIsSet() const;
    void unsetdx();
    void setDx(int32_t value);

    /// <summary>
    /// **参数解释**： 背景图片左上角像素点的Y轴位置值（画布左上角坐标是0x0）。 横屏（16:9）画布像素为1920x1080；竖屏（9:16）画布像素为1080x1920。  **约束限制**：  需要保证背景图片要铺满画布。即dy &lt;&#x3D; 0，并且横屏时dy + height &gt;&#x3D;1080，竖屏时dy + height &gt;&#x3D;1920。
    /// </summary>

    int32_t getDy() const;
    bool dyIsSet() const;
    void unsetdy();
    void setDy(int32_t value);

    /// <summary>
    /// **参数解释**： 背景图片宽度像素值（相对画布大小）。 横屏（16:9）画布像素为1920x1080；竖屏（9:16）画布像素为1080x1920。  **约束限制**： 需要保证背景图片要铺满画布。即width &gt; 1080，并且横屏时dx + width &gt;&#x3D;1920，竖屏时dx + width &gt;&#x3D;1080。
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// **参数解释**： 背景图片高度像素值（相对画布大小）。 横屏（16:9）画布像素为1920x1080；竖屏（9:16）画布像素为1080x1920。  **约束限制**： 需要保证背景图片要铺满画布。height&gt; 1080，并且横屏时dy + height &gt;&#x3D;1080，竖屏时dy + height &gt;&#x3D;1920。
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);


protected:
    int32_t dx_;
    bool dxIsSet_;
    int32_t dy_;
    bool dyIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BackgroundImageConfig_H_
